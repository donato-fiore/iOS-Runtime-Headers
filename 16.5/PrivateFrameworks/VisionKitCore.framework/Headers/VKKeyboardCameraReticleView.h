// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKKEYBOARDCAMERARETICLEVIEW_H
#define VKKEYBOARDCAMERARETICLEVIEW_H

@class UIView, CEKSubjectIndicatorView;



@interface VKKeyboardCameraReticleView : UIView {
    CEKSubjectIndicatorView *_reticleView;
    UIView *_spotlightView;
    BOOL _hasSetReticleRect;
}


@property (nonatomic) CGFloat invertedShadowAlpha;
@property (nonatomic) CGFloat reticleAlpha;
@property (nonatomic) CGFloat spotlightBlurRadius;


+(void)animate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)collapseReticleRect;
-(void)layoutSubviews;
-(void)setReticleRect:(struct CGRect )arg0 angle:(CGFloat)arg1 ;


@end


#endif