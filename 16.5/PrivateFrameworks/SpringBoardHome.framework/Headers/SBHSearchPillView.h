// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSEARCHPILLVIEW_H
#define SBHSEARCHPILLVIEW_H

@class UIView, _UILegibilitySettings, UIImageView, UILabel;
@protocol SBHSearchAffordance;



@interface SBHSearchPillView : UIView <SBHSearchAffordance>



@property (nonatomic) BOOL appliesSearchAffordanceCornerRadius; // ivar: _appliesSearchAffordanceCornerRadius
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGRect clientReferenceFrame; // ivar: _clientReferenceFrame
@property (readonly, nonatomic) UIView *contentContainerView; // ivar: _contentContainerView
@property (nonatomic) NSInteger labelAlignment; // ivar: _labelAlignment
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) UIView *searchAffordanceBackgroundView;
@property (nonatomic) NSInteger searchAffordanceContentAlignment;
@property (readonly, nonatomic) UIView *searchAffordanceContentView;
@property (nonatomic) CGFloat searchAffordanceCornerRadius; // ivar: _searchAffordanceCornerRadius
@property (weak, nonatomic) UIView *searchAffordanceReferenceContainerView; // ivar: _searchAffordanceReferenceContainerView
@property (nonatomic) CGRect searchAffordanceReferenceFrame;
@property (retain, nonatomic) UIView *searchAffordanceReferenceView; // ivar: _searchAffordanceReferenceView
@property (readonly, nonatomic) UIImageView *searchGlyphImageView; // ivar: _searchGlyphImageView
@property (readonly, nonatomic) UILabel *searchLabel; // ivar: _searchLabel


+(id)searchPillViewWithSystemDefaultBackground;
-(CGFloat)halfFloatRoundForScale:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif