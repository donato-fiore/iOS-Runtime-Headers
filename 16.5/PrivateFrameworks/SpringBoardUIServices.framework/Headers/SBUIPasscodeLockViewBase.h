// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPASSCODELOCKVIEWBASE_H
#define SBUIPASSCODELOCKVIEWBASE_H

@class UIView, _UILegibilitySettings, NSMutableSet, UINotificationFeedbackGenerator, UIColor, NSString, NSTimer;
@protocol SBUIBiometricResourceObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeBiometricAuthenticationViewLayoutDelegate, SBUIPasscodeBiometricAuthenticationViewDelegate, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPhoneUnlockWithWatchControllerObserver, SBUIPasscodeLockView_Internal, SBUIPasscodeLockView, BSInvalidatable, SBFLegibilitySettingsProvider, SBUIBiometricResource, SBUIPasscodeLockViewDelegate, Staging_UIKBFeedbackGenerating;


#import "SBUIProudLockContainerViewController.h"
#import "SBUIPasscodeEntryField.h"
#import "SBUIPoseidonContainerViewController.h"

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricResourceObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeBiometricAuthenticationViewLayoutDelegate, SBUIPasscodeBiometricAuthenticationViewDelegate, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPhoneUnlockWithWatchControllerObserver, SBUIPasscodeLockView_Internal, SBUIPasscodeLockView>

 {
    BOOL _needStatusTextUpdate;
    BOOL _playsKeypadSounds;
    BOOL _becameVisible;
    BOOL _proudLockShowsBiometricStates;
    BOOL _suppressTitleText;
    CGFloat _currentBacklightLevel;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _allowsStatusTextUpdatingOnResignFirstResponder;
    NSUInteger _biometricMatchingState;
    id<BSInvalidatable> *_biometricMatchingAssertion;
    NSMutableSet *_biometricMatchingEnabledOverrideReasons;
    BOOL _deviceHasBeenUnlockedOnceSinceBoot;
    BOOL _pendingBioUnlock;
    int _currentPendingBioUnlockToken;
    SBUIProudLockContainerViewController *_proudLockContainerViewController;
    BOOL _shouldConsiderTapGuard;
    NSUInteger _phoneUnlockWithWatchFailedStatusState;
    NSUInteger _previousStatusState;
    NSInteger _errorCode;
}


@property (retain, nonatomic, getter=_entryField, setter=_setEntryField:) SBUIPasscodeEntryField *_entryField; // ivar: _entryField
@property (nonatomic) BOOL allowsAutomaticBiometricPresentationTransition; // ivar: _allowsAutomaticBiometricPresentationTransition
@property (retain, nonatomic) UINotificationFeedbackGenerator *authenticationFeedbackBehavior; // ivar: _authenticationFeedbackBehavior
@property (nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (retain, nonatomic) NSObject<SBFLegibilitySettingsProvider> *backgroundLegibilitySettingsProvider; // ivar: _backgroundLegibilitySettingsProvider
@property (nonatomic, getter=isBiometricAuthenticationAllowed) BOOL biometricAuthenticationAllowed; // ivar: _isBiometricAuthenticationAllowed
@property (retain, nonatomic) UIView *biometricAuthenticationView; // ivar: _biometricAuthenticationView
@property (nonatomic) BOOL biometricPresentationAncillaryButtonsVisible;
@property (retain, nonatomic) NSObject<SBUIBiometricResource> *biometricResource; // ivar: _biometricResource
@property (nonatomic) BOOL canSuggestSwipeToRetry; // ivar: _canSuggestSwipeToRetry
@property (nonatomic) BOOL confirmedNotInPocket; // ivar: _confirmedNotInPocket
@property (retain, nonatomic) UIColor *customBackgroundColor; // ivar: _customBackgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBUIPasscodeLockViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBiometricLockedOut;
@property (nonatomic) BOOL isTransitioning; // ivar: _isTransitioning
@property (retain, nonatomic) NSObject<Staging_UIKBFeedbackGenerating> *keyboardFeedbackBehavior; // ivar: _keyboardFeedbackBehavior
@property (nonatomic, getter=_luminosityBoost, setter=_setLuminosityBoost:) CGFloat luminosityBoost; // ivar: _luminanceBoost
@property (retain, nonatomic) SBUIProudLockContainerViewController *overrideProudLockContainerViewController; // ivar: _overrideProudLockContainerViewController
@property (readonly, nonatomic) NSString *passcode;
@property (retain, nonatomic) UIView *passcodeAuthenticationView; // ivar: _passcodeAuthenticationView
@property (nonatomic) NSInteger passcodeLockViewState; // ivar: _passcodeLockViewState
@property (nonatomic) BOOL playsKeypadSounds;
@property (retain, nonatomic) UIView *poseidonContainerView; // ivar: _poseidonContainerView
@property (retain, nonatomic) SBUIPoseidonContainerViewController *poseidonContainerViewController; // ivar: _poseidonContainerViewController
@property (nonatomic) ? proudLockConfiguration; // ivar: _proudLockConfiguration
@property (retain, nonatomic) NSTimer *screenBrightnessChangedTimer; // ivar: _screenBrightnessChangedTimer
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // ivar: _screenOn
@property (nonatomic) BOOL shouldResetForFailedPasscodeAttempt; // ivar: _shouldResetForFailedPasscodeAttempt
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsEmergencyCallButton;
@property (nonatomic) BOOL showsProudLock; // ivar: _showsProudLock
@property (nonatomic) BOOL showsStatusField; // ivar: _showsStatusField
@property (nonatomic, getter=_statusState, setter=_setStatusState:) NSUInteger statusState; // ivar: _statusState
@property (copy, nonatomic, getter=_statusSubtitleText, setter=_setStatusSubtitleText:) NSString *statusSubtitleText; // ivar: _statusSubtitleText
@property (copy, nonatomic, getter=_statusText, setter=_setStatusText:) NSString *statusText; // ivar: _statusText
@property (nonatomic) int style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) ? transitionContext; // ivar: _transitionContext
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) BOOL usesBiometricPresentation; // ivar: _usesBiometricPresentation


-(BOOL)_accountingForExternallyShownProudLock;
-(BOOL)_canRecognizeBiometricAuthentication;
-(BOOL)_effectivelyHasProudLockShowingBiometricStates;
-(BOOL)_isBoundsPortraitOriented;
-(BOOL)_proudLockShowingBiometricStates;
-(BOOL)_setAuthenticationViewTypeToFaceIDWithWatch;
-(BOOL)_statusStateShouldNotUpdateForUnsupportedGlassesFeedback:(NSUInteger)arg0 ;
-(BOOL)_supportsProudLock;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)supportsPoseidonCoaching;
-(CGFloat)_biometricViewAlphaFromPasscodeLockViewState:(NSInteger)arg0 ;
-(CGFloat)_luminanceBoostFromDisplayBrightness;
-(CGFloat)_luminanceBoostFromLegibility;
-(CGFloat)_numberPadOffsetFromTopOfScreen:(id)arg0 ;
-(CGFloat)passcodeBiometricAuthenticationViewNumberPadAncillaryButtonOffsetFromTopOfScreen:(id)arg0 ;
-(CGFloat)passcodeBiometricAuthenticationViewSideButtonsOffsetFromCenter:(id)arg0 ;
-(NSInteger)_orientation;
-(NSUInteger)_statusStateForLockoutState:(NSUInteger)arg0 ;
-(id)_defaultStatusText;
-(id)_deviceSpecificTemperatureStringForTemperatureState:(NSUInteger)arg0 ;
-(id)_proudLockContainerViewControllerToUpdate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_advanceToPasscodeForMatchFailure:(BOOL)arg0 ;
-(void)_advanceToPasscodeTimerFired;
-(void)_applyProudLockContainerViewControllerConfiguration;
-(void)_armAdvanceToPasscodeTimer;
-(void)_clearBrightnessChangeTimer;
-(void)_disarmAdvanceToPasscodeTimer;
-(void)_evaluateBiometricMatchingState;
-(void)_evaluateLuminance;
-(void)_handleBiometricAuthentication;
-(void)_handleNonPasscodeAuthenticationAndUpdateProudLock;
-(void)_luminanceBoostDidChange;
-(void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(BOOL)arg0 ;
-(void)_noteScreenBrightnessDidChange;
-(void)_notifyDelegatePasscodeEnteredViaMesa;
-(void)_overrideBiometricMatchingEnabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_playAuthenticationFeedbackForSuccess:(BOOL)arg0 jiggleLock:(BOOL)arg1 ;
-(void)_resetForFailedBiometricAttempt;
-(void)_resetForFailedPasscode:(BOOL)arg0 ;
-(void)_resetProudLockAndTitleTextForFailedBiometricAttempt;
-(void)_resetStatusText;
-(void)_resumeBiometricMatchingAdvisory:(BOOL)arg0 ;
-(void)_screenBrightnessReallyDidChange;
-(void)_sendDelegateKeypadKeyDown;
-(void)_sendDelegateKeypadKeyUp;
-(void)_setBiometricMatchingState:(NSUInteger)arg0 ;
-(void)_setLegibilitySettings:(id)arg0 ;
-(void)_setStatusStateSwipeToRetryAnimated:(BOOL)arg0 ;
-(void)_setSuppressTitleText:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateBiometricAlpha;
-(void)_updateBiometricGlyphForBioEvent:(NSUInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateBiometricLayout;
-(void)_updateProudLockForBioEvent:(NSUInteger)arg0 ;
-(void)_updateProudLockForBioUnlockWithCompletion:(id)arg0 ;
-(void)_updateStatusStateForLockoutIfNecessaryAnimatedly:(BOOL)arg0 ;
-(void)_updateStatusTextForBioEvent:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)autofillForSuccessfulMesaAttemptWithCompletion:(id)arg0 ;
-(void)becomeActiveWithAnimationSettings:(id)arg0 ;
-(void)beginTransitionToState:(NSInteger)arg0 ;
-(void)biometricResource:(id)arg0 matchingEnabledDidChange:(BOOL)arg1 ;
-(void)biometricResource:(id)arg0 observeEvent:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)didEndTransitionToState:(NSInteger)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)noteBottomFaceHasBeenOccluded;
-(void)noteFaceHasBeenOccluded;
-(void)passcodeBiometricAuthenticationViewCancelButtonHit:(id)arg0 ;
-(void)passcodeBiometricAuthenticationViewEmergencyCallButtonHit:(id)arg0 ;
-(void)passcodeBiometricAuthenticationViewUsePasscodeButtonHit:(id)arg0 ;
-(void)phoneUnlockWithWatchControllerAttemptFailed:(id)arg0 withError:(id)arg1 ;
-(void)phoneUnlockWithWatchControllerAttemptSucceeded:(id)arg0 ;
-(void)providerLegibilitySettingsChanged:(id)arg0 ;
-(void)reset;
-(void)resetForFailedMesaAttemptWithStatusText:(id)arg0 andSubtitle:(id)arg1 ;
-(void)resetForFailedPasscode;
-(void)resetForScreenOff;
-(void)resetForSuccess;
-(void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg0 ;
-(void)setKeypadVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setNeedsStatusTextUpdate;
-(void)updateForTransitionToPasscodeView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateStatusText:(id)arg0 subtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateStatusTextAnimated:(BOOL)arg0 ;
-(void)updateTransitionWithProgress:(CGFloat)arg0 ;
-(void)willEndTransitionToState:(NSInteger)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;
-(void)willTransitionToPasscodeView;


@end


#endif