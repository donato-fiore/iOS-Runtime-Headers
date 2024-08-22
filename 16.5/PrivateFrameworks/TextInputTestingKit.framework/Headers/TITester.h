// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITESTER_H
#define TITESTER_H

@class NSArray;
@protocol TITestHarness;

#import <Foundation/Foundation.h>

#import "TIReporter.h"

@interface TITester : NSObject

@property (retain, nonatomic) TIReporter *reporter; // ivar: _reporter
@property (retain, nonatomic) NSObject<TITestHarness> *testHarness; // ivar: testHarness
@property (readonly, nonatomic) NSArray *tests; // ivar: _tests


+(id)stringByReplacingCurlyQuotesWithStraightQuotes:(id)arg0 ;
+(void)runTestCasesForSource:(id)arg0 options:(id)arg1 reporter:(id)arg2 reportObserver:(id)arg3 ;
+(void)runWithTests:(id)arg0 inRange:(struct _NSRange )arg1 testHarness:(id)arg2 reporter:(id)arg3 numTrials:(NSUInteger)arg4 reportObserver:(id)arg5 ;
-(id)initWithTests:(id)arg0 ;
-(void)runTestsInRange:(struct _NSRange )arg0 trialID:(NSUInteger)arg1 ;


@end


#endif