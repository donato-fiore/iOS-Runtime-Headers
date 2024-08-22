// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTASHEDFLOATINGSWITCHERMODIFIER_H
#define SBSTASHEDFLOATINGSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBActiveAppLayoutFloatingSwitcherModifier.h"

@interface SBStashedFloatingSwitcherModifier : SBSwitcherModifier {
    SBActiveAppLayoutFloatingSwitcherModifier *_activeModifier;
}




-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)handleTapSlideOverTongueEvent:(id)arg0 ;
-(id)initWithFloatingConfiguration:(NSInteger)arg0 environmentMode:(NSInteger)arg1 ;
-(id)visibleAppLayouts;


@end


#endif