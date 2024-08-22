// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVVIBRANCYCONTAINERVIEW_H
#define _TVVIBRANCYCONTAINERVIEW_H

@class TVVisualEffectView, UIView;



@interface _TVVibrancyContainerView : TVVisualEffectView

@property (readonly, weak, nonatomic) UIView *containedView; // ivar: _containedView


-(id)initWithEffect:(id)arg0 containingView:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif