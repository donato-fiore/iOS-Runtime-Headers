// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBKASYNCHRONOUSTASK_H
#define SBKASYNCHRONOUSTASK_H

@class NSString, NSMutableArray, NSError, MSVTaskAssertion;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SBKAsynchronousTask : NSObject {
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _taskInvalidationDisabled;
    CGFloat _timeout;
}


@property (nonatomic) int cancelType; // ivar: _cancelType
@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) id *expirationHandler; // ivar: _expirationHandler
@property (copy, nonatomic) id *finishedHandler; // ivar: _finishedHandler
@property (retain, nonatomic) id *result; // ivar: _result
@property (retain, nonatomic) MSVTaskAssertion *taskAssertion; // ivar: _taskAssertion


-(id)debugDescription;
-(id)description;
-(id)initWithHandlerQueue:(id)arg0 timeout:(CGFloat)arg1 debugDescription:(id)arg2 ;
-(void)_invalidateAssertion:(BOOL)arg0 ;
-(void)_invalidateTimer;
-(void)_onQueueFireExpirationHandlerIfNecesary;
-(void)addTaskCompletionBlock:(id)arg0 ;
-(void)beginTaskOperation;
-(void)dealloc;
-(void)endTaskOperation;
-(void)finishTaskOperationWithResult:(id)arg0 error:(id)arg1 ;
-(void)invalidate;
-(void)invokeTaskCompletionBlocksWithBlock:(id)arg0 ;


@end


#endif