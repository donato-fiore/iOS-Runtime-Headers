// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTYPESETTER_H
#define NSTYPESETTER_H


#import <Foundation/Foundation.h>

#import "NSParagraphStyle.h"

@interface NSTypesetter : NSObject {
    *void _reserved;
    NSParagraphStyle *_defaultParagraphStyle;
}




+(BOOL)_usesATSTypesetter;
+(NSInteger)defaultStringDrawingTypesetterBehavior;
+(NSInteger)defaultTypesetterBehavior;
+(NSUInteger)defaultLineBreakStrategy;
+(id)sharedSystemTypesetter;
+(id)sharedSystemTypesetterForBehavior:(NSInteger)arg0 ;
+(void)initialize;
-(*unk)_lineFragmentRectForProposedRectArgs:(id)arg0 ;
-(BOOL)_allowsEllipsisGlyphSubstitution;
-(BOOL)_forceOriginalFontBaseline;
-(BOOL)_isLineBreakModeOverridden;
-(BOOL)bidiProcessingEnabled;
-(BOOL)finalizeLineFragmentRect:(struct CGRect *)arg0 lineFragmentUsedRect:(struct CGRect *)arg1 baselineOffset:(*CGFloat)arg2 forGlyphRange:(struct _NSRange )arg3 ;
-(BOOL)usesFontLeading;
-(CGFloat)baselineOffsetInLayoutManager:(id)arg0 glyphIndex:(NSUInteger)arg1 ;
-(CGFloat)lineFragmentPadding;
-(CGFloat)lineSpacingAfterGlyphAtIndex:(NSUInteger)arg0 withProposedLineFragmentRect:(struct CGRect )arg1 ;
-(CGFloat)paragraphSpacingAfterGlyphAtIndex:(NSUInteger)arg0 withProposedLineFragmentRect:(struct CGRect )arg1 ;
-(CGFloat)paragraphSpacingBeforeGlyphAtIndex:(NSUInteger)arg0 withProposedLineFragmentRect:(struct CGRect )arg1 ;
-(NSInteger)_baseWritingDirection;
-(NSInteger)applicationFrameworkContext;
-(NSInteger)typesetterBehavior;
-(NSUInteger)_getRemainingNominalParagraphRange:(struct _NSRange *)arg0 andParagraphSeparatorRange:(struct _NSRange *)arg1 charactarIndex:(NSUInteger)arg2 layoutManager:(id)arg3 string:(id)arg4 ;
-(NSUInteger)actionForControlCharacterAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)getGlyphsInRange:(struct _NSRange )arg0 glyphs:(*unsigned int)arg1 characterIndexes:(*NSUInteger)arg2 glyphInscriptions:(*NSUInteger)arg3 elasticBits:(*BOOL)arg4 bidiLevels:(char *)arg5 ;
-(NSUInteger)getGlyphsInRange:(struct _NSRange )arg0 glyphs:(*unsigned short)arg1 properties:(*NSInteger)arg2 characterIndexes:(*NSUInteger)arg3 bidiLevels:(char *)arg4 ;
-(NSUInteger)layoutParagraphAtPoint:(struct CGPoint *)arg0 ;
-(float)hyphenationFactor;
-(float)tightenThresholdForTruncation;
-(id)_ellipsisFontForFont:(id)arg0 ;
-(id)attributedString;
-(id)attributesForExtraLineFragment;
-(id)currentParagraphStyle;
-(id)currentTextContainer;
-(id)defaultParagraphStyle;
-(id)layoutManager;
-(id)substituteFontForFont:(id)arg0 ;
-(id)textContainers;
-(id)textTabForGlyphLocation:(CGFloat)arg0 writingDirection:(NSInteger)arg1 maxLocation:(CGFloat)arg2 ;
-(struct ? *)_allocateAuxData;
-(struct ? *)_getAuxData;
-(struct _NSRange )characterRangeForGlyphRange:(struct _NSRange )arg0 actualGlyphRange:(struct _NSRange *)arg1 ;
-(struct _NSRange )glyphRangeForCharacterRange:(struct _NSRange )arg0 actualCharacterRange:(struct _NSRange *)arg1 ;
-(struct _NSRange )layoutCharactersInRange:(struct _NSRange )arg0 forLayoutManager:(id)arg1 maximumNumberOfLineFragments:(NSUInteger)arg2 ;
-(struct _NSRange )paragraphCharacterRange;
-(struct _NSRange )paragraphGlyphRange;
-(struct _NSRange )paragraphSeparatorCharacterRange;
-(struct _NSRange )paragraphSeparatorGlyphRange;
-(void)_layoutGlyphsInLayoutManager:(id)arg0 startingAtGlyphIndex:(NSUInteger)arg1 maxNumberOfLineFragments:(NSUInteger)arg2 maxCharacterIndex:(NSUInteger)arg3 nextGlyphIndex:(*NSUInteger)arg4 nextCharacterIndex:(*NSUInteger)arg5 ;
-(void)_setForceOriginalFontBaseline:(BOOL)arg0 ;
-(void)_setLineBreakModeOverridden:(BOOL)arg0 ;
-(void)_updateParagraphStyleCache:(id)arg0 ;
-(void)beginLineWithGlyphAtIndex:(NSUInteger)arg0 ;
-(void)beginParagraph;
-(void)dealloc;
-(void)deleteGlyphsInRange:(struct _NSRange )arg0 ;
-(void)endLineWithGlyphRange:(struct _NSRange )arg0 ;
-(void)endParagraph;
-(void)finalize;
-(void)getLineFragmentRect:(struct CGRect *)arg0 usedRect:(struct CGRect *)arg1 forParagraphSeparatorGlyphRange:(struct _NSRange )arg2 atProposedOrigin:(struct CGPoint )arg3 ;
-(void)getLineFragmentRect:(struct CGRect *)arg0 usedRect:(struct CGRect *)arg1 remainingRect:(struct CGRect *)arg2 forStartingGlyphAtIndex:(NSUInteger)arg3 proposedRect:(struct CGRect )arg4 lineSpacing:(CGFloat)arg5 paragraphSpacingBefore:(CGFloat)arg6 paragraphSpacingAfter:(CGFloat)arg7 ;
-(void)insertGlyph:(unsigned int)arg0 atGlyphIndex:(NSUInteger)arg1 characterIndex:(NSUInteger)arg2 ;
-(void)layoutGlyphsInLayoutManager:(id)arg0 startingAtGlyphIndex:(NSUInteger)arg1 maxNumberOfLineFragments:(NSUInteger)arg2 nextGlyphIndex:(*NSUInteger)arg3 ;
-(void)setApplicationFrameworkContext:(NSInteger)arg0 ;
-(void)setAttachmentSize:(struct CGSize )arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)setAttributedString:(id)arg0 ;
-(void)setBidiLevels:(char *)arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)setBidiProcessingEnabled:(BOOL)arg0 ;
-(void)setDefaultParagraphStyle:(id)arg0 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)setHardInvalidation:(BOOL)arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)setHyphenationFactor:(float)arg0 ;
-(void)setLineFragmentPadding:(CGFloat)arg0 ;
-(void)setLineFragmentRect:(struct CGRect )arg0 forGlyphRange:(struct _NSRange )arg1 usedRect:(struct CGRect )arg2 baselineOffset:(CGFloat)arg3 ;
-(void)setLocation:(struct CGPoint )arg0 withAdvancements:(*CGFloat)arg1 forStartOfGlyphRange:(struct _NSRange )arg2 ;
-(void)setNotShownAttribute:(BOOL)arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)setParagraphGlyphRange:(struct _NSRange )arg0 separatorGlyphRange:(struct _NSRange )arg1 ;
-(void)setTightenThresholdForTruncation:(float)arg0 ;
-(void)setTypesetterBehavior:(NSInteger)arg0 ;
-(void)setUsesFontLeading:(BOOL)arg0 ;
-(void)substituteGlyphsInRange:(struct _NSRange )arg0 withGlyphs:(*unsigned int)arg1 ;


@end


#endif