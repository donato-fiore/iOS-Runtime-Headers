// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNSLIDENODEBLOCKOPERATION_H
#define KNSLIDENODEBLOCKOPERATION_H

@class NSBlockOperation;


#import "KNSlideNode.h"

@interface KNSlideNodeBlockOperation : NSBlockOperation

@property (readonly, nonatomic) KNSlideNode *slideNode; // ivar: _slideNode
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithSlideNode:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif