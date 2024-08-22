// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSSWITCHERPOLICYSPECIFIER_H
#define SBTRAITSSWITCHERPOLICYSPECIFIER_H

@class NSString;


#import "SBAbstractTraitsSwitcherPolicySpecifier.h"

@interface SBTraitsSwitcherPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier

@property (copy, nonatomic) NSString *primaryElementParticipantIdentifier; // ivar: _primaryElementParticipantIdentifier
@property (nonatomic) NSInteger resolutionPolicy; // ivar: _resolutionPolicy


-(id)_specifierDescription;
-(id)initWithComponentOrder:(id)arg0 arbiter:(id)arg1 ;
-(void)_updateAcquiredParticipantsPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif