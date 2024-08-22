// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTSERIESAXISSTORAGE_H
#define TSCHCHARTSERIESAXISSTORAGE_H


#import <Foundation/Foundation.h>

#import "TSCHChartGridAdapter.h"
#import "TSCHChartAxisID.h"

@interface TSCHChartSeriesAxisStorage : NSObject

@property (retain, nonatomic) TSCHChartGridAdapter *adapter; // ivar: _adapter
@property (retain, nonatomic) TSCHChartAxisID *axisID; // ivar: _axisID
@property (readonly, nonatomic) NSUInteger numberOfValues;


-(id)valueAtIndex:(NSUInteger)arg0 multiDataSetIndex:(NSUInteger)arg1 ;
-(void)setValue:(id)arg0 atIndex:(NSUInteger)arg1 multiDataSetIndex:(NSUInteger)arg2 ;


@end


#endif