// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSROLEACTUATESWITHCUSTOMCONTEXT_H
#define SBTRAITSROLEACTUATESWITHCUSTOMCONTEXT_H

@class SBFTraitsSettingsActuationContext, NSNumber, NSString;
@protocol SBFTraitsPreferencesStageResolutionPolicySpecifying;


#import "SBTraitsOrientationStageComponent.h"

@interface SBTraitsRoleActuatesWithCustomContext : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>



@property (readonly, copy, nonatomic) SBFTraitsSettingsActuationContext *actuationContext; // ivar: _actuationContext
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *role; // ivar: _role
@property (readonly) Class superclass;


-(id)initWithComponentOrder:(id)arg0 ;
-(id)initWithComponentOrder:(id)arg0 actuationContext:(id)arg1 ;
-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif