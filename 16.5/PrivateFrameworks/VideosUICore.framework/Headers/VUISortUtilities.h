// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISORTUTILITIES_H
#define VUISORTUTILITIES_H


#import <Foundation/Foundation.h>


@interface VUISortUtilities : NSObject



+(NSInteger)comparisonResultForObject1:(id)arg0 object2:(id)arg1 withComparators:(id)arg2 ;
+(id)ascendingDateSortComparatorWithBlock:(SEL)arg0 ;
+(id)ascendingTitleSortComparator:(SEL)arg0 ;
+(id)descendingDateSortComparatorWithBlock:(SEL)arg0 ;
+(id)descendingTitleSortComparator:(SEL)arg0 ;
+(id)titleSortComparatorWithAscending:(SEL)arg0 ;


@end


#endif