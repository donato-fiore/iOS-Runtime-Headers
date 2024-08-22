// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTTRIGGEREVENTMONITOR_H
#define VTTRIGGEREVENTMONITOR_H

@class NSXPCConnection, NSHashTable, NSString;
@protocol VTTriggerEventMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTTriggerEventMonitor : NSObject <VTTriggerEventMonitorDelegate>

 {
    int _notifyToken;
    int _notifyTokenLegacyTrigger;
    int _notifyTokenLegacyEarlyDetect;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedMonitor;
-(id)init;
-(void)_attemptConnection;
-(void)_attemptConnectionInQueue;
-(void)_earlyDetected;
-(void)_enableTriggerEventXPCNotification:(BOOL)arg0 ;
-(void)_invalidateConnection;
-(void)_voiceTriggered;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)earlyDetected;
-(void)removeObserver:(id)arg0 ;
-(void)voiceTriggered;


@end


#endif