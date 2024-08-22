// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIHISTOGRAM_H
#define TIHISTOGRAM_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TIHistogram : NSObject {
    NSMutableDictionary *_counts;
    NSInteger _totalCount;
}




-(NSInteger)countForNumber:(id)arg0 ;
-(NSInteger)totalCount;
-(id)descriptionOfCumulativeDistributionFunction;
-(id)init;
-(id)sortedNumbers;
-(void)addNumber:(id)arg0 ;
-(void)enumerateCumulativeDistributionFunctionUsingBlock:(id)arg0 ;
-(void)enumerateNumbersUsingBlock:(id)arg0 ;


@end


#endif