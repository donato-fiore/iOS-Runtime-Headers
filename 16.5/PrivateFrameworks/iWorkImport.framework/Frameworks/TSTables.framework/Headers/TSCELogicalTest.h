// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELOGICALTEST_H
#define TSCELOGICALTEST_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "TSCERegexMatcher.h"

@interface TSCELogicalTest : NSObject {
    int _operation;
    TSCENumberValue _value;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) *void evaluationContext; // ivar: _evaluationContext
@property (retain, nonatomic) TSCERegexMatcher *matcher; // ivar: _matcher
@property (retain, nonatomic) NSString *string; // ivar: _string


+(id)logicalTestWithCriterion:(struct TSCEValue )arg0 functionSpec:(id)arg1 evaluationContext:(*void)arg2 ;
-(BOOL)compare:(struct TSCEValue )arg0 withContext:(*void)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)cost;
-(id)description;
-(id)initWithCriterion:(struct TSCEValue )arg0 functionSpec:(id)arg1 evaluationContext:(*void)arg2 ;
-(int)criteriaParser:(id)arg0 ;


@end


#endif