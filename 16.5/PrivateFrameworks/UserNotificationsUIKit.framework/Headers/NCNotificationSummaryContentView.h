// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONSUMMARYCONTENTVIEW_H
#define NCNOTIFICATIONSUMMARYCONTENTVIEW_H

@class UIView, UILabel, NSArray, UIImageView, UILabel<BSUIDateLabel>, MTVisualStylingProvider, NSStringDrawingContext, NSString, NSDate;
@protocol BSUIDateLabelDelegate, NCNotificationSummaryContentDisplaying;



@interface NCNotificationSummaryContentView : UIView <BSUIDateLabelDelegate, NCNotificationSummaryContentDisplaying>

 {
    UILabel *_summaryTitleLabel;
    UILabel *_summaryLabel;
    UIView *_summaryIconsContainerView;
    NSArray *_iconViews;
    UIImageView *_summaryIconSymbolImageView;
    UIView *_summaryIconSymbolBackgroundView;
    UILabel<BSUIDateLabel> *_summaryDateLabel;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSStringDrawingContext *_drawingContext;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalLeadingMargin; // ivar: _horizontalLeadingMargin
@property (nonatomic) CGFloat horizontalTrailingMargin; // ivar: _horizontalTrailingMargin
@property (nonatomic, getter=isIconViewLeading) BOOL iconViewLeading; // ivar: _iconViewLeading
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSDate *summaryDate; // ivar: _summaryDate
@property (copy, nonatomic) NSString *summaryIconSymbolName; // ivar: _summaryIconSymbolName
@property (retain, nonatomic) NSArray *summaryIconViews;
@property (nonatomic, getter=isSummaryLabelMaterialSecondary) BOOL summaryLabelMaterialSecondary; // ivar: _summaryLabelMaterialSecondary
@property (copy, nonatomic) NSString *summaryTitle;
@property (copy, nonatomic) NSString *summaryTitleFontName; // ivar: _summaryTitleFontName
@property (readonly) Class superclass;


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_widthForIconsContainerView;
-(NSInteger)_dateFormatStyleForDate:(id)arg0 ;
-(NSUInteger)_maximumNumberOfLinesForSummaryText;
-(NSUInteger)_maximumNumberOfLinesForSummaryTitleText;
-(NSUInteger)_numberOfLinesForSummaryTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForSummaryTitleTextInFrame:(struct CGRect )arg0 ;
-(id)_dateLabelFont;
-(id)_dateLabelPreferredFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_adjustedRectForLabelLayoutFromRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addShadowForIconView:(id)arg0 ;
-(void)_layoutSummaryDateLabel;
-(void)_layoutSummaryIconsView;
-(void)_layoutSummaryLabel;
-(void)_layoutSummaryTitleLabel;
-(void)_recycleDateLabel;
-(void)_tearDownDateLabelIfNecessary;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForDateLabel;
-(void)_updateTextAttributesForSummaryLabel;
-(void)_updateTextAttributesForSummaryTitleLabel;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_updateVisualStylingProvidersForIconViewIfNecessary:(id)arg0 ;
-(void)_updateVisualStylingProvidersForIconViewsIfNecessary;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)dateLabelDidChange:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif