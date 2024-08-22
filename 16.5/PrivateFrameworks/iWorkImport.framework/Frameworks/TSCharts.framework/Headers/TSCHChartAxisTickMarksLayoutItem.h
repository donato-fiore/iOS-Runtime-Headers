// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTAXISTICKMARKSLAYOUTITEM_H
#define TSCHCHARTAXISTICKMARKSLAYOUTITEM_H



#import "TSCHChartLayoutItem.h"

@interface TSCHChartAxisTickMarksLayoutItem : TSCHChartLayoutItem

@property (readonly, nonatomic) float majorTickmarkLength;
@property (readonly, nonatomic) float minorTickmarkLength;


-(id)initWithParent:(id)arg0 ;
-(int)location;
-(struct CGAffineTransform )transformForRenderingOutElementSize:(struct CGSize *)arg0 outClipRect:(struct CGRect *)arg1 ;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )p_effectiveRootedLayoutRect;
-(struct CGSize )calcMinSize;


@end


#endif