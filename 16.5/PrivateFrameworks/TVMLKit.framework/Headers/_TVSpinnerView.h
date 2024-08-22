// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVSPINNERVIEW_H
#define _TVSPINNERVIEW_H

@class UIView, UIColor;



@interface _TVSpinnerView : UIView {
    BOOL _shouldResumeAnimation;
    UIView *_spinnerContainer;
    UIView *_spinnerOverlayContainer;
}


@property (readonly, nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, nonatomic) UIColor *color; // ivar: _color


-(id)_spinnerImageForTraitCollection:(id)arg0 size:(struct CGSize )arg1 alpha:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 color:(id)arg1 ;
-(void)_addAnimations;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_removeAnimations;
-(void)_updateImagesForTraitCollection:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)startAnimating;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif