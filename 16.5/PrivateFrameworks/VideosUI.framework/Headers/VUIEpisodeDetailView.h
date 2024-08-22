// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIEPISODEDETAILVIEW_H
#define VUIEPISODEDETAILVIEW_H

@class UIScrollView, UIFont, NSString;
@protocol VUILibraryEpisodeFrameViewDelegate, VUIEpisodeDetailViewDelegate;


#import "VUIFocusableTextView.h"
#import "VUILabel.h"
#import "VUILibraryEpisodeFrameView.h"
#import "VUIMediaTagsView.h"
#import "VUIMediaItem.h"

@interface VUIEpisodeDetailView : UIScrollView <VUILibraryEpisodeFrameViewDelegate>



@property (retain, nonatomic) UIFont *contentDescriptionFont; // ivar: _contentDescriptionFont
@property (retain, nonatomic) VUIFocusableTextView *contentDescriptionView; // ivar: _contentDescriptionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel; // ivar: _dotSeparatorLabel
@property (retain, nonatomic) VUILabel *episodeNumberLabel; // ivar: _episodeNumberLabel
@property (retain, nonatomic) VUILabel *episodeTitleLabel; // ivar: _episodeTitleLabel
@property (weak, nonatomic) NSObject<VUIEpisodeDetailViewDelegate> *episodeViewDelegate; // ivar: _episodeViewDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView; // ivar: _imageFrameView
@property (retain, nonatomic) VUIMediaTagsView *mediaBadgeTagsView; // ivar: _mediaBadgeTagsView
@property (retain, nonatomic) VUIMediaItem *mediaItem; // ivar: _mediaItem
@property (retain, nonatomic) VUILabel *releaseDateLabel; // ivar: _releaseDateLabel
@property (retain, nonatomic) VUILabel *seasonNumberLabel; // ivar: _seasonNumberLabel
@property (readonly) Class superclass;


+(struct CGSize )_episodeFrameImageSizeForDetailView:(id)arg0 withViewSize:(struct CGSize )arg1 ;
+(void)configureEpisodeDetailView:(id)arg0 withMedia:(id)arg1 viewSize:(struct CGSize )arg2 ;
-(CGFloat)_descriptionBottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)_descriptionTopMarginWithBaselineMargin:(CGFloat)arg0 otherFont:(id)arg1 ;
-(CGFloat)_seasonMargin;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureDotSeparator;
-(void)_configureViewElementsForAX;
-(void)didTapButtonForEpisodeFrameView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif