// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSOPERATIONQUEUECOUNTOBSERVER_H
#define TPSOPERATIONQUEUECOUNTOBSERVER_H


#import <Foundation/Foundation.h>

#import "TPSOperationQueue.h"

@interface TPSOperationQueueCountObserver : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) NSUInteger lastOperationCount; // ivar: _lastOperationCount
@property (weak, nonatomic) TPSOperationQueue *operationQueue; // ivar: _operationQueue


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif