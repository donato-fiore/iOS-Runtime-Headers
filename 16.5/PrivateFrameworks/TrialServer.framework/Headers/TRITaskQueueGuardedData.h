// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRITASKQUEUEGUARDEDDATA_H
#define TRITASKQUEUEGUARDEDDATA_H

@class NSMutableDictionary, NSDate, NSMutableArray;
@protocol TRITaskPersisting;

#import <Foundation/Foundation.h>


@interface TRITaskQueueGuardedData : NSObject {
    BOOL stopRequested;
    id<TRITaskPersisting> *taskStore;
    NSMutableDictionary *queuedTasks;
    NSDate *nextScheduledTaskStartTime;
    NSUInteger currentCapabilities;
    NSMutableDictionary *xpcDescriptorToState;
    id *taskQueueCompletionBlock;
    NSMutableArray *_finalizeBlocks;
}






@end


#endif