// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICUSTOMPREDICATE_H
#define TRICUSTOMPREDICATE_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"

@interface TRICustomPredicate : TRIPBMessage

@property (nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasKeyType;
@property (nonatomic) BOOL hasOperation;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) int keyType;
@property (retain, nonatomic) NSMutableArray *operandArray;
@property (readonly, nonatomic) NSUInteger operandArray_Count;
@property (nonatomic) int operation;


+(id)descriptor;


@end


#endif