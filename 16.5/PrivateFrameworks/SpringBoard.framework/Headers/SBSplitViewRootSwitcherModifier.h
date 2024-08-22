// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPLITVIEWROOTSWITCHERMODIFIER_H
#define SBSPLITVIEWROOTSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBSplitViewRootSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_fullScreenModifier;
    SBSwitcherModifier *_routingModifier;
}




-(id)_handleEvent:(id)arg0 ;
-(id)_routingModifierForEvent:(id)arg0 ;
-(id)init;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;


@end


#endif