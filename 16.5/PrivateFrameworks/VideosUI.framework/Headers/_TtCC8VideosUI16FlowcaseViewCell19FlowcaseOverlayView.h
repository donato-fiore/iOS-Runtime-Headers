// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC8VIDEOSUI16FLOWCASEVIEWCELL19FLOWCASEOVERLAYVIEW_H
#define _TTCC8VIDEOSUI16FLOWCASEVIEWCELL19FLOWCASEOVERLAYVIEW_H

@protocol VUISportsScoreboardManagerDelegate, VUIScorecardViewDelegate;


#import "VUIBaseView.h"

@interface _TtCC8VideosUI16FlowcaseViewCell19FlowcaseOverlayView : VUIBaseView <VUISportsScoreboardManagerDelegate, VUIScorecardViewDelegate>

 {
    ? transitionAnimationDuration;
    ? overlayLayout;
    ? gradientColor;
    ? disableGradient;
    ? titleView;
    ? badgeView;
    ? scorecardView;
    ? originalScoreboardViewModel;
    ? scoreboardViewModel;
    ? backgroundImageForMaterial;
    ? backgroundImageHasChanged;
    ? scorecardViewBackgroundImage;
    ? pendingOperation;
    ? isOperationCancelledObserver;
    ? isOperationFinishedObserver;
    ? verticalStackView;
    ? logoImageView;
    ? channelLogoView;
    ? alphaImageView;
    ? isPlayingVideo;
    ? $__lazy_storage_$_logoGradientView;
    ? $__lazy_storage_$_visualEffectContainerView;
    ? $__lazy_storage_$_visualEffectView;
    ? nonPlaybackGradientView;
    ? $__lazy_storage_$_playbackGradientView;
    ? $__lazy_storage_$_opacityMaskLayer;
}




-(CGFloat)maximumWidthForScorecardView:(id)arg0 ;
-(NSInteger)numberOfRowsInScorecardView:(id)arg0 ;
-(NSInteger)numberOfScoreValuesForScorecardView:(id)arg0 inRow:(NSInteger)arg1 ;
-(NSInteger)styleForScorecardView:(id)arg0 ;
-(id)backgroundImageForScorecardViewMaterial:(id)arg0 ;
-(id)getJSContextDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)scoreValue:(id)arg0 inRow:(NSInteger)arg1 atIndex:(NSInteger)arg2 ;
-(int)backgroundBlendModeForScoreValueInRow:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct UIEdgeInsets )marginsForRow:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(void)updateScoreboard:(id)arg0 ;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif