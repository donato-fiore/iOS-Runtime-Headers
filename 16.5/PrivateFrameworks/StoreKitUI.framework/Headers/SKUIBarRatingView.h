// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIBARRATINGVIEW_H
#define SKUIBARRATINGVIEW_H

@class UIView;



@interface SKUIBarRatingView : UIView

@property (nonatomic) NSInteger barRatingStyle; // ivar: _barRatingStyle
@property (nonatomic) NSInteger numberOfBars; // ivar: _numberOfBars
@property (nonatomic) float ratingValue; // ivar: _ratingValue


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif