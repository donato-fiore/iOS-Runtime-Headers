// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVBARRIEROPERATIONQUEUE_H
#define SSVBARRIEROPERATIONQUEUE_H

@class NSOperationQueue;



@interface SSVBarrierOperationQueue : NSOperationQueue



-(void)addBarrierOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)addOperationWithBlock:(id)arg0 ;
-(void)addOperations:(id)arg0 waitUntilFinished:(BOOL)arg1 ;


@end


#endif