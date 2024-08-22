// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRANSITIONSWITCHERMODIFIERMOVEDISPLAYSCONTEXT_H
#define SBTRANSITIONSWITCHERMODIFIERMOVEDISPLAYSCONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "SBSwitcherCoordinatedLayoutStateTransitionContext.h"
#import "SBSwitcherController.h"

@interface SBTransitionSwitcherModifierMoveDisplaysContext : NSObject

@property (readonly, nonatomic) SBSwitcherCoordinatedLayoutStateTransitionContext *coordinatedLayoutStateTransitionContext; // ivar: _coordinatedLayoutStateTransitionContext
@property (readonly, copy, nonatomic) NSSet *movingDisplayItems;
@property (readonly, nonatomic) SBSwitcherController *switcherController; // ivar: _switcherController


+(id)moveDisplaysContextWithCoordinatedLayoutStateTransitionContext:(id)arg0 relativeToSwitcherController:(id)arg1 ;
-(BOOL)pertainsToAppLayout:(id)arg0 ;
-(BOOL)pertainsToDisplayItem:(id)arg0 ;
-(id)initWithCoordinatedLayoutStateTransitionContext:(id)arg0 switcherController:(id)arg1 ;
-(struct CGRect )fromFrameForDisplayItem:(id)arg0 ;
-(struct CGRect )toFrameForDisplayItem:(id)arg0 ;


@end


#endif