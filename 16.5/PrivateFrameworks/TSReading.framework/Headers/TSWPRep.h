// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPREP_H
#define TSWPREP_H

@class CALayer, CAShapeLayer, TSWPStorageSpellChecker, NSArray, NSString;
@protocol TSDTilingLayerDelegate, CAAnimationDelegate, TSKHighlightArrayControllerProtocol, TSKPulseAnimationControllerProtocol, TSWPHyperlinkHostRepProtocol, TSDDecorator;


#import "TSDContainerRep.h"
#import "TSKHighlightArrayController.h"
#import "TSKPulseAnimationController.h"
#import "TSWPSelection.h"
#import "TSWPSearchReference.h"
#import "TSWPLayout.h"
#import "TSWPStorage.h"
#import "TSWPEditingController.h"

@interface TSWPRep : TSDContainerRep <TSDTilingLayerDelegate, CAAnimationDelegate, TSKHighlightArrayControllerProtocol, TSKPulseAnimationControllerProtocol, TSWPHyperlinkHostRepProtocol, TSDDecorator>

 {
    TSDTilingLayer" _textLayers;
    CALayer *_caretLayer;
    CAShapeLayer" _selectionLineLayers;
    CAShapeLayer *_selectionHighlightLayer;
    CAShapeLayer *_selectionParagraphBorderLayer;
    CAShapeLayer *_markHighlightLayer;
    CAShapeLayer *_smartFieldHighlightLayer;
    CAShapeLayer *_secondaryHighlightLayer;
    _NSRange _secondaryHighlightRange;
    int _secondaryHighlightPathStyle;
    TSKHighlightArrayController *_pulseArrayController;
    TSKHighlightArrayController *_highlightArrayController;
    TSKPulseAnimationController *_caretPulseController;
    BOOL _caretAnimationDisabled;
    BOOL _suppressCaret;
    TSWPStorageSpellChecker *_spellChecker;
    _NSRange _suppressedMisspellingRange;
    BOOL _updatingHighlights;
    TSWPSelection *_lastSelection;
    BOOL _selectionChanged;
    BOOL _markChanged;
    NSUInteger _newSelectionFlags;
    BOOL _repFieldsAreActive;
    BOOL _secondaryHighlightChanged;
    BOOL _indentAnimationRunning;
    CALayer *_indentAnimationLayer;
    NSInteger _indentDelta;
    SEL _indentSelector;
    id *_indentTarget;
    BOOL _hudStateDirty;
    BOOL _invalidateHUDState;
    CALayer *_dragAndDropCaretLayer;
}


@property (retain, nonatomic) TSWPSearchReference *activeSearchReference; // ivar: _activeSearchReference
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) _NSRange dragRange; // ivar: _dragRange
@property (nonatomic) TSWPSelection *dropSelection; // ivar: _dropSelection
@property (nonatomic) BOOL findIsShowing; // ivar: _findIsShowing
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSWPLayout *layout;
@property (retain, nonatomic) NSArray *searchReferences; // ivar: _searchReferences
@property (readonly, nonatomic) TSWPSelection *selection;
@property (nonatomic) BOOL shouldHideSelectionControls; // ivar: _shouldHideSelectionControls
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSelectionHighlightSuppressed) BOOL suppressSelectionHighlight; // ivar: _suppressSelectionHighlight
@property (readonly, nonatomic) TSWPEditingController *textEditor;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) CGAffineTransform transformToConvertNaturalToScaledRoot;
@property (nonatomic) BOOL useKeyboardWhenEditing; // ivar: _useKeyboardWhenEditing


-(BOOL)canEditWithEditor:(id)arg0 ;
-(BOOL)containsText;
-(BOOL)directlyManagesLayerContent;
-(BOOL)doesNeedDisplayOnEditingDidEnd;
-(BOOL)forceTiling;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)handlesEditMenu;
-(BOOL)isEditing;
-(BOOL)isOverflowing;
-(BOOL)isPointInSelectedArea:(struct CGPoint )arg0 ;
-(BOOL)p_canRepBeginEditingOnDoubleTap;
-(BOOL)p_canShowSelectionAndCaretLayers;
-(BOOL)p_hasEmptyList;
-(BOOL)p_hasVisibleContents;
-(BOOL)p_isSelectionSingleAnchoredDrawableAttachment;
-(BOOL)p_needsSpellChecker;
-(BOOL)p_paragraphModeBorderNeededForColumn:(id)arg0 dragCharIndex:(NSUInteger)arg1 knobTag:(NSUInteger)arg2 ;
-(BOOL)p_positionCaretLayer:(id)arg0 forSelection:(id)arg1 layerRelative:(BOOL)arg2 ;
-(BOOL)p_shouldDisplaySelectionControls;
-(BOOL)p_spellCheckingEnabled;
-(BOOL)preventClipToColumn;
-(BOOL)shouldAlwaysAutoHide;
-(BOOL)shouldBeginEditingWithGesture:(id)arg0 ;
-(BOOL)shouldCreateCommentKnobs;
-(BOOL)shouldCreateLockedKnobs;
-(BOOL)shouldCreateSelectionKnobs;
-(BOOL)shouldCreateTextKnobs;
-(BOOL)shouldIgnoreSingleTapAtPoint:(struct CGPoint )arg0 withRecognizer:(id)arg1 ;
-(BOOL)shouldShowKnobs;
-(BOOL)useDynamicTiling;
-(BOOL)wantsToHandleTapsOnContainingGroup;
-(BOOL)wantsToHandleTapsWhenLocked;
-(CGFloat)knobOffsetForKnob:(id)arg0 paragraphMode:(BOOL)arg1 ;
-(Class)layerClass;
-(Class)wpEditorClass;
-(NSUInteger)charCountOfGlyphStartingAtCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)charIndexForPointWithPinning:(struct CGPoint )arg0 ;
-(NSUInteger)charIndexForPointWithPinning:(struct CGPoint )arg0 isTail:(BOOL)arg1 selectionType:(int)arg2 ;
-(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 allowNotFound:(BOOL)arg2 isAtEndOfLine:(*BOOL)arg3 leadingEdge:(*BOOL)arg4 ;
-(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 allowNotFound:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 isAtEndOfLine:(*BOOL)arg4 leadingEdge:(*BOOL)arg5 ;
-(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 isAtEndOfLine:(*BOOL)arg2 ;
-(NSUInteger)glyphCountForRubyFieldAtCharIndex:(NSUInteger)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)beginEditing;
-(id)closestColumnForPoint:(struct CGPoint )arg0 ;
-(id)columnForCharIndex:(NSUInteger)arg0 ;
-(id)decoratorOverlayLayers;
-(id)footnoteMarkAttachmentAtPoint:(struct CGPoint )arg0 ;
-(id)footnoteReferenceAttachmentAtPoint:(struct CGPoint )arg0 ;
-(id)hyperlinkContainerRep;
-(id)hyperlinkRegions;
-(id)hyperlinkRegionsConstrainedToLineAtPoint:(struct CGPoint )arg0 ;
-(id)imageForSearchReference:(id)arg0 forPath:(struct CGPath *)arg1 shouldPulsate:(BOOL)arg2 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)lineSearchReferencesForSearchReference:(id)arg0 ;
-(id)lineSelectionsForSelection:(id)arg0 ;
-(id)newTrackerForKnob:(id)arg0 ;
-(id)overlayLayers;
-(id)p_annotationAtPoint:(struct CGPoint )arg0 outRange:(struct _NSRange *)arg1 ;
-(id)p_hyperlinkAtPoint:(struct CGPoint )arg0 ;
-(id)p_hyperlinkWithTouch:(id)arg0 ;
-(id)p_imageForRect:(struct CGRect )arg0 usingGlyphRect:(BOOL)arg1 drawBackground:(BOOL)arg2 shouldPulsate:(BOOL)arg3 forCaret:(BOOL)arg4 drawSelection:(id)arg5 suppressInvisibles:(BOOL)arg6 ;
-(id)p_lineSelectionsForSelection:(id)arg0 ;
-(id)p_newCaretLayerWithZPosition:(CGFloat)arg0 ;
-(id)p_smartFieldWithTouch:(id)arg0 ;
-(id)repForCharIndex:(NSUInteger)arg0 isStart:(BOOL)arg1 ;
-(id)repForDragging;
-(id)rubyFieldAtPoint:(struct CGPoint )arg0 ;
-(id)selectionForDragAndDropNaturalPoint:(struct CGPoint )arg0 dragIsTopicSelection:(BOOL)arg1 ;
-(id)siblings;
-(id)smartFieldAtPoint:(struct CGPoint )arg0 ;
-(id)textBackgroundLayer;
-(id)textImageForRect:(struct CGRect )arg0 ;
-(id)textImageForSelection:(id)arg0 ;
-(id)textImageForSelection:(id)arg0 frame:(struct CGRect *)arg1 usingGlyphRect:(BOOL)arg2 drawBackground:(BOOL)arg3 shouldPulsate:(BOOL)arg4 suppressInvisibles:(BOOL)arg5 ;
-(id)textImageForSelection:(id)arg0 frame:(struct CGRect *)arg1 usingGlyphRect:(BOOL)arg2 shouldPulsate:(BOOL)arg3 suppressInvisibles:(BOOL)arg4 ;
-(id)textLayer;
-(int)dragTypeAtCanvasPoint:(struct CGPoint )arg0 ;
-(int)tilingMode;
-(struct ? )lineMetricsAtCharIndex:(NSUInteger)arg0 ;
-(struct ? )lineMetricsAtPoint:(struct CGPoint )arg0 ;
-(struct ? )wordMetricsAtCharIndex:(NSUInteger)arg0 ;
-(struct CGColor *)p_caretLayerColor;
-(struct CGPath *)newPathForSearchReference:(id)arg0 ;
-(struct CGPath *)p_createPathForParagraphSelection:(id)arg0 needsParagraphBorder:(BOOL)arg1 ;
-(struct CGPath *)p_newSelectionPathForRange:(struct _NSRange )arg0 headKnobRect:(struct CGRect *)arg1 tailKnobRect:(struct CGRect *)arg2 selectionType:(int)arg3 selection:(id)arg4 ;
-(struct CGPoint )knobCenterForSelection:(id)arg0 knob:(id)arg1 ;
-(struct CGPoint )p_pinPoint:(struct CGPoint )arg0 toRect:(struct CGRect )arg1 ;
-(struct CGPoint )pinToClosestColumn:(struct CGPoint )arg0 ;
-(struct CGPoint )pinToNaturalBounds:(struct CGPoint )arg0 andLastLineFragment:(BOOL)arg1 ;
-(struct CGRect )caretRect;
-(struct CGRect )caretRectForCharIndex:(NSUInteger)arg0 caretAffinity:(int)arg1 ;
-(struct CGRect )caretRectForCharIndex:(NSUInteger)arg0 leadingEdge:(BOOL)arg1 caretAffinity:(int)arg2 ;
-(struct CGRect )caretRectForSelection:(id)arg0 ;
-(struct CGRect )clipRect;
-(struct CGRect )closestCaretRectForPoint:(struct CGPoint )arg0 inSelection:(BOOL)arg1 ;
-(struct CGRect )columnRectForRange:(struct _NSRange )arg0 ;
-(struct CGRect )glyphRectForRange:(struct _NSRange )arg0 includingLabel:(BOOL)arg1 ;
-(struct CGRect )glyphRectForRubyFieldAtCharIndex:(NSUInteger)arg0 glyphRange:(struct _NSRange )arg1 ;
-(struct CGRect )labelRectForCharIndex:(NSUInteger)arg0 ;
-(struct CGRect )naturalBoundsRectForHyperlinkField:(id)arg0 ;
-(struct CGRect )newTextLayerUnscaledBounds:(struct CGRect )arg0 forNewTextBounds:(struct CGRect )arg1 ;
-(struct CGRect )p_caretRectForSelection:(id)arg0 ;
-(struct CGRect )p_clipRect:(struct CGRect )arg0 ;
-(struct CGRect )p_convertNaturalRectToRotated:(struct CGRect )arg0 repAngle:(CGFloat)arg1 ;
-(struct CGRect )p_paragraphModeRectangleForColumn:(id)arg0 selection:(id)arg1 ;
-(struct CGRect )p_topicDragRectForSelection:(id)arg0 ;
-(struct CGRect )rectForSelection:(id)arg0 ;
-(struct CGRect )rectForSelection:(id)arg0 includeRuby:(BOOL)arg1 ;
-(struct _NSRange )range;
-(struct _NSRange )rangeOfMisspelledWordAtCharIndex:(NSUInteger)arg0 ;
-(void)addAdditionalChildLayersToArray:(id)arg0 ;
-(void)addKnobsToArray:(id)arg0 ;
-(void)animateIndent:(NSInteger)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)canvasDidBeginFreeTransform;
-(void)clearSecondaryHighlight;
-(void)dealloc;
-(void)didDrawInLayer:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)didEndZooming;
-(void)didEnterBackground;
-(void)didUpdateLayer:(id)arg0 ;
-(void)disableCaretAnimation;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 limitSelection:(id)arg1 suppressInvisibles:(BOOL)arg2 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawRubyInContext:(struct CGContext *)arg0 rubyFieldStart:(NSUInteger)arg1 rubyGlyphRange:(struct _NSRange )arg2 ;
-(void)editingDidEnd;
-(void)enableCaretAnimation;
-(void)gesturesDidEnd;
-(void)i_setNeedsDisplayForSelectionChange;
-(void)i_setNeedsErasableDisplayInRange:(struct _NSRange )arg0 ;
-(void)invalidateAnnotationColor;
-(void)invalidateHUDState;
-(void)invalidateKnobs;
-(void)p_activeFindHighlightChangedNotification:(id)arg0 ;
-(void)p_addRectToContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)p_addRoundedRectToContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)p_addRoundedRectToContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 forCaret:(BOOL)arg2 ;
-(void)p_createLayer:(int)arg0 ;
-(void)p_createMarkHighlightLayer;
-(void)p_createSelectionHighlightLayer;
-(void)p_createSelectionLineLayers;
-(void)p_createSelectionParagraphBorderLayer;
-(void)p_createSmartFieldHighlightLayer;
-(void)p_destroyLayer:(int)arg0 ;
-(void)p_destroySpellChecker;
-(void)p_didDismissPopover:(id)arg0 ;
-(void)p_drawTextBackgroundLayerInContext:(struct CGContext *)arg0 ;
-(void)p_drawTextInLayer:(id)arg0 context:(struct CGContext *)arg1 limitSelection:(id)arg2 rubyGlyphRange:(struct _NSRange )arg3 renderMode:(int)arg4 suppressInvisibles:(BOOL)arg5 ;
-(void)p_drawTextLayerInContext:(struct CGContext *)arg0 ;
-(void)p_editingDidEndNotification:(id)arg0 ;
-(void)p_findUIStateChangedNotification:(id)arg0 ;
-(void)p_hideCaretLayer;
-(void)p_hideMarkHighlightLayer;
-(void)p_hideSelectionHighlightLayer;
-(void)p_hideSelectionLayers;
-(void)p_hideSelectionParagraphBorderLayer;
-(void)p_hideSmartFieldHighlightLayer;
-(void)p_indentAfterAnimationWithOptions:(id)arg0 ;
-(void)p_invalidateCommentKnobs;
-(void)p_invalidateSuppressedMisspellingRange;
-(void)p_markChangedNotification:(id)arg0 ;
-(void)p_renderingOptionsDidChangeNotification:(id)arg0 ;
-(void)p_selectionChangedNotification:(id)arg0 ;
-(void)p_selectionContentsChangedNotification:(id)arg0 ;
-(void)p_setPulseControllerActive:(BOOL)arg0 autohide:(BOOL)arg1 ;
-(void)p_setSuppressedMisspellingRange:(struct _NSRange )arg0 ;
-(void)p_showCaretLayer;
-(void)p_showSelectionParagraphBorderLayerWithPath:(struct CGPath *)arg0 ;
-(void)p_spellCheckerLanguageDidChangeNotification:(id)arg0 ;
-(void)p_startCaretLayerAnimation;
-(void)p_stopCaretLayerAnimation;
-(void)p_teardown;
-(void)p_updateAnimationWithAnimatingPulse:(BOOL)arg0 ;
-(void)p_updateForCurrentSelectionWithFlags:(NSUInteger)arg0 ;
-(void)p_updateHighlights;
-(void)p_updateLayersForInsertionPointSelection:(id)arg0 ;
-(void)p_updateLayersForRangeSelection:(id)arg0 selectionFlags:(NSUInteger)arg1 ;
-(void)p_updateMarkHighlightLayer;
-(void)p_updateSecondaryHighlightLayer;
-(void)p_updateSmartFieldHighlightLayer;
-(void)p_updateSuppressedSpellingRange;
-(void)performBlockOnTextLayers:(id)arg0 ;
-(void)processFindUIStateChangedNotificationUserInfo:(id)arg0 ;
-(void)pulseAnimationDidStop:(id)arg0 ;
-(void)pulseAnimationDidStopForPulse:(id)arg0 ;
-(void)pulseCaret;
-(void)screenScaleDidChange;
-(void)setHighlightedHyperlinkField:(id)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRange:(struct _NSRange )arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setSecondaryHighlightRange:(struct _NSRange )arg0 color:(struct CGColor *)arg1 pathStyle:(int)arg2 ;
-(void)spellCheckingStateChanged;
-(void)tilingLayerWillSetNeedsDisplay:(id)arg0 ;
-(void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(id)arg0 ;
-(void)tilingLayerWillSetNeedsLayout:(id)arg0 ;
-(void)updateFromLayout;
-(void)updatePositionsOfKnobs:(id)arg0 ;
-(void)verticalTextPropertyChanged;
-(void)viewDidAppear;
-(void)viewScaleDidChange;
-(void)viewScrollingEnded;
-(void)willBeRemoved;
-(void)willBeginZooming;
-(void)willDisplayEditHyperlinkUIForHyperlinkField:(id)arg0 beginEditing:(BOOL)arg1 ;
-(void)willEnterForeground;


@end


#endif