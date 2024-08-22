// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSASYNCOPERATION_H
#define TPSASYNCOPERATION_H

@class NSOperation, NSError;



@interface TPSAsyncOperation : NSOperation {
    os_unfair_lock_s _lock;
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}


@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) id *preCompletionBlock; // ivar: _preCompletionBlock


-(BOOL)isAsynchronous;
-(BOOL)isCancelled;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)cancel;
-(void)finishWithError:(id)arg0 ;
-(void)lockExec:(id)arg0 ;
-(void)start;


@end


#endif