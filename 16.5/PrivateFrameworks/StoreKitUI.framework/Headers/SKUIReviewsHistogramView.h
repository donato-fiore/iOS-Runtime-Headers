// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREVIEWSHISTOGRAMVIEW_H
#define SKUIREVIEWSHISTOGRAMVIEW_H

@class UIView, UILabel, NSMutableDictionary, UISegmentedControl, UIImageView, UIControl, NSArray, NSString;


#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"

@interface SKUIReviewsHistogramView : UIView {
    SKUIClientContext *_clientContext;
    UILabel *_countLabel;
    NSMutableDictionary *_ratings;
    UISegmentedControl *_segmentedControl;
    UILabel *_starRatingControlLabel;
    UILabel *_titleLabel;
    CGFloat _userRating;
    UIImageView *_userRatingStarsView;
    UIView *_bottomSeparatorView;
    UIImageView *_histogramImageView;
}


@property (readonly, nonatomic) UIControl *appSupportButton; // ivar: _appSupportButton
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (retain, nonatomic) NSArray *histogramValues; // ivar: _histogramValues
@property (nonatomic) NSInteger numberOfUserRatings; // ivar: _numberOfUserRatings
@property (nonatomic) NSInteger personalStarRating;
@property (readonly, nonatomic) UIControl *segmentedControl;
@property (copy, nonatomic) NSArray *segmentedControlTitles;
@property (nonatomic) NSInteger selectedSegmentIndex;
@property (readonly, nonatomic) UIControl *starRatingControl; // ivar: _starRatingControl
@property (copy, nonatomic) NSString *title;
@property (nonatomic) CGFloat userRating;
@property (copy, nonatomic) NSString *versionString; // ivar: _versionString
@property (readonly, nonatomic) UIControl *writeAReviewButton; // ivar: _writeAReviewButton


-(id)_countLabelString;
-(id)_histogramImageForValues:(id)arg0 ;
-(id)initWithClientContext:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif