// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCDIGESTMOSAICFEATUREDNOTIFICATIONCONTENTVIEW_H
#define NCDIGESTMOSAICFEATUREDNOTIFICATIONCONTENTVIEW_H

@class UIView, UILabel, UIImageView, CAGradientLayer, UIColor, MTStylingProvidingSolidColorView, NSDate, NSString, BSUIFontProvider, NSAttributedString, UIImageConfiguration, MTVisualStylingProvider, UIAction, UIImage, NSArray, NSTimeZone;
@protocol NCNotificationContentDisplaying;


#import "NCNotificationListBaseContentView.h"

@interface NCDigestMosaicFeaturedNotificationContentView : NCNotificationListBaseContentView <NCNotificationContentDisplaying>

 {
    UIView *_clippingView;
    UIView *_crossfadingContentView;
    UILabel *_primaryTextLabel;
    UILabel *_primarySubtitleTextLabel;
    UILabel *_secondaryTextLabel;
    UILabel *_footerTextLabel;
    UIView *_imageBoundingView;
    UIImageView *_thumbnailImageView;
    UIImageView *_iconImageView;
    UIView *_backgroundView;
    CAGradientLayer *_backgroundGradientLayer;
    UIColor *_backgroundColor;
    MTStylingProvidingSolidColorView *_backgroundColorView;
    BOOL _hasUpdatedContent;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL alignContentToBottom;
@property (nonatomic) NSUInteger contentViewStyle; // ivar: _contentViewStyle
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BSUIFontProvider *fontProvider;
@property (copy, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalMarginForContentOverlap; // ivar: _horizontalMarginForContentOverlap
@property (readonly, nonatomic) CGFloat imageAttachmentSizeRatio;
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (copy, nonatomic) NSString *importantText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (copy, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (copy, nonatomic) UIAction *inlineAction;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (nonatomic) NSUInteger primarySubtitleTextMaximumNumberOfLines;
@property (copy, nonatomic) NSString *primaryText;
@property (nonatomic) NSUInteger primaryTextMaximumNumberOfLines;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIView *prominentIconView;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) NSUInteger secondaryTextMaximumNumberOfLines; // ivar: _secondaryTextMaximumNumberOfLines
@property (copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIImage *thumbnail;
@property (copy, nonatomic) NSTimeZone *timeZone;


-(BOOL)_isAXSize;
-(BOOL)_isContentViewStyleLarge;
-(BOOL)_isContentViewStyleMedium;
-(BOOL)_isContentViewStyleSmall;
-(CGFloat)_imageHeightForBounds:(struct CGRect )arg0 ;
-(NSUInteger)_maximumNumberOfLinesForFooterText;
-(NSUInteger)_maximumNumberOfLinesForPrimarySubtitleText;
-(NSUInteger)_maximumNumberOfLinesForPrimaryText;
-(NSUInteger)_maximumNumberOfLinesForSecondaryText;
-(NSUInteger)_numberOfLinesForFooterTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForPrimarySubtitleTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForPrimaryTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForSecondaryTextInFrame:(struct CGRect )arg0 ;
-(struct CGRect )_labelSizingBoundsForRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundColorViewIfNecessary;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureClippingViewIfNecessary;
-(void)_configureCrossfadingContentViewIfNecessary;
-(void)_configureImageBoundingViewIfNecessary;
-(void)_layoutBackgroundView;
-(void)_layoutFooterTextLabel;
-(void)_layoutIconImageView;
-(void)_layoutImageBoundingView;
-(void)_layoutPrimarySubtitleTextLabel;
-(void)_layoutPrimaryTextLabel;
-(void)_layoutSecondaryTextLabel;
-(void)_layoutSubviews;
-(void)_layoutThumbnailImageView;
-(void)_updateBackgroundColorForIconImage:(id)arg0 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif