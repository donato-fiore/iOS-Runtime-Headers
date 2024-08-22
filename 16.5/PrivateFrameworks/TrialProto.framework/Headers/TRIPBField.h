// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBFIELD_H
#define TRIPBFIELD_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBField : TRIPBMessage

@property (nonatomic) int cardinality;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *jsonName;
@property (nonatomic) int kind;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (nonatomic) int oneofIndex;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;
@property (nonatomic) BOOL packed;
@property (copy, nonatomic) NSString *typeURL;


+(id)descriptor;


@end


#endif