// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARTRANSITIONCONTEXTCROSSFADE_H
#define _UINAVIGATIONBARTRANSITIONCONTEXTCROSSFADE_H

@class UINavigationBarTransitionContext;



@interface _UINavigationBarTransitionContextCrossfade : UINavigationBarTransitionContext



-(BOOL)shouldPerformTwoPartCrossfadeTransition;
-(CGFloat)contentViewMaxY;
-(int)transition;
-(void)_animateContentView;
-(void)_animateLargeTitleView;
-(void)_animateSearchBar;
-(void)_finishWithFinalLayout:(id)arg0 invalidLayout:(id)arg1 ;
-(void)_prepareContentView;
-(void)_prepareLargeTitleView;
-(void)_prepareSearchBar;
-(void)animate;
-(void)cancel;
-(void)complete;
-(void)prepare;


@end


#endif