// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPREP_H
#define TSWPREP_H

@class TSDContainerRep, CAShapeLayer, NSMutableArray, NSArray, NSString, TSDLayout<TSWPLayoutTarget>, TSUColor, TSWPSearchReference;
@protocol CAAnimationDelegate;


#import "_TtC6TSText22TSWPSecondaryHighlight.h"
#import "TSWPSelection.h"
#import "TSWPStorage.h"

@interface TSWPRep : TSDContainerRep <CAAnimationDelegate>

 {
    CALayer" _textLayers;
    CAShapeLayer *_caretLayer;
    CAShapeLayer" _selectionLineLayers;
    CAShapeLayer *_selectionParagraphBorderLayer;
    CAShapeLayer *_selectionHighlightLayer;
    CAShapeLayer *_markHighlightLayer;
    CAShapeLayer *_smartFieldHighlightLayer;
    _TtC6TSText22TSWPSecondaryHighlight *_defaultSecondaryHighlight;
    NSMutableArray *_secondaryHighlights;
    BOOL _caretAnimationDisabled;
    BOOL _suppressCaret;
    _NSRange _suppressedMisspellingRange;
    BOOL _updatingHighlights;
    BOOL _selectionChanged;
    BOOL _markChanged;
    NSUInteger _newSelectionFlags;
    BOOL _repFieldsAreActive;
    BOOL _hudStateDirty;
    BOOL _invalidateHUDState;
    CGFloat _listLevelIndents;
    TSWPSelection *_dropSelection;
    BOOL _isShowingCommentKnobs;
    BOOL _tornDown;
    BOOL _searchHitsAreInvalid;
}


@property (readonly, nonatomic) NSArray *columns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragAndDropCaretLayerIsForCaret; // ivar: _dragAndDropCaretLayerIsForCaret
@property (nonatomic) _NSRange dragRange; // ivar: _dragRange
@property (nonatomic) BOOL findIsShowing; // ivar: _findIsShowing
@property (retain, nonatomic) CAShapeLayer *floatingCaretLayer; // ivar: _floatingCaretLayer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBeingEdited;
@property (copy, nonatomic) TSWPSelection *lastSelection; // ivar: _lastSelection
@property (readonly, weak, nonatomic) TSDLayout<TSWPLayoutTarget> *layout;
@property (retain, nonatomic) TSUColor *overrideCaretColor; // ivar: _overrideCaretColor
@property (retain, nonatomic) TSWPSearchReference *primaryFindResultSearchReference; // ivar: _primaryFindResultSearchReference
@property (retain, nonatomic) NSArray *searchReferences; // ivar: _searchReferences
@property (readonly, nonatomic) TSWPSelection *selection;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressSelectionControls; // ivar: _suppressSelectionControls
@property (nonatomic, getter=isSelectionHighlightSuppressed) BOOL suppressSelectionHighlight; // ivar: _suppressSelectionHighlight
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) CGAffineTransform transformToConvertNaturalToScaledRoot;
@property (nonatomic) BOOL useKeyboardWhenEditing; // ivar: _useKeyboardWhenEditing


+(void)initialize;
-(BOOL)containsStartOfSelection:(id)arg0 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)isOverflowing;
-(BOOL)isPointInSelectedArea:(struct CGPoint )arg0 ;
-(BOOL)p_allowCaretForSelection:(id)arg0 ;
-(BOOL)p_doesRep:(id)arg0 containCharIndex:(NSUInteger)arg1 isStart:(BOOL)arg2 ;
-(BOOL)p_hasRenderableTextComments;
-(BOOL)p_hasRenderableTextCommentsLookingForHighlights:(BOOL)arg0 ;
-(BOOL)p_hasRenderableTextHighlights;
-(Class)layerClass;
-(NSUInteger)charCountOfGlyphStartingAtCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)glyphCountForRubyFieldAtCharIndex:(NSUInteger)arg0 ;
-(id)closestColumnForPoint:(struct CGPoint )arg0 ;
-(id)columnForCharIndex:(NSUInteger)arg0 ;
-(id)footnoteMarkAttachmentAtPoint:(struct CGPoint )arg0 ;
-(id)footnoteReferenceAttachmentAtPoint:(struct CGPoint )arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)p_hyperlinkAtPoint:(struct CGPoint )arg0 ;
-(id)rubyFieldAtPoint:(struct CGPoint )arg0 ;
-(id)smartFieldAtPoint:(struct CGPoint )arg0 ;
-(id)textBackgroundLayer;
-(id)textLayer;
-(struct ? )lineMetricsAtCharIndex:(NSUInteger)arg0 ;
-(struct ? )lineMetricsAtPoint:(struct CGPoint )arg0 ;
-(struct ? )p_lineMetricsAtPoint:(struct CGPoint )arg0 allowNotFound:(BOOL)arg1 ;
-(struct ? )wordMetricsAtCharIndex:(NSUInteger)arg0 ;
-(struct CGPath *)newPathForSelection:(id)arg0 ;
-(struct CGPoint )p_pinPoint:(struct CGPoint )arg0 toRect:(struct CGRect )arg1 ;
-(struct CGPoint )pinToClosestColumn:(struct CGPoint )arg0 ;
-(struct CGPoint )pinToNaturalBounds:(struct CGPoint )arg0 andLastLineFragment:(BOOL)arg1 ;
-(struct CGRect )caretRect;
-(struct CGRect )caretRectForCharIndex:(NSUInteger)arg0 caretAffinity:(NSInteger)arg1 ;
-(struct CGRect )caretRectForCharIndex:(NSUInteger)arg0 leadingEdge:(BOOL)arg1 caretAffinity:(NSInteger)arg2 ;
-(struct CGRect )caretRectForSelection:(id)arg0 ;
-(struct CGRect )columnRectForRange:(struct _NSRange )arg0 ;
-(struct CGRect )glyphRectForRange:(struct _NSRange )arg0 includingLabel:(BOOL)arg1 ;
-(struct CGRect )glyphRectForRubyFieldAtCharIndex:(NSUInteger)arg0 glyphRange:(struct _NSRange )arg1 ;
-(struct CGRect )labelRectForCharIndex:(NSUInteger)arg0 ;
-(struct CGRect )naturalBoundsRectForHyperlinkField:(id)arg0 ;
-(struct CGRect )p_caretRectForSelection:(id)arg0 ;
-(struct CGRect )p_closestCaretRectForCharacterAtPoint:(struct CGPoint )arg0 ;
-(struct CGRect )p_closestCaretRectForPoint:(struct CGPoint )arg0 inSelection:(BOOL)arg1 allowPastBreak:(BOOL)arg2 ;
-(struct CGRect )p_convertNaturalRectToRotated:(struct CGRect )arg0 repAngle:(CGFloat)arg1 ;
-(struct CGRect )p_paragraphModeRectangleForColumn:(id)arg0 selection:(id)arg1 ;
-(struct CGRect )p_topicDragRectForSelection:(id)arg0 ;
-(struct CGRect )rectForSelection:(id)arg0 includeRuby:(BOOL)arg1 includePaginatedAttachments:(BOOL)arg2 ;
-(struct _NSRange )range;
-(struct _NSRange )rangeOfDropCapAdornmentAtPoint:(struct CGPoint )arg0 ;
-(unsigned int)fontTraitsForRange:(struct _NSRange )arg0 includingLabel:(BOOL)arg1 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)drawRubyInContext:(struct CGContext *)arg0 rubyFieldStart:(NSUInteger)arg1 rubyGlyphRange:(struct _NSRange )arg2 ;
-(void)gesturesDidEnd;
-(void)p_drawInContext:(struct CGContext *)arg0 limitSelection:(id)arg1 suppressInvisibles:(BOOL)arg2 ;
-(void)p_drawTextInLayer:(id)arg0 context:(struct CGContext *)arg1 limitSelection:(id)arg2 rubyGlyphRange:(struct _NSRange )arg3 renderMode:(NSUInteger)arg4 suppressInvisibles:(BOOL)arg5 ;
-(void)p_registerNotifications;
-(void)p_teardown;
-(void)p_unregisterNotifications;
-(void)p_updateLayersForInsertionPointSelection:(id)arg0 ;
-(void)performBlockOnTextLayers:(id)arg0 ;
-(void)recursivelyDrawInContext:(struct CGContext *)arg0 limitSelection:(id)arg1 suppressInvisibles:(BOOL)arg2 ;
-(void)viewDidAppear;
-(void)willBeRemoved;


@end


#endif