// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTEXT_H
#define TSWPTEXT_H

@class TSSStylesheet, TSDLayoutController, NSMutableArray, TSDCanvas, NSArray, NSString, TSULocale, TSPObject<TSDHint>, TSUColor;
@protocol TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics, TSWPStyleProviding, TSWPTextDelegate, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPTopicNumberHints;

#import <Foundation/Foundation.h>

#import "TSWPListStyle.h"
#import "TSWPColumnStyle.h"
#import "TSWPTextParentInfo.h"
#import "TSWPTextParentLayout.h"
#import "TSWPPadding.h"
#import "TSWPParagraphStyle.h"
#import "TSWPStorage.h"

@interface TSWPText : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics, TSWPStyleProviding>

 {
    TSWPListStyle *_listStyle;
    TSWPColumnStyle *_columnStyle;
    TSSStylesheet *_stylesheet;
    CGSize _minSize;
    CGSize _maxSize;
    NSUInteger _pageNumber;
    NSUInteger _pageCount;
    int _flags;
    CGPoint _anchor;
    TSWPTextParentInfo *_parentInfo;
    TSWPTextParentLayout *_parentLayout;
    TSDLayoutController *_layoutController;
}


@property (readonly, nonatomic) BOOL alwaysIncludesSpaceAfter;
@property (readonly, nonatomic) BOOL alwaysIncludesSpaceBefore;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) CGPoint anchorPoint;
@property (retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property (readonly, nonatomic) NSUInteger autosizeFlags;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (readonly, nonatomic) NSArray *childLayouts;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) NSMutableArray *columns; // ivar: _columns
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) CGSize currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TSWPTextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (readonly, nonatomic) NSObject<TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFLocale hyphenationLocale;
@property (readonly, nonatomic) Class inlineTableOfContentsLayoutClass;
@property (readonly, nonatomic) BOOL isInstructional;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL layoutIsValid;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) TSULocale *locale;
@property (readonly, nonatomic) BOOL marginsAreMirrored;
@property (readonly, nonatomic) CGRect maskRect;
@property (readonly, nonatomic) CGFloat maxAnchorInBlockDirection;
@property (readonly, nonatomic) CGSize maxSize;
@property (readonly, nonatomic) CGSize minSize;
@property (readonly, nonatomic) NSInteger naturalAlignment; // ivar: _naturalAlignment
@property (readonly, nonatomic) int naturalDirection; // ivar: _naturalDirection
@property (readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (readonly, nonatomic) NSObject<TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumberHints;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageNumber;
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly, nonatomic) CGPoint position;
@property (readonly, nonatomic) NSObject<TSWPOffscreenColumn> *previousTargetLastColumn;
@property (readonly, nonatomic) BOOL repShouldPreventCaret;
@property (readonly, nonatomic) _NSRange restrictedLayoutCharRange;
@property (readonly, nonatomic) BOOL shouldHyphenate;
@property (readonly, nonatomic) BOOL shouldIgnoreAnchoredAttachments;
@property (readonly, nonatomic) BOOL shouldWrapAroundExternalDrawables;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPageNumbers;
@property (retain, nonatomic) TSUColor *textColorOverride; // ivar: _textColorOverride
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) CGFloat textScaleFactor;
@property (nonatomic) BOOL vertical; // ivar: _vertical
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;


+(CGFloat)columnLayoutWidthForBodyWidth:(CGFloat)arg0 insets:(struct UIEdgeInsets *)arg1 ;
-(BOOL)caresAboutStorageChanges;
-(BOOL)containsStartOfRange:(struct _NSRange )arg0 ;
-(BOOL)descendersCannotClip;
-(BOOL)forceWesternLineBreaking;
-(BOOL)isLastTarget;
-(BOOL)isLayoutOffscreen;
-(BOOL)wantsToProvideStylesForTextLayout:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)textScaleForChild:(id)arg0 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(id)addPartitionableAttachmentLayout:(id)arg0 ;
-(id)columnMetricsForCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)currentAnchoredDrawableLayouts;
-(id)currentInlineDrawableLayouts;
-(id)init;
-(id)initWithParagraphStyle:(id)arg0 columnStyle:(id)arg1 ;
-(id)initWithParagraphStyle:(id)arg0 listStyle:(id)arg1 columnStyle:(id)arg2 ;
-(id)initWithStylesheet:(id)arg0 paragraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3 alignmentForNaturalAlignment:(NSInteger)arg4 naturalDirection:(int)arg5 ;
-(id)interiorClippingPath;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)layoutText:(id)arg0 context:(id)arg1 kind:(unsigned char)arg2 minSize:(struct CGSize )arg3 maxSize:(struct CGSize )arg4 anchor:(struct CGPoint )arg5 flags:(int)arg6 ;
-(id)layoutText:(id)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 anchor:(struct CGPoint )arg3 flags:(int)arg4 ;
-(id)layoutTextStorage:(id)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 anchor:(struct CGPoint )arg3 flags:(int)arg4 ;
-(id)layoutTextStorage:(id)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 anchor:(struct CGPoint )arg3 pageNumber:(NSUInteger)arg4 pageCount:(NSUInteger)arg5 flags:(int)arg6 ;
-(id)styleProvider;
-(id)styleProviderForTextLayout:(id)arg0 ;
-(id)textWrapper;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(struct CGRect )targetRectForCanvasRect:(struct CGRect )arg0 ;
-(struct CGSize )measureText:(id)arg0 ;
-(struct CGSize )measureText:(id)arg0 withMaxWidth:(CGFloat)arg1 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)clearHiddenInlineDrawableLayoutMarks;
-(void)didLayoutChangingDirtyRanges;
-(void)drawColumn:(id)arg0 inContext:(struct CGContext *)arg1 isFlipped:(BOOL)arg2 viewScale:(CGFloat)arg3 ;
-(void)drawColumn:(id)arg0 selection:(id)arg1 inContext:(struct CGContext *)arg2 isFlipped:(BOOL)arg3 viewScale:(CGFloat)arg4 ;
-(void)drawColumn:(id)arg0 selection:(id)arg1 inContext:(struct CGContext *)arg2 isFlipped:(BOOL)arg3 viewScale:(CGFloat)arg4 renderMode:(NSUInteger)arg5 ;
-(void)drawText:(id)arg0 inContext:(struct CGContext *)arg1 minSize:(struct CGSize )arg2 maxSize:(struct CGSize )arg3 anchor:(struct CGPoint )arg4 flags:(int)arg5 isFlipped:(BOOL)arg6 viewScale:(CGFloat)arg7 ;
-(void)layoutManager:(id)arg0 didClearDirtyRangeWithDelta:(NSInteger)arg1 afterCharIndex:(NSUInteger)arg2 ;
-(void)layoutManagerNeedsLayout:(id)arg0 ;
-(void)markHiddenInlineDrawableLayout:(id)arg0 ;
-(void)p_setParentLayoutMaximumFrameSizeForChildren;
-(void)setNeedsDisplayInTargetRect:(struct CGRect )arg0 ;


@end


#endif