// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTEPHEMERALFILTER_H
#define TSTEPHEMERALFILTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSTEphemeralFilter : NSObject {
    NSArray *_rules;
}


@property (readonly, nonatomic) TSUModelColumnIndex baseColumnIndex; // ivar: _baseColumnIndex
@property (readonly, nonatomic) NSUInteger filterIndex; // ivar: _filterIndex
@property (readonly, nonatomic) NSUInteger ruleCount;


+(id)filterWithIndex:(NSUInteger)arg0 baseColumnIndex:(struct TSUModelColumnIndex )arg1 rules:(id)arg2 ;
-(id)description;
-(id)filterByAddingRule:(id)arg0 ;
-(id)filterByClearingRules;
-(id)filterByRemovingRuleAtIndex:(NSUInteger)arg0 ;
-(id)filterWithRule:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)initWithIndex:(NSUInteger)arg0 baseColumnIndex:(struct TSUModelColumnIndex )arg1 rules:(id)arg2 ;
-(id)ruleAtIndex:(NSUInteger)arg0 ;
-(void)enumerateRulesUsingBlock:(id)arg0 ;


@end


#endif