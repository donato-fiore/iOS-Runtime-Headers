// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPOSTPLAYVIEW_H
#define VUIPOSTPLAYVIEW_H

@class UIView, NSNumber, AVBackgroundView, TVImageProxy, _TVImageView, NSString;
@protocol VUIPostPlayViewDelegate;


#import "VUICountDownProgressIndicator.h"
#import "VUILabel.h"

@interface VUIPostPlayView : UIView

@property (retain, nonatomic) NSNumber *autoPlayDuration; // ivar: _autoPlayDuration
@property (retain, nonatomic) VUICountDownProgressIndicator *autoPlayIndicator; // ivar: _autoPlayIndicator
@property (retain, nonatomic) AVBackgroundView *backgroundView; // ivar: _backgroundView
@property (nonatomic) BOOL canAutoPlay; // ivar: _canAutoPlay
@property (retain, nonatomic) NSNumber *defaultAutoPlayDuration; // ivar: _defaultAutoPlayDuration
@property (weak, nonatomic) NSObject<VUIPostPlayViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) TVImageProxy *episodeImageProxy; // ivar: _episodeImageProxy
@property (retain, nonatomic) _TVImageView *episodeImageView; // ivar: _episodeImageView
@property (retain, nonatomic) NSString *header; // ivar: _header
@property (retain, nonatomic) VUILabel *headerLabel; // ivar: _headerLabel
@property (retain, nonatomic) VUILabel *nextEpisodeLabel; // ivar: _nextEpisodeLabel
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 andEpisodeArtworkURLStringFormat:(id)arg1 andTitle:(id)arg2 andHeader:(id)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 andTVImageProxy:(id)arg1 andTitle:(id)arg2 andHeader:(id)arg3 ;
-(struct CGSize )_layoutForCategoryAccessibility:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutForOriginal:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutWithSize:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dispatchAutoPlayEvent;
-(void)_invalidateAutoPlayIfNeeded;
-(void)_setupViews;
-(void)_startAutoPlayAnimation;
-(void)layoutSubviews;
-(void)startAutoPlayTimer;
-(void)stopAutoPlayTimer;


@end


#endif