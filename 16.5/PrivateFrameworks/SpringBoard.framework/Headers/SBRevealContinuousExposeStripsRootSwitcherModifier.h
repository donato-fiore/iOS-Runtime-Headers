// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREVEALCONTINUOUSEXPOSESTRIPSROOTSWITCHERMODIFIER_H
#define SBREVEALCONTINUOUSEXPOSESTRIPSROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBRevealContinuousExposeStripsRootSwitcherModifier : SBGestureRootSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *initialAppLayout; // ivar: _initialAppLayout


-(NSInteger)gestureType;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)initWithInitialAppLayout:(id)arg0 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif