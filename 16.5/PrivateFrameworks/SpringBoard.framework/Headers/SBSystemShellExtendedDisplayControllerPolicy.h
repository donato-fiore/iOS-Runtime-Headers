// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMSHELLEXTENDEDDISPLAYCONTROLLERPOLICY_H
#define SBSYSTEMSHELLEXTENDEDDISPLAYCONTROLLERPOLICY_H

@class FBSDisplayIdentity, SBExternalDisplayDefaults, SBSDisplayModeSettings, SBDisplayScaleMapping, FBSceneManager, FBScene, FBSDisplayConfiguration, BSContinuousMachTimer, BSAtomicSignal, NSString;
@protocol SBExternalDisplayServiceObserver, SBMousePointerHardwareConnectionObserver, PTSettingsKeyObserver, SBSceneHostingDisplayControllerPolicy, BSDefaultObserver;

#import <Foundation/Foundation.h>

#import "SBSceneHostingDisplayController.h"
#import "SBExternalDisplayService.h"
#import "SBExternalDisplayRuntimeAvailabilitySettings.h"
#import "SBMousePointerManager.h"

@interface SBSystemShellExtendedDisplayControllerPolicy : NSObject <SBExternalDisplayServiceObserver, SBMousePointerHardwareConnectionObserver, PTSettingsKeyObserver, SBSceneHostingDisplayControllerPolicy>

 {
    SBSceneHostingDisplayController *_displayController;
    FBSDisplayIdentity *_displayIdentity;
    SBExternalDisplayDefaults *_externalDisplayDefaults;
    id<BSDefaultObserver> *_externalDisplayDefaultsToken;
    id<BSDefaultObserver> *_displayModeSettingsToken;
    SBExternalDisplayService *_externalDisplayService;
    SBExternalDisplayRuntimeAvailabilitySettings *_runtimeAvailabilitySettings;
    SBMousePointerManager *_mousePointerManager;
    BOOL _metRuntimeRequirementsAtLeastOnce;
    SBSDisplayModeSettings *_displayModeSettings;
    SBDisplayScaleMapping *_displayScaleMapping;
    FBSceneManager *_fbSceneManager;
    FBScene *_currentScene;
    NSUInteger _previouslyReceivedDeactivationReasons;
    FBSDisplayConfiguration *_lastPresentationUpdateDisplayConfiguration;
    CGFloat _contentScale;
    BSContinuousMachTimer *_timerForAttachedDevicesToAffectDisplayAssertion;
    BOOL _didConnectToRequiredDevicesDuringTimerWindow;
    int _userMirroringPreference;
    BSAtomicSignal *_displayDisconnectSignal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_areRuntimeAvailabilityRequirementsMet;
-(BOOL)_wantsControlOfDisplay;
-(NSInteger)_currentRuntimeMask;
-(NSUInteger)displayAssertionDeactivationReasons:(id)arg0 ;
-(NSUInteger)displayAssertionPriorityLevel:(id)arg0 ;
-(id)_fetchOrCreateSceneWithDisplayConfiguration:(id)arg0 deactivationReasons:(NSUInteger)arg1 sceneManager:(id)arg2 ;
-(id)assertionPreferencesForDisplay:(id)arg0 displayConfiguration:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayPreferencesForDisplayController:(id)arg0 ;
-(id)initWithExternalDisplayDefaults:(id)arg0 externalDisplayService:(id)arg1 mousePointerManager:(id)arg2 runtimeAvailabilitySettings:(id)arg3 sceneManager:(id)arg4 ;
-(void)_hardwareAvailabilityChanged;
-(void)_keyboardAvailabilityChanged:(id)arg0 ;
-(void)connectToDisplayController:(id)arg0 displayConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)displayController:(id)arg0 didBeginTransaction:(id)arg1 sceneManager:(id)arg2 displayConfiguration:(id)arg3 deactivationReasons:(NSUInteger)arg4 ;
-(void)displayController:(id)arg0 didGainControlOfDisplayWithSceneManager:(id)arg1 ;
-(void)displayController:(id)arg0 sceneManager:(id)arg1 didLoseControlOfDisplayWithDeactivationReasons:(NSUInteger)arg2 ;
-(void)displayController:(id)arg0 sceneManager:(id)arg1 didReceiveNewDeactivationReasons:(NSUInteger)arg2 ;
-(void)displayController:(id)arg0 updatePresentationWithSceneManager:(id)arg1 displayConfiguration:(id)arg2 completion:(id)arg3 ;
-(void)displayControllerDidDisconnect:(id)arg0 transaction:(id)arg1 sceneManager:(id)arg2 ;
-(void)displayControllerWillDisconnect:(id)arg0 sceneManager:(id)arg1 ;
-(void)externalDisplayServiceDidUpdatePreferredDisplayArrangement:(id)arg0 ;
-(void)mousePointerManager:(id)arg0 hardwarePointingDeviceAttachedDidChange:(BOOL)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif