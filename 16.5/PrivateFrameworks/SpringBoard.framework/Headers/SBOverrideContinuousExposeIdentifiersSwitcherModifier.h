// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBOVERRIDECONTINUOUSEXPOSEIDENTIFIERSSWITCHERMODIFIER_H
#define SBOVERRIDECONTINUOUSEXPOSEIDENTIFIERSSWITCHERMODIFIER_H

@class NSArray;


#import "SBSwitcherModifier.h"

@interface SBOverrideContinuousExposeIdentifiersSwitcherModifier : SBSwitcherModifier

@property (readonly, copy, nonatomic) NSArray *overrideContinuousExposeIdentifiersInStrip; // ivar: _overrideContinuousExposeIdentifiersInStrip
@property (readonly, copy, nonatomic) NSArray *overrideContinuousExposeIdentifiersInSwitcher; // ivar: _overrideContinuousExposeIdentifiersInSwitcher


-(id)continuousExposeIdentifiersInStrip;
-(id)continuousExposeIdentifiersInSwitcher;
-(id)initWithContinuousExposeIdentifiersInSwitcher:(id)arg0 continuousExposeIdentifiersInStrip:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif