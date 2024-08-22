// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISWITCHMODERNVISUALELEMENT_H
#define UISWITCHMODERNVISUALELEMENT_H

@class NSString;
@protocol UIGestureRecognizerDelegate, UISwitchMVEGestureTrackingSessionElement, CAAnimationDelegate, UIPointerInteractionDelegate;


#import "UISwitchVisualElement.h"
#import "UIView.h"
#import "UIImageView.h"
#import "UIColor.h"
#import "UISwitchMVEGestureTrackingSession.h"
#import "UILongPressGestureRecognizer.h"
#import "UIImage.h"
#import "UIPanGestureRecognizer.h"
#import "UITapGestureRecognizer.h"

@interface UISwitchModernVisualElement : UISwitchVisualElement <UIGestureRecognizerDelegate, UISwitchMVEGestureTrackingSessionElement, CAAnimationDelegate, UIPointerInteractionDelegate>

 {
    UIView *_switchWellView;
    UIView *_leftSwitchWellView;
    UIView *_switchWellContainerView;
    UIView *_leftSwitchWellContainerView;
    UIImageView *_switchWellImageView;
    UIView *_switchWellImageViewContainer;
    UIImageView *_switchWellOffImageView;
    UIImageView *_switchWellOnImageView;
    UIImageView *_knobView;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    BOOL _isAlwaysAccessible;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UISwitchMVEGestureTrackingSession *gestureTrackingSession; // ivar: _gestureTrackingSession
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress; // ivar: _longPress
@property (retain, nonatomic) UIImage *offImage; // ivar: _offImage
@property (nonatomic) BOOL on; // ivar: _on
@property (retain, nonatomic) UIImage *onImage; // ivar: _onImage
@property (retain, nonatomic) UIPanGestureRecognizer *pan; // ivar: _pan
@property (nonatomic) BOOL pressed; // ivar: _pressed
@property (retain, nonatomic) UITapGestureRecognizer *selectGestureRecognizer; // ivar: _selectGestureRecognizer
@property (nonatomic) BOOL showsOnOffLabel; // ivar: _showsOnOffLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *thumbTintColor; // ivar: _thumbTintColor


+(id)_modernGradientImageWithOnColor:(id)arg0 traitCollection:(id)arg1 ;
+(id)_modernThumbImageWithColor:(id)arg0 mask:(NSUInteger)arg1 traitCollection:(id)arg2 ;
+(struct UIEdgeInsets )preferredAlignmentRectInsets;
-(BOOL)_feedbackEnabled;
-(BOOL)_gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1 ;
-(BOOL)_shouldUseLightTintOverColor:(id)arg0 ;
-(BOOL)displayedOn;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_wellBorderWidthPressed:(BOOL)arg0 on:(BOOL)arg1 ;
-(id)_accessibleOffImage;
-(id)_accessibleOnImage;
-(id)_defaultOnTintColor;
-(id)_effectiveGradientImage;
-(id)_effectiveOffImage;
-(id)_effectiveOffImageTintColor;
-(id)_effectiveOffTextColor;
-(id)_effectiveOnImage;
-(id)_effectiveOnImageTintColor;
-(id)_effectiveOnTintColor;
-(id)_effectiveThumbImage;
-(id)_effectiveTintColor;
-(id)_settings;
-(id)_switchKnobPositionSpringAnimationFromValue:(id)arg0 toValue:(id)arg1 ;
-(id)_switchKnobWidthSpringAnimationFromValue:(id)arg0 toValue:(id)arg1 pressed:(BOOL)arg2 ;
-(id)_switchSpringAnimationWithKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 pressed:(BOOL)arg3 ;
-(id)_switchTrackAnimationWithFromValue:(id)arg0 toValue:(id)arg1 on:(BOOL)arg2 ;
-(id)_switchTrackColorAnimationWithFromValue:(id)arg0 toValue:(id)arg1 ;
-(id)_switchTrackPositionAnimationWithFromValue:(id)arg0 toValue:(id)arg1 on:(BOOL)arg2 ;
-(id)_switchTrackPositionSpringAnimationFromValue:(id)arg0 toValue:(id)arg1 on:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGColor *)_wellColorOn:(BOOL)arg0 ;
-(struct CGPoint )_knobPositionOn:(BOOL)arg0 pressed:(BOOL)arg1 forBounds:(struct CGRect )arg2 ;
-(struct CGPoint )_leftSwitchWellContainerPositionOn:(BOOL)arg0 pressed:(BOOL)arg1 ;
-(struct CGPoint )_switchWellContainerPositionOn:(BOOL)arg0 pressed:(BOOL)arg1 ;
-(struct CGPoint )_switchWellPositionOn:(BOOL)arg0 pressed:(BOOL)arg1 ;
-(struct CGPoint )_wellPositionOn:(BOOL)arg0 forBounds:(struct CGRect )arg1 ;
-(struct CGRect )_knobBoundsPressed:(BOOL)arg0 ;
-(struct CGRect )_leftSwitchWellContainerBoundsOn:(BOOL)arg0 pressed:(BOOL)arg1 ;
-(struct CGRect )_switchWellContainerBoundsOn:(BOOL)arg0 pressed:(BOOL)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_handleLongPress:(id)arg0 ;
-(void)_handleLongPressWithGestureLocationInBounds:(struct CGPoint )arg0 gestureState:(NSInteger)arg1 ;
-(void)_handlePan:(id)arg0 ;
-(void)_installSelectGestureRecognizer;
-(void)_invalidateKnob;
-(void)_invalidateOnOffImages;
-(void)_invalidateWell;
-(void)_orderSubviews;
-(void)_selectGestureChanged:(id)arg0 ;
-(void)_switchToStaticMode:(BOOL)arg0 ;
-(void)_transitionImagesToPressed:(BOOL)arg0 on:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionKnobToOn:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_transitionKnobToPressed:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_transitionKnobToPressed:(BOOL)arg0 on:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_transitionWellViewToOn:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_transitionWellViewToPressed:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_transitionWellViewToPressed:(BOOL)arg0 on:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_uninstallSelectGestureRecognizer;
-(void)_updateDisplayAnimated:(BOOL)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)interactiveChangeToDisplayedOn:(BOOL)arg0 ;
-(void)performStateChangeFeedback;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setSwitchControl:(id)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif