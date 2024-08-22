// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMSDISCOVERYSESSIONPROXY_H
#define TVRMSDISCOVERYSESSIONPROXY_H

@class NSArray, NSString;
@protocol TVRMSDiscoverySession, TVRMSDiscoverySessionDelegate;


#import "TVRMSSessionProxy.h"
#import "TVRMSIDSClient.h"

@interface TVRMSDiscoverySessionProxy : TVRMSSessionProxy <TVRMSDiscoverySession>

 {
    TVRMSIDSClient *_idsClient;
    NSInteger _retryRate;
    BOOL _discovering;
    BOOL _wifiAvailable;
}


@property (readonly, nonatomic) NSArray *availableServices; // ivar: _availableServices
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRMSDiscoverySessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger discoveryTypes; // ivar: _discoveryTypes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable; // ivar: _networkAvailable
@property (retain, nonatomic) NSArray *pairedNetworkNames; // ivar: _pairedNetworkNames
@property (readonly) Class superclass;


-(id)init;
-(void)_availableServicesDidUpdateNotification:(id)arg0 ;
-(void)_companionAvailabilityDidChange:(id)arg0 ;
-(void)_handleSessionDidEndNotification:(id)arg0 ;
-(void)_updateNetworkAvailability;
-(void)_wifiAvailabilityDidChange:(id)arg0 ;
-(void)beginDiscovery;
-(void)dealloc;
-(void)endDiscovery;
-(void)heartbeatDidFail;


@end


#endif