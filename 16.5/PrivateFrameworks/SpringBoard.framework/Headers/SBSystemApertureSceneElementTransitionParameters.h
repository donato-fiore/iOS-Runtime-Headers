// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURESCENEELEMENTTRANSITIONPARAMETERS_H
#define SBSYSTEMAPERTURESCENEELEMENTTRANSITIONPARAMETERS_H

@class BSSettings, UIApplicationSceneTransitionContext;

#import <Foundation/Foundation.h>


@interface SBSystemApertureSceneElementTransitionParameters : NSObject

@property (copy, nonatomic) BSSettings *otherSystemApertureSceneSettingsToApply; // ivar: _otherSystemApertureSceneSettingsToApply
@property (nonatomic) CGSize sceneSize; // ivar: _sceneSize
@property (nonatomic) BOOL shouldSetForeground; // ivar: _shouldSetForeground
@property (retain, nonatomic) UIApplicationSceneTransitionContext *transitionContext; // ivar: _transitionContext
@property (nonatomic) BOOL wantsForeground; // ivar: _wantsForeground




@end


#endif