// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTURESCENERESIZEACTION_H
#define SBUISYSTEMAPERTURESCENERESIZEACTION_H

@class BSAction;


#import "SBUISystemApertureAnimationParameters.h"

@interface SBUISystemApertureSceneResizeAction : BSAction

@property (readonly, nonatomic) SBUISystemApertureAnimationParameters *animationParameters; // ivar: _animationParameters
@property (readonly, nonatomic, getter=isTransientLocal) BOOL transientLocal; // ivar: _transientLocal
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated


+(id)sceneResizeActionWithAnimationParameters:(id)arg0 ;
+(id)transientLocalResizeSceneActionWithAnimationParameters:(id)arg0 ;
+(id)userInitiatedSceneResizeActionWithAnimationParameters:(id)arg0 ;
-(id)initWithAnimationParameters:(id)arg0 ;


@end


#endif