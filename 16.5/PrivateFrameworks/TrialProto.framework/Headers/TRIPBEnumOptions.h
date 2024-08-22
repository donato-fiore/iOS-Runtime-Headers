// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBENUMOPTIONS_H
#define TRIPBENUMOPTIONS_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBEnumOptions : TRIPBMessage

@property (nonatomic) BOOL allowAlias;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasAllowAlias;
@property (nonatomic) BOOL hasDeprecated;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) NSUInteger uninterpretedOptionArray_Count;


+(id)descriptor;


@end


#endif