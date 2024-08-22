// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKRECOGNIZEDITEMFRAMEPROCESSORRESULT_H
#define VKRECOGNIZEDITEMFRAMEPROCESSORRESULT_H

@class NSArray;


#import "VKFrameProcessorResult.h"

@interface VKRecognizedItemFrameProcessorResult : VKFrameProcessorResult

@property (copy, nonatomic) NSArray *addedItems; // ivar: _addedItems
@property (copy, nonatomic) NSArray *allItems; // ivar: _allItems
@property (copy, nonatomic) NSArray *removedItems; // ivar: _removedItems
@property (copy, nonatomic) NSArray *updatedItems; // ivar: _updatedItems


-(id)init;


@end


#endif