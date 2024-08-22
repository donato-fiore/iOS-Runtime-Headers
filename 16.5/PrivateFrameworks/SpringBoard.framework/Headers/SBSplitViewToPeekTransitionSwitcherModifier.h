// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPLITVIEWTOPEEKTRANSITIONSWITCHERMODIFIER_H
#define SBSPLITVIEWTOPEEKTRANSITIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSplitViewToPeekTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
}




-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif