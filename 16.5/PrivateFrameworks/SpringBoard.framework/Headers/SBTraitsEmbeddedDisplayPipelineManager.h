// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSEMBEDDEDDISPLAYPIPELINEMANAGER_H
#define SBTRAITSEMBEDDEDDISPLAYPIPELINEMANAGER_H

@class BKSAccelerometer, BSContinuousMachTimer, SBFTraitsArbitrationInputs, SBFTraitsArbitrationKeyboardInputs, SBFTraitsArbitrationInterfaceIdiomInputs, SBFTraitsArbitrationDeviceOrientationInputs, SBFTraitsParticipant, NSString;
@protocol SBFTraitsArbiterInputsDataSource, BKSAccelerometerDelegate, SBBacklightControllerObserver, SBLayoutStateTransitionObserver, SBFTraitsParticipantDelegate, SBFTraitsArbiterObserver;


#import "SBTraitsPipelineManager.h"
#import "SBTraitsInputsOrientationLockValidator.h"
#import "SBTraitsInputsOrientationNonFlatOverrideValidator.h"
#import "SBOrientationLockManager.h"
#import "SBDeviceOrientationUpdateManager.h"
#import "SBDeviceOrientationUpdateDeferralAssertion.h"
#import "SBMedusa1oSettings.h"
#import "SBTraitsEmbeddedDisplayRolesAndDefaultPoliciesProvider.h"
#import "SBTraitsHomeFollowsSwitcherRawPolicySpecifier.h"
#import "SBTraitsHomeInIsolationPolicySpecifier.h"
#import "SBTraitsDockFollowsHomePolicySpecifier.h"
#import "SBTraitsControlCenterInIsolationPolicySpecifier.h"
#import "SBTraitsCoverSheetInIsolationPolicySpecifier.h"
#import "SBTraitsCoverSheetFollowsDeviceOrientationPolicySpecifier.h"
#import "SBTraitsCoverSheetFollowsSecureAppOrientationPolicySpecifier.h"

@interface SBTraitsEmbeddedDisplayPipelineManager : SBTraitsPipelineManager <SBFTraitsArbiterInputsDataSource, BKSAccelerometerDelegate, SBBacklightControllerObserver, SBLayoutStateTransitionObserver, SBFTraitsParticipantDelegate, SBFTraitsArbiterObserver>

 {
    BKSAccelerometer *_accelerometer;
    NSInteger _lastNonFlatOrientation;
    BSContinuousMachTimer *_uiLockedTimer;
    CGFloat _backlightFactor;
    SBFTraitsArbitrationInputs *_inputs;
    SBFTraitsArbitrationKeyboardInputs *_keyboardInputs;
    SBFTraitsArbitrationInterfaceIdiomInputs *_deviceIdiomInputs;
    SBFTraitsArbitrationDeviceOrientationInputs *_orientationInputs;
    SBTraitsInputsOrientationLockValidator *_orientationLockInputsValidator;
    SBTraitsInputsOrientationNonFlatOverrideValidator *_lastNonFlatOverrideInputsValidator;
    SBOrientationLockManager *_userOrientationLockManager;
    SBDeviceOrientationUpdateManager *_systemOrientationLockManager;
    SBDeviceOrientationUpdateDeferralAssertion *_deviceUpdateDeferralAssertion;
    SBMedusa1oSettings *_medusaSettings;
    SBTraitsEmbeddedDisplayRolesAndDefaultPoliciesProvider *_rolesAndDefaultPoliciesProvider;
    SBTraitsHomeFollowsSwitcherRawPolicySpecifier *_homeFollowsSwitcherSpecifier;
    SBTraitsHomeInIsolationPolicySpecifier *_homeIsolationSpecifier;
    SBTraitsDockFollowsHomePolicySpecifier *_dockFollowsHomeSpecifier;
    SBTraitsControlCenterInIsolationPolicySpecifier *_controlCenterIsolationSpecifier;
    BOOL _isCoversheetPresented;
    SBTraitsCoverSheetInIsolationPolicySpecifier *_coverSheetIsolationSpecifier;
    SBTraitsCoverSheetFollowsDeviceOrientationPolicySpecifier *_coverSheetFollowsDeviceOrientationSpecifier;
    SBTraitsCoverSheetFollowsSecureAppOrientationPolicySpecifier *_coverSheetFollowsSecureAppOrientationSpecifier;
    SBFTraitsParticipant *_activeOrientationParticipant;
    NSUInteger _arbiterRunningUpdatesCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBFTraitsArbitrationInputs *inputs;
@property (readonly) Class superclass;


-(BOOL)_isBacklightOn;
-(NSInteger)_bootOrientation;
-(id)_layoutCoordinator;
-(id)_orientationInputsForDeviceOrientation:(NSInteger)arg0 ;
-(id)defaultOrientationAnimationSettingsAnimatable:(BOOL)arg0 ;
-(id)initWithArbiter:(id)arg0 sceneDelegate:(id)arg1 ;
-(id)orientationStageRoles;
-(id)zOrderStageRoles;
-(void)_addLastNonFlatOverrideInputsValidatorIfNeeded;
-(void)_controlCenterDidDismiss:(id)arg0 ;
-(void)_controlCenterWillDismiss:(id)arg0 ;
-(void)_evaluateNonFlatOverrideNecessityForCurrentDeviceOrientation:(NSInteger)arg0 ;
-(void)_noteCoverSheetDidDismiss;
-(void)_noteCoverSheetDidPresent;
-(void)_noteCoverSheetWillDismiss;
-(void)_noteCoverSheetWillPresent;
-(void)_noteInputsDidChangeAnimated:(BOOL)arg0 reason:(id)arg1 ;
-(void)_systemOrientationLockChanged:(id)arg0 ;
-(void)_updateOrientationEventsEnabledState;
-(void)_updateOrientationInputsDeferralAnimated:(BOOL)arg0 ;
-(void)_userOrientationLockChanged:(id)arg0 ;
-(void)accelerometer:(id)arg0 didAccelerateWithTimeStamp:(CGFloat)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5 ;
-(void)accelerometer:(id)arg0 didChangeDeviceOrientation:(NSInteger)arg1 ;
-(void)arbiter:(id)arg0 didCompleteUpdateWithContext:(id)arg1 ;
-(void)arbiter:(id)arg0 willBeginUpdateWithContext:(id)arg1 ;
-(void)backlightController:(id)arg0 willAnimateBacklightToFactor:(float)arg1 source:(NSInteger)arg2 ;
-(void)dealloc;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)setKeyboardFocusContext:(id)arg0 ;
-(void)setupDefaultPipelineForArbiter:(id)arg0 ;
-(void)startListeningForLockScreenUIPresentations;
-(void)startObservingLayoutStateTransitions;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;


@end


#endif