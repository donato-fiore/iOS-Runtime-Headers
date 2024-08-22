// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARTRANSITIONCONTEXTPOP_H
#define _UINAVIGATIONBARTRANSITIONCONTEXTPOP_H

@class UINavigationBarTransitionContext;



@interface _UINavigationBarTransitionContextPop : UINavigationBarTransitionContext {
    CGRect _endingNewTitleViewFrame;
    CGRect _endingNewBackButtonFrame;
    CGSize _titleTransitionDistance;
    CGFloat _titleTransitionAdjustment;
}




-(id)viewUsingEaseInCurve;
-(int)transition;
-(void)_animateBackgroundView;
-(void)_animateContentView;
-(void)_animateLargeTitleView;
-(void)_animateScaleTransition;
-(void)_animateSearchBar;
-(void)_finishWithFinalLayout:(id)arg0 invalidLayout:(id)arg1 ;
-(void)_prepareBackgroundView;
-(void)_prepareContentView;
-(void)_prepareLargeTitleView;
-(void)_prepareScaleTransition;
-(void)_prepareSearchBar;
-(void)animate;
-(void)cancel;
-(void)complete;
-(void)prepare;


@end


#endif