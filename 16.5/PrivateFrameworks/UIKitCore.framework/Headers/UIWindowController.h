// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWINDOWCONTROLLER_H
#define UIWINDOWCONTROLLER_H

@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "UIViewController.h"
#import "UITransitionView.h"
#import "UIWindow.h"

@interface UIWindowController : NSObject {
    int _currentTransition;
    id *_target;
    NSInteger _didFinish;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    CGPoint _beginOriginForToView;
    CGPoint _endOriginForToView;
    NSInteger _toModalStyle;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
}


@property (retain, nonatomic, setter=_setInteractionController:) NSObject<UIViewControllerInteractiveTransitioning> *_interactionController; // ivar: _interactionController
@property (nonatomic, getter=_isInteractiveTransition, setter=_setInteractiveTransition:) BOOL _interactiveTransition; // ivar: __interactiveTransition
@property (retain, nonatomic, setter=_setTransitionController:) NSObject<UIViewControllerAnimatedTransitioning> *_transitionController; // ivar: _transitionController
@property (nonatomic) BOOL presenting; // ivar: _presenting
@property (readonly, nonatomic) UITransitionView *transitionView; // ivar: _transitionView
@property (weak, nonatomic) UIWindow *window; // ivar: _window


+(id)windowControllerForWindow:(id)arg0 ;
+(void)windowWillBeDeallocated:(id)arg0 ;
-(CGFloat)durationForTransition:(int)arg0 ;
-(struct CGPoint )_adjustOrigin:(struct CGPoint )arg0 givenOtherOrigin:(struct CGPoint )arg1 forTransition:(int)arg2 ;
-(struct CGPoint )_originForViewController:(id)arg0 orientation:(NSInteger)arg1 actualStatusBarHeight:(CGFloat)arg2 fullScreenLayout:(BOOL)arg3 inWindow:(id)arg4 ;
-(struct CGPoint )transitionView:(id)arg0 beginOriginForToView:(id)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint )arg3 ;
-(struct CGPoint )transitionView:(id)arg0 endOriginForFromView:(id)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint )arg3 ;
-(struct CGPoint )transitionView:(id)arg0 endOriginForToView:(id)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint )arg3 ;
-(struct CGRect )_boundsForViewController:(id)arg0 transition:(int)arg1 orientation:(NSInteger)arg2 fullScreenLayout:(BOOL)arg3 inWindow:(id)arg4 ;
-(struct CGSize )_flipSize:(struct CGSize )arg0 ;
-(void)_prepareKeyboardForTransition:(int)arg0 fromView:(id)arg1 ;
-(void)_transition:(int)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 target:(id)arg3 didFinish:(NSInteger)arg4 ;
-(void)_transition:(int)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 target:(id)arg3 didFinish:(NSInteger)arg4 animation:(id)arg5 ;
-(void)_transplantView:(id)arg0 toSuperview:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)transitionView:(id)arg0 startCustomTransitionWithDuration:(CGFloat)arg1 ;
-(void)transitionViewDidCancel:(id)arg0 fromView:(id)arg1 toView:(id)arg2 ;
-(void)transitionViewDidComplete:(id)arg0 fromView:(id)arg1 toView:(id)arg2 removeFromView:(BOOL)arg3 ;
-(void)transitionViewDidStart:(id)arg0 ;


@end


#endif