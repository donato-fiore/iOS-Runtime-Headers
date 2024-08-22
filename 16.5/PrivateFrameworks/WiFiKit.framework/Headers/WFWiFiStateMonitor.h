// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWIFISTATEMONITOR_H
#define WFWIFISTATEMONITOR_H

@class NSString, NSRunLoop, NSThread;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFClient.h"
#import "WFNetworkScanRecord.h"
#import "WFLinkQuality.h"

@interface WFWiFiStateMonitor : NSObject

@property BOOL associatedToCarPlayOnly; // ivar: _associatedToCarPlayOnly
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property NSRunLoop *callbackRunLoop; // ivar: _callbackRunLoop
@property (retain, nonatomic) NSThread *callbackThread; // ivar: _callbackThread
@property (retain, nonatomic) WFClient *client; // ivar: _client
@property (retain, nonatomic) WFNetworkScanRecord *currentNetwork; // ivar: _currentNetwork
@property (copy) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (copy, nonatomic) WFLinkQuality *linkQuality; // ivar: _linkQuality
@property BOOL monitoring; // ivar: _monitoring
@property (nonatomic) NSInteger state; // ivar: _state


-(id)description;
-(id)init;
-(id)initWithClient:(id)arg0 handler:(id)arg1 ;
-(void)_asyncGetCurrentNetwork:(id)arg0 ;
-(void)_autoJoinStateChanged:(id)arg0 ;
-(void)_carPlayNetworkTypeDidChange:(id)arg0 ;
-(void)_clientConnectionRestarted:(id)arg0 ;
-(void)_hostAPStateChanged:(id)arg0 ;
-(void)_interfaceBecameAvailable:(id)arg0 ;
-(void)_linkDidChange:(id)arg0 ;
-(void)_linkQualityDidChange:(id)arg0 ;
-(void)_notifyStateChanged:(NSInteger)arg0 newState:(NSInteger)arg1 ;
-(void)_outrankStateDidChange:(id)arg0 ;
-(void)_powerStateDidChange:(id)arg0 ;
-(void)_registerInterfaceObserversForInterface:(id)arg0 ;
-(void)_runManagerCallbackThread;
-(void)_spawnManagerCallbackThread;
-(void)_updateState;
-(void)_updateState:(id)arg0 ;
-(void)dealloc;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif