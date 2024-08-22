// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBFILEDESCRIPTORSET_H
#define TRIPBFILEDESCRIPTORSET_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBFileDescriptorSet : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *fileArray;
@property (readonly, nonatomic) NSUInteger fileArray_Count;


+(id)descriptor;


@end


#endif