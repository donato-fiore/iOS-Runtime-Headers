// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONRICHCONTENTVIEW_H
#define NCNOTIFICATIONRICHCONTENTVIEW_H

@class UIView, UILabel, UIImageView, UILabel<BSUIDateLabel>, NSDate, NSString, BSUIFontProvider, NSAttributedString, UIImageConfiguration, MTVisualStylingProvider, UIAction, UIImage, NSArray, NSTimeZone;
@protocol BSUIDateLabelDelegate, NCNotificationContentDisplaying;


#import "NCNotificationListBaseContentView.h"
#import "NCBadgedIconView.h"

@interface NCNotificationRichContentView : NCNotificationListBaseContentView <BSUIDateLabelDelegate, NCNotificationContentDisplaying>

 {
    UIView *_crossfadingContentView;
    UILabel *_primaryTextLabel;
    UILabel *_primarySubtitleTextLabel;
    UILabel *_secondaryTextLabel;
    UILabel *_footerTextLabel;
    UIView *_imageBoundingView;
    UIImageView *_thumbnailImageView;
    UILabel<BSUIDateLabel> *_dateLabel;
    NCBadgedIconView *_badgedIconView;
    BOOL _hasUpdatedContent;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL alignContentToBottom;
@property (nonatomic, getter=isAttachmentImageFeatured) BOOL attachmentImageFeatured; // ivar: _attachmentImageFeatured
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay; // ivar: _dateAllDay
@property (nonatomic) NSInteger dateFormatStyle; // ivar: _dateFormatStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BSUIFontProvider *fontProvider;
@property (copy, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
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
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIImage *thumbnail;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(BOOL)_isAXSize;
-(CGFloat)_featuredImageHeightForBounds:(struct CGRect )arg0 ;
-(CGFloat)_labelLayoutHorizontalMargin;
-(NSInteger)_dateFormatStyleForDate:(id)arg0 ;
-(NSUInteger)_maximumNumberOfLinesForFooterText;
-(NSUInteger)_maximumNumberOfLinesForPrimarySubtitleText;
-(NSUInteger)_maximumNumberOfLinesForPrimaryText;
-(NSUInteger)_maximumNumberOfLinesForSecondaryText;
-(NSUInteger)_numberOfLinesForFooterTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForPrimarySubtitleTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForPrimaryTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForSecondaryTextInFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_labelSizingBoundsForRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBadgeIconViewIfNecessary;
-(void)_configureCrossfadingContentViewIfNecessary;
-(void)_configureDateLabel;
-(void)_configureDateLabelIfNecessary;
-(void)_layoutBadgedIconView;
-(void)_layoutDateLabel;
-(void)_layoutFooterTextLabel;
-(void)_layoutImageBoundingView;
-(void)_layoutPrimarySubtitleTextLabel;
-(void)_layoutPrimaryTextLabel;
-(void)_layoutSecondaryTextLabel;
-(void)_layoutSubviews;
-(void)_layoutThumbnailImageView;
-(void)_recycleDateLabel;
-(void)_tearDownDateLabel;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)dateLabelDidChange:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif