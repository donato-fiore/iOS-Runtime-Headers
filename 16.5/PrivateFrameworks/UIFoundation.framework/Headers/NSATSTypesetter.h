// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSATSTYPESETTER_H
#define NSATSTYPESETTER_H

@class NSAttributedString, NSArray;


#import "NSTypesetter.h"
#import "NSLayoutManager.h"
#import "NSTextContainer.h"
#import "NSParagraphStyle.h"

@interface NSATSTypesetter : NSTypesetter {
    NSAttributedString *attributedString;
    _NSRange paragraphGlyphRange;
    _NSRange paragraphSeparatorGlyphRange;
    CGFloat lineFragmentPadding;
    NSLayoutManager *layoutManager;
    NSArray *textContainers;
    NSTextContainer *currentTextContainer;
    NSUInteger currentTextContainerIndex;
    CGSize currentTextContainerSize;
    NSParagraphStyle *currentParagraphStyle;
    *void _atsReserved;
    id *_private;
}




+(BOOL)_allowsScreenFontKerning;
+(id)sharedInstance;
+(id)sharedTypesetter;
+(void)initialize;
-(*unk)_lineFragmentRectForProposedRectArgs:(id)arg0 ;
-(BOOL)_baselineRenderingMode;
-(BOOL)_forceWordWrapping;
-(BOOL)_isBusy;
-(BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(*NSUInteger)arg0 characterIndex:(*NSUInteger)arg1 atPoint:(struct CGPoint *)arg2 renderingContext:(*id)arg3 ;
-(BOOL)_mirrorsTextAlignment;
-(BOOL)_usesScreenFonts;
-(BOOL)limitsLayoutForSuspiciousContents;
-(BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(NSUInteger)arg0 ;
-(BOOL)synchronizesAlignmentToDirection;
-(CGFloat)baselineOffsetInLayoutManager:(id)arg0 glyphIndex:(NSUInteger)arg1 ;
-(CGFloat)defaultTighteningFactor;
-(NSInteger)_baseWritingDirection;
-(NSUInteger)_sweepDirectionForGlyphAtIndex:(NSInteger)arg0 ;
-(NSUInteger)actionForControlCharacterAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)layoutParagraphAtPoint:(struct CGPoint *)arg0 ;
-(NSUInteger)lineBreakStrategy;
-(char *)_bidiLevels;
-(float)hyphenationFactorForGlyphAtIndex:(NSUInteger)arg0 ;
-(id)_getATSTypesetterGuts;
-(id)_textContainerForAttachmentProtocol;
-(id)_textStorageForAttachmentProtocol;
-(id)init;
-(id)paragraphArbitrator;
-(struct ? *)_allocateAuxData;
-(struct CGRect )boundingBoxForControlGlyphAtIndex:(NSUInteger)arg0 forTextContainer:(id)arg1 proposedLineFragment:(struct CGRect )arg2 glyphPosition:(struct CGPoint )arg3 characterIndex:(NSUInteger)arg4 ;
-(struct CGRect )lineFragmentRectForProposedRect:(struct CGRect )arg0 remainingRect:(struct CGRect *)arg1 ;
-(struct _NSRange )layoutCharactersInRange:(struct _NSRange )arg0 forLayoutManager:(id)arg1 maximumNumberOfLineFragments:(NSUInteger)arg2 ;
-(struct __CTTypesetter *)_ctTypesetter;
-(unsigned int)hyphenCharacterForGlyphAtIndex:(NSUInteger)arg0 ;
-(void)_doBidiProcessing;
-(void)_flushCachedObjects;
-(void)_setBaselineRenderingMode:(BOOL)arg0 ;
-(void)_setBusy:(BOOL)arg0 ;
-(void)_setForceWordWrapping:(BOOL)arg0 ;
-(void)beginLineWithGlyphAtIndex:(NSUInteger)arg0 ;
-(void)beginParagraph;
-(void)dealloc;
-(void)endLineWithGlyphRange:(struct _NSRange )arg0 ;
-(void)endParagraph;
-(void)layoutGlyphsInLayoutManager:(id)arg0 startingAtGlyphIndex:(NSUInteger)arg1 maxNumberOfLineFragments:(NSUInteger)arg2 nextGlyphIndex:(*NSUInteger)arg3 ;
-(void)setDefaultTighteningFactor:(CGFloat)arg0 ;
-(void)setLimitsLayoutForSuspiciousContents:(BOOL)arg0 ;
-(void)setLineBreakStrategy:(NSUInteger)arg0 ;


@end


#endif