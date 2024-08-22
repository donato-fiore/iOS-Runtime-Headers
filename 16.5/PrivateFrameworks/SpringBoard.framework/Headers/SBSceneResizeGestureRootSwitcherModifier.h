// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENERESIZEGESTUREROOTSWITCHERMODIFIER_H
#define SBSCENERESIZEGESTUREROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSceneResizeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout *_appLayout;
    NSInteger _startingSpaceConfiguration;
}




-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(NSInteger)gestureType;
-(NSInteger)wallpaperStyle;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)initWithAppLayout:(id)arg0 spaceConfiguration:(NSInteger)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif