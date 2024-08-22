// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPSTATEMONITOR_H
#define APPSTATEMONITOR_H

@class NSString, RBSProcessMonitor, RBSProcessHandle;
@protocol AppStateMonitorProtocol;

#import <Foundation/Foundation.h>


@interface AppStateMonitor : NSObject <AppStateMonitorProtocol>

 {
    os_unfair_lock_s _lock;
    NSString *_processNameInternal;
    RBSProcessMonitor *_processMonitor;
    RBSProcessHandle *_processHandle;
    optional<UnifiedAppState> _latestState;
}


@property (readonly) int currentAppState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) int monitoredPID; // ivar: _monitoredPID
@property (readonly, copy) NSString *monitoredProcessName; // ivar: _monitoredProcessName
@property (readonly) Class superclass;


-(id)initWithPID:(int)arg0 ;
-(void)_process:(id)arg0 didTerminate:(id)arg1 ;
-(void)_process:(id)arg0 didUpdateState:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif