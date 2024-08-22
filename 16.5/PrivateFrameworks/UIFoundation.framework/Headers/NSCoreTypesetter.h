// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCORETYPESETTER_H
#define NSCORETYPESETTER_H

@class NSDictionary;
@protocol NSCoreTypesetterDelegateInternal, NSCoreTypesetterDelegate;


#import "NSTypesetter.h"

@interface NSCoreTypesetter : NSTypesetter {
    CGFloat _lineFragmentOriginYOffset;
    id<NSCoreTypesetterDelegateInternal> *_delegate;
    BOOL _delegateSupportsTextContainer;
}


@property (copy) NSDictionary *_extraLineFragmentAttributes; // ivar: __extraLineFragmentAttributes
@property BOOL allowsFontOverridingTextAttachmentVerticalMetrics; // ivar: _allowsFontOverridingTextAttachmentVerticalMetrics
@property BOOL allowsFontSubstitutionAffectingVerticalMetrics; // ivar: _allowsFontSubstitutionAffectingVerticalMetrics
@property (getter=isBeginningOfDocument) BOOL beginningOfDocument; // ivar: _beginningOfDocument
@property _NSRange characterRange; // ivar: characterRange
@property NSInteger containerBreakMode; // ivar: _containerBreakMode
@property (weak) NSObject<NSCoreTypesetterDelegate> *delegate;
@property BOOL enforcesMinimumTextLineFragment; // ivar: _enforcesMinimumTextLineFragment
@property (copy) id *laidOutLineFragment; // ivar: _laidOutLineFragment
@property NSInteger layoutOrientation; // ivar: _layoutOrientation
@property BOOL limitsLayoutForSuspiciousContents; // ivar: _limitsLayoutForSuspiciousContents
@property NSInteger maximumNumberOfLines; // ivar: _maximumNumberOfLines
@property CGSize textContainerSize; // ivar: textContainerSize
@property BOOL usesDefaultHyphenation; // ivar: _usesDefaultHyphenation
@property (copy) id *validateLineBreakIndex; // ivar: _validateLineBreakIndex
@property BOOL wantsExtraLineFragment; // ivar: _wantsExtraLineFragment


+(void)_lineMetricsForAttributes:(id)arg0 typesetterBehavior:(NSInteger)arg1 usesFontLeading:(BOOL)arg2 applySpacings:(BOOL)arg3 usesSystemFontLeading:(BOOL)arg4 usesNegativeFontLeading:(BOOL)arg5 layoutOrientation:(NSInteger)arg6 lineHeight:(*CGFloat)arg7 baselineOffset:(*CGFloat)arg8 spacing:(*CGFloat)arg9 ;
+(void)_maximumAscentAndDescentForRuns:(struct __CFArray *)arg0 ascender:(*CGFloat)arg1 descender:(*CGFloat)arg2 ;
+(void)_minMaxPositionsForLineFragmentWithParagraphStyle:(id)arg0 baseWidth:(CGFloat)arg1 writingDirection:(NSInteger)arg2 isBeginningOfParagraph:(BOOL)arg3 minPosition:(*CGFloat)arg4 maxPosition:(*CGFloat)arg5 ;
-(?)_createLayoutLineFragmentStartingWithCharacterIndex:(?)arg0 proposedLineFragmentRect:(?)arg1 baseLineRef:(?)arg2 range:(?)arg3 paragraphStyle:(?)arg4 paragraphArbitrator:(?)arg5 lineBreakMode:(?)arg6 hasAttachments:(?)arg7 lineFragmentRect:(?)arg8 glyphOrigin:(?)arg9 hyphenatedforcedClusterBreak;
-(?)_createLineRefForParentLineRef:(?)arg0 range:(?)arg1 availableWidth:(?)arg2 offset:(?)arg3 paragraphArbitrator:(?)arg4 lineBreakMode:(?)arg5 hyphenatedforcedClusterBreak;
-(BOOL)isSimpleRectangularTextContainerForStartingCharacterAtIndex:(NSInteger)arg0 ;
-(NSInteger)_getFirstOverflowTabStopIndexInLineRef:(struct __CTLine *)arg0 range:(struct _NSRange )arg1 string:(id)arg2 paragraphStyle:(id)arg3 availableWidth:(CGFloat)arg4 offset:(CGFloat)arg5 ;
-(id)_paragraphStyleFromAttributes:(id)arg0 ;
-(id)init;
-(id)softHyphen;
-(int)_NSFastDrawString:(id)arg0 length:(NSUInteger)arg1 attributes:(id)arg2 paragraphStyle:(id)arg3 typesetterBehavior:(NSInteger)arg4 lineBreakMode:(NSInteger)arg5 rect:(struct CGRect )arg6 padding:(CGFloat)arg7 graphicsContext:(id)arg8 baselineRendering:(BOOL)arg9 usesFontLeading:(BOOL)arg10 usesScreenFont:(BOOL)arg11 scrollable:(BOOL)arg12 syncAlignment:(BOOL)arg13 mirrored:(BOOL)arg14 boundingRectPointer:(struct CGRect *)arg15 baselineOffsetPointer:(*CGFloat)arg16 drawingContext:(id)arg17 ;
-(struct ? )_getLineMetricsForRange:(struct _NSRange )arg0 attributes:(id)arg1 attributedString:(id)arg2 applySpacing:(BOOL)arg3 usesSystemFontLeading:(BOOL)arg4 usesNegativeFontLeading:(BOOL)arg5 ;
-(struct CGRect )_stringDrawingCoreTextEngineWithOriginalString:(id)arg0 rect:(struct CGRect )arg1 padding:(CGFloat)arg2 graphicsContext:(id)arg3 forceClipping:(BOOL)arg4 attributes:(id)arg5 stringDrawingOptions:(NSInteger)arg6 drawingContext:(id)arg7 stringDrawingInterface:(struct ? *)arg8 ;
-(struct CGRect )lineFragmentRectForProposedRect:(struct CGRect )arg0 atIndex:(NSInteger)arg1 writingDirection:(NSInteger)arg2 remainingRect:(struct CGRect *)arg3 ;
-(void)beginLine;
-(void)dealloc;
-(void)endLine;
-(void)layout;
-(void)layoutWithYOrigin:(CGFloat)arg0 ;


@end


#endif