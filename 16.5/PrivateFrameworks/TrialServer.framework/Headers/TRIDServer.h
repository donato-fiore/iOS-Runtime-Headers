// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIDSERVER_H
#define TRIDSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"
#import "TRITaskQueue.h"
#import "TRIXPCServerContextPromise.h"
#import "TRIXPCActivityManager.h"

@interface TRIDServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCServerContextPromise *_promise;
    TRIXPCActivityManager *_xpcActivityManager;
}


@property (readonly, nonatomic) BOOL isRunning; // ivar: _isRunning


+(id)_triPath;
+(id)sharedServer;
-(NSUInteger)_getDiskUsageInBytes;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_asyncStartWithMetrics:(id)arg0 ;
-(void)_dispatchWhenUnlocked:(id)arg0 ;
-(void)_excludeUserLevelTrialFromTimeMachineBackups;
-(void)_logMetrics:(id)arg0 stopwatch:(id)arg1 ;
-(void)_registerSetupAssistantFetchActivityOnce;
-(void)_registerXpcStreamEventHandler;
-(void)_updateSystemInfo;
-(void)start;


@end


#endif