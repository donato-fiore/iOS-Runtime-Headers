// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISPLITKEYBOARDSUPPORT_H
#define UISPLITKEYBOARDSUPPORT_H

@class CADisplayLink, NSString;
@protocol UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate;


#import "UIKeyboardMotionSupport.h"
#import "UIPanGestureRecognizer.h"

@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate>

 {
    UIPanGestureRecognizer *_singleFingerPanRecognizer;
    UIPanGestureRecognizer *_twoFingerPanRecognizer;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _splitLockState;
    CGPoint _targetTranslation;
    CGPoint _initialTranslation;
    CGPoint _translationVelocity;
    CADisplayLink *_displayLink;
    CGFloat _lastBounceTime;
    CGFloat _lastTranslationNotificationTime;
    id *_bounceCompletionBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSplitting;
@property (readonly, nonatomic) BOOL isTranslating;
@property (readonly) Class superclass;


-(BOOL)completedPlacementFrom:(id)arg0 to:(id)arg1 forController:(id)arg2 ;
-(BOOL)generateSplitNotificationForNewPlacement:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)startedPlacementFrom:(id)arg0 to:(id)arg1 forController:(id)arg2 ;
-(void)_connectController:(id)arg0 ;
-(void)_disconnectingController:(id)arg0 ;
-(void)_updateBounceAnimation:(id)arg0 ;
-(void)_updateKeyboardLayoutGuideForHostFrame:(struct CGRect )arg0 ;
-(void)_updatedController;
-(void)bounceAnimationDidFinish;
-(void)cancelBounceAnimation;
-(void)cancelGestureRecognizers;
-(void)dock;
-(void)finishTransitionWithCompletion:(id)arg0 ;
-(void)invalidateDisplayLink;
-(void)prepareForTransition;
-(void)transitionDidFinish:(BOOL)arg0 ;
-(void)translateDetected:(id)arg0 ;
-(void)undock;
-(void)updateProgress:(CGFloat)arg0 startHeight:(CGFloat)arg1 endHeight:(CGFloat)arg2 ;
-(void)updatedControllerApplicator:(id)arg0 ;
-(void)willPerformPlacementFrom:(id)arg0 to:(id)arg1 forController:(id)arg2 ;


@end


#endif