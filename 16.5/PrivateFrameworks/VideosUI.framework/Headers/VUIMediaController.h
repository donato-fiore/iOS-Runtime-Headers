// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIACONTROLLER_H
#define VUIMEDIACONTROLLER_H

@class UIViewController, AVPlayerViewController, UIImage, TVImageProxy, TVMediaInfo, NSString, NSTimer, TVPPlaylist, NSDate, _TVImageView, TVPVideoView, TVPStateMachine;
@protocol TVMediaController, TVMediaControllerDelegate, TVPAVFPlayback;



@interface VUIMediaController : UIViewController <TVMediaController>



@property (nonatomic) BOOL allowsSkipping; // ivar: _allowsSkipping
@property (nonatomic, getter=isAutomaticPlaybackStart) BOOL automaticPlaybackStart; // ivar: _automaticPlaybackStart
@property (nonatomic, getter=isAutomaticPlaybackStop) BOOL automaticPlaybackStop; // ivar: _automaticPlaybackStop
@property (retain, nonatomic) AVPlayerViewController *avPlayerViewController; // ivar: _avPlayerViewController
@property (readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (nonatomic) BOOL clearPreviousImageBeforeLoading; // ivar: _clearPreviousImageBeforeLoading
@property (readonly, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) TVImageProxy *currentImageProxy; // ivar: _currentImageProxy
@property (nonatomic) NSUInteger deactivationReasons; // ivar: _deactivationReasons
@property (weak, nonatomic) NSObject<TVMediaControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didWeCreatePlayer; // ivar: _didWeCreatePlayer
@property (nonatomic) BOOL doesDelegateRespondToShowStill; // ivar: _doesDelegateRespondToShowStill
@property (nonatomic) BOOL doesDelegateRespondToStateChange; // ivar: _doesDelegateRespondToStateChange
@property (nonatomic) CGFloat imageAnimationDuration; // ivar: _imageAnimationDuration
@property (nonatomic) NSUInteger imageAnimationOptions; // ivar: _imageAnimationOptions
@property (nonatomic) CGFloat imageTransitionInterval; // ivar: _imageTransitionInterval
@property (readonly, nonatomic) BOOL isPostPlayPiPActive;
@property (copy, nonatomic) TVMediaInfo *mediaInfo; // ivar: _mediaInfo
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL observingPictureInPictureActive; // ivar: _observingPictureInPictureActive
@property (nonatomic) CGFloat overlayViewDisplayDuration; // ivar: _overlayViewDisplayDuration
@property (weak, nonatomic) NSTimer *pauseStateTimeoutTimer; // ivar: _pauseStateTimeoutTimer
@property (retain, nonatomic) TVImageProxy *pendingImageProxy; // ivar: _pendingImageProxy
@property (retain, nonatomic) TVPPlaylist *pendingPlaylist; // ivar: _pendingPlaylist
@property (retain, nonatomic) UIViewController *playbackContainerController; // ivar: _playbackContainerController
@property (nonatomic, getter=isPlaybackEnabled) BOOL playbackEnabled; // ivar: _playbackEnabled
@property (retain, nonatomic) NSDate *playbackLoadingStartDate; // ivar: _playbackLoadingStartDate
@property (weak, nonatomic) NSTimer *playbackLoadingTimer; // ivar: _playbackLoadingTimer
@property (nonatomic) NSInteger playbackStopReason; // ivar: _playbackStopReason
@property (retain, nonatomic) NSObject<TVPAVFPlayback> *player; // ivar: _player
@property (nonatomic, getter=isPlayerReadyToBePlayed) BOOL playerReadyToBePlayed; // ivar: _playerReadyToBePlayed
@property (nonatomic) BOOL popWhenPlayerStops; // ivar: _popWhenPlayerStops
@property (retain, nonatomic) _TVImageView *proxyImageView; // ivar: _proxyImageView
@property (nonatomic, getter=isRestoringAVPlayerController) BOOL restoringAVPlayerController; // ivar: _restoringAVPlayerController
@property (retain, nonatomic) TVPVideoView *secondaryVideoView; // ivar: _secondaryVideoView
@property (nonatomic) BOOL shouldAnimateOverlayView; // ivar: _shouldAnimateOverlayView
@property (nonatomic) BOOL shouldPlayAfterAppBecomesActive; // ivar: _shouldPlayAfterAppBecomesActive
@property (nonatomic) BOOL shouldZoomWhenTransitioningToBackground; // ivar: _shouldZoomWhenTransitioningToBackground
@property (nonatomic) BOOL showsVideoControls;
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (nonatomic, getter=shouldStopPlayerWhenViewDisappears) BOOL stopPlayerWhenViewDisappears; // ivar: _stopPlayerWhenViewDisappears
@property (nonatomic, getter=shouldStopWhenAnotherMediaControllerStarts) BOOL stopWhenAnotherMediaControllerStarts; // ivar: _stopWhenAnotherMediaControllerStarts
@property (copy, nonatomic) NSString *titleForLogging; // ivar: _titleForLogging
@property (nonatomic) NSUInteger vpafPlaybackStartReason; // ivar: _vpafPlaybackStartReason
@property (nonatomic) NSUInteger vpafPlaybackStopReason; // ivar: _vpafPlaybackStopReason


-(BOOL)_canPause;
-(BOOL)_hasSecondaryView;
-(BOOL)_shouldIgnorePlaybackStop;
-(BOOL)_shouldPausePlaybackDueToDeactivationReasons;
-(BOOL)_shouldShowSecondaryView;
-(BOOL)isFullscreenPlaybackIntent;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )_playbackContainerViewFrame:(BOOL)arg0 hasSecondaryVideoView:(BOOL)arg1 ;
-(struct CGRect )_secondaryVideoViewFrame:(BOOL)arg0 ;
-(void)_addContentViewIfNeeded;
-(void)_addOverlayViewAnimatedIfNeeded:(BOOL)arg0 dismissAfter:(CGFloat)arg1 ;
-(void)_addPlaybackViewControllerForPlayback:(BOOL)arg0 ;
-(void)_addProxyImageView;
-(void)_applicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)_applicationWillAddDeactivationReason:(id)arg0 ;
-(void)_cleanUpEverything;
-(void)_cleanUpEverythingPlaybackRelated;
-(void)_delayLoadImage:(id)arg0 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg0 ;
-(void)_handlePlaybackErrorNotification:(id)arg0 ;
-(void)_mediaControllerStartedPlayback:(id)arg0 ;
-(void)_playbackStateChanged:(id)arg0 ;
-(void)_registerForApplicationStateNotifications;
-(void)_registerPlayerNotifications;
-(void)_registerStateMachineHandlers;
-(void)_removeOverlayView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_removePlaybackViewController;
-(void)_removeProxyImageView;
-(void)_setImageProxies:(id)arg0 ;
-(void)_setPlaylist:(id)arg0 ;
-(void)_stateDidChangeFromState:(id)arg0 toState:(id)arg1 onEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4 ;
-(void)_swapActiveMedia:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_unregisterPlayerNotifications;
-(void)_updateAVPlayerViewControllerWithAVPlayerForPlayer:(id)arg0 ;
-(void)_updateCurrentPlaybackViewFrameForPlaybackInBackground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateMediaInfo;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)stop;
-(void)transitionToForeground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif