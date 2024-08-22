// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMOVIESCRUBBERTRACKVIEW_H
#define UIMOVIESCRUBBERTRACKVIEW_H

@class NSArray, NSDictionary, NSMutableDictionary;
@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;


#import "UIView.h"
#import "UIMovieScrubberTrackOverlayView.h"

@interface UIMovieScrubberTrackView : UIView {
    NSArray *_summaryThumbnailViews;
    NSArray *_summaryThumbnailTimestamps;
    NSArray *_summaryThumbnailChildTimestamps;
    NSDictionary *_thumbnailStartXValues;
    NSDictionary *_childThumbnailViews;
    NSMutableDictionary *_thumbnailViews;
    NSArray *_timestamps;
    UIMovieScrubberTrackOverlayView *_overlayView;
    UIView *_maskContainerView;
    CGSize _thumbnailSize;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
    float _unclampedZoomWidthDelta;
    float _zoomAnimationDuration;
    CGFloat _duration;
    CGFloat _value;
    CGFloat _startValue;
    CGFloat _endValue;
    ? _trackFlags;
}


@property (weak, nonatomic) NSObject<UIMovieScrubberTrackViewDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<UIMovieScrubberTrackViewDelegate> *delegate; // ivar: _delegate


-(BOOL)zoomAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)zoomAnimationDuration;
-(id)_createImageViewForTimestamp:(id)arg0 isSummaryThumbnail:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_reallyReloadData;
-(void)_setOverlayViewIsZoomed:(BOOL)arg0 minValue:(float)arg1 maxValue:(float)arg2 ;
-(void)_unzoomAnimationDidFinish;
-(void)_zoomAnimationDidFinish;
-(void)animateFillFramesAway;
-(void)clear;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setEditing:(BOOL)arg0 ;
-(void)setEndValue:(CGFloat)arg0 ;
-(void)setStartValue:(CGFloat)arg0 ;
-(void)setThumbnailImage:(struct CGImage *)arg0 forTimestamp:(id)arg1 ;
-(void)setValue:(CGFloat)arg0 ;
-(void)setZoomAnimationDuration:(CGFloat)arg0 ;
-(void)unzoom;


@end


#endif