// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENELAYOUTWHITEPOINTADAPTATIONCONTROLLER_H
#define SBSCENELAYOUTWHITEPOINTADAPTATIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBSceneLayoutWhitePointAdaptationController : NSObject

@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


+(BOOL)_isInteractiveUpdateEnabled;
+(CGFloat)_defaultAnimationDuration;
+(id)_defaultAnimationSettings;
+(id)_harmonySettings;
+(id)sharedInstance;
-(NSInteger)_whitePointAdaptivityStyleForLayoutElement:(id)arg0 ;
-(id)_applicationSceneHandleForLayoutElement:(id)arg0 ;
-(id)_deviceSceneHandlesFromEntities:(id)arg0 ;
-(id)_whitePointAdaptivityStylesForLayoutState;
-(id)init;
-(void)_updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg0 ;
-(void)_updateWhitePointAdaptationStrengthWithFromApplicationScenes:(id)arg0 toApplicationScenes:(id)arg1 fromPercentage:(CGFloat)arg2 toPercentage:(CGFloat)arg3 animationSettings:(id)arg4 interactive:(BOOL)arg5 ;
-(void)_updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg0 fromPercentage:(CGFloat)arg1 toPercentage:(CGFloat)arg2 animationSettings:(id)arg3 cancelled:(BOOL)arg4 interactive:(BOOL)arg5 ;
-(void)updateWhitePointAdaptationStrength;
-(void)updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg0 ;
-(void)updateWhitePointAdaptationStrengthWithFromApplicationSceneEntities:(id)arg0 toApplicationSceneEntities:(id)arg1 fromPercentage:(CGFloat)arg2 toPercentage:(CGFloat)arg3 animationSettings:(id)arg4 interactive:(BOOL)arg5 ;
-(void)updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg0 animationTransitionContext:(id)arg1 ;


@end


#endif