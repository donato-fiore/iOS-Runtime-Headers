// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBOVERRIDEPARENTAPPLAYOUTSWITCHERMODIFIER_H
#define SBOVERRIDEPARENTAPPLAYOUTSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBOverrideParentAppLayoutSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *childAppLayout; // ivar: _childAppLayout
@property (readonly, nonatomic) SBAppLayout *parentAppLayout; // ivar: _parentAppLayout


-(id)appLayoutContainingAppLayout:(id)arg0 ;
-(id)appLayoutsContainedWithinAppLayout:(id)arg0 ;
-(id)initWithChildAppLayout:(id)arg0 newParentAppLayout:(id)arg1 ;


@end


#endif