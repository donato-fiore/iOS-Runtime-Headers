// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTKIT2LAYOUTCONTROLLER_H
#define _UITEXTKIT2LAYOUTCONTROLLER_H

@class UITextLayoutControllerBase, NSTextContentStorage, NSTextLayoutManager, NSMutableSet, NSMapTable, NSString, NSTextContainer, NSLayoutManager, CUIStyleEffectConfiguration, NSArray, NSTextStorage;
@protocol NSTextLayoutManagerDelegate, _UITextLayoutController, NSLayoutManagerDelegate;


#import "UITextView.h"
#import "UITextPosition.h"
#import "UITextRange.h"

@interface _UITextKit2LayoutController : UITextLayoutControllerBase <NSTextLayoutManagerDelegate, _UITextLayoutController>

 {
    UITextView *_textView;
    NSTextContentStorage *_textContentStorage;
    NSTextLayoutManager *_textLayoutManager;
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_invisibleRanges;
    NSMapTable *_textCanvasViews;
}


@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) BOOL canAccessLayoutManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITextRange *documentRange;
@property (nonatomic) BOOL drawsDebugBaselines; // ivar: _drawsDebugBaselines
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) NSTextContainer *firstTextContainer;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (weak, nonatomic) NSObject<NSLayoutManagerDelegate> *layoutManagerDelegate;
@property (nonatomic) CGFloat maxTileHeight;
@property (copy, nonatomic) CUIStyleEffectConfiguration *styleEffectConfiguration;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *textContainers;
@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (nonatomic) BOOL usesTiledViews;


-(CGFloat)baselineOffsetForFirstGlyph;
-(NSInteger)affinityForPosition:(id)arg0 ;
-(NSInteger)baseWritingDirectionAtPosition:(id)arg0 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)_locationWithOffset:(NSInteger)arg0 ;
-(id)_rangeForCharacterRange:(struct _NSRange )arg0 ;
-(id)annotatedSubstringForRange:(id)arg0 ;
-(id)annotationAttribute:(id)arg0 atPosition:(id)arg1 ;
-(id)attributedTextInRange:(id)arg0 ;
-(id)attributesAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)cursorPositionAtPoint:(struct CGPoint )arg0 inContainer:(id)arg1 ;
-(id)dequeueCanvasViewForTextContainer:(id)arg0 ;
-(id)emptyTextRangeAtPosition:(id)arg0 ;
-(id)initWithTextView:(id)arg0 textContainer:(id)arg1 ;
-(id)initWithTextView:(id)arg0 textContentStorage:(id)arg1 templateTextContainer:(id)arg2 ;
-(id)nearestPositionAtPoint:(struct CGPoint )arg0 inContainer:(id)arg1 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 affinity:(NSInteger)arg2 ;
-(id)positionWithOffset:(NSInteger)arg0 affinity:(NSInteger)arg1 ;
-(id)previewRendererForRange:(id)arg0 unifyRects:(BOOL)arg1 ;
-(id)selectionRectsForRange:(id)arg0 fromView:(id)arg1 forContainerPassingTest:(id)arg2 ;
-(id)textContainerForPosition:(id)arg0 ;
-(id)textLayoutManager:(id)arg0 renderingAttributesForLink:(id)arg1 atLocation:(id)arg2 defaultAttributes:(id)arg3 ;
-(id)textRangeForBounds:(struct CGRect )arg0 inTextContainer:(id)arg1 layoutIfNeeded:(BOOL)arg2 ;
-(id)textRangeForCharacterRange:(struct _NSRange )arg0 ;
-(id)textRangeForLineEnclosingPosition:(id)arg0 effectiveAffinity:(NSInteger)arg1 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(struct CGRect )boundingRectForCharacterRange:(struct _NSRange )arg0 ;
-(struct CGRect )boundingRectForRange:(id)arg0 ;
-(struct CGRect )extraLineFragmentRect;
-(struct CGRect )insertionRectForPosition:(id)arg0 typingAttributes:(id)arg1 placeholderAttachment:(id)arg2 textContainer:(*id)arg3 ;
-(struct CGRect )unionRectForCharacterRange:(struct _NSRange )arg0 bottomInset:(CGFloat)arg1 ;
-(struct CGRect )updateLayoutForSizeChangeOfTextContainer:(id)arg0 ;
-(struct CGRect )usedRectForTextContainer:(id)arg0 ;
-(struct _NSRange )characterRangeForTextRange:(id)arg0 ;
-(struct _NSRange )characterRangeForTextRange:(id)arg0 clippedToDocument:(BOOL)arg1 ;
-(struct _NSRange )rangeOfCharacterClusterAtIndex:(NSUInteger)arg0 type:(NSInteger)arg1 ;
-(void)_textContentStorageAddedUnsupportedAttribute:(id)arg0 ;
-(void)_updateSelectionWithTextRange:(id)arg0 affinity:(NSInteger)arg1 typingAttributes:(id)arg2 ;
-(void)addAnnotationAttribute:(id)arg0 value:(id)arg1 forRange:(id)arg2 ;
-(void)addGhostedRange:(id)arg0 ;
-(void)addInvisibleRange:(id)arg0 ;
-(void)addRenderingAttributes:(id)arg0 forRange:(id)arg1 ;
-(void)dealloc;
-(void)ensureLayoutForBounds:(struct CGRect )arg0 inTextContainer:(id)arg1 ;
-(void)ensureLayoutForRange:(id)arg0 ;
-(void)ensureLayoutForTextContainer:(id)arg0 ;
-(void)enumerateTextLineFragmentsInRange:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateTextSegmentsInRange:(id)arg0 inTextContainer:(id)arg1 usingBlock:(id)arg2 ;
-(void)invalidateDisplayForCharacterRange:(struct _NSRange )arg0 ;
-(void)invalidateLayoutForRange:(id)arg0 ;
-(void)removeAllGhostedRanges;
-(void)removeAnnotationAttribute:(id)arg0 forRange:(id)arg1 ;
-(void)removeInvisibleRange:(id)arg0 ;
-(void)removeRenderingAttributes:(id)arg0 forRange:(id)arg1 ;
-(void)requestTextGeometryAtPosition:(id)arg0 typingAttributes:(id)arg1 resultBlock:(id)arg2 ;
-(void)resetFontForExtraBulletRendering;
-(void)resumeTiling;
-(void)setDocumentObscured:(BOOL)arg0 ;
-(void)setUnobscuredRange:(id)arg0 ;
-(void)suspendTiling;


@end


#endif