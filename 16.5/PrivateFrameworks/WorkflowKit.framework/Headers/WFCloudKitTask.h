// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCLOUDKITTASK_H
#define WFCLOUDKITTASK_H


#import <Foundation/Foundation.h>


@interface WFCloudKitTask : NSObject

@property (copy, nonatomic) id *cancellationHandler; // ivar: _cancellationHandler
@property (getter=isCancelled) BOOL cancelled; // ivar: _cancelled


-(void)cancel;


@end


#endif