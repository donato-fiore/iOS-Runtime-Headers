// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPULSEDISPLAYITEMSWITCHERMODIFIER_H
#define SBPULSEDISPLAYITEMSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBDisplayItem.h"

@interface SBPulseDisplayItemSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem
@property (readonly, nonatomic) SBDisplayItem *displayItemToPulse; // ivar: _displayItemToPulse


-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTapAppLayoutHeaderEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithDisplayItem:(id)arg0 ;
-(id)topMostLayoutElements;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif