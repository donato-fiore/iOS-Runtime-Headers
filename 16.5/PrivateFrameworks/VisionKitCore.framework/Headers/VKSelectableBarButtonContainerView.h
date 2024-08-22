// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKSELECTABLEBARBUTTONCONTAINERVIEW_H
#define VKSELECTABLEBARBUTTONCONTAINERVIEW_H

@class UIView, UIButton, UIImage;



@interface VKSelectableBarButtonContainerView : UIView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) CGFloat compactPadding; // ivar: _compactPadding
@property (nonatomic) CGFloat cornerRadiusRatio; // ivar: _cornerRadiusRatio
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (nonatomic) BOOL selected; // ivar: _selected
@property (nonatomic) CGFloat width; // ivar: _width


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateForMiniBarState:(BOOL)arg0 ;


@end


#endif