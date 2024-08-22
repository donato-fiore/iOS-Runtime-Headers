// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDIMMINGVIEW_H
#define UIDIMMINGVIEW_H

@class NSMutableSet, NSString, NSArray;
@protocol _UIEventObserver, UIGestureRecognizerDelegate, UIDimmingViewDelegate;


#import "UIView.h"
#import "UIBarButtonItem.h"
#import "UIImageView.h"
#import "UITapGestureRecognizer.h"
#import "UIEvent.h"
#import "UIColor.h"

@interface UIDimmingView : UIView <_UIEventObserver, UIGestureRecognizerDelegate>

 {
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    BOOL _inPassthroughHitTest;
    UITapGestureRecognizer *_singleFingerTapRecognizer;
    UIEvent *_observedEventForAdditionalGestures;
    NSMutableSet *_additionalEventGestureRecognizers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDimmingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *dimmingColor; // ivar: _dimmingColor
@property (readonly, nonatomic) BOOL displayed;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
@property (nonatomic) BOOL ignoresTouches; // ivar: _ignoresTouches
@property (copy, nonatomic) NSArray *lowerWindowDismissalGestureViews; // ivar: _lowerWindowDismissalGestureViews
@property (copy, nonatomic) NSArray *passthroughViews; // ivar: _passthroughViews
@property (nonatomic) CGFloat percentDisplayed; // ivar: _percentDisplayed
@property (nonatomic) CGFloat percentLightened; // ivar: _percentLightened
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesBackdrops; // ivar: _suppressesBackdrops


+(id)defaultDimmingColor;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)isTransparentFocusItem;
-(id)_backdropViewsToAnimate;
-(id)_gestureRecognizersForEvent:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)textEffectsVisibilityLevel;
-(void)_clearAdditionalEventGestures;
-(void)_queueAdditionalEventGesturesFromView:(id)arg0 ;
-(void)_sendDelegateDimmingViewWasTapped;
-(void)_simulateTap;
-(void)dealloc;
-(void)dimmingRemovalAnimationDidStop;
-(void)display:(BOOL)arg0 ;
-(void)display:(BOOL)arg0 withAnimationDuration:(CGFloat)arg1 afterDelay:(CGFloat)arg2 ;
-(void)handleSingleTap:(id)arg0 ;
-(void)mouseUp:(struct __GSEvent *)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundColor;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif