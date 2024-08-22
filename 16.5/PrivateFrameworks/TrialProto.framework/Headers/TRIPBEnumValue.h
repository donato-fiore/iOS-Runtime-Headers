// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBENUMVALUE_H
#define TRIPBENUMVALUE_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBEnumValue : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;


+(id)descriptor;


@end


#endif