// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKREACHABILITYMONITOR_H
#define WLKREACHABILITYMONITOR_H


#import <Foundation/Foundation.h>


@interface WLKReachabilityMonitor : NSObject

@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isWifiEnabled;


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)_reachabilityDidChange:(id)arg0 ;
-(void)_wifiDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif