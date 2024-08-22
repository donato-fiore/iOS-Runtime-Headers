// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMOVIESCRUBBER_H
#define UIMOVIESCRUBBER_H

@class NSString;
@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate, UIMovieScrubberDataSource, UIMovieScrubberDelegate;


#import "UIControl.h"
#import "UIImageView.h"
#import "UIMovieScrubberTrackView.h"
#import "UIMovieScrubberEditingView.h"
#import "UILabel.h"
#import "UIImage.h"
#import "UIPanGestureRecognizer.h"

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate>

 {
    UIImageView *_thumbView;
    UIMovieScrubberTrackView *_trackView;
    UIMovieScrubberEditingView *_editingView;
    UILabel *_elapsedLabel;
    UILabel *_remainingLabel;
    int _timeComponents;
    UIImage *_fillImage;
    UIImage *_innerShadowImage;
    UIImage *_maskImage;
    UIImage *_shadowImage;
    id<UIMovieScrubberDataSource> *_dataSource;
    id<UIMovieScrubberDelegate> *_delegate;
    CGRect _trackRect;
    CGFloat _hitOffset;
    BOOL _editable;
    CGFloat _value;
    CGFloat _maximumValue;
    CGFloat _minimumValue;
    CGPoint _touchLocationWhenTrackPressBegan;
    CGFloat _trimStartValue;
    CGFloat _trimEndValue;
    CGFloat _zoomAnimationDuration;
    CGFloat _zoomAnimationDelay;
    ? _sliderFlags;
    UIPanGestureRecognizer *_panGestureRecognizer;
}


@property (readonly, nonatomic) UIEdgeInsets alignmentMargins;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (nonatomic) NSObject<UIMovieScrubberDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<UIMovieScrubberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat edgeInset; // ivar: _edgeInset
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInsideNavigationBar;
@property (nonatomic) CGFloat maximumTrimLength; // ivar: _maxTrimmedLength
@property (nonatomic) CGFloat minimumTrimLength; // ivar: _minTrimmedLength
@property (nonatomic) BOOL showTimeViews; // ivar: _showTimeViews
@property (readonly) Class superclass;
@property (nonatomic) BOOL thumbIsVisible;
@property (nonatomic) CGFloat trimEndValue;
@property (nonatomic) CGFloat trimStartValue;
@property (nonatomic) CGFloat value;
@property (readonly, nonatomic, getter=isZoomAnimating) BOOL zoomAnimating;
@property (nonatomic) CGFloat zoomDelay; // ivar: _zoomDelay
@property (readonly, nonatomic) CGFloat zoomMaximumValue;
@property (readonly, nonatomic) CGFloat zoomMinimumValue;


+(BOOL)_allowActionsToQueue;
+(id)timeStringForSeconds:(int)arg0 forceFullWidthComponents:(BOOL)arg1 isElapsed:(BOOL)arg2 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)cancelTouchTracking;
-(BOOL)forceZoom;
-(BOOL)isAnimatingValueChange;
-(BOOL)pointInsideThumb:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_valueForLocatable:(id)arg0 ;
-(CGFloat)movieScrubberTrackViewDuration:(id)arg0 ;
-(CGFloat)movieScrubberTrackViewThumbnailAspectRatio:(id)arg0 ;
-(CGFloat)movieScrubberTrackViewZoomAnimationDelay:(id)arg0 ;
-(CGFloat)movieScrubberTrackViewZoomAnimationDuration:(id)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)movieScrubberTrackView:(id)arg0 evenlySpacedTimestamps:(int)arg1 startingAt:(id)arg2 endingAt:(id)arg3 ;
-(int)_editingHandleWithLocatable:(id)arg0 ;
-(struct CGRect )_editingRect;
-(struct CGRect )_editingRectForStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(struct CGRect )thumbRectForValue:(CGFloat)arg0 ;
-(struct CGRect )trackRect;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateAfterEdit:(BOOL)arg0 ;
-(void)_beginTrackPressWithLocatable:(id)arg0 touchesBegan:(BOOL)arg1 ;
-(void)_cancelTrackPress:(BOOL)arg0 ;
-(void)_cancelTrackPressIfNeccessaryWithLocatable:(id)arg0 ;
-(void)_computeTrackRectForBounds:(struct CGRect )arg0 ;
-(void)_controlTouchBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)_controlTouchEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)_controlTouchMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_initSubviews;
-(void)_sliderAnimationDidStop:(BOOL)arg0 ;
-(void)_sliderAnimationWillStart;
-(void)_sliderValueDidChange:(id)arg0 ;
-(void)_trackPressWasHeld;
-(void)_trimAnimationDidStop:(BOOL)arg0 glassView:(id)arg1 ;
-(void)_updateThumbLocation;
-(void)_updateTimes;
-(void)animateAfterEdit;
-(void)animateCancelEdit;
-(void)beginTrackingWithLocatable:(id)arg0 ;
-(void)continueTrackingWithLocatable:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)endTrackingWithLocatable:(id)arg0 ;
-(void)forceUnzoom;
-(void)layoutSubviews;
-(void)movieScrubberTrackView:(id)arg0 clampedSizeWidthDelta:(CGFloat)arg1 actualSizeWidthDelta:(CGFloat)arg2 originXDelta:(CGFloat)arg3 minimumVisibleValue:(CGFloat)arg4 maximumVisibleValue:(CGFloat)arg5 ;
-(void)movieScrubberTrackView:(id)arg0 requestThumbnailImageForTimestamp:(id)arg1 isSummaryThumbnail:(BOOL)arg2 ;
-(void)movieScrubberTrackViewDidCollapse:(id)arg0 ;
-(void)movieScrubberTrackViewDidExpand:(id)arg0 ;
-(void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg0 ;
-(void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg0 ;
-(void)reloadData;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setRotationDisabled:(BOOL)arg0 ;
-(void)setThumbnailImage:(struct CGImage *)arg0 forTimestamp:(id)arg1 ;
-(void)setZoomAnimationDuration:(CGFloat)arg0 ;


@end


#endif