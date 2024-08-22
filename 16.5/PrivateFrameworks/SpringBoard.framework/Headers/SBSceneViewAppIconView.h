// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENEVIEWAPPICONVIEW_H
#define SBSCENEVIEWAPPICONVIEW_H

@class UIView, SBIconImageView, UILabel, PLPlatterView;



@interface SBSceneViewAppIconView : UIView

@property (readonly, nonatomic) SBIconImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (readonly, nonatomic) PLPlatterView *shadowView; // ivar: _shadowView


-(id)initWithIcon:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif