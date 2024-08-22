// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIVIEWCONTROLLERBUILTINTRANSITIONVIEWANIMATOR_H
#define UIVIEWCONTROLLERBUILTINTRANSITIONVIEWANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    id<UIViewControllerContextTransitioning> *_transitionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIView *fromView; // ivar: _fromView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL removeFromView; // ivar: _removeFromView
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *toView; // ivar: _toView
@property (nonatomic) int transition; // ivar: _transition


-(CGFloat)durationForTransition:(int)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithTransition:(int)arg0 ;
-(struct CGPoint )_adjustOrigin:(struct CGPoint )arg0 givenOtherOrigin:(struct CGPoint )arg1 forTransition:(int)arg2 ;
-(struct CGPoint )transitionView:(id)arg0 beginOriginForToView:(id)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint )arg3 ;
-(struct CGPoint )transitionView:(id)arg0 endOriginForFromView:(id)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint )arg3 ;
-(struct CGPoint )transitionView:(id)arg0 endOriginForToView:(id)arg1 forTransition:(int)arg2 defaultOrigin:(struct CGPoint )arg3 ;
-(void)_prepareKeyboardForTransition:(int)arg0 fromView:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;
-(void)transitionView:(id)arg0 startCustomTransitionWithDuration:(CGFloat)arg1 ;
-(void)transitionViewDidComplete:(id)arg0 fromView:(id)arg1 toView:(id)arg2 removeFromView:(BOOL)arg3 ;
-(void)transitionViewDidStart:(id)arg0 ;


@end


#endif