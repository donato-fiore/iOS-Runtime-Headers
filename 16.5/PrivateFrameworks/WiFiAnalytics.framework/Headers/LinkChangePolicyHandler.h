// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LINKCHANGEPOLICYHANDLER_H
#define LINKCHANGEPOLICYHANDLER_H


#import <Foundation/Foundation.h>

#import "AnalyticsStoreMOHandler.h"

@interface LinkChangePolicyHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *storeMOHandler; // ivar: _storeMOHandler


-(BOOL)checkIpConfigChangeAndInvalidateScope:(id)arg0 bssid:(id)arg1 ipAddr:(int)arg2 routerIp:(int)arg3 routerMAC:(id)arg4 ;
-(id)initWithAnalyticsStore:(id)arg0 ;
-(void)checkAndApplyColocatedNetworkScope:(id)arg0 bssid:(id)arg1 ipAddr:(int)arg2 routerIp:(int)arg3 routerMAC:(id)arg4 ;
-(void)pruneNetworksFailingBssidPatternAndIpConfigChangeChecks:(id)arg0 ipAddr:(int)arg1 routerIp:(int)arg2 routerMAC:(id)arg3 ;
-(void)pruneNetworksNotInRangeOf:(id)arg0 networks:(id)arg1 ;
-(void)pruneNetworksWithMoreThanOneBssidFromSet:(id)arg0 ;
-(void)setLinkChange:(BOOL)arg0 ssid:(id)arg1 bssid:(id)arg2 reason:(NSUInteger)arg3 subReason:(NSUInteger)arg4 rssi:(NSInteger)arg5 ;


@end


#endif