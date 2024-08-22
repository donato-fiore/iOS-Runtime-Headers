// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIFACEIDCAMERAGLYPHVIEW_H
#define SBUIFACEIDCAMERAGLYPHVIEW_H

@class SBFTouchPassThroughView, UIView, _UILegibilityView, _UILegibilitySettings, CALayer;


#import "SBUILegibilityLabel.h"

@interface SBUIFaceIDCameraGlyphView : SBFTouchPassThroughView

@property (retain, nonatomic) UIView *arrowContainer; // ivar: _arrowContainer
@property (retain, nonatomic) _UILegibilityView *arrowHead; // ivar: _arrowHead
@property (retain, nonatomic) _UILegibilityView *arrowTail; // ivar: _arrowTail
@property (retain, nonatomic) SBUILegibilityLabel *callToActionLabel; // ivar: _callToActionLabel
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) UIView *localRotationView; // ivar: _localRotationView
@property (nonatomic) CGAffineTransform localTransform; // ivar: _localTransform
@property (retain, nonatomic) CALayer *maskContainerLayer; // ivar: _maskContainerLayer
@property (retain, nonatomic) CALayer *maskLeftLayer; // ivar: _maskLeftLayer
@property (retain, nonatomic) CALayer *maskRightLayer; // ivar: _maskRightLayer
@property (retain, nonatomic) CALayer *maskTopLayer; // ivar: _maskTopLayer
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_fadeComponenetsOut:(id)arg0 completion:(id)arg1 ;
-(void)_fadeComponentsIn:(id)arg0 completion:(id)arg1 ;
-(void)_flyInWithText:(BOOL)arg0 delay:(CGFloat)arg1 ;
-(void)_installMask;
-(void)_removeAnimations;
-(void)_setAlpha:(CGFloat)arg0 onComponents:(id)arg1 completion:(id)arg2 ;
-(void)_updateCallToActionLabelFont;
-(void)layoutSubviews;


@end


#endif