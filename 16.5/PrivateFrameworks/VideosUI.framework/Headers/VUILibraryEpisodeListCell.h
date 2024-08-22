// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYEPISODELISTCELL_H
#define VUILIBRARYEPISODELISTCELL_H

@class NSString, UIStackView;
@protocol VUIMediaEntityAssetController;


#import "VUIListCollectionViewCell.h"
#import "VUILabel.h"
#import "VUIDownloadButton.h"
#import "VUILibraryEpisodeFrameView.h"
#import "VUIMediaItem.h"
#import "VUISeparatorView.h"

@interface VUILibraryEpisodeListCell : VUIListCollectionViewCell

@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController; // ivar: _assetController
@property (retain, nonatomic) VUILabel *dotSeparatorLabel; // ivar: _dotSeparatorLabel
@property (retain, nonatomic) VUIDownloadButton *downloadButton; // ivar: _downloadButton
@property (copy, nonatomic) NSString *duration; // ivar: _duration
@property (retain, nonatomic) VUILabel *durationLabel; // ivar: _durationLabel
@property (retain, nonatomic) UIStackView *episodeInfoStackView; // ivar: _episodeInfoStackView
@property (retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView; // ivar: _imageFrameView
@property (retain, nonatomic) VUIMediaItem *mediaItem; // ivar: _mediaItem
@property (copy, nonatomic) NSString *releaseDate; // ivar: _releaseDate
@property (retain, nonatomic) VUILabel *releaseDateLabel; // ivar: _releaseDateLabel
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


+(id)_metadataLabelWithString:(id)arg0 existingLabel:(id)arg1 ;
+(void)configureVUILibraryEpisodeListCell:(id)arg0 withMedia:(id)arg1 andAssetController:(id)arg2 ;
-(BOOL)_contentSizeCategoryIsAccessibility;
-(CGFloat)_metadataHeightToBaselineNonAXContentSizeCategory;
-(CGFloat)_metadataScaledTopMarginForNonAXContentSizeCategory;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addDownloadButtonIfRequired:(id)arg0 ;
-(void)_configureDotSeparator;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif