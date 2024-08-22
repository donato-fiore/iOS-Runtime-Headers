// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBFIELDMASK_H
#define TRIPBFIELDMASK_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBFieldMask : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *pathsArray;
@property (readonly, nonatomic) NSUInteger pathsArray_Count;


+(id)descriptor;


@end


#endif