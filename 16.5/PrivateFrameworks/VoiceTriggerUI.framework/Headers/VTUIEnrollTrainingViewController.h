// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUIENROLLTRAININGVIEWCONTROLLER_H
#define VTUIENROLLTRAININGVIEWCONTROLLER_H

@class UIViewController, AFUISiriLanguage, NSArray, NSString, UIView, AFEnablementFlowConfigurationProvider, AFEnablementConfiguration, UIBarButtonItem, AFMyriadCoordinator, NSUUID, SSRVTUITrainingManager;
@protocol AFMyriadDelegate, AFUISiriLanguageDelegate, SSRVTUITrainingManagerDelegate, VTUIEnrollmentDelegate, VTUIEnrollTrainingViewDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUISiriEducationViewControllerDelegate, VTUIVoiceSelectionViewControllerDelegate, OS_dispatch_queue, VTUIEnrollTrainingViewControllerDelegate;


#import "VTUISiriDataSharingOptInPresenter.h"
#import "VTUISiriEducationViewController.h"
#import "VTUIAnalytics.h"
#import "VTUIEnrollmentPageEligibilityProvider.h"
#import "VTUIVoiceSelectionViewController.h"
#import "VTUIAudioHintPlayer.h"
#import "VTUIEnrollTrainingView.h"
#import "VTUIEnrollmentSetupIntroView.h"
#import "VTUIEnrollmentLanguageOptionsView.h"
#import "VTUIEnrollmentSuccessView.h"

@interface VTUIEnrollTrainingViewController : UIViewController <AFMyriadDelegate, AFUISiriLanguageDelegate, SSRVTUITrainingManagerDelegate, VTUIEnrollmentDelegate, VTUIEnrollTrainingViewDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUISiriEducationViewControllerDelegate, VTUIVoiceSelectionViewControllerDelegate>

 {
    AFUISiriLanguage *_siriLanguage;
    BOOL _hasSkippedTraining;
    BOOL _hasPHSInCloud;
    BOOL _isResignedActive;
    id *_hasPHSInCloudFetchBlock;
    NSObject<OS_dispatch_queue> *_hasPHSInCloudFetchQueue;
    NSArray *_siriLanguageOptions;
    NSInteger _consecutiveTimeoutCount;
    NSString *_latestTrainingAttemptIdentifier;
    UIViewController *_siriDataSharingViewController;
    UIView *_siriDataSharingOptInView;
    NSInteger _enrollmentMode;
    VTUISiriDataSharingOptInPresenter *_siriDataSharingOptInPresenter;
    VTUISiriEducationViewController *_educationViewController;
    VTUIAnalytics *_analyticsEvent;
    VTUIEnrollmentPageEligibilityProvider *_pageEligibilityProvider;
    AFEnablementFlowConfigurationProvider *_provider;
    AFEnablementConfiguration *_enablementConfiguration;
    VTUIVoiceSelectionViewController *_voiceSelectionViewController;
    NSArray *_existingRightBarButtonItems;
    BOOL didOverrideHiddenBackButtonVisibility;
    UIBarButtonItem *overriddenBackItemBackBarButtonItem;
    BOOL _isEnablementConfigurationLoading;
    id *_onEnablementConfigurationDidLoad;
}


@property (nonatomic) NSUInteger AVVCRetryCount; // ivar: _AVVCRetryCount
@property (retain, nonatomic) UIView *aboutTappedSender; // ivar: _aboutTappedSender
@property (retain, nonatomic) VTUIAudioHintPlayer *audioHintPlayer; // ivar: _audioHintPlayer
@property (nonatomic) NSUInteger badMicRetryCount; // ivar: _badMicRetryCount
@property (nonatomic) NSUInteger cannotHearRetryCount; // ivar: _cannotHearRetryCount
@property (nonatomic) NSInteger currentTrainingState; // ivar: _currentTrainingState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VTUIEnrollTrainingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger digitalZerosRetryCount; // ivar: _digitalZerosRetryCount
@property (nonatomic) BOOL disambiguateLanguageOptionsForTesting; // ivar: _disambiguateLanguageOptionsForTesting
@property (retain, nonatomic) NSString *disambiguatedLanguageOption; // ivar: _disambiguatedLanguageOption
@property (retain, nonatomic) VTUIEnrollTrainingView *enrollTrainingView; // ivar: _enrollTrainingView
@property (nonatomic) BOOL hasRetriedTraining; // ivar: _hasRetriedTraining
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VTUIEnrollmentSetupIntroView *introView; // ivar: _introView
@property (retain, nonatomic) VTUIEnrollmentLanguageOptionsView *languageOptionsView; // ivar: _languageOptionsView
@property (retain, nonatomic) AFMyriadCoordinator *myriadCoordinator; // ivar: _myriadCoordinator
@property (readonly, nonatomic) NSUInteger sessionId; // ivar: _sessionId
@property (nonatomic) BOOL shouldTurnOnMyriad; // ivar: _shouldTurnOnMyriad
@property (nonatomic) BOOL skipToEndForTesting; // ivar: _skipToEndForTesting
@property (nonatomic) BOOL skipToSiriDataSharingOptInForTesting; // ivar: _skipToSiriDataSharingOptInForTesting
@property (retain, nonatomic) NSString *spokenLanguageCode; // ivar: _spokenLanguageCode
@property (retain, nonatomic) VTUIEnrollmentSuccessView *successView; // ivar: _successView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *trainingAttemptUUID; // ivar: _trainingAttemptUUID
@property (retain, nonatomic) SSRVTUITrainingManager *trainingManager; // ivar: _trainingManager
@property (retain, nonatomic) NSArray *trainingPageInstructions; // ivar: _trainingPageInstructions
@property (retain, nonatomic) NSString *voiceProfileAppDomain; // ivar: _voiceProfileAppDomain


-(BOOL)_hasPHSCloudDataForSpokenLanguage;
-(BOOL)_isLocaleSupported:(id)arg0 ;
-(BOOL)_isTrainingInProgress;
-(BOOL)_shouldPresentLanguageDisambiguation;
-(BOOL)_shouldShowSiriDataSharingOptInView;
-(BOOL)_shouldSpeakAudioHint;
-(BOOL)_siriLanguageIsIncompatibleWithPairedWatch;
-(NSInteger)interpretSessionManagerResult:(id)arg0 forInstruction:(NSInteger)arg1 ;
-(id)_getSetupModeString;
-(id)_retryStringForStatus:(NSInteger)arg0 ;
-(id)init;
-(id)init:(NSInteger)arg0 ;
-(id)init:(NSInteger)arg0 withAppDomain:(id)arg1 ;
-(id)interpretAudioSource:(NSUInteger)arg0 ;
-(void)VTUITrainingManagerFeedLevel:(float)arg0 ;
-(void)VTUITrainingManagerStopListening;
-(void)_advanceState;
-(void)_animateCheckMark:(BOOL)arg0 completion:(id)arg1 ;
-(void)_becomeActive;
-(void)_checkForPHSCloudDataIfNecessary:(id)arg0 ;
-(void)_cleanupHelper;
-(void)_cleanupMyriad;
-(void)_cleanupTrainingManagerWithCompletion:(id)arg0 ;
// -(void)_cleanupTrainingManagerWithCompletion:(id)arg0 status:(unk)arg1  ;
-(void)_configureTrainingWith:(NSInteger)arg0 withAppDomain:(id)arg1 ;
-(void)_continueToTrainingFromIntro;
-(void)_continueToTrainingFromLanguageOptions;
-(void)_continueToTrainingFromVoiceSelection;
-(void)_createTrainingManagerIfNeeded;
-(void)_didEnterBackground;
-(void)_endSetup;
-(void)_finishSiriSetup;
-(void)_handleTrainingResultForNonRetryablePhraseWithResult:(id)arg0 ;
-(void)_handleTrainingResultForRetryablePhraseWithResult:(id)arg0 shouldShowCheckMark:(BOOL)arg1 ;
-(void)_hideInstruction;
-(void)_hideTrainingElements;
-(void)_initialSetup;
-(void)_logVoiceSelection:(id)arg0 randomlySelected:(BOOL)arg1 ;
-(void)_presentRadarView;
-(void)_proceedAfterTrainingCompletionOrSkip;
-(void)_processDisambiguatedLanguageOption:(id)arg0 commitLanguageCodeToPreferences:(BOOL)arg1 ;
-(void)_processIntroViewContinueAction:(id)arg0 ;
-(void)_processLanguageSelectionAction:(id)arg0 ;
-(void)_resetBackBarButtonItem;
-(void)_resetEnrollment;
-(void)_resetIdleTimer;
-(void)_resetRightBarButtonItems;
-(void)_resignActive;
-(void)_resumeTraining:(BOOL)arg0 ;
-(void)_retryAfterBadMicAlert;
-(void)_retryInstruction:(BOOL)arg0 withStatusMessage:(id)arg1 ;
-(void)_setAssistantEnabled:(BOOL)arg0 ;
-(void)_setLanguageOptionsAndContinue;
-(void)_setPHSEnrollmentPrefEnabled:(BOOL)arg0 ;
-(void)_setRightBarButtonItem:(id)arg0 ;
-(void)_setupEnrollTrainingView;
-(void)_setupMode;
-(void)_setupMyriadCoordinator;
-(void)_setupTrainingStates;
-(void)_showBadMicAlertCompletion:(id)arg0 ;
-(void)_showBadMicAlertWithCompletion:(id)arg0 ;
-(void)_showEducationView;
-(void)_showEnrollmentSuccessView;
-(void)_showInstruction:(NSInteger)arg0 isRetry:(BOOL)arg1 ;
-(void)_showIntroView;
-(void)_showRadarExitButton;
-(void)_showSiriDataSharingOptIn;
-(void)_showStatusMessage:(id)arg0 afterDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_showTrainingElements;
-(void)_showTrainingInstruction:(NSInteger)arg0 afterDelay:(CGFloat)arg1 isRetry:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)_showUnsupportedLocaleAlert;
-(void)_showUnsupportedLocaleAlertCompletion:(id)arg0 ;
-(void)_showVoiceSelectionViewForRecognitionLanguage:(id)arg0 ;
-(void)_startEnrollment;
-(void)_startTraining;
-(void)_startTrainingIfNecessary;
-(void)_tearDownDataSharingViews;
-(void)_updatePageNumberForInstruction:(NSInteger)arg0 ;
-(void)_warnForLanguageCompatibilityIfNecessary:(id)arg0 ;
-(void)aboutTapped:(id)arg0 ;
-(void)cancelTraining;
-(void)dealloc;
-(void)enrollTrainingViewRadarButtonPressed:(id)arg0 ;
-(void)enrollTrainingViewSkipTrainingButtonPressed:(id)arg0 ;
-(void)finish:(id)arg0 ;
-(void)restartFromIntroView;
-(void)returnFromVoiceSelectionToIntroView:(id)arg0 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg0 ;
-(void)shouldContinue:(id)arg0 ;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg0 ;
-(void)siriEducationViewControllerContinuePressed:(id)arg0 ;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg0 ;
-(void)skipAssistant:(id)arg0 ;
-(void)skipTraining:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)voiceSelectionController:(id)arg0 didSelectVoice:(id)arg1 ;
-(void)voiceSelectionController:(id)arg0 didSelectVoice:(id)arg1 randomlySelected:(BOOL)arg2 ;


@end


#endif