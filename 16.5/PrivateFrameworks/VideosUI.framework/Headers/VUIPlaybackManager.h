// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYBACKMANAGER_H
#define VUIPLAYBACKMANAGER_H

@class AVPlayerViewController, NSString, UIAlertController, NSDate, UIViewController<VUIMultiPlayerViewController>, NSMutableArray, UIImage, UIViewController<VUIPlaybackContainerViewController>, NSNumber, NSDictionary, NSLayoutConstraint, UIButton, TVPStateMachine;
@protocol AVPlayerViewControllerDelegatePrivate, VideosExtrasContextDelegate, VUINowPlayingFeatureMonitorDelegate, VUIPostPlayViewDelegate, VUIPlaybackContainerViewControllerDelegate, VUIMultiPlayerViewControllerDelegate, OS_dispatch_queue, TVPMediaItem, VUIControllerPresenter;

#import <Foundation/Foundation.h>

#import "VUIPlayer.h"
#import "VideosExtrasContext.h"
#import "VideosExtrasPresenter.h"
#import "VUINowPlayingFeatureMonitor.h"
#import "VUIVideoAdvisoryLogoImageDownloader.h"
#import "VUIPostPlayView.h"
#import "VUIProductPlacementView.h"
#import "VUIVideoAdvisoryView.h"

@interface VUIPlaybackManager : NSObject <AVPlayerViewControllerDelegatePrivate, VideosExtrasContextDelegate, VUINowPlayingFeatureMonitorDelegate, VUIPostPlayViewDelegate, VUIPlaybackContainerViewControllerDelegate, VUIMultiPlayerViewControllerDelegate>



@property (weak, nonatomic) VUIPlayer *activePlayer; // ivar: _activePlayer
@property (readonly, nonatomic) BOOL allowedToAutoPlay;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioSessionSerialQueue; // ivar: _audioSessionSerialQueue
@property (nonatomic) NSUInteger autoPlayedVideosCount; // ivar: _autoPlayedVideosCount
@property (retain, nonatomic) AVPlayerViewController *avPlayerViewController; // ivar: _avPlayerViewController
@property (retain, nonatomic) VUIPlayer *backgroundAudioPlayer; // ivar: _backgroundAudioPlayer
@property (nonatomic) BOOL configuredPostPlay; // ivar: _configuredPostPlay
@property (readonly, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property (readonly, nonatomic) BOOL currentPlaylistAllowsCellular;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dismissalOperation; // ivar: _dismissalOperation
@property (retain, nonatomic) UIAlertController *errorAlertController; // ivar: _errorAlertController
@property (retain, nonatomic) AVPlayerViewController *extrasAVPlayerViewController; // ivar: _extrasAVPlayerViewController
@property (retain, nonatomic) VideosExtrasContext *extrasContext; // ivar: _extrasContext
@property (retain, nonatomic) VUIPlayer *extrasPlayer; // ivar: _extrasPlayer
@property (retain, nonatomic) VideosExtrasPresenter *extrasPresenter; // ivar: _extrasPresenter
@property (retain, nonatomic) VUINowPlayingFeatureMonitor *featureMonitor; // ivar: _featureMonitor
@property (readonly, nonatomic) NSObject<VUIControllerPresenter> *fullScreenViewControllerForPresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *initialPlaybackStartDate; // ivar: _initialPlaybackStartDate
@property (readonly, nonatomic) BOOL isFullscreenPlaybackUIBeingShown;
@property (readonly, nonatomic) BOOL isPIPing;
@property (readonly, nonatomic) BOOL isPlaybackUIBeingShown;
@property (retain, nonatomic) VUIVideoAdvisoryLogoImageDownloader *logoImageDownloader; // ivar: _logoImageDownloader
@property (retain, nonatomic) AVPlayerViewController *mainAVPlayerViewController; // ivar: _mainAVPlayerViewController
@property (retain, nonatomic) VUIPlayer *mainPlayer; // ivar: _mainPlayer
@property (readonly, nonatomic) NSInteger maxMultiviewPlayerCount;
@property (retain, nonatomic) UIViewController<VUIMultiPlayerViewController> *multiPlayerViewController; // ivar: _multiPlayerViewController
@property (retain, nonatomic) NSMutableArray *multiviewPlaybackInfo; // ivar: _multiviewPlaybackInfo
@property (readonly, nonatomic) NSInteger multiviewPlayerCount;
@property (retain, nonatomic) UIImage *photoSensitivityImage; // ivar: _photoSensitivityImage
@property (retain, nonatomic) UIViewController<VUIPlaybackContainerViewController> *playbackContainerViewController; // ivar: _playbackContainerViewController
@property (readonly, nonatomic, getter=isPostPlayActive) BOOL postPlayActive;
@property (retain, nonatomic) NSNumber *postPlayImpressionTime; // ivar: _postPlayImpressionTime
@property (retain, nonatomic) NSString *postPlayItemId; // ivar: _postPlayItemId
@property (retain, nonatomic) VUIPostPlayView *postPlayView; // ivar: _postPlayView
@property (weak, nonatomic) NSObject<VUIControllerPresenter> *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) UIImage *productPlacementImage; // ivar: _productPlacementImage
@property (retain, nonatomic) VUIProductPlacementView *productPlacementView; // ivar: _productPlacementView
@property (retain, nonatomic) UIImage *ratingImage; // ivar: _ratingImage
@property (retain, nonatomic) VUIVideoAdvisoryView *ratingView; // ivar: _ratingView
@property (nonatomic) BOOL requiresLinearPlayback; // ivar: _requiresLinearPlayback
@property (retain, nonatomic) id *savedErrorContext; // ivar: _savedErrorContext
@property (retain, nonatomic) NSDictionary *savedErrorUserInfo; // ivar: _savedErrorUserInfo
@property (nonatomic) BOOL shouldAnimateProductPlacementView; // ivar: _shouldAnimateProductPlacementView
@property (nonatomic) BOOL shouldAnimateTVRatingView; // ivar: _shouldAnimateTVRatingView
@property (nonatomic) BOOL shouldDisplayProductPlacementWhenVideoBoundsIsAvailable; // ivar: _shouldDisplayProductPlacementWhenVideoBoundsIsAvailable
@property (nonatomic) BOOL shouldDisplayTVRatingWhenVideoBoundsIsAvailable; // ivar: _shouldDisplayTVRatingWhenVideoBoundsIsAvailable
@property (retain, nonatomic) NSLayoutConstraint *skipBottomConstraint; // ivar: _skipBottomConstraint
@property (retain, nonatomic) UIButton *skipButton; // ivar: _skipButton
@property (retain, nonatomic) NSDictionary *skipButtonImpressionMetrics; // ivar: _skipButtonImpressionMetrics
@property (retain, nonatomic) NSLayoutConstraint *skipCenterXConstraint; // ivar: _skipCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *skipTrailingConstraint; // ivar: _skipTrailingConstraint
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


+(BOOL)_isFullScreenPlaybackState:(id)arg0 ;
+(id)downloadDataSource;
+(id)sharedInstance;
-(BOOL)_isNewPostPlayEnabled;
-(BOOL)isPlaylistBeingPresented:(id)arg0 ;
-(BOOL)multiviewContainsMediaItemWithIdentifier:(id)arg0 ;
-(CGFloat)detailsViewHeightForMultiPlayerViewController:(id)arg0 ;
-(NSUInteger)indexOfMediaItemInMultiviewWithIdentifier:(id)arg0 ;
-(id)_deepLinkPlaybackURLForCurrentMediaItem;
-(id)createPlayerViewController;
-(id)detailsViewControllerForMultiPlayerViewController:(id)arg0 ;
-(id)init;
-(id)playerViewController:(id)arg0 displayNameForMediaSelectionOption:(id)arg1 ;
-(id)playerViewController:(id)arg0 targetViewForDismissalAnimationWithProposedTargetView:(id)arg1 ;
-(struct CGRect )_calculatePostPlayPipRectForParent:(id)arg0 ;
-(struct CGRect )playbackContainerViewControllerPiPFrameForCurrentPlayback:(id)arg0 ;
-(void)_addProductPlacementFeatureFromMediaItem:(id)arg0 ;
-(void)_addRollsInfoFeaturesFromMediaItem:(id)arg0 ;
-(void)_addSkipInfoFeaturesFromMediaItem:(id)arg0 ;
-(void)_addTVRatingFeatureFromMediaItem:(id)arg0 ;
-(void)_addTappableViewToRemoveSkipButton;
-(void)_addVideoDimmingViewForPostPlay;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_configureStillWatchingFeatureMonitoringIfLivePlayback;
-(void)_currentMediaItemDidChange:(id)arg0 ;
-(void)_dismissPostPlayWithSwipe:(id)arg0 ;
-(void)_donateUserActivityForMediaItem:(id)arg0 ;
-(void)_downloadProductPlacementImageIfAvailable:(id)arg0 ;
-(void)_downloadRatingImageIfAvailable:(id)arg0 ;
-(void)_externalPlaybackTypeDidChange:(id)arg0 ;
-(void)_handleDismissSkipButtonGesture:(id)arg0 ;
-(void)_handleTapAwayFromPostPlayGesture:(id)arg0 ;
-(void)_markMainPlayerMediaItemPlayingPictureInPictureMetadataAsActive:(BOOL)arg0 forAVPlayerViewController:(id)arg1 ;
-(void)_markMainPlayerMediaItemPostPlayActive:(BOOL)arg0 ;
-(void)_networkReachbilityDidChange:(id)arg0 ;
-(void)_notifyAVPlayerViewControllerDisplaySize;
-(void)_playbackErrorDidOccur:(id)arg0 ;
-(void)_playbackStateDidChange:(id)arg0 ;
-(void)_playerRateDidChange:(id)arg0 ;
-(void)_postPlayItemSelected:(id)arg0 ;
-(void)_recordSkipButtonImpressions;
-(void)_registerApplicationNotifications;
-(void)_registerStateMachineHandlers;
-(void)_removeTappableViewForSkipButtonIfNeeded;
-(void)_removeVideoDimmingViewForPostPlay;
-(void)_resetAutoPlayBingeWatchingQualifications;
-(void)_setExtrasButtonVisible:(BOOL)arg0 ;
-(void)_setupBootstrapPostPlayFeatureMonitorForMediaItem:(id)arg0 ;
-(void)_setupFeaturesFromMainPlayersCurrentMediaItem;
-(void)_showOrUpdateAdvisoryViewsIfNeeded;
-(void)_showProductPlacement:(BOOL)arg0 withImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showSkipButtonWithTitle:(id)arg0 show:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_showStillWatchingAlertFeature:(id)arg0 ;
-(void)_showTVRating:(BOOL)arg0 withRatingImage:(id)arg1 photoSensitivityImage:(id)arg2 animated:(BOOL)arg3 ;
-(void)_skipButtonTapped:(id)arg0 ;
-(void)_updateRequiresLinearPlayback;
-(void)_updateStopWhenBackgroundedFeatureForApplicationState:(NSInteger)arg0 isFullScreen:(BOOL)arg1 ;
-(void)_updateTimeBoundFeature:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateTimeTriggeredFeature:(id)arg0 animated:(BOOL)arg1 ;
-(void)addPlaylistToMultiview:(id)arg0 animated:(BOOL)arg1 ;
-(void)autoPlayTimerDidCompleteForPostPlayView:(id)arg0 ;
-(void)configureAudioSessionForBackgroundPlayback:(BOOL)arg0 usingPlaybackCategory:(BOOL)arg1 ;
-(void)dismissPlaybackAnimated:(BOOL)arg0 leaveGroupActivitySession:(BOOL)arg1 completion:(id)arg2 ;
-(void)dismissPostPlayAnimated:(BOOL)arg0 ;
-(void)extrasBackButtonPressed;
-(void)extrasContext:(id)arg0 extrasVisibilityNeedsUpdate:(BOOL)arg1 ;
-(void)extrasContext:(id)arg0 hadFatalError:(id)arg1 ;
-(void)extrasContextDidLoadMainMenuItems:(id)arg0 ;
-(void)extrasDoneButtonPressed;
-(void)extrasMenuItemSelected:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)extrasRequestReloadWithContext:(id)arg0 ;
-(void)extrasRequestsMediaPlayback:(id)arg0 isBackground:(BOOL)arg1 ;
-(void)extrasRequestsPlaybackStop;
-(void)featureMonitor:(id)arg0 featureDidChangeState:(id)arg1 animated:(BOOL)arg2 ;
-(void)mediaInfoDidChangeTo:(id)arg0 canPlay:(BOOL)arg1 wasAutoPlayed:(BOOL)arg2 ;
-(void)multiPlayerViewController:(id)arg0 detailsViewControllerDidAppear:(id)arg1 ;
-(void)multiPlayerViewController:(id)arg0 detailsViewControllerDidDisappear:(id)arg1 ;
-(void)multiPlayerViewController:(id)arg0 detailsViewControllerWillAppear:(id)arg1 ;
-(void)multiPlayerViewController:(id)arg0 detailsViewControllerWillDisappear:(id)arg1 ;
-(void)multiPlayerViewController:(id)arg0 didDismissWithPlayerViewController:(id)arg1 withReason:(NSUInteger)arg2 ;
-(void)multiPlayerViewController:(id)arg0 didEnterFullscreenWithPlayerViewController:(id)arg1 ;
-(void)multiPlayerViewController:(id)arg0 didExitFullscreenWithPlayerViewController:(id)arg1 ;
-(void)multiPlayerViewController:(id)arg0 didSelectPlayerViewController:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)playbackContainerViewControllerBackgroundPlaybackWillBegin:(id)arg0 ;
-(void)playbackContainerViewControllerDidAutoPlay:(id)arg0 ;
-(void)playbackContainerViewControllerDidDisappear:(id)arg0 ;
-(void)playbackContainerViewControllerDidFinishLoadingPostPlay:(id)arg0 ;
-(void)playbackContainerViewControllerExitPictureInPicturePressed:(id)arg0 ;
-(void)playerViewController:(id)arg0 contentViewWillTransitionToSize:(struct CGSize )arg1 withTransitionCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg0 failedToStartPictureInPictureWithError:(id)arg1 ;
-(void)playerViewController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1 ;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg0 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg0 ;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg0 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg0 ;
-(void)presentExtrasWithURL:(id)arg0 storeID:(id)arg1 actionParams:(id)arg2 fromViewController:(id)arg3 completion:(id)arg4 ;
-(void)presentPlaylist:(id)arg0 fromViewController:(id)arg1 dismissalOperation:(NSInteger)arg2 allowsCellular:(BOOL)arg3 animated:(BOOL)arg4 completion:(id)arg5 ;
-(void)presentPlaylist:(id)arg0 fromViewController:(id)arg1 dismissalOperation:(NSInteger)arg2 allowsCellular:(BOOL)arg3 animated:(BOOL)arg4 userInfo:(id)arg5 completion:(id)arg6 ;
-(void)presentPlaylist:(id)arg0 fromViewController:(id)arg1 dismissalOperation:(NSInteger)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)removePlaylistFromMultiview:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif