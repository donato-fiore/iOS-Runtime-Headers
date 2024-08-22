// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI24PAGINATEDMEDIACONTROLLER_H
#define _TTC8VIDEOSUI24PAGINATEDMEDIACONTROLLER_H



#import "VUIBaseViewController.h"

@interface _TtC8VideosUI24PaginatedMediaController : VUIBaseViewController {
    ? showsGradient;
    ? showsPageControl;
    ? pageControlBottomMarginConstraint;
    ? pageControlBottomMargin;
    ? shouldAdjustCaptionPosition;
    ? viewModels;
    ? paginationDelegate;
    ? lastImpressedIndex;
    ? previousPlaybackEnabled;
    ? hideGradientView;
    ? carouselBehaviorEnabled;
    ? backgroundMediaInfo;
    ? backgroundMediaController;
    ? paginationHost;
    ? $__lazy_storage_$_previousIndicator;
    ? collectionImpressioner;
    ? $__lazy_storage_$_nextIndicator;
    ? $__lazy_storage_$_containerView;
    ? $__lazy_storage_$_mediaShowcaseConfig;
    ? $__lazy_storage_$_pageControl;
    ? enablePageControlTimer;
    ? chevronDebounceTimer;
    ? swipeController;
    ? $__lazy_storage_$_metadataInteractor;
    ? $__lazy_storage_$_metadataPresenter;
    ? $__lazy_storage_$_metadataView;
    ? $__lazy_storage_$_buttonsPresenter;
    ? $__lazy_storage_$_buttonsView;
    ? observers;
    ? isAutoAdvanceEnabled;
    ? shouldAutoAdvanceLastPage;
    ? autoAdvanceForIdleVideo;
    ? autoAdvancePageTimer;
    ? showsIndicators;
    ? _metadataViewTopOffsetStream;
    ? metadataContentHeightObserver;
    ? $__lazy_storage_$_layout;
    ? isCurrentMetadataLoadedObserver;
    ? isPlayingVideo;
    ? viewMetricsRecorder;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)mediaControllerTapped:(id)arg0 ;
-(void)setControlsVisible:(BOOL)arg0 ;
-(void)transitionToForeground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)transitionToForeground:(BOOL)arg0 withPlaybackControls:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)transitionToFullScreenAnimated:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;


@end


#endif