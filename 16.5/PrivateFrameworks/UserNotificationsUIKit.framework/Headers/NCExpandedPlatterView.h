// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCEXPANDEDPLATTERVIEW_H
#define NCEXPANDEDPLATTERVIEW_H

@class PLExpandedPlatterView, UIView, NSDate, NSString, UITapGestureRecognizer, NSAttributedString, UIImageConfiguration, MTVisualStylingProvider, UIAction, NSArray, UIImage, NSTimeZone;
@protocol UIGestureRecognizerDelegate, PLContentSizeCategoryAdjusting, NCNotificationSeamlessContentViewDelegate, NCNotificationStaticContentAccepting, NCExpandedPlatterViewDelegate;


#import "NCNotificationSeamlessContentView.h"

@interface NCExpandedPlatterView : PLExpandedPlatterView <UIGestureRecognizerDelegate, PLContentSizeCategoryAdjusting, NCNotificationSeamlessContentViewDelegate, NCNotificationStaticContentAccepting>

 {
    NCNotificationSeamlessContentView *_notificationContentView;
}


@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) NSInteger dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UITapGestureRecognizer *defaultTapGestureRecognizer; // ivar: _defaultTapGestureRecognizer
@property (weak, nonatomic) NSObject<NCExpandedPlatterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesNotificationContent; // ivar: _hidesNotificationContent
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (copy, nonatomic) NSString *importantText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (retain, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (copy, nonatomic) UIAction *inlineAction;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (nonatomic) NSUInteger maximumNumberOfPrimaryTextLines;
@property (nonatomic) NSUInteger maximumNumberOfSecondaryTextLines;
@property (copy, nonatomic) NSArray *menuActions; // ivar: _menuActions
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIView *prominentIconView;
@property (nonatomic, getter=isScrollViewPinnedToBottom) BOOL scrollViewPinnedToBottom; // ivar: _scrollViewPinnedToBottom
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *summaryText;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIImage *thumbnail;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;


-(BOOL)_tapGestureRecognizerShouldReceiveTouch:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)accessibilityIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_mainContentViewFrame;
-(struct CGSize )_contentViewSize;
-(struct CGSize )contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)_configureDefaultTapGestureRecognizerIfNecessary;
-(void)_configureNotificationContentViewIfNecessary;
-(void)_layoutNotificationContentView;
-(void)_layoutSubviews;
-(void)layoutSubviews;
-(void)notificationSeamlessContentView:(id)arg0 requestsInteractionWithURL:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif