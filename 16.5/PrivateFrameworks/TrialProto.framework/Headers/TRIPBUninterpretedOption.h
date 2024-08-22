// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPBUNINTERPRETEDOPTION_H
#define TRIPBUNINTERPRETEDOPTION_H

@class NSString, NSMutableArray, NSData;


#import "TRIPBMessage.h"

@interface TRIPBUninterpretedOption : TRIPBMessage

@property (copy, nonatomic) NSString *aggregateValue;
@property (nonatomic) CGFloat doubleValue;
@property (nonatomic) BOOL hasAggregateValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIdentifierValue;
@property (nonatomic) BOOL hasNegativeIntValue;
@property (nonatomic) BOOL hasPositiveIntValue;
@property (nonatomic) BOOL hasStringValue;
@property (copy, nonatomic) NSString *identifierValue;
@property (retain, nonatomic) NSMutableArray *nameArray;
@property (readonly, nonatomic) NSUInteger nameArray_Count;
@property (nonatomic) NSInteger negativeIntValue;
@property (nonatomic) NSUInteger positiveIntValue;
@property (copy, nonatomic) NSData *stringValue;


+(id)descriptor;


@end


#endif