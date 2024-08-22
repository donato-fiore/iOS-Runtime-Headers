// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNMOVIERENDERER_H
#define KNMOVIERENDERER_H

@class CALayer, TSUWeakReference, NSString, TSDMovieInfo;
@protocol TSKMediaPlayerControllerDelegate, KNAmbientBuildRenderer, KNAnimationMovieHost, NSCopying, TSKMediaPlayerController;


#import "KNBuildRenderer.h"
#import "KNSlideNode.h"

@interface KNMovieRenderer : KNBuildRenderer <TSKMediaPlayerControllerDelegate, KNAmbientBuildRenderer, KNAnimationMovieHost>

 {
    CALayer *_videoLayer;
    CGFloat _startTime;
    CGFloat _playbackAtStartTimePauseTime;
    CGFloat _playbackAtStartTimePauseOffset;
    TSUWeakReference *_buildInRendererReference;
    CGRect _frameInContainerView;
    id *_movieStartCallbackTarget;
    SEL _movieStartCallbackSelector;
    BOOL _hasMoviePlaybackStarted;
    BOOL _needsToSendMovieStartCallback;
    BOOL _needsToSendBuildEndCallback;
    BOOL _isObservingVideoLayerReadyForDisplay;
    BOOL _needsPlaybackAtStartTime;
    BOOL _hasPendingTogglePlayingControl;
    BOOL _pendingTogglePlayingControlStartsPlaying;
    BOOL _shouldMoviePlaybackEndOnCompletion;
    BOOL _wasMoviePlayingBeforeAnimationPause;
    BOOL _isTeardownCompletionBlockPending;
}


@property (weak, nonatomic) KNBuildRenderer *buildInRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAmbientBuildStarted;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) KNSlideNode *movieSlideNode;
@property (readonly, nonatomic) NSObject<NSCopying> *movieTimelineMovieIdentifier;
@property (readonly, nonatomic) CALayer *offscreenVideoLayer;
@property (readonly, nonatomic) NSObject<TSKMediaPlayerController> *playerController; // ivar: _playerController
@property (readonly, nonatomic) BOOL shouldActionBuildsStopAnimations;
@property (readonly) Class superclass;


+(id)movieInfoForMovieTimelineMovieIdentifier:(id)arg0 ;
+(id)movieTimelineMovieIdentifierForMovieInfo:(id)arg0 ;
-(BOOL)addAnimationsAtLayerTime:(CGFloat)arg0 ;
-(id)initWithAnimatedBuild:(id)arg0 info:(id)arg1 buildStage:(id)arg2 animatedSlideView:(id)arg3 ;
-(struct CGImage *)p_copyCurrentVideoFrameImage;
-(struct CGImage *)p_copyCurrentVideoFrameImageUsingAVAssetImageGenerator;
-(void)animate;
-(void)applyMovieControl:(NSInteger)arg0 ;
-(void)dealloc;
-(void)forceRemoveAnimations;
-(void)interruptAndReset;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)p_applyActionEffect:(id)arg0 ;
-(void)p_cancelPlaybackAtStartTime;
-(void)p_didEndMoviePlayback;
-(void)p_didStartMoviePlayback;
-(void)p_playbackDidFailWithError:(id)arg0 ;
-(void)p_schedulePlaybackAtStartTime;
-(void)p_setupPlayerController;
-(void)p_setupReflectionAndMaskingOnMovieTexture:(id)arg0 strokeTexture:(id)arg1 reflectionMaskTexture:(id)arg2 frameMaskTexture:(id)arg3 ;
-(void)p_setupVideoLayer;
-(void)p_showVideoLayer;
-(void)p_startMoviePlaybackIfNeeded;
-(void)p_startPlaybackAtStartTime;
-(void)p_teardownUpdatingTexture:(BOOL)arg0 ;
-(void)p_unschedulePlaybackAtStartTime;
-(void)pauseAnimations;
-(void)pauseAnimationsAtTime:(CGFloat)arg0 ;
-(void)playbackDidStopForPlayerController:(id)arg0 ;
-(void)playerController:(id)arg0 playbackDidFailWithError:(id)arg1 ;
-(void)registerForAmbientBuildStartCallback:(SEL)arg0 target:(id)arg1 ;
-(void)removeAnimationsAndFinish:(BOOL)arg0 ;
-(void)resumeAnimationsIfPaused;
-(void)resumeAnimationsIfPausedAtTime:(CGFloat)arg0 ;
-(void)stopAnimations;
-(void)updateAnimationsForLayerTime:(CGFloat)arg0 ;


@end


#endif