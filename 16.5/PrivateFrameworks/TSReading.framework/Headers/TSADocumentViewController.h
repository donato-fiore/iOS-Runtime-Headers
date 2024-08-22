// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSADOCUMENTVIEWCONTROLLER_H
#define TSADOCUMENTVIEWCONTROLLER_H

@class UIButton, NSArray, TSASyncResolveConflictViewController, UIScrollView, NSString, TSAFindReplaceUIController;
@protocol TSKDocumentViewController, TSKPopoverBasedViewControllerDelegate, TSWPInteractiveCanvasControllerDelegate, UIActionSheetDelegate, TSKFindReplaceDelegate, TSKKeyboardObserver, TSDiOSCanvasViewControllerDelegate, TSKChangeSourceObserver, TSANavigatorViewController;


#import "TSAViewController.h"
#import "TSKUIAlert.h"
#import "TSDiOSCanvasViewController.h"
#import "TSADebugViewController.h"
#import "TSAInteractiveCanvasController.h"
#import "TIADocument.h"
#import "TSADocumentRoot.h"

@interface TSADocumentViewController : TSAViewController <TSKDocumentViewController, TSKPopoverBasedViewControllerDelegate, TSWPInteractiveCanvasControllerDelegate, UIActionSheetDelegate, TSKFindReplaceDelegate, TSKKeyboardObserver, TSDiOSCanvasViewControllerDelegate, TSKChangeSourceObserver>

 {
    BOOL _navigatorHidden;
    UIButton *_doneButton;
    UIButton *_closeButton;
    BOOL _registered;
    BOOL _inspectorIsCompletelyVisible;
    NSInteger _helpViewVisibleState;
    BOOL _isAbandoningDocument;
    BOOL _settingDocumentMode;
    NSInteger _documentModeBeforeReplaceController;
    CGFloat _keyboardHeight;
    CGFloat _contentFrameAnimationDuration;
    CGPoint mSavedContentOffset;
    CGFloat mSavedCanvasViewScale;
    BOOL _waitingToZoomOut;
    BOOL _scheduledBackgroundInit;
    BOOL _documentModeChangeInProgress;
    CGFloat _footerHeightPadding;
}


@property (readonly, nonatomic) NSArray *CJKLanguages;
@property (retain, nonatomic) TSKUIAlert *_openDocumentEvictionAlert; // ivar: __openDocumentEvictionAlert
@property (retain, nonatomic) TSASyncResolveConflictViewController *_openDocumentResolveConflictViewController; // ivar: __openDocumentResolveConflictViewController
@property (retain, nonatomic, setter=_setOpenDocumentUpdatedAlert:) TSKUIAlert *_openDocumentUpdatedAlert; // ivar: __openDocumentUpdatedAlert
@property (readonly, nonatomic) BOOL allowEditMenuToAppear;
@property (readonly, nonatomic) BOOL allowImagePickerToAppear;
@property (readonly, nonatomic) BOOL allowTextEditingToBegin;
@property (readonly, nonatomic) NSArray *bidiLanguages;
@property (readonly, nonatomic) UIScrollView *canvasScrollView; // ivar: _scrollView
@property (retain, nonatomic) TSDiOSCanvasViewController *canvasViewController; // ivar: _canvasViewController
@property (readonly, nonatomic) BOOL chartDataEditorShowing;
@property (readonly, nonatomic) NSString *closeDocumentButtonTitle;
@property (readonly, nonatomic) UIButton *coachingTipsButton; // ivar: _coachingTipsButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSADebugViewController *debugViewController; // ivar: _debugViewController
@property (retain, nonatomic) TSAInteractiveCanvasController *defaultInteractiveCanvasController;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL displaySharingButton;
@property (readonly, retain, nonatomic) TIADocument *document; // ivar: _document
@property (nonatomic) NSInteger documentMode; // ivar: _documentMode
@property (readonly, retain, nonatomic) TSADocumentRoot *documentRoot;
@property (nonatomic) BOOL editMenuTapGRWasEnabledForFind; // ivar: _editMenuTapGRWasEnabledForFind
@property (readonly, nonatomic) TSAFindReplaceUIController *findReplaceUIController; // ivar: _findReplaceUIController
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidingStatusBar) BOOL hidingStatusBar; // ivar: _isHidingStatusBar
@property (retain, nonatomic) TSAInteractiveCanvasController *interactiveCanvasController; // ivar: _interactiveCanvasController
@property (readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (readonly, nonatomic) BOOL isBiDiEnabled;
@property (readonly, nonatomic) BOOL isCJKEnabled;
@property (readonly, nonatomic) BOOL isCanvasFullScreen;
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isClosingDocument; // ivar: _isClosingDocument
@property (readonly, nonatomic) BOOL isDocumentLoaded; // ivar: _isDocumentLoaded
@property (nonatomic) BOOL isLandscapeOrientation; // ivar: _isLandscapeOrientation
@property (readonly, nonatomic) BOOL isPopoverGestureInFlight; // ivar: _isPopoverGestureInFlight
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) BOOL isPrintingDocument; // ivar: _isPrintingDocument
@property (readonly, nonatomic) NSArray *listLanguages;
@property (readonly, nonatomic) CGFloat modalToolbarTitleBaselineOffset;
@property (readonly, nonatomic) NSInteger modalToolbarTitleBaselineOffsetBarMetrics;
@property (retain, nonatomic) NSObject<TSANavigatorViewController> *navigatorViewController; // ivar: _navigatorViewController
@property (retain, nonatomic) TSKUIAlert *openDocumentKeepOrDeleteAlert; // ivar: _openDocumentKeepOrDeleteAlert
@property (readonly, nonatomic) BOOL preventDocumentModeChangesDuringSelectionChanges; // ivar: _preventDocumentModeChangesDuringSelectionChanges
@property (nonatomic) BOOL printerOptionsShowing; // ivar: _printerOptionsShowing
@property (readonly, nonatomic) UIButton *sharingButton; // ivar: _sharingButton
@property (readonly, nonatomic) BOOL shouldClipToScrollViewBoundsInVisibleBounds;
@property (readonly, nonatomic) BOOL shouldPopKnobsOutsideEnclosingScrollView;
@property (readonly, nonatomic) BOOL shouldResizeCanvasToScrollView;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText; // ivar: _shouldShowInstructionalText
@property (readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
@property (readonly, nonatomic) CGSize sizeOfScrollViewEnclosingCanvas;
@property (readonly, nonatomic) BOOL spellCheckingSupported;
@property (readonly, nonatomic) BOOL spellCheckingSuppressed;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat viewHeaderHeight;


+(void)resetLastDocumentMode;
-(BOOL)inFindReplaceMode;
-(BOOL)inPrintPreviewMode;
-(BOOL)insertControllerIsVisible;
-(BOOL)isInspectorVisible;
-(BOOL)isKeyboardUp;
-(BOOL)isLayoutBelowApplicationToolbar;
-(BOOL)navigatorHiddenDefault;
-(BOOL)p_shouldZoomOutForCurrentSelection;
-(BOOL)p_shouldZoomOutFromTable;
-(BOOL)popoverController:(id)arg0 shouldReceiveOutsideTouchAtLocation:(struct CGPoint )arg1 inView:(id)arg2 ;
-(BOOL)preserveScrollViewClipping;
-(BOOL)shouldAdjustContentFrameWhileRotating;
-(BOOL)shouldAutoscrollToSelectionOnContentViewSizeChange;
-(BOOL)shouldIgnoreTextGestures;
-(BOOL)showEditMenuOnChartInsert;
-(BOOL)tappedCanvasBackgroundAtPoint:(struct CGPoint )arg0 ;
-(BOOL)teardownAppUIForDocumentManagerAction;
-(BOOL)toolsControllerIsVisible;
-(BOOL)useToolBarHeightForSetDocumentMode;
-(BOOL)willChangeContentOffsetIfKeyboardHidden;
-(BOOL)zoomOnSelectionChange:(id)arg0 ;
-(CGFloat)autoZoomAnimationDurationForInteractiveCanvasController:(id)arg0 ;
-(CGFloat)externalKeyboardHideMinDuration;
-(CGFloat)leftToolbarItemsInset;
-(CGFloat)mainToolsMenuMinimumHeight;
-(CGFloat)paddingAboveChartDataEditor:(id)arg0 ;
-(CGFloat)paddingAboveHalfHeightAtTopOfScreen;
-(CGFloat)rightToolbarItemsInset;
-(CGFloat)toolbarSpaceWidth;
-(CGFloat)toolbarTextButtonSpaceWidth;
-(NSInteger)defaultDocumentMode;
-(NSInteger)lastDocumentMode;
-(NSInteger)p_documentModeToRestoreFor:(NSInteger)arg0 ;
-(float)viewBottomInScreenCoordinates;
-(id)alternativeOpenCloseDocumentAnimationView;
-(id)childViewControllerForStatusBarStyle;
-(id)closeDocumentButton;
-(id)contentView;
-(id)drawableFactory;
-(id)initWithDefaultView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)mainInteractiveCanvasController;
-(id)openCloseAnimationAlternativeView;
-(id)p_arrayByAddingLanguage:(id)arg0 toArray:(id)arg1 ;
-(id)rectanglesObscuringView:(id)arg0 ;
-(id)superviewForChartDataEditor:(id)arg0 ;
-(id)title;
-(struct CGPoint )clampedUnscaledContentOffset:(struct CGPoint )arg0 ;
-(struct CGRect )contentFrame;
-(struct CGRect )openCloseAnimationCanvasFrame;
-(struct CGRect )rectForPopoverFromToolbarButton:(id)arg0 ;
-(struct CGRect )visibleScaledCanvasRectWithoutKeyboard;
-(struct CGRect )visibleUnscaledCanvasRectWithoutKeyboard;
-(struct _NSRange )visibleRootIndexRange;
-(void)abandonDocument;
-(void)adjustContentViewFrame;
-(void)adjustScrollViewInsets;
-(void)asyncProcessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)backgroundInit;
-(void)canvasEditorDidChangeSelection:(id)arg0 ;
-(void)canvasWillEndEditingToBeginEditingRep:(id)arg0 ;
-(void)closeDocumentPressed;
-(void)commitChartDataEditorEdits;
-(void)deRegisterForCanvasEditorNotifications;
-(void)dealloc;
-(void)didEnterBackground;
-(void)didReceiveMemoryWarning;
-(void)didReplaceDocument;
-(void)didSetContentViewFrame;
-(void)didSetDocumentToMode:(NSInteger)arg0 fromMode:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)didStopCloseDocumentAnimation;
-(void)didStopLaunchDocumentAnimation;
-(void)didStopOpenDocumentAnimation;
-(void)dismissChartDataEditor:(id)arg0 ;
-(void)editorDidChangeSelection:(id)arg0 ;
-(void)forceChartDataEditorToCloseWithSave:(BOOL)arg0 ;
-(void)hideSharedUIPanelsForReadMode;
-(void)insertedDrawableInfoDidFinishDragging:(id)arg0 ;
-(void)interactiveCanvasController:(id)arg0 willAnimateToViewScale:(CGFloat)arg1 withDuration:(CGFloat)arg2 unscaledContentOffset:(struct CGPoint )arg3 ;
-(void)interactiveCanvasControllerDidUpdateLayersFromReps:(id)arg0 ;
-(void)keyboardDidHideOrUndock:(id)arg0 ;
-(void)keyboardShowCanceled;
-(void)keyboardWillHideOrUndock:(id)arg0 ;
-(void)keyboardWillShowOrDock:(id)arg0 ;
-(void)loadDocument;
-(void)navigatePlay:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)p_backgroundInit;
-(void)p_deregisterForNotifications;
-(void)p_editingCellDidChange:(id)arg0 ;
-(void)p_restoreTextSelectionAfterModalDismiss;
-(void)p_scrollToCurrentSelection;
-(void)p_scrollToRect:(struct CGRect )arg0 ;
-(void)p_startBackgroundInit;
-(void)p_teardown;
-(void)p_willEnterFullScreen:(id)arg0 ;
-(void)p_zoomOutForCurrentSelection;
-(void)performCloseDocumentAnimation;
-(void)performOpenDocumentAnimation;
-(void)popoverController:(id)arg0 learnMoreAPDIDTapped:(id)arg1 ;
-(void)popoverControllerDidDismissPopoverBasedViewController:(id)arg0 ;
-(void)prepareCloseDocumentAnimation;
-(void)prepareOpenDocumentAnimation;
-(void)registerForCanvasEditorNotifications;
-(void)scrollToRect:(struct CGRect )arg0 ;
-(void)setLastDocumentMode:(NSInteger)arg0 ;
-(void)setNavigatorHiddenDefault:(BOOL)arg0 ;
-(void)setSelection:(id)arg0 onModel:(id)arg1 withFlags:(NSUInteger)arg2 ;
-(void)showInsertPopoverFromRect:(struct CGRect )arg0 popoverType:(int)arg1 withDoneButton:(BOOL)arg2 ;
-(void)showPlaceholderTools:(id)arg0 ;
-(void)teardown;
-(void)toolsFindReplace;
-(void)unloadDocument;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willEnterForeground;
-(void)willInsertDrawable;
-(void)willReplaceDocument;
-(void)willSetDocumentToMode:(NSInteger)arg0 fromMode:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)willSetupApplicationToolbar;
-(void)zoomOutAnimated:(BOOL)arg0 ;


@end


#endif