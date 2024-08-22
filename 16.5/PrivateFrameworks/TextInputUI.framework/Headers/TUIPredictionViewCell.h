// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIPREDICTIONVIEWCELL_H
#define TUIPREDICTIONVIEWCELL_H

@class UIView, UIColor, TIKeyboardCandidate, NSString, UIImage, UIImageView, UIFont, UIScrollView, UIMorphingLabel, UILabel, UIKBRenderConfig;
@protocol UIScrollViewDelegate;



@interface TUIPredictionViewCell : UIView <UIScrollViewDelegate>



@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIColor *backgroundViewHighlightColor; // ivar: _backgroundViewHighlightColor
@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (nonatomic) CGFloat highlightCornerRadius; // ivar: _highlightCornerRadius
@property (nonatomic) CGFloat highlightMargin; // ivar: _highlightMargin
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIFont *labelFont;
@property (nonatomic, getter=isLabelTruncated) BOOL labelTruncated; // ivar: _labelTruncated
@property (readonly, nonatomic) NSInteger layoutType;
@property (retain, nonatomic) UIView *leftSeparatorView; // ivar: _leftSeparatorView
@property (retain, nonatomic) UIScrollView *maskingScrollView; // ivar: _maskingScrollView
@property (retain, nonatomic) UIMorphingLabel *morphingLabel; // ivar: _morphingLabel
@property (retain, nonatomic) UILabel *normalLabel; // ivar: _normalLabel
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (retain, nonatomic) UIView *rightSeparatorView; // ivar: _rightSeparatorView
@property (nonatomic) NSUInteger roundedHighlightEdges; // ivar: _roundedHighlightEdges
@property (retain, nonatomic) UIView *secureCandidateLabel; // ivar: _secureCandidateLabel
@property (retain, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (nonatomic) CGFloat separatorMargin; // ivar: _separatorMargin
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) BOOL useContinuousCornerInHighlight; // ivar: _useContinuousCornerInHighlight
@property (nonatomic) NSUInteger visibleSeparatorEdges; // ivar: _visibleSeparatorEdges


+(id)cellHighlightColorForDarkStyle:(BOOL)arg0 ;
-(BOOL)_isEmojiCandidate:(id)arg0 ;
-(BOOL)_isSecureCandidate:(id)arg0 ;
-(BOOL)_renderConfigUsesDarkStyle:(id)arg0 ;
-(BOOL)_usePadStyle;
-(BOOL)_usesMorphingLabelForCandidate:(id)arg0 ;
-(BOOL)candidateRequiresTruncationForBoundingWidth:(CGFloat)arg0 ;
-(BOOL)useAutofillStyle;
-(CGFloat)_preferredFontSize;
-(id)_displayLabelForCandidate:(id)arg0 ;
-(id)attributedStringRepresentationOfCandidate:(id)arg0 ;
-(id)centerTruncatedStringForString:(id)arg0 withAttributes:(id)arg1 fittingWidth:(CGFloat)arg2 ;
-(id)currentTextSuggestion;
-(id)displayTextAttributesForMultiline:(BOOL)arg0 header:(BOOL)arg1 ;
-(id)headerTextAttributes;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)labelView;
-(id)labelViewForCandidate:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )labelTextSizeForCandidate:(id)arg0 ;
-(void)_updateColorsForRenderConfig:(id)arg0 highlighted:(BOOL)arg1 ;
-(void)_updateCornerRadius;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif