// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI23CANONICALBANNERVIEWCELL_H
#define _TTC8VIDEOSUI23CANONICALBANNERVIEWCELL_H

@class VUIImageView, NSArray, UIView;


#import "VUIBaseCollectionViewCell.h"
#import "VUILabel.h"
#import "_TtC8VideosUI16RolesSummaryView.h"
#import "VUIMediaTagsView.h"

@interface _TtC8VideosUI23CanonicalBannerViewCell : VUIBaseCollectionViewCell {
    ? bannerViewModel;
    ? bannerLayout;
    ? collectionViewFrameSize;
    ? titleImageView;
    ? contentTitleView;
    ? contentSubtitleView;
    ? episodeInfoTextView;
    ? promoTextView;
    ? coverArtImageView;
    ? buttonViews;
    ? availabilityTextView;
    ? availabilityImageView;
    ? disclaimerTextView;
    ? descriptionTextView;
    ? rolesSummaryView;
    ? tagsView;
    ? infoTagsView;
    ? uberBackgroundView;
    ? backgroundImageViewModel;
    ? gradientLayer;
    ? gradientLayerView;
    ? descComputationLabel;
    ? tagsComputationLabel;
    ? syndicationId;
    ? attributionViewHeight;
    ? showAttributionViewBelowBanner;
    ? $__lazy_storage_$_pillSeparatorView;
    ? attributionView;
    ? transitionBackgroundView;
    ? isUberLayout;
    ? isPhoneSizeClass;
    ? isBackgroundTransitioning;
    ? isImageLoadedForBackgroundTransitioning;
    ? bannerButtonSpacing;
    ? disclaimerTextBottomSpacing;
    ? contentOffset;
    ? $__lazy_storage_$_separatorView;
}


@property (nonatomic, readonly) VUIImageView *accessibilityAvailabilityImageView;
@property (nonatomic, readonly) VUILabel *accessibilityAvailabilityTextView;
@property (nonatomic, readonly) NSArray *accessibilityButtonViews;
@property (nonatomic, readonly) VUILabel *accessibilityContentSubtitleView;
@property (nonatomic, readonly) VUILabel *accessibilityContentTitleView;
@property (nonatomic, readonly) UIView *accessibilityDescriptionTextView;
@property (nonatomic, readonly) VUILabel *accessibilityDisclaimerTextView;
@property (nonatomic, readonly) VUILabel *accessibilityEpisodeInfoTextView;
@property (nonatomic, readonly) VUILabel *accessibilityPromoTextView;
@property (nonatomic, readonly) _TtC8VideosUI16RolesSummaryView *accessibilityRolesSummaryView;
@property (nonatomic, readonly) VUIMediaTagsView *accessibilityTagsView;
@property (nonatomic, readonly) VUIImageView *accessibilityTitleImageView;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vui_cellWillBeDisplayed;
-(void)vui_prepareForReuse;


@end


#endif