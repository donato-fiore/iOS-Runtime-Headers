// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPLITDISPLAYITEMCROSSBLURSWITCHERMODIFIER_H
#define SBSPLITDISPLAYITEMCROSSBLURSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBSplitDisplayItemSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSplitDisplayItemCrossblurSwitcherModifier : SBSwitcherModifier {
    SBSplitDisplayItemSwitcherModifier *_toSplitDisplayItemModifier;
    NSInteger _floatingConfiguration;
}


@property (readonly, nonatomic) SBAppLayout *fromAppLayout; // ivar: _fromAppLayout
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (readonly, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout


-(id)_previousHomeAffordanceAppLayout;
-(id)appLayoutContainingAppLayout:(id)arg0 ;
-(id)containerLeafAppLayoutForShelf:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 layoutRole:(NSInteger)arg3 ;
-(id)topMostLayoutElements;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGRect )frameForShelf:(id)arg0 ;


@end


#endif