// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSOPERATIONQUEUE_H
#define TPSOPERATIONQUEUE_H

@class NSOperationQueue;


#import "TPSOperationQueueCountObserver.h"

@interface TPSOperationQueue : NSOperationQueue

@property (copy, nonatomic) id *completionBlock;
@property (retain, nonatomic) TPSOperationQueueCountObserver *observer; // ivar: _observer


-(void)addOperationWithAsyncBlock:(id)arg0 ;


@end


#endif