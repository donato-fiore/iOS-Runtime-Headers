// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSEXTERNALDISPLAYPIPELINEMANAGER_H
#define SBTRAITSEXTERNALDISPLAYPIPELINEMANAGER_H

@class SBFTraitsArbitrationInputs, SBFTraitsParticipant, NSString;
@protocol SBFTraitsArbiterInputsDataSource, SBFTraitsParticipantDelegate;


#import "SBTraitsPipelineManager.h"
#import "SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider.h"

@interface SBTraitsExternalDisplayPipelineManager : SBTraitsPipelineManager <SBFTraitsArbiterInputsDataSource, SBFTraitsParticipantDelegate>

 {
    SBFTraitsArbitrationInputs *_inputs;
    SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider *_rolesAndDefaultPoliciesProvider;
    SBFTraitsParticipant *_activeOrientationParticipant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBFTraitsArbitrationInputs *inputs;
@property (readonly) Class superclass;


-(id)init;
-(id)orientationStageRoles;
-(id)zOrderStageRoles;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)setupDefaultPipelineForArbiter:(id)arg0 ;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;


@end


#endif