// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILABEL_H
#define VUILABEL_H

@class UILabel, UIColor, NSString, NSAttributedString, UIFont;
@protocol VUILabelBaselineProtocol;


#import "VUITextLayout.h"

@interface VUILabel : UILabel <VUILabelBaselineProtocol>

 {
    BOOL _selected;
    BOOL _lastSelectedOrHighlighted;
}


@property (retain, nonatomic) UIColor *adjustmentModeNormalTintColor; // ivar: _adjustmentModeNormalTintColor
@property (copy, nonatomic) id *attributedTextProvider; // ivar: _attributedTextProvider
@property (nonatomic) CGSize cachedSizeThatFits; // ivar: _cachedSizeThatFits
@property (nonatomic) CGRect cachedTextRectForBounds; // ivar: _cachedTextRectForBounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *labelName; // ivar: _labelName
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) CGRect previousBounds; // ivar: _previousBounds
@property (nonatomic) NSInteger previousNumberOfLines; // ivar: _previousNumberOfLines
@property (nonatomic) CGSize previousTargetSize; // ivar: _previousTargetSize
@property (readonly) Class superclass;
@property (retain, nonatomic) VUITextLayout *textLayout; // ivar: _textLayout
@property (retain, nonatomic) NSAttributedString *vuiAttributedText;
@property (readonly, nonatomic) CGFloat vuiBaselineHeight;
@property (readonly, nonatomic) UIFont *vuiFont;
@property (nonatomic) NSUInteger vuiNumberOfLines;
@property (copy, nonatomic) NSString *vuiText;
@property (nonatomic) NSInteger vuiTextAlignment;


+(NSUInteger)_numberOfLinesForLayout:(id)arg0 ;
+(id)labelWithAttributedString:(id)arg0 textLayout:(id)arg1 existingLabel:(id)arg2 ;
+(id)labelWithString:(id)arg0 textLayout:(id)arg1 existingLabel:(id)arg2 ;
-(BOOL)_updateTextColorExcludingAttachments:(id)arg0 ;
-(BOOL)requiresMoreThanOneLineForTextWidth:(CGFloat)arg0 ;
-(CGFloat)baselineHeight;
-(CGFloat)bottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)bottomMarginWithBaselineMargin:(CGFloat)arg0 maximumContentSizeCategory:(NSUInteger)arg1 ;
-(CGFloat)topMarginToLabel:(id)arg0 withBaselineMargin:(CGFloat)arg1 ;
-(CGFloat)topMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)topMarginWithBaselineMargin:(CGFloat)arg0 maximumContentSizeCategory:(NSUInteger)arg1 ;
-(CGFloat)vui_baselineOffsetFromBottom;
-(NSUInteger)numberOfLinesRequiredForTextWidth:(CGFloat)arg0 ;
-(id)_rangeOfStringExcludingAttachments;
-(id)attributedText;
-(id)defaultParagraphStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)vuiBackgroundColor;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 limitedToNumberOfLines:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_clearCachedValues;
-(void)_configureAlignmentIfNeeded;
-(void)_updateCompositingFilter;
-(void)_updateTextColor;
-(void)_updateTextColor:(BOOL)arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)revertTintColor;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setBaselineAdjustment:(NSInteger)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setLineBreakMode:(NSInteger)arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setText:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)setVuiBackgroundColor:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vui_setHighlighted:(BOOL)arg0 ;
-(void)vui_setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;


@end


#endif