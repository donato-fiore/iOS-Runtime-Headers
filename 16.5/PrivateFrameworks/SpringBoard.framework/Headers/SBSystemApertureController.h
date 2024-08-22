// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURECONTROLLER_H
#define SBSYSTEMAPERTURECONTROLLER_H

@class UIWindow, SBFTraitsParticipant, SBSystemApertureDefaults, FBScene, NSString;
@protocol SBSystemApertureElementOrientationAuthority, SBFTraitsParticipantDelegate, SBSystemApertureProximityBacklightPolicyDelegate, SBSystemApertureViewControllerVisibilityDelegate, SBSystemApertureBacklightSessionAggregator, SBFBacklightEnvironmentSceneProviding, SBSystemApertureLayoutMonitorServerDelegate, PTSettingsKeyObserver, SBSystemApertureStatusBarStyleOverridesSuppressing, SBButtonEventsHandler, SAElementRegistering;

#import <Foundation/Foundation.h>

#import "SBSystemApertureViewController.h"
#import "SBSystemApertureCaptureVisibilityShimViewController.h"
#import "SBSystemApertureCurtainViewController.h"
#import "SBSystemAperturePresentableManager.h"
#import "SBSystemApertureStatusBarPillElementProvider.h"
#import "SBSystemApertureSceneHoster.h"
#import "SBSystemApertureLayoutMonitorServer.h"
#import "SBSystemAperturePortalSourceInfoRequestServer.h"
#import "SBSystemApertureSettings.h"

@interface SBSystemApertureController : NSObject <SBSystemApertureElementOrientationAuthority, SBFTraitsParticipantDelegate, SBSystemApertureProximityBacklightPolicyDelegate, SBSystemApertureViewControllerVisibilityDelegate, SBSystemApertureBacklightSessionAggregator, SBFBacklightEnvironmentSceneProviding, SBSystemApertureLayoutMonitorServerDelegate, PTSettingsKeyObserver, SBSystemApertureStatusBarStyleOverridesSuppressing, SBButtonEventsHandler, SAElementRegistering>

 {
    UIWindow *_auxillarySuperHighLevelWindow;
    UIWindow *_window;
    SBSystemApertureViewController *_systemApertureViewController;
    SBSystemApertureCaptureVisibilityShimViewController *_mainCloningShimViewController;
    SBSystemApertureCurtainViewController *_systemApertureCurtainViewController;
    SBSystemApertureCaptureVisibilityShimViewController *_curtainCloningShimViewController;
    SBSystemAperturePresentableManager *_systemAperturePresentableManager;
    SBSystemApertureStatusBarPillElementProvider *_legacyStatusBarPillElementProvider;
    SBSystemApertureSceneHoster *_sceneHoster;
    SBFTraitsParticipant *_traitsParticipant;
    SBSystemApertureLayoutMonitorServer *_systemApertureLayoutMonitorServer;
    SBSystemAperturePortalSourceInfoRequestServer *_systemAperturePortalSourceRequestServer;
    SBSystemApertureSettings *_settings;
    SBSystemApertureDefaults *_systemApertureDefaults;
    BOOL _containsAnyContent;
    FBScene *_highLevelWindowScene;
    FBScene *_superHighLevelWindowScene;
    BOOL _registeredBacklightSceneProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)isTransitionTargetForSceneIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(BOOL)systemApertureProximityBacklightPolicy:(id)arg0 isSystemApertureElementVisibleAtPoint:(struct CGPoint )arg1 ;
-(BOOL)systemApertureProximityBacklightPolicyShouldConsiderSystemApertureInert:(id)arg0 ;
-(BOOL)systemApertureProximityBacklightPolicyShouldDisableGracePeriod:(id)arg0 ;
-(NSInteger)activeElementInterfaceOrientationForSystemApertureElementOrientationObserver:(id)arg0 ;
-(id)_createHighLevelSystemApertureSceneWithIdentifier:(id)arg0 sceneSpecificiation:(id)arg1 displayConfiguration:(id)arg2 atLevel:(float)arg3 ;
-(id)acquireActiveElementAssertionForApplication:(id)arg0 reason:(id)arg1 ;
-(id)acquireSuppressionAssertionForStatusBarStyleOverrides:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)participantAssociatedWindows:(id)arg0 ;
-(id)registerElement:(id)arg0 ;
-(id)requireHeavyShadowAssertionForTransition;
-(id)restrictSystemApertureToDefaultLayoutWithReason:(id)arg0 ;
-(id)restrictSystemApertureToInertWithReason:(id)arg0 ;
-(id)scenesForBacklightSession;
-(id)stateDump;
-(id)systemApertureRepresentationSuppressionAssertionForCoversheetVisibility;
-(struct CGRect )defaultIslandFrameInCoordinateSpace:(id)arg0 ;
-(void)_applyOrientation:(NSInteger)arg0 withPreviousOrientation:(NSInteger)arg1 animationSettings:(id)arg2 ;
-(void)_configureBacklightEnvironmentSceneProviderIfNecessary;
-(void)_configureLegacyStatusBarPillElementProviderIfNecessary;
-(void)_configureNoticeManagerIfNecessary;
-(void)_updateVisibilityForCloningAndSnapshots;
-(void)animateTransitionAcceptanceBounceWithVelocityVector:(struct CGPoint )arg0 triggeredBlock:(id)arg1 ;
-(void)animateTransitionEjectionStretchWithVelocityVector:(struct CGPoint )arg0 ;
-(void)applyFailureRequirementsForCoverSheetPresentationGesture:(id)arg0 ;
-(void)createHighLevelSystemApertureWindowWithWindowScene:(id)arg0 ;
-(void)createHighLevelWindowSceneWithDisplayConfiguration:(id)arg0 ;
-(void)createSuperHighLevelCurtainWindowSceneWithDisplayConfiguration:(id)arg0 ;
-(void)createSuperHighLevelCurtainWithWindowScene:(id)arg0 ;
-(void)dealloc;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)hostedScenesDidChange;
-(void)performNegativeResponseAnimation;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)systemApertureProximityBacklightPolicy:(id)arg0 embedProximityTouchTrackingView:(id)arg1 touchBlockingView:(id)arg2 ;
-(void)systemApertureProximityBacklightPolicy:(id)arg0 removeProximityTouchTrackingView:(id)arg1 touchBlockingView:(id)arg2 ;
-(void)systemApertureViewController:(id)arg0 containsAnyContent:(BOOL)arg1 ;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;


@end


#endif