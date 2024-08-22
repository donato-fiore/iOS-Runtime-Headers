// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCALINGFLIPVIEW_H
#define SUSCALINGFLIPVIEW_H

@class UIView;
@protocol SUScalingFlipViewDelegate;



@interface SUScalingFlipView : UIView {
    UIView *_backView;
    CGRect _fromFrame;
    UIView *_frontView;
    CGRect _toFrame;
}


@property (nonatomic) NSObject<SUScalingFlipViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) CGFloat duration; // ivar: _duration


-(id)_backLayerAnimation;
-(id)_fixedAnimationForAnimation:(id)arg0 ;
-(id)_frontLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
-(id)_transformAnimationWithStart:(struct CATransform3D )arg0 middle:(struct CATransform3D )arg1 end:(struct CATransform3D )arg2 ;
-(id)initWithFrontView:(id)arg0 backView:(id)arg1 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)performFlip;


@end


#endif