// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONSHORTLOOKVIEW_H
#define NCNOTIFICATIONSHORTLOOKVIEW_H

@class UIView, PLPlatterView, BSUIFontProvider, UIView<NCNotificationContentDisplaying>, NSArray, NSString, UIColor, MTMaterialView, NSDate, NSAttributedString, UIImageConfiguration, MTVisualStylingProvider, UIAction, UIImage, NSTimeZone;
@protocol PLPlatter, NCNotificationStaticContentAccepting, NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting, MTMaterialGrouping, NCNotificationListDimmable;


#import "NCAuxiliaryOptionsView.h"
#import "NCNotificationListStackDimmingOverlayView.h"

@interface NCNotificationShortLookView : UIView <PLPlatter, NCNotificationStaticContentAccepting, NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting, MTMaterialGrouping, NCNotificationListDimmable>

 {
    PLPlatterView *_platterView;
    BSUIFontProvider *_fontProvider;
    UIView<NCNotificationContentDisplaying> *_notificationContentView;
    NCAuxiliaryOptionsView *_auxiliaryOptionsView;
    NCNotificationListStackDimmingOverlayView *_stackDimmingOverlayView;
}


@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL alignContentToBottom; // ivar: _alignContentToBottom
@property (retain, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, nonatomic) NSArray *auxiliaryOptionButtons;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly, nonatomic) MTMaterialView *backgroundMaterialView;
@property (nonatomic, getter=_isBanner, setter=_setBanner:) BOOL banner; // ivar: _banner
@property (readonly, nonatomic) UIView *customContentView;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) BOOL hasShadow;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (copy, nonatomic) NSString *importantText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (retain, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (copy, nonatomic) UIAction *inlineAction;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (nonatomic) NSInteger materialRecipe;
@property (copy, nonatomic) UIColor *materialTintColor;
@property (nonatomic) NSUInteger maximumNumberOfPrimaryTextLines;
@property (nonatomic) NSUInteger maximumNumberOfSecondaryTextLines;
@property (copy, nonatomic) NSArray *menuActions;
@property (nonatomic, getter=isNotificationContentViewHidden) BOOL notificationContentViewHidden;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIView *prominentIconView;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIImage *thumbnail;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isTruncatingSecondaryText) BOOL truncatingSecondaryText;


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_continuousCornerRadius;
-(CGFloat)_cornerRadius;
-(id)_fontProvider;
-(id)_newNotificationContentView;
-(id)_notificationContentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)notificationContentView;
-(struct CGSize )_sizeThatFitsContentWithSize:(struct CGSize )arg0 withAuxiliaryOptionsViewVisible:(BOOL)arg1 ;
-(struct CGSize )contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)_configureAuxiliaryOptionsViewIfNecessary;
-(void)_configureNotificationContentViewIfNecessary;
-(void)_configurePlatterViewIfNeccesary;
-(void)_layoutAuxiliaryOptionsView;
-(void)_layoutNotificationContentView;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_setFontProvider:(id)arg0 ;
-(void)configureStackDimmingForTransform:(struct CGAffineTransform )arg0 ;
-(void)layoutSubviews;


@end


#endif