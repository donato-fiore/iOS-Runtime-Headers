// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBCONTINUOUSEXPOSEPEEKCONTENTSWITCHERMODIFIER_H
#define _SBCONTINUOUSEXPOSEPEEKCONTENTSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBFullScreenContinuousExposeSwitcherModifier.h"
#import "SBAppSwitcherContinuousExposeSwitcherModifier.h"
#import "SBAppLayout.h"

@interface _SBContinuousExposePeekContentSwitcherModifier : SBSwitcherModifier {
    SBFullScreenContinuousExposeSwitcherModifier *_fullScreenContinuousExposeAppLayoutModifier;
    SBAppSwitcherContinuousExposeSwitcherModifier *_appSwitcherModifier;
}


@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSInteger configuration; // ivar: _configuration


-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)switcherHitTestsAsOpaque;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 configuration:(NSInteger)arg1 ;
-(id)keyboardSuppressionMode;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;


@end


#endif