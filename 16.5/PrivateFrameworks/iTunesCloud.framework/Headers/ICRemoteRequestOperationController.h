// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICREMOTEREQUESTOPERATIONCONTROLLER_H
#define ICREMOTEREQUESTOPERATIONCONTROLLER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ICRemoteRequestOperationController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _numberOfActiveRequests;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_source> *_clientConnectionInvalidationTimer;
}




+(id)sharedRemoteRequestOperationController;
-(id)_clientConnection;
-(id)_init;
-(void)_cancelClientConnectionInvalidationTimer;
-(void)_clientConnectionInvalidationTimerDidExpire;
-(void)_didEndExecutingRemoteRequestOperation;
-(void)_invalidateClientConnection;
-(void)_scheduleInvalidationOfClientConnection;
-(void)_willBeginExecutingRemoteRequestOperation;
-(void)performRemoteRequestOperationWithExecutionContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif