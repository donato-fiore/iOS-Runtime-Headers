// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18LIGHTHOUSE_RUNTIME14ASYNCOPERATION_H
#define _TTC18LIGHTHOUSE_RUNTIME14ASYNCOPERATION_H

@class NSOperation;



@interface _TtC18lighthouse_runtime14AsyncOperation : NSOperation {
    ? lockQueue;
    ? action;
    ? task;
    ? error;
    ? _isExecuting;
    ? _isFinished;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)main;
-(void)start;


@end


#endif