// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGCIRCLECHECKVIEW_H
#define WGCIRCLECHECKVIEW_H

@class UIView, UIImageView;


#import "WGCheckView.h"

@interface WGCircleCheckView : UIView

@property (retain, nonatomic, getter=_checkView) WGCheckView *checkView; // ivar: _checkView
@property (nonatomic, getter=isChecked) BOOL checked;
@property (retain, nonatomic, getter=_circleView) UIImageView *circleView; // ivar: _circleView


-(BOOL)_isFrozen;
-(id)_configureCircleViewIfNecessary;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureCheckViewIfNecessary;
-(void)_setFrozen:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif