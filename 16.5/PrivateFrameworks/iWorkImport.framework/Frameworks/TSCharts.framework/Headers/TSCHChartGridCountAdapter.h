// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTGRIDCOUNTADAPTER_H
#define TSCHCHARTGRIDCOUNTADAPTER_H



#import "TSCHChartGridAdapter.h"

@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter

@property (nonatomic) BOOL countFromOne; // ivar: _countFromOne
@property (nonatomic) NSUInteger indexFactor; // ivar: _indexFactor


-(NSUInteger)count;
-(id)initWithCount:(NSUInteger)arg0 ;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)setValue:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif