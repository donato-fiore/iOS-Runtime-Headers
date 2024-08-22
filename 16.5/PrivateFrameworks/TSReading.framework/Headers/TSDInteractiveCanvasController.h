// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDINTERACTIVECANVASCONTROLLER_H
#define TSDINTERACTIVECANVASCONTROLLER_H

@class TSDGuideController, NSFormatter, CALayer, NSMutableArray, NSMutableSet, NSArray, NSRecursiveLock, NSString, TSDGuideStorage, NSSet;
@protocol TSDCanvasDelegate, TSDErrorPresenter, TSDModalOperationPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation, TSDTilingLayerDelegate, TSDEditor, TSDImageHUDController, TSDAnnotationHosting, TSDAnnotationPopoverController, TSDCanvasEditor, TSDInteractiveCanvasControllerDelegate, TSDRepDirectLayerHostProvider, TSKDocumentRootProvider, TSDCanvasLayerHosting, TSDRulerController;

#import <Foundation/Foundation.h>

#import "TSDEditorController.h"
#import "TSDInteractiveCanvasController.h"
#import "TSDCanvasAnimation.h"
#import "TSDTrackerManipulatorCoordinator.h"
#import "TSDDynamicOperationController.h"
#import "TSDGestureDispatcher.h"
#import "TSDBackgroundLayoutAndRenderState.h"
#import "TSDTileStorage.h"
#import "TSDDisplayLinkDispatch.h"
#import "TSKAccessController.h"
#import "TSDCanvas.h"
#import "TSDCanvasLayer.h"
#import "TSDCanvasView.h"
#import "TSKChangeNotifier.h"
#import "TSKDocumentRoot.h"
#import "TSDLayoutController.h"
#import "TSPObjectContext.h"
#import "TSDTextInputResponder.h"
#import "TSDContainerRep.h"
#import "TSDTrackingController.h"

@interface TSDInteractiveCanvasController : NSObject <TSDCanvasDelegate, TSDErrorPresenter, TSDModalOperationPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation, TSDTilingLayerDelegate>

 {
    *__CFDictionary mContainerLayersByRep;
    *__CFDictionary mRepLayersByRep;
    *__CFDictionary mRepsByRepLayer;
    *__CFDictionary mRepsByContainerLayer;
    *__CFDictionary mDirectLayerHostsByRep;
    TSDEditorController *mEditorController;
    TSDGuideController *mGuideController;
    BOOL mHasBeenTornDown;
    BOOL mHadLayerHost;
    BOOL mLayerHostHasBeenTornDown;
    TSDInteractiveCanvasController *mTextInputResponderSource;
    NSUInteger mTextInputResponderShareCount;
    NSFormatter *mUnitFormatter;
    BOOL mShouldAnimateAutoscroll;
    BOOL mShouldCenterSelectionWhenAutoscrolling;
    CALayer *mPopoutLayer;
    NSMutableArray *mDecorators;
    BOOL mInDynamicOperation;
    int mDynamicOperationCounter;
    *CGColor mSelectionHighlightColor;
    TSDCanvasAnimation *mCurrentAnimation;
    TSDTrackerManipulatorCoordinator *mTMCoordinator;
    TSDDynamicOperationController *mDynOpController;
    TSDGestureDispatcher *mGestureDispatcher;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    id *mInspectorSingleTapBlock;
    TSDBackgroundLayoutAndRenderState *mBackgroundLayoutAndRenderState;
    BOOL mTemporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
    BOOL mCurrentlyScrolling;
    BOOL mAnimatingScroll;
    BOOL mSuppressedAutozoom;
    id<TSDEditor> *mSelectionChangeNotificationDeferredEditor;
    BOOL mShouldAutoscrollToSelectionAfterGestures;
    BOOL mSuspendedLowPriorityThreadDispatcher;
    int mDisableThreadedLayoutAndRender;
    unsigned int mEmbeddedCanvasScrolling;
    NSMutableArray *mHiddenTopLevelLayers;
    NSMutableSet *mNotificationsToPostWithValidLayouts;
    NSArray *mLayersWithZoomFadeAnimation;
    BOOL mDynamicallyZooming;
    CGFloat mDynamicViewScale;
    BOOL mUsesAlternateDrawableSelectionHighlight;
    CGFloat mTargetPointSize;
    BOOL mSuppressingKeyboard;
    NSObject<TSDImageHUDController> *mImageHUDController;
    NSInteger mImageHUDLock;
    NSObject<TSDImageHUDController> *mIAHUDController;
    NSInteger mIAHUDLock;
    BOOL mIgnoreContentOffsetChanges;
    TSDTileStorage *mTileStorage;
    CGPoint mZoomCenterInBounds;
    NSMutableArray *mBackgroundRenderingObjects;
    id<TSDAnnotationHosting> *mDisplayedAnnotation;
    id<TSDAnnotationPopoverController> *mAnnotationPopoverController;
    NSMutableArray *mNextLayoutBlocks;
    BOOL mShowUserDefinedGuides;
    BOOL mTeardownOnBackgroundThread;
    TSDDisplayLinkDispatch *mDisplayLinkDispatch;
    BOOL mRepViewsNeedUpdating;
    NSRecursiveLock *mSelfSync;
}


@property (readonly, nonatomic) TSKAccessController *accessController;
@property (readonly, nonatomic) NSArray *additionalLayersOverRepLayers;
@property (readonly, nonatomic) NSArray *additionalLayersUnderRepLayers;
@property (nonatomic) BOOL allowLayoutAndRenderOnThread; // ivar: mLayoutAndRenderOnThreadDuringScroll
@property (readonly, nonatomic) BOOL animatingViewScale; // ivar: mAnimatingViewScale
@property (readonly, nonatomic) TSDCanvas *canvas; // ivar: mCanvas
@property (retain, nonatomic) NSObject<TSDCanvasEditor> *canvasEditor; // ivar: mCanvasEditor
@property (readonly, nonatomic) TSDCanvasLayer *canvasLayer;
@property (readonly, nonatomic) id *canvasReferenceController;
@property (readonly, nonatomic) CGSize canvasScrollingOutset;
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (readonly, nonatomic) ? centerPlusMovementContentPlacement;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property (nonatomic) BOOL createRepsForOffscreenLayouts; // ivar: mCreateRepsForOffscreenLayouts
@property (readonly, nonatomic) CGFloat currentViewScale;
@property (readonly, nonatomic) BOOL currentlyScrolling;
@property (readonly, nonatomic) BOOL currentlyWaitingOnThreadedLayoutAndRender; // ivar: mCurrentlyWaitingOnThreadedLayoutAndRender
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGSize defaultMinimumUnscaledCanvasSize;
@property (readonly, nonatomic) CGFloat defaultViewScale;
@property (nonatomic) NSObject<TSDInteractiveCanvasControllerDelegate> *delegate; // ivar: mDelegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<TSDRepDirectLayerHostProvider> *directLayerHostProvider; // ivar: _directLayerHostProvider
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) NSObject<TSKDocumentRootProvider> *documentRootProvider;
@property (readonly, retain, nonatomic) TSDDynamicOperationController *dynamicOperationController;
@property (readonly, nonatomic) TSDEditorController *editorController;
@property (readonly, nonatomic) CGFloat fitWidthViewScale;
@property (nonatomic) BOOL forceTilingLayoutOnThreadWhenScrolling; // ivar: mForceTilingLayoutOnThreadWhenScrolling
@property (readonly, retain, nonatomic) TSDGestureDispatcher *gestureDispatcher;
@property (readonly, nonatomic) TSDGuideStorage *guideStorage;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inReadMode; // ivar: mInReadMode
@property (nonatomic) BOOL inVersionBrowsingMode; // ivar: mInVersionBrowsingMode
@property (copy, nonatomic) NSArray *infosToDisplay;
@property (readonly, nonatomic) BOOL inspectorModeEnabled; // ivar: mInspectorModeEnabled
@property (nonatomic) CGPoint lastTapPoint; // ivar: mLastTapPoint
@property (nonatomic) NSObject<TSDCanvasLayerHosting> *layerHost; // ivar: mLayerHost
@property (readonly, nonatomic) TSDLayoutController *layoutController;
@property (nonatomic) BOOL nestedCanvasAllowLayoutAndRenderOnThread; // ivar: mNestedCanvasAllowLayoutAndRenderOnThread
@property (readonly, nonatomic) TSPObjectContext *objectContext;
@property (readonly, nonatomic) CALayer *overlayLayer; // ivar: mOverlayLayer
@property (nonatomic) BOOL overlayLayerSuppressed; // ivar: mOverlayLayerSuppressed
@property (copy) NSSet *p_cachedTopLevelTilingLayers; // ivar: mCachedTopLevelTilingLayers
@property CGRect p_visibleBoundsRectForTiling; // ivar: mVisibleBoundsRectForTiling
@property CGRect p_visibleUnscaledRect; // ivar: mVisibleUnscaledRect
@property (nonatomic) BOOL preventSettingNilEditorOnTextResponder; // ivar: mPreventSettingNilEditorOnTextResponder
@property (readonly, nonatomic) CALayer *repContainerLayer; // ivar: mRepContainerLayer
@property (nonatomic) BOOL resizeCanvasOnLayout; // ivar: mResizeCanvasOnLayout
@property (nonatomic) NSObject<TSDRulerController> *rulerController; // ivar: mRulerController
@property (readonly, nonatomic) ? screenBottomContentPlacement;
@property (readonly, nonatomic) ? screenTopContentPlacement;
@property (nonatomic) *CGColor selectionHighlightColor;
@property (nonatomic) BOOL shouldAutoscrollToSelectionAfterLayout; // ivar: mShouldAutoscrollToSelectionAfterLayout
@property (nonatomic) BOOL shouldClipThemeContentToCanvas; // ivar: mShouldClipThemeContentToCanvas
@property (nonatomic) BOOL shouldShowUserDefinedGuides;
@property (nonatomic) BOOL shouldSuppressRendering; // ivar: mShouldSuppressRendering
@property (nonatomic) BOOL showGrayOverlay; // ivar: mShowGrayOverlay
@property (nonatomic) BOOL showInvisibleObjects; // ivar: mShowInvisibleObjects
@property (nonatomic) BOOL showsComments;
@property (readonly, nonatomic) CGSize sizeOfScrollViewEnclosingCanvas;
@property (nonatomic) BOOL staticLayoutAndRenderOnThread; // ivar: mStaticLayoutAndRenderOnThread
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsBackgroundTileRendering; // ivar: mSupportsBackgroundTileRendering
@property (nonatomic) BOOL suppressAutozoomToSelectionAfterLayout; // ivar: mSuppressAutozoomToSelectionAfterLayout
@property (nonatomic) BOOL textGesturesInFlight; // ivar: mTextGesturesInFlight
@property (readonly, nonatomic) TSDTextInputResponder *textInputResponder; // ivar: mTextInputResponder
@property (readonly, retain, nonatomic) TSDTrackerManipulatorCoordinator *tmCoordinator;
@property (readonly, nonatomic) TSDContainerRep *topLevelContainerRepForEditing;
@property (readonly, nonatomic) ? touchContentPlacement;
@property (retain, nonatomic) TSDTrackingController *trackingController; // ivar: mTrackingController
@property (nonatomic) CGRect unobscuredScrollViewFrame; // ivar: mUnobscuredScrollViewFrame
@property (nonatomic) BOOL usesAlternateDrawableSelectionHighlight;
@property (nonatomic) CGFloat viewScale;
@property (readonly, nonatomic) CGRect visibleBoundsRect;
@property (readonly, nonatomic) CGRect visibleBoundsRectClippedToWindow;
@property (readonly, nonatomic) CGRect visibleBoundsRectForTiling;
@property (readonly, nonatomic) CGRect visibleBoundsRectUsingSizeOfEnclosingScrollView;
@property (readonly, nonatomic) CGRect visibleUnscaledRect;
@property (readonly, nonatomic) CGRect visibleUnscaledRectForAutoscroll;
@property (readonly, nonatomic) CGRect visibleUnscaledRectForCanvasUI;
@property (readonly, nonatomic) CGRect visibleUnscaledRectForScrollingAutomatically;
@property (readonly, nonatomic) CGRect visibleUnscaledRectValidWhileZooming;


+(BOOL)selectorIsActionMethod:(SEL)arg0 ;
+(CGFloat)smallRepOutsetForHitTesting;
+(id)keyPathsForValuesAffectingCurrentViewScale;
+(id)keyPathsForValuesAffectingDocumentRoot;
+(id)keyPathsForValuesAffectingEditorController;
+(id)keyPathsForValuesAffectingViewScale;
-(BOOL)allowAutoscroll;
-(BOOL)allowNegativeAutoscroll;
-(BOOL)attachedCommentsAllowedForDrawable:(id)arg0 ;
-(BOOL)backgroundLayoutAndRenderState:(id)arg0 shouldDispatchBackgroundWork:(id)arg1 ;
-(BOOL)canDrawTilingLayerInBackground:(id)arg0 ;
-(BOOL)canPerformInteractiveAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canZoomToCurrentSelection;
-(BOOL)canvasViewShouldBecomeFirstResponder:(id)arg0 ;
-(BOOL)handleDoubleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)hasAnnotations;
-(BOOL)i_inPrintPreviewMode;
-(BOOL)i_needsLayout;
-(BOOL)i_temporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
-(BOOL)isCanvasInteractive;
-(BOOL)isInDynamicOperation;
-(BOOL)isInInspectorDynamicOperation;
-(BOOL)isPrinting;
-(BOOL)isPrintingCanvas;
-(BOOL)keyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg0 ;
-(BOOL)p_allowUpdateViewsFromReps;
-(BOOL)p_centerOnInitialSelection;
-(BOOL)p_currentlyScrollingIncludeEmbeddedCanvasScrolling:(BOOL)arg0 ;
-(BOOL)p_endEditingToBeginEditingRep:(id)arg0 ;
-(BOOL)p_shouldLayoutAndRenderOnThread;
-(BOOL)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(BOOL)arg0 ;
-(BOOL)p_shouldSuppressAutozoomForEditor:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)selectionContainsOnlyInfosOnCanvas:(id)arg0 model:(id)arg1 ;
-(BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg0 returningToken:(*id)arg1 andQueue:(*id)arg2 ;
-(BOOL)shouldDisplayCommentUIForInfo:(id)arg0 ;
-(BOOL)shouldEverShowPathHighlightOnInvisibleShapes;
-(BOOL)shouldLayoutTilingLayer:(id)arg0 ;
-(BOOL)shouldPopKnobsOutsideEnclosingScrollView;
-(BOOL)shouldResampleImages;
-(BOOL)shouldResizeCanvasToScrollView;
-(BOOL)shouldShowInstructionalText;
-(BOOL)shouldShowOnRepHyperlinkUI;
-(BOOL)shouldShowPathHighlightOnUnselectedInvisibleShapes;
-(BOOL)shouldShowTextOverflowGlyphs;
-(BOOL)shouldZoomOnSelectionChange;
-(BOOL)spellCheckingSupported;
-(BOOL)spellCheckingSuppressed;
-(BOOL)wantsUpdatedScrollIndicatorInsets;
-(BOOL)zoomToFitRect:(struct CGRect )arg0 outset:(BOOL)arg1 fitWidthOnly:(BOOL)arg2 centerHorizontally:(BOOL)arg3 centerVertically:(BOOL)arg4 animated:(BOOL)arg5 ;
-(CGFloat)animationBeginTime;
-(CGFloat)animationDuration;
-(CGFloat)i_adjustViewScale:(CGFloat)arg0 ;
-(CGFloat)i_nextCanvasViewScaleDetentForProposedViewScale:(CGFloat)arg0 greater:(BOOL)arg1 ;
-(CGFloat)i_viewScaleForProposedViewScale:(CGFloat)arg0 originalViewScale:(CGFloat)arg1 ;
-(CGFloat)p_targetPointSize;
-(CGFloat)viewScaleForZoomToFitRect:(struct CGRect )arg0 outset:(BOOL)arg1 fitWidthOnly:(BOOL)arg2 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)actionGhostKnobForRep:(id)arg0 ;
-(id)additionalVisibleInfosForCanvas:(id)arg0 ;
-(id)ancestorRepOfRep:(id)arg0 orDelegateConformingToProtocol:(id)arg1 ;
-(id)annotationController;
-(id)beginEditingRep:(id)arg0 ;
-(id)beginEditingRep:(id)arg0 clearingSelection:(BOOL)arg1 withEditorProvider:(id)arg2 ;
-(id)beginEditingRepForInfo:(id)arg0 ;
-(id)canvas:(id)arg0 layoutGeometryProviderForLayout:(id)arg1 ;
-(id)clampContentLocation:(id)arg0 forPlacement:(struct ? )arg1 ;
-(id)clampedCenterContentLocationForPoint:(struct CGPoint )arg0 withPlacement:(struct ? )arg1 viewScale:(CGFloat)arg2 ;
-(id)containerLayerForRep:(id)arg0 ;
-(id)convertContentLocation:(id)arg0 fromPlacement:(struct ? )arg1 toPlacement:(struct ? )arg2 ;
-(id)gestureTargetStack:(id)arg0 ;
-(id)hitKnobAtPoint:(struct CGPoint )arg0 returningRep:(*id)arg1 ;
-(id)hitRep:(struct CGPoint )arg0 ;
-(id)hitRep:(struct CGPoint )arg0 withGesture:(id)arg1 passingTest:(id)arg2 ;
-(id)hitRepChromeAtUnscaledPoint:(struct CGPoint )arg0 ;
-(id)hitRepsAtPoint:(struct CGPoint )arg0 withSlop:(struct CGSize )arg1 ;
-(id)i_currentAnimation;
-(id)i_descriptionForViewScale:(CGFloat)arg0 ;
-(id)i_tileStorage;
-(id)i_topLevelLayersForTiling;
-(id)infoForModel:(id)arg0 withSelection:(id)arg1 ;
-(id)infoToScrollToForModel:(id)arg0 withSelection:(id)arg1 ;
-(id)infosForGuides;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)layerForRep:(id)arg0 ;
-(id)layoutForInfo:(id)arg0 ;
-(id)layoutForInfoNearestVisibleRect:(id)arg0 ;
-(id)layoutForInfoNearestVisibleRect:(id)arg0 intersectingSelection:(id)arg1 ;
-(id)layoutForModel:(id)arg0 withSelection:(id)arg1 ;
-(id)layoutsForInfo:(id)arg0 ;
-(id)layoutsForInfo:(id)arg0 intersectingSelection:(id)arg1 ;
-(id)layoutsForModel:(id)arg0 withSelection:(id)arg1 ;
-(id)localizedPercentStringForAlignmentGuide:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)newCanvasEditor;
-(id)p_backgroundLayoutAndRenderState;
-(id)p_decorators;
-(id)p_overlayLayerForReps:(id)arg0 ;
-(id)p_repForLayout:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)p_setSelection:(id)arg0 onInfo:(id)arg1 withFlags:(NSUInteger)arg2 ;
-(id)provideDynamicGuides;
-(id)provideUserDefinedGuides;
-(id)queueForDrawingTilingLayerInBackground:(id)arg0 ;
-(id)repForContainerLayer:(id)arg0 ;
-(id)repForInfo:(id)arg0 ;
-(id)repForInfo:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)repForLayer:(id)arg0 ;
-(id)repForLayout:(id)arg0 ;
-(id)replaceImageController;
-(id)repsForInfo:(id)arg0 ;
-(id)topLevelRepsForDragSelecting;
-(id)topLevelRepsForHitTesting;
-(id)topLevelZOrderedSiblingsOfInfos:(id)arg0 ;
-(id)unitFormatter;
-(id)unitStringForAngle:(CGFloat)arg0 ;
-(id)unitStringForAngle:(CGFloat)arg0 andLength:(CGFloat)arg1 ;
-(id)unitStringForNumber:(CGFloat)arg0 ;
-(id)unitStringForPoint:(struct CGPoint )arg0 ;
-(id)unitStringForSize:(struct CGSize )arg0 ;
-(id)validatedLayoutForInfo:(id)arg0 ;
-(id)viewWithTransferredLayers;
-(int)defaultKnobTypeForRep:(id)arg0 ;
-(struct ? )contentPlacementForPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(struct CGColor *)newDefaultSelectionHighlightColor;
-(struct CGImage *)textImageFromRect:(struct CGRect )arg0 ;
-(struct CGPoint )clampedCenterPointForPoint:(struct CGPoint )arg0 withPlacement:(struct ? )arg1 viewScale:(CGFloat)arg2 ;
-(struct CGPoint )clampedUnscaledContentOffset:(struct CGPoint )arg0 forViewScale:(CGFloat)arg1 ;
-(struct CGPoint )clampedUnscaledContentOffset:(struct CGPoint )arg0 forViewScale:(CGFloat)arg1 scrollViewBoundsSize:(struct CGSize )arg2 ;
-(struct CGPoint )contentOffset;
-(struct CGPoint )convertBoundsToUnscaledPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )convertUnscaledToBoundsPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )scrollView:(id)arg0 restrictContentOffset:(struct CGPoint )arg1 ;
-(struct CGPoint )smartZoomCenterForNoSelection;
-(struct CGRect )boundingRectForActiveGuidesForRect:(struct CGRect )arg0 ;
-(struct CGRect )canvasViewBoundsWithBounds:(struct CGRect )arg0 ;
-(struct CGRect )convertBoundsToUnscaledRect:(struct CGRect )arg0 ;
-(struct CGRect )convertUnscaledToBoundsRect:(struct CGRect )arg0 ;
-(struct CGRect )i_clippingBoundsForScrollViewEnclosingCanvas;
-(struct CGRect )p_calculateVisibleBoundsRectForTiling;
-(struct CGRect )p_calculateVisibleUnscaledRect;
-(struct CGRect )p_outsetSelectionRect:(struct CGRect )arg0 ;
-(struct CGRect )p_visibleBoundsRectUsingSizeOfEnclosingScrollView:(BOOL)arg0 ;
-(struct CGRect )scrollFocusRectForModel:(id)arg0 withSelection:(id)arg1 ;
-(struct CGRect )unobscuredFrameOfView:(id)arg0 ;
-(struct CGRect )visibleBoundsForTilingLayer:(id)arg0 ;
-(struct CGRect )visibleScaledBoundsForClippingRepsOnCanvas:(id)arg0 ;
-(struct CGSize )convertBoundsToUnscaledSize:(struct CGSize )arg0 ;
-(struct CGSize )convertUnscaledToBoundsSize:(struct CGSize )arg0 ;
-(struct CGSize )growUnscaledCanvasLayerSize:(struct CGSize )arg0 ;
-(struct CGSize )i_canvasCenterOffsetForProposedViewScale:(CGFloat)arg0 originalViewScale:(CGFloat)arg1 ;
-(void)actionGhostKnobHitForRep:(id)arg0 ;
-(void)addBackgroundRenderingObject:(id)arg0 ;
-(void)addCommonObservers;
-(void)addDecorator:(id)arg0 ;
-(void)animateToViewScale:(CGFloat)arg0 contentOffset:(struct CGPoint )arg1 duration:(CGFloat)arg2 ;
-(void)animateToViewScale:(CGFloat)arg0 contentOffset:(struct CGPoint )arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)animateToViewScale:(CGFloat)arg0 contentOffset:(struct CGPoint )arg1 duration:(CGFloat)arg2 forceAnimation:(BOOL)arg3 completion:(id)arg4 ;
-(void)asyncProcessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)backgroundLayoutAndRenderState:(id)arg0 performWorkInBackgroundTilingOnly:(BOOL)arg1 ;
-(void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg0 ;
-(void)beginAnimations:(id)arg0 context:(*void)arg1 ;
-(void)beginDynamicOperation;
-(void)beginPossiblyParallelInspectorDynamicOperation;
-(void)beginScrollingOperation;
-(void)canvas:(id)arg0 createdRep:(id)arg1 ;
-(void)canvas:(id)arg0 willLayoutRep:(id)arg1 ;
-(void)canvasDidLayout:(id)arg0 ;
-(void)canvasDidUpdateRepsFromLayouts:(id)arg0 ;
-(void)canvasDidUpdateVisibleBounds:(id)arg0 ;
-(void)canvasDidValidateLayouts:(id)arg0 ;
-(void)canvasDidValidateLayoutsWithDependencies:(id)arg0 ;
-(void)canvasLayoutInvalidated:(id)arg0 ;
-(void)canvasWillLayout:(id)arg0 ;
-(void)canvasWillUpdateRepsFromLayouts:(id)arg0 ;
-(void)changeFirstResponderIfNecessary;
-(void)closeOverlays;
-(void)commitAnimations;
-(void)dealloc;
-(void)deselectAll:(id)arg0 ;
-(void)didEndDrawingTilingLayerInBackground:(id)arg0 withToken:(id)arg1 ;
-(void)didLayoutAndRenderOnThread;
-(void)disableThreadedLayoutAndRender;
-(void)discardRepForClassChange:(id)arg0 ;
-(void)displayRulerForRect:(struct CGRect )arg0 ;
-(void)displayRulerWithSlowFade:(BOOL)arg0 ;
-(void)doubleTappedCanvasBackgroundAtPoint:(struct CGPoint )arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)embeddedCanvasDidEndScrolling;
-(void)embeddedCanvasWillBeginScrolling;
-(void)enableThreadedLayoutAndRender;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endDynamicOperation;
-(void)endEditing;
-(void)endPossiblyParallelInspectorDynamicOperation;
-(void)endScrollingOperation;
-(void)forceBackgroundLayout;
-(void)forceStopScrolling;
-(void)forwardInvocation:(id)arg0 ;
-(void)hideRuler;
-(void)i_cvcWillBecomeFirstResponder;
-(void)i_cvcWillResignFirstResponder;
-(void)i_drawRepWithReadLock:(id)arg0 inContext:(struct CGContext *)arg1 forLayer:(id)arg2 ;
-(void)i_invalidateSelectionHighlightLayers;
-(void)i_layout;
-(void)i_layoutRegistered:(id)arg0 ;
-(void)i_layoutUnregistered:(id)arg0 ;
-(void)i_recordUserViewScale;
-(void)i_repNeedsDisplay:(id)arg0 ;
-(void)i_repNeedsDisplay:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)i_syncWithLayoutThread;
-(void)i_viewDidZoomToViewScale:(CGFloat)arg0 ;
-(void)i_viewIsZoomingAtPoint:(struct CGPoint )arg0 ;
-(void)i_viewScrollDidChange;
-(void)i_viewScrollWillChange;
-(void)i_viewScrollingEnded;
-(void)i_viewWillBeginZooming;
-(void)invalidateComments;
-(void)invalidateLayers;
-(void)invalidateLayoutInBackground:(id)arg0 ;
-(void)invalidateReps;
-(void)invalidateRepsIfSynced;
-(void)invalidateRepsInBackground;
-(void)invalidateVisibleBounds;
-(void)invalidateVisibleBoundsInBackground;
-(void)layoutIfNeeded;
-(void)layoutInvalidated;
-(void)makeEditorPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)makeUserDefinedGuidesVisible;
-(void)p_acquireLockAndPerformAction:(id)arg0 ;
-(void)p_applyViewScale:(CGFloat)arg0 andContentOffset:(struct CGPoint )arg1 ;
-(void)p_autoscrollToSelection:(id)arg0 withInfo:(id)arg1 isInitialSelection:(BOOL)arg2 focusRect:(struct CGRect )arg3 ;
-(void)p_autoscrollToSelection:(id)arg0 withInfo:(id)arg1 isInitialSelection:(BOOL)arg2 focusRect:(struct CGRect )arg3 scrollImmediately:(BOOL)arg4 skipZoom:(BOOL)arg5 ;
-(void)p_beginZoomingOperation;
-(void)p_commonInit;
-(void)p_discardContainerLayer:(id)arg0 forRep:(id)arg1 ;
-(void)p_discardLayer:(id)arg0 forRep:(id)arg1 ;
-(void)p_drawLayerWithReadLock:(id)arg0 ;
-(void)p_editorControllerDidChangeCurrentEditors:(id)arg0 ;
-(void)p_editorControllerDidChangeTextInputEditor:(id)arg0 ;
-(void)p_editorControllerSelectionDidChange:(id)arg0 ;
-(void)p_editorControllerSelectionDidChangeAndWantsKeyboard:(id)arg0 ;
-(void)p_editorDidChangeSelection:(id)arg0 withSelectionFlags:(NSUInteger)arg1 ;
-(void)p_editorDoneChangingSelection:(id)arg0 ;
-(void)p_editorDoneChangingSelection:(id)arg0 withFlags:(NSUInteger)arg1 ;
-(void)p_endZoomingOperation;
-(void)p_guideColorChanged:(id)arg0 ;
-(void)p_iccWillBecomeFirstResponderNotification:(id)arg0 ;
-(void)p_iccWillResignFirstResponderNotification:(id)arg0 ;
-(void)p_invalidateForBackgroundLayout;
-(void)p_invalidateTilingLayers;
-(void)p_layoutWithReadLock;
-(void)p_maybeSetTextResponderEditorTo:(id)arg0 ;
-(void)p_postNotificationOnMainThreadWithValidLayouts:(id)arg0 ;
-(void)p_recursiveHitKnobAtPoint:(struct CGPoint )arg0 inRep:(id)arg1 minDistance:(*CGFloat)arg2 hitKnob:(*id)arg3 hitRep:(*id)arg4 ;
-(void)p_recursivelyClearLayerDelegate:(id)arg0 ;
-(void)p_recursivelyUpdateLayerEdgeAntialiasingForLayer:(id)arg0 ;
-(void)p_recursivelyUpdateLayerForRep:(id)arg0 accumulatingLayers:(id)arg1 andReps:(id)arg2 ;
-(void)p_rulerUnitsDidChangeNotification:(id)arg0 ;
-(void)p_scrollModelToVisible:(id)arg0 withSelection:(id)arg1 ;
-(void)p_scrollToPrimarySelectionForEditor:(id)arg0 skipZoom:(BOOL)arg1 ;
-(void)p_scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)p_setTargetPointSize:(CGFloat)arg0 ;
-(void)p_setupPopoutLayerForReps:(id)arg0 ;
-(void)p_textGesturesDidEndNotification:(id)arg0 ;
-(void)p_textGesturesWillBeginNotification:(id)arg0 ;
-(void)p_updateCanvasSizeFromLayouts;
-(void)p_updateLayersFromReps;
-(void)p_updateViewsFromReps;
-(void)p_updateViewsFromRepsForceUpdate:(BOOL)arg0 ;
-(void)p_viewScrollingEnded;
-(void)p_willEnterForeground:(id)arg0 ;
-(void)performBlockAfterNextLayout:(id)arg0 ;
-(void)performBlockNextFrame:(id)arg0 ;
-(void)popThreadedLayoutAndRenderDisabled;
-(void)presentError:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentErrors:(id)arg0 withLocalizedDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)pushThreadedLayoutAndRenderDisabled;
-(void)recreateAllLayoutsAndReps;
-(void)removeBackgroundRenderingObject:(id)arg0 ;
-(void)removeCommonObservers;
-(void)removeDecorator:(id)arg0 ;
-(void)resumeEditing;
-(void)reuseTextInputResponderFrom:(id)arg0 ;
-(void)scrollCurrentSelectionToVisible;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)scrollRectToVisibleCenter:(struct CGRect )arg0 animated:(BOOL)arg1 onlyScrollNecessaryAxes:(BOOL)arg2 ;
-(void)scrollRectToVisibleWithSelectionOutset:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)scrollSearchReferenceToVisible:(id)arg0 ;
-(void)scrollToPrimarySelection;
-(void)scrollToPrimarySelectionForEditor:(id)arg0 ;
-(void)scrollToSelection:(id)arg0 onModel:(id)arg1 ;
-(void)scrollToSelection:(id)arg0 onModel:(id)arg1 scrollImmediately:(BOOL)arg2 ;
-(void)scrollView:(id)arg0 willAnimateToContentOffset:(struct CGPoint )arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setAnimation:(id)arg0 forLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setAnimationCompletionBlock:(id)arg0 ;
-(void)setAnimationDelay:(CGFloat)arg0 ;
-(void)setAnimationDelegate:(id)arg0 ;
-(void)setAnimationDidStopSelector:(SEL)arg0 ;
-(void)setAnimationDuration:(CGFloat)arg0 ;
-(void)setAnimationFilterBlock:(id)arg0 ;
-(void)setAnimationRepeatAutoreverses:(BOOL)arg0 ;
-(void)setAnimationRepeatCount:(float)arg0 ;
-(void)setAnimationStartDate:(id)arg0 ;
-(void)setAnimationTimingFunction:(id)arg0 ;
-(void)setAnimationUseRepFiltering:(BOOL)arg0 ;
-(void)setAnimationWillStartSelector:(SEL)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setContentOffset:(struct CGPoint )arg0 clamp:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(struct CGPoint )arg0 clamp:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)setKeyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges:(BOOL)arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 onLayer:(id)arg1 ;
-(void)setNeedsDisplayOnLayer:(id)arg0 ;
-(void)setSelection:(id)arg0 onModel:(id)arg1 withFlags:(NSUInteger)arg2 ;
-(void)showOrHideComments:(id)arg0 ;
-(void)syncProcessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)tappedCanvasBackgroundAtPoint:(struct CGPoint )arg0 ;
-(void)teardown;
-(void)teardownBackgroundRendering;
-(void)teardownCanvasEditor;
-(void)toggleHyperlinkUIForRep:(id)arg0 ;
-(void)toggleShouldShowUserDefinedGuides;
-(void)unobscuredFrameDidChange;
-(void)updateSelectionForTapAtPoint:(struct CGPoint )arg0 extendingSelection:(BOOL)arg1 ;
-(void)updateSelectionForTapOnSelectedRep:(id)arg0 ;
-(void)viewDidEndZooming;
-(void)zoomToCurrentSelection;
-(void)zoomWithAnimationToUnscaledRect:(struct CGRect )arg0 ;


@end


#endif