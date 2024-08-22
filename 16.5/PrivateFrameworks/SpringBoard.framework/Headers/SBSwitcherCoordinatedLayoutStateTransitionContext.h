// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERCOORDINATEDLAYOUTSTATETRANSITIONCONTEXT_H
#define SBSWITCHERCOORDINATEDLAYOUTSTATETRANSITIONCONTEXT_H

@class NSString, NSSet;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"
#import "SBSwitcherController.h"

@interface SBSwitcherCoordinatedLayoutStateTransitionContext : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *displayItems; // ivar: _displayItems
@property (readonly, nonatomic) SBAppLayout *fromAppLayout; // ivar: _fromAppLayout
@property (readonly, nonatomic) NSInteger fromCenterConfiguration; // ivar: _fromCenterConfiguration
@property (readonly, nonatomic) NSInteger fromFloatingConfiguration; // ivar: _fromFloatingConfiguration
@property (readonly, nonatomic) SBSwitcherController *fromSwitcherController; // ivar: _fromSwitcherController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout
@property (readonly, nonatomic) SBSwitcherController *toSwitcherController; // ivar: _toSwitcherController


+(id)coordinatedLayoutStateTransitionContextForMovingDisplayItems:(id)arg0 fromSwitcherController:(id)arg1 fromAppLayout:(id)arg2 toSwitcherController:(id)arg3 withApplicationController:(id)arg4 ;
+(id)coordinatedLayoutStateTransitionContextForMovingDisplayItems:(id)arg0 toSwitcherController:(id)arg1 withApplicationController:(id)arg2 ;
-(BOOL)hasTransitioningDisplayItemsForAppLayout:(id)arg0 ;
-(BOOL)hasTransitioningDisplayItemsForSwitcherController:(id)arg0 ;
-(BOOL)isDisplayItemTransitioning:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDisplayItems:(id)arg0 fromSwitcherController:(id)arg1 toSwitcherController:(id)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )fromFrameInFromSwitcherForDisplayItem:(id)arg0 ;
-(struct CGRect )fromFrameInToSwitcherForDisplayItem:(id)arg0 ;
-(struct CGRect )toFrameInFromSwitcherForDisplayItem:(id)arg0 ;
-(struct CGRect )toFrameInToSwitcherForDisplayItem:(id)arg0 ;


@end


#endif