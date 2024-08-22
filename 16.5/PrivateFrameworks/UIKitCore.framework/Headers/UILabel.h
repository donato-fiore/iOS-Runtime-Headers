// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UILABEL_H
#define UILABEL_H

@class NSAttributedString, NSDictionary, NSMutableDictionary, CUICatalog, NSTextEncapsulation, CUIStyleEffectConfiguration, UIFont, NSString;
@protocol _UIViewBaselineSpacing, _UIMultilineTextContentSizing, _UILabelVisualStyleSubject, NSCoding, UIContentSizeCategoryAdjusting;


#import "UIView.h"
#import "UIColor.h"
#import "_UILabelMetrics.h"
#import "_UILabelContent.h"
#import "_UILabelSynthesizedContent.h"
#import "_UILabelLegacyScaledMetrics.h"
#import "_UITextSizeCache.h"
#import "_UILabelConfiguration.h"
#import "_UILabelScaledMetrics.h"
#import "_UILabelVisualStyle.h"

@interface UILabel : UIView <_UIViewBaselineSpacing, _UIMultilineTextContentSizing, _UILabelVisualStyleSubject, NSCoding, UIContentSizeCategoryAdjusting>

 {
    CGSize _size;
    UIColor *_backgroundColor;
    NSInteger _numberOfLines;
    ? _intrinsicSizeBaselineInfo;
    _UILabelMetrics *_metrics;
    _UILabelMetrics *_intrinsicMetrics;
    CGFloat _previousBaselineOffsetFromBottom;
    CGFloat _previousFirstLineBaseline;
    _UILabelContent *_content;
    _UILabelSynthesizedContent *_synthesizedContent;
    NSAttributedString *_synthesizedAttributedText;
    NSDictionary *_cachedSynthesizedTextAttributes;
    NSMutableDictionary *_fallbackColorsForUserInterfaceStyle;
    CGFloat _minimumFontSize;
    NSInteger _lineSpacing;
    id *_layout;
    _UILabelLegacyScaledMetrics *_scaledMetrics;
    CGSize _scaledMetricsTargetSize;
    _UITextSizeCache *_intrinsicContentSizeCache;
    CUICatalog *_cuiCatalog;
    NSTextEncapsulation *_textEncapsulation;
    CUIStyleEffectConfiguration *_cuiStyleEffectConfiguration;
    NSMutableDictionary *_marqueeAnimations;
    NSMutableDictionary *_marqueeMaskAnimations;
    _UILabelConfiguration *_configuration;
    UIFont *_overrideTextFont;
    NSUInteger _accessibilityButtonShapesChangedToken;
    UIColor *_lastSetColor;
    ? _textLabelFlags;
    CGFloat _multilineContextWidth;
}


@property (readonly, nonatomic) CGFloat _capOffsetFromBoundsTop;
@property (retain, nonatomic, setter=_setConfiguration:) _UILabelConfiguration *_configuration;
@property (retain, nonatomic, getter=_content, setter=_setContent:) _UILabelContent *_content;
@property (nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property (nonatomic, setter=_setFirstLineBaselineFrameOriginY:) CGFloat _firstLineBaselineFrameOriginY;
@property (readonly, nonatomic) CGFloat _firstLineBaselineOffsetFromBoundsTop;
@property (nonatomic, setter=_setFirstLineCapFrameOriginY:) CGFloat _firstLineCapFrameOriginY;
@property (retain, nonatomic, setter=set_fontForShortcutBaselineCalculation:) UIFont *_fontForShortcutBaselineCalculation; // ivar: _fontForShortcutBaselineCalculation
@property (readonly, nonatomic) CGFloat _lastLineBaseline;
@property (nonatomic, setter=_setLastLineBaselineFrameOriginY:) CGFloat _lastLineBaselineFrameOriginY;
@property (readonly, nonatomic) NSInteger _measuredNumberOfLines;
@property (retain, nonatomic, setter=_setMetrics:) _UILabelMetrics *_metrics;
@property (retain, nonatomic, setter=_setOverrideTextFont:) UIFont *_overrideTextFont;
@property (readonly, nonatomic) _UILabelScaledMetrics *_scaledMetrics;
@property (readonly, retain, nonatomic, getter=_synthesizedAttributedText) NSAttributedString *_synthesizedAttributedText;
@property (retain, nonatomic, setter=_setVisualStyle:) _UILabelVisualStyle *_visualStyle; // ivar: __visualStyle
@property (nonatomic, setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:) BOOL _wantsUnderlineForAccessibilityButtonShapesEnabled;
@property (nonatomic, setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:) BOOL _wantsUnderlineForAccessibilityButtonShapesEnabled;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL adjustsLetterSpacingToFitWidth;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSInteger baselineAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL enablesMarqueeWhenAncestorFocused;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIColor *highlightedTextColor; // ivar: _highlightedColor
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) NSUInteger lineBreakStrategy;
@property (nonatomic) NSInteger lineSpacing;
@property (nonatomic) CGFloat minimumFontSize;
@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) CGFloat preferredMaxLayoutWidth; // ivar: _preferredMaxLayoutWidth
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) BOOL showsExpansionTextWhenTruncated;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;


+(Class)layerClass;
+(id)_defaultAttributes;
+(id)_defaultColor;
+(id)defaultFont;
+(struct CGRect )_insetRect:(struct CGRect )arg0 forAttributedString:(id)arg1 withDefaultFont:(id)arg2 inView:(id)arg3 ;
-(BOOL)_hasBaseline;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(*NSInteger)arg0 ;
-(BOOL)_isMarqueeUpdatable;
-(BOOL)_multilineLabelRequiresCarefulMeasurement;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(BOOL)_overallWritingDirectionFollowsLayoutDirection;
-(BOOL)_shouldCeilSizeToViewScale;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(BOOL)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize )arg0 oldSize:(struct CGSize )arg1 ;
-(BOOL)_useShortcutIntrinsicContentSize;
-(BOOL)_usesSimpleTextEffects;
-(BOOL)autotrackTextToFit;
-(BOOL)centersHorizontally;
-(BOOL)drawsUnderline;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)marqueeEnabled;
-(BOOL)marqueeRunning;
-(CGFloat)_actualScaleFactor;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 inContainer:(id)arg2 isGuide:(BOOL)arg3 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 nextToNeighbor:(id)arg2 edge:(int)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 ;
-(CGFloat)_baselineOffsetFromBottom;
-(CGFloat)_firstBaselineOffsetFromTop;
-(CGFloat)_firstLineBaseline;
-(CGFloat)shadowBlur;
-(NSInteger)_stringDrawingOptions;
-(NSUInteger)defaultAccessibilityTraits;
-(float)_hyphenationFactor;
-(id)_associatedScalingLabel;
-(id)_cuiCatalog;
-(id)_cuiStyleEffectConfiguration;
-(id)_defaultAttributes;
-(id)_disabledFontColor;
-(id)_image;
-(id)_synthesizedContent;
-(id)_tightBoundingBoxLayoutGuide;
-(id)color;
-(id)currentTextColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)largeContentTitle;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGRect )_drawTextInRect:(struct CGRect )arg0 ;
-(struct CGRect )_drawTextInRect:(struct CGRect )arg0 baselineCalculationOnly:(BOOL)arg1 ;
-(struct CGRect )_drawTextInRect:(struct CGRect )arg0 forceMultiline:(BOOL)arg1 ;
-(struct CGRect )_drawingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_textRectForBounds:(struct CGRect )arg0 limitedToNumberOfLines:(NSInteger)arg1 includingShadow:(BOOL)arg2 ;
-(struct CGRect )_tightBoundingRectOfFirstLine;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 limitedToNumberOfLines:(NSInteger)arg1 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )rawSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )textSizeForWidth:(CGFloat)arg0 ;
-(void)_accessibilityButtonShapesChangedNotification:(id)arg0 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_ancestorWillUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_commonInit;
-(void)_contentDidChange:(NSInteger)arg0 fromContent:(id)arg1 ;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_drawFullMarqueeTextInRect:(struct CGRect )arg0 ;
-(void)_ensureMetricsInRect:(struct CGRect )arg0 forDrawing:(BOOL)arg1 ;
-(void)_invalidateBaselineConstraints;
-(void)_invalidateLabelSize;
-(void)_invalidateTextSize;
-(void)_ola_willApplyMultilineTextWidthDisambiguationConstraint;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect )arg0 ;
-(void)_resetUsesExplicitPreferredMaxLayoutWidth;
-(void)_setColor:(id)arg0 ;
-(void)_setCuiCatalog:(id)arg0 ;
-(void)_setCuiStyleEffectConfiguration:(id)arg0 ;
-(void)_setDefaultAttributes:(id)arg0 ;
-(void)_setFallbackTextColor:(id)arg0 forUserInterfaceStyle:(NSInteger)arg1 ;
-(void)_setHyphenationFactor:(float)arg0 ;
-(void)_setMarqueeUpdatable:(BOOL)arg0 ;
-(void)_setMultilineContextWidth:(CGFloat)arg0 ;
-(void)_setMultilineLabelRequiresCarefulMeasurement:(BOOL)arg0 ;
-(void)_setOverallWritingDirectionFollowsLayoutDirection:(BOOL)arg0 ;
-(void)_setUseShortcutIntrinsicContentSize:(BOOL)arg0 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg0 ;
-(void)_startMarqueeIfNecessary;
-(void)_stopMarqueeWithRedisplay:(BOOL)arg0 ;
-(void)_updateSystemConstraints;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(void)dealloc;
-(void)drawContentsInRect:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layerWillDraw:(id)arg0 ;
-(void)setAutotrackTextToFit:(BOOL)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCentersHorizontally:(BOOL)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setDrawsUnderline:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setMarqueeEnabled:(BOOL)arg0 ;
-(void)setMarqueeRunning:(BOOL)arg0 ;
-(void)setNeedsDisplay;
-(void)setRawSize:(struct CGSize )arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setShadowBlur:(CGFloat)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif