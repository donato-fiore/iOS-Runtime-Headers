// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTINTERACTIONASSISTANT_H
#define UITEXTINTERACTIONASSISTANT_H

@class UIResponder<UITextInput>, NSNumber, NSString;
@protocol UITextInteraction_AssistantDelegate, UITextCursorAssertionControllerSubject, UIPointerInteractionDelegate, UIResponderStandardEditActions, UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UITextSelectionView.h"
#import "UITextChecker.h"
#import "UITextRange.h"
#import "UIPointerInteraction.h"
#import "UITextLinkInteraction.h"
#import "UITextContextMenuInteraction.h"
#import "UITextInteraction.h"
#import "_UITextInteractionAssistantGestureState.h"
#import "_UIKeyboardTextSelectionController.h"
#import "UITextCursorAssertionController.h"
#import "UIContextMenuInteraction.h"
#import "UIGestureRecognizer.h"
#import "UIFieldEditor.h"
#import "UILongPressGestureRecognizer.h"
#import "UIScrollView.h"
#import "UITapGestureRecognizer.h"

@interface UITextInteractionAssistant : NSObject <UITextInteraction_AssistantDelegate, UITextCursorAssertionControllerSubject, UIPointerInteractionDelegate, UIResponderStandardEditActions>

 {
    UIResponder<UITextInput> *_view;
    UITextSelectionView *_selectionView;
    int _autoscrollRamp;
    CGFloat _autoscrollFactor;
    CGPoint _autoscrollBasePoint;
    CGPoint _autoscrollUntransformedExtentPoint;
    CGPoint _loupeGestureEndPoint;
    UITextChecker *_textChecker;
    BOOL _inGesture;
    BOOL _autoscrolled;
    BOOL _willHandoffLoupeMagnifier;
    BOOL _needsGestureUpdate;
    NSInteger _previousRepeatedGranularity;
    UITextRange *_stashedTextRange;
    BOOL _didUseStashedRange;
    BOOL _expectingCommit;
    BOOL _externalTextInput;
    BOOL _suppressSystemUI;
    UIPointerInteraction *_pointerInteraction;
    BOOL _automaticSelectionCommandsSuppressed;
    NSUInteger _activeSelectionInteractions;
    UITextLinkInteraction *_linkInteraction;
    UITextContextMenuInteraction *_textContextMenuInteraction;
    id<UIContextMenuInteractionDelegate> *_externalContextMenuInteractionDelegate;
    UITextInteraction *_interactions;
    NSInteger _textInteractionMode;
    UITextInteraction *_externalInteractions;
    id *_grabberSuppressionAssertion;
    id *_keyboardSuppressionAssertion;
    _UITextInteractionAssistantGestureState *_gestureState;
    _UIKeyboardTextSelectionController *_nonEditableSelectionController;
    UITextCursorAssertionController *_assertionController;
    BOOL _detaching;
    NSNumber *_viewConformsToTextItemInteracting;
    NSNumber *_viewRespondsToInteractiveTextSelectionDisabled;
    NSNumber *_viewConformsToAsynchronousInteractionViewProtocol;
}


@property (readonly, nonatomic) UITextCursorAssertionController *_assertionController;
@property (readonly, nonatomic) _UIKeyboardTextSelectionController *activeSelectionController;
@property (nonatomic) CGPoint autoscrollUntransformedExtentPoint;
@property (nonatomic) BOOL autoscrolled;
@property (readonly, nonatomic) BOOL canShowSelectionCommands; // ivar: _canShowSelectionCommands
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic) BOOL cursorBlinks;
@property (nonatomic) BOOL cursorVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) UIGestureRecognizer *doubleTapGesture;
@property (nonatomic) BOOL expectingCommit;
@property (weak, nonatomic) NSObject<UIContextMenuInteractionDelegate> *externalContextMenuInteractionDelegate;
@property (retain, nonatomic) UITextInteraction *externalInteractions;
@property (readonly, nonatomic) BOOL externalTextInput;
@property (readonly, nonatomic) UIFieldEditor *fieldEditor;
@property (readonly, retain, nonatomic) UIGestureRecognizer *forcePressGesture;
@property (nonatomic) BOOL ghostAppearance;
@property (retain, nonatomic) id *grabberSuppressionAssertion;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inGesture;
@property (readonly, retain, nonatomic) UITextInteraction *interactions;
@property (readonly, nonatomic, getter=isInteractiveSelectionDisabled) BOOL interactiveSelectionDisabled;
@property (retain, nonatomic) id *keyboardSuppressionAssertion;
@property (readonly, retain, nonatomic) UITextLinkInteraction *linkInteraction;
@property (readonly, retain, nonatomic) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic) CGPoint loupeGestureEndPoint;
@property (nonatomic) BOOL needsGestureUpdate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIResponder<UITextInput> *textDocument;
@property (readonly, nonatomic) UIResponder<UITextInput> *view;
@property (readonly, nonatomic) BOOL willHandoffLoupeMagnifier;


+(NSInteger)_nextGranularityInCycle:(NSInteger)arg0 forTouchType:(NSInteger)arg1 ;
-(BOOL)containerAllowsSelection;
-(BOOL)containerAllowsSelectionTintOnly;
-(BOOL)containerIsBrowserView;
-(BOOL)containerIsTextField;
-(BOOL)didPerformLoupeSelectionHandoff;
-(BOOL)didUseStashedSelection;
-(BOOL)handleMultilingualAlternativeWithString:(id)arg0 range:(id)arg1 ;
-(BOOL)hasActiveSelectionInteraction;
-(BOOL)hasReplacements;
-(BOOL)isDisplayingMenu;
-(BOOL)isDisplayingMenuForInputUI;
-(BOOL)isValid;
-(BOOL)requiresImmediateUpdate;
-(BOOL)scheduleReplacementsForRange:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(BOOL)shouldSuppressSelectionCommands;
-(BOOL)showMultilingualDictationReplacementWithRange:(id)arg0 ;
-(BOOL)supportsIndirectInteractions;
-(BOOL)swallowsDoubleTapWithScale:(CGFloat)arg0 atPoint:(struct CGPoint )arg1 ;
-(BOOL)useGesturesForEditableContent;
-(BOOL)usesAsynchronousSelectionController;
-(BOOL)viewCouldBecomeEditable:(id)arg0 ;
-(BOOL)wantsLinkInteraction;
-(Class)selectionInteractionClass;
-(NSInteger)currentCursorBehavior;
-(NSUInteger)currentDraggedHandle;
-(id)_asText;
-(id)_computeGestureStateForView:(id)arg0 ;
-(id)_pointerInteractionDelegate;
-(id)_scrollable;
-(id)_selectionView;
-(id)attributedTextInRange:(id)arg0 ;
-(id)generatorForRange:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)initWithResponder:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 textInteractionMode:(NSInteger)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)rangeForTextReplacement:(id)arg0 ;
-(id)selectionView;
-(id)textSelectionView;
-(struct CGPoint )constrainedPoint:(struct CGPoint )arg0 ;
-(void)_updateSelectionInViewIfNeeded:(id)arg0 toRange:(id)arg1 ;
-(void)_updateSelectionWithPoint:(struct CGPoint )arg0 granularity:(NSInteger)arg1 forceGranularity:(BOOL)arg2 ;
-(void)activate;
-(void)activateSelection;
-(void)addGestureRecognizersToView:(id)arg0 ;
-(void)attach;
-(void)autoscrollWillNotStart;
-(void)beginFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)canBeginDragCursor:(id)arg0 ;
-(void)cancelAutoscroll;
-(void)checkEditabilityAndSetFirstResponderIfNecessary;
-(void)clearGestureRecognizers;
-(void)clearGestureRecognizers:(BOOL)arg0 ;
-(void)clearSelection;
-(void)clearStashedSelection;
-(void)commitSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)configureForHighlightMode;
-(void)configureForPencilHighlightMode;
-(void)configureForReplacementMode;
-(void)configureForSelectionMode;
-(void)deactivateSelection;
-(void)dealloc;
-(void)detach;
-(void)detach:(BOOL)arg0 ;
-(void)didEndScrollingOrZooming;
-(void)didEndSelectionInteraction;
-(void)dismissMenuForInputUI;
-(void)endFloatingCursor;
-(void)extendSelectionToLoupeOrSetToPoint:(struct CGPoint )arg0 ;
-(void)extendSelectionToPoint:(struct CGPoint )arg0 ;
-(void)invalidate;
-(void)layoutChangedByScrolling:(BOOL)arg0 ;
-(void)lollipopGestureWithState:(NSInteger)arg0 location:(struct CGPoint )arg1 locationOfFirstTouch:(struct CGPoint )arg2 forTouchType:(NSInteger)arg3 ;
// -(void)loupeGestureWithState:(NSInteger)arg0 location:(id)arg1 translation:(unk)arg2 velocity:(id)arg3 modifierFlags:(unk)arg4 shouldCancel:(id)arg5  ;
-(void)loupeMagnifierWithState:(NSInteger)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)notifyKeyboardSelectionChanged;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)presentMenuForInputUI:(id)arg0 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionEnded:(struct CGPoint )arg0 ;
-(void)rangeSelectionMoved:(struct CGPoint )arg0 withTouchPoint:(struct CGPoint )arg1 ;
-(void)rangeSelectionStarted:(struct CGPoint )arg0 ;
-(void)rangedMagnifierWithState:(NSInteger)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)resignedFirstResponder;
-(void)scheduleChineseTransliteration;
-(void)scheduleDictationReplacementsForAlternatives:(id)arg0 range:(id)arg1 ;
-(void)scheduleDictationReplacementsForMultilingualAlternatives:(id)arg0 range:(id)arg1 ;
-(void)scheduleReplacements;
-(void)scheduleReplacementsWithOptions:(NSUInteger)arg0 ;
-(void)scrollSelectionToVisible;
-(void)scrollSelectionToVisible:(BOOL)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)selectWord;
-(void)selectWordWithoutShowingCommands;
-(void)selectionAnimationDidStop;
-(void)selectionChanged;
-(void)setAutomaticSelectionCommandsSuppressedForPointerTouchType:(BOOL)arg0 ;
-(void)setFirstResponderIfNecessary;
-(void)setFirstResponderIfNecessaryActivatingSelection:(BOOL)arg0 ;
-(void)setGestureRecognizers;
-(void)setSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)setSuppressSystemUI:(BOOL)arg0 ;
-(void)showSelectionCommandsForSecondaryClickAtPoint:(struct CGPoint )arg0 ;
-(void)startAutoscroll:(struct CGPoint )arg0 ;
-(void)stashCurrentSelection;
-(void)updateAutoscroll:(id)arg0 ;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)updateSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg0 ;
-(void)willBeginFloatingCursor:(BOOL)arg0 ;
-(void)willBeginSelectionInteraction;
-(void)willStartScrollingOrZooming;


@end


#endif