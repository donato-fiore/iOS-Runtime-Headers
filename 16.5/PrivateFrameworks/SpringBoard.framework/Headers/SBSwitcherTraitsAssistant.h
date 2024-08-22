// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERTRAITSASSISTANT_H
#define SBSWITCHERTRAITSASSISTANT_H

@class SBFTraitsParticipant, NSMutableDictionary, NSString, SBFTraitsArbiter;
@protocol SBFTraitsParticipantDelegate, BSInvalidatable, SBSwitcherTraitsAssistantDelegate;

#import <Foundation/Foundation.h>

#import "SBTraitsSwitcherPolicySpecifier.h"
#import "SBTraitsSwitcherLiveOverlayPolicySpecifier.h"
#import "SBTraitsPipelineBlockBasedPolicySpecifier.h"

@interface SBSwitcherTraitsAssistant : NSObject <SBFTraitsParticipantDelegate>

 {
    SBTraitsSwitcherPolicySpecifier *_switcherPolicySpecifier;
    SBTraitsSwitcherLiveOverlayPolicySpecifier *_liveOverlaysPolicySpecifier;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    SBFTraitsParticipant *_guidingPortraitOnlyParticipant;
    SBFTraitsParticipant *_guidingLandscapeOnlyParticipant;
    NSMutableDictionary *_guidingSceneOrientationRequestParticipantsMap;
    NSMutableDictionary *_participantUniqueIDToAssociatedParticipantMap;
    SBTraitsPipelineBlockBasedPolicySpecifier *_blockBasedPolicySpecifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBSwitcherTraitsAssistantDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) SBFTraitsParticipant *switcherParticipant; // ivar: _switcherParticipant
@property (readonly, weak, nonatomic) SBFTraitsArbiter *traitsArbiter; // ivar: _traitsArbiter


-(BOOL)_isContentContainerAspectRatioPortrait;
-(BOOL)_updateGuidingSpecifiersIfNeededForParticipants:(id)arg0 sceneHandleProviderBlock:(id)arg1 ;
-(id)_guidingLandscapeOnlyLiveOverlay;
-(id)_guidingPortraitOnlyLiveOverlay;
-(id)_guidingSceneOrientationRequestParticipantWithMask:(NSUInteger)arg0 ;
-(id)_stateCaptureDescription;
-(id)initWithTraitsArbiter:(id)arg0 switcherParticipant:(id)arg1 delegate:(id)arg2 ;
-(void)_addGuidingParticpantsIdentifiersToArray:(id)arg0 ;
-(void)_addGuidingSpecifierIfNeeded;
-(void)_evaluateIfGuidingSpecifierIsSillNeeded;
-(void)_handleUpdateRequest:(id)arg0 ;
-(void)_setupGuidingRelationshipIfNeededForParticipant:(id)arg0 withSceneHandle:(id)arg1 ;
-(void)_setupPolicySpecifierIfNeeded;
-(void)_setupStateCapture;
-(void)_updateAcquiredParticipantsPolicies:(id)arg0 ;
// -(void)_updateArbitrationForElementsParticipants:(id)arg0 sceneHandleProviderBlock:(id)arg1 forceResolution:(unk)arg2 reason:(BOOL)arg3  ;
-(void)createTraitsParticipantsForLayoutElements:(id)arg0 outParticipantsByElementIdentifier:(*id)arg1 outDelegatesByParticipant:(*id)arg2 outPrimaryDelegate:(*id)arg3 ;
-(void)dealloc;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)updateAllParticipants:(id)arg0 withPrimaryDelegate:(id)arg1 nonPrimaryPolicy:(NSInteger)arg2 primaryPolicy:(NSInteger)arg3 ownPolicy:(NSInteger)arg4 ;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;


@end


#endif