// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWSYSTEMACTIVITYASSERTION_H
#define SWSYSTEMACTIVITYASSERTION_H

@class NSString, BSAbsoluteMachTimer;
@protocol SWSystemSleepObserver, BSInvalidatable, SWSystemActivityProviding;

#import <Foundation/Foundation.h>

#import "SWSystemSleepMonitor.h"

@interface SWSystemActivityAssertion : NSObject <SWSystemSleepObserver, BSInvalidatable>

 {
    NSString *_identifier;
    BSAbsoluteMachTimer *_lock_timeoutTimer;
    SWSystemSleepMonitor *_sleepMonitor;
    id<SWSystemActivityProviding> *_provider;
    unsigned int _lock_assertionID;
    os_unfair_lock_s _lock;
    id *_lock_acquisitionHandler;
    NSUInteger _lock_startKernelAPWakeTime;
    NSUInteger _lock_state;
    CGFloat _lock_timeout;
    BOOL _lock_wasSleepImminent;
    BOOL _lock_didFailToRevertPendingSleep;
    BOOL _lock_clientDidInvalidate;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 sleepMonitor:(id)arg1 systemActivityProvider:(id)arg2 ;
-(void)acquireWithTimeout:(CGFloat)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)systemSleepMonitorSleepRequestAborted:(id)arg0 ;
-(void)systemSleepMonitorWillWakeFromSleep:(id)arg0 ;


@end


#endif