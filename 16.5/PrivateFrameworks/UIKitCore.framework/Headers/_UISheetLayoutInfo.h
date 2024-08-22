// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISHEETLAYOUTINFO_H
#define _UISHEETLAYOUTINFO_H

@class NSArray, NSSet, NSString, NSMutableArray;
@protocol _UIViewBoundingPathChangeObserver, _UISheetPresentationControllerDetentResolutionContext_Internal, _UISheetDropShadowState, _UISheetLayoutInfoDelegate;

#import <Foundation/Foundation.h>

#import "_UISheetLayoutInfo.h"
#import "UITraitCollection.h"
#import "UIView.h"
#import "_UISheetPresentationControllerAppearance.h"
#import "_UISheetPresentationMetrics.h"
#import "UIViewController.h"

@interface _UISheetLayoutInfo : NSObject <_UIViewBoundingPathChangeObserver, _UISheetPresentationControllerDetentResolutionContext_Internal, _UISheetDropShadowState>

 {
    ? _clean;
    ? _computing;
}


@property (readonly, nonatomic) NSArray *_activeDetents;
@property (nonatomic, setter=_setAdditionalMinimumTopInset:) CGFloat _additionalMinimumTopInset; // ivar: __additionalMinimumTopInset
@property (readonly, nonatomic) NSInteger _adjustedIndexOfCurrentActiveDetentForContainedFirstResponder; // ivar: __adjustedIndexOfCurrentActiveDetentForContainedFirstResponder
@property (nonatomic, setter=_setAllowsAsymmetricVerticalMargins:) BOOL _allowsAsymmetricVerticalMargins; // ivar: __allowsAsymmetricVerticalMargins
@property (nonatomic, setter=_setAllowsInteractiveDismissWhenFullScreen:) BOOL _allowsInteractiveDismissWhenFullScreen; // ivar: __allowsInteractiveDismissWhenFullScreen
@property (readonly, nonatomic) CGFloat _alpha; // ivar: __alpha
@property (readonly, nonatomic) NSArray *_ancestorSheetIDs; // ivar: __ancestorSheetIDs
@property (readonly, nonatomic, getter=_isAnyDescendantDragging) BOOL _anyDescendantDragging; // ivar: __anyDescendantDragging
@property (readonly, nonatomic, getter=_isAnyDescendantTransitioning) BOOL _anyDescendantTransitioning; // ivar: __anyDescendantTransitioning
@property (retain, nonatomic, setter=_setChildSheetLayoutInfo:) _UISheetLayoutInfo *_childLayoutInfo; // ivar: __childLayoutInfo
@property (readonly, nonatomic) CGFloat _confinedPercentDimmed; // ivar: __confinedPercentDimmed
@property (readonly, nonatomic) CGFloat _confinedPercentLightened; // ivar: __confinedPercentLightened
@property (nonatomic, setter=_setContainerBounds:) CGRect _containerBounds; // ivar: __containerBounds
@property (nonatomic, setter=_setContainerSafeAreaInsets:) UIEdgeInsets _containerSafeAreaInsets; // ivar: __containerSafeAreaInsets
@property (retain, nonatomic, setter=_setContainerTraitCollection:) UITraitCollection *_containerTraitCollection; // ivar: __containerTraitCollection
@property (retain, nonatomic, setter=_setContainerView:) UIView *_containerView; // ivar: __containerView
@property (nonatomic, setter=_setContainsFirstResponder:) BOOL _containsFirstResponder; // ivar: __containsFirstResponder
@property (readonly, nonatomic) UIRectCornerRadii _cornerRadii; // ivar: __cornerRadii
@property (readonly, nonatomic) CGPoint _currentOffset; // ivar: __currentOffset
@property (copy, nonatomic, setter=_setCurrentOffsetGetter:) id *_currentOffsetGetter; // ivar: __currentOffsetGetter
@property (weak, nonatomic, setter=_setDelegate:) NSObject<_UISheetLayoutInfoDelegate> *_delegate; // ivar: __delegate
@property (readonly) CGFloat _depthLevel; // ivar: __depthLevel
@property (readonly, nonatomic) NSSet *_descendantHiddenAncestorSheetIDs; // ivar: __descendantHiddenAncestorSheetIDs
@property (readonly, nonatomic) NSArray *_detentValues;
@property (retain, nonatomic, setter=_setDetents:) NSArray *_detents; // ivar: __detents
@property (readonly, nonatomic, getter=_isDimmingEnabled) BOOL _dimmingEnabled; // ivar: __dimmingEnabled
@property (nonatomic, setter=_setDismissCornerRadius:) CGFloat _dismissCornerRadius; // ivar: __dismissCornerRadius
@property (readonly, nonatomic) CGFloat _dismissOffset; // ivar: __dismissOffset
@property (nonatomic, setter=_setDismissSourceFrame:) CGRect _dismissSourceFrame; // ivar: __dismissSourceFrame
@property (readonly, nonatomic) BOOL _dismissesHorizontally; // ivar: __dismissesHorizontally
@property (nonatomic, getter=_isDismissible, setter=_setDismissible:) BOOL _dismissible; // ivar: __dismissible
@property (nonatomic, getter=_isDragging, setter=_setDragging:) BOOL _dragging; // ivar: __dragging
@property (readonly, nonatomic, getter=_isEdgeAttached) BOOL _edgeAttached; // ivar: __edgeAttached
@property (copy, nonatomic, setter=_setEdgeAttachedCompactHeightAppearance:) _UISheetPresentationControllerAppearance *_edgeAttachedCompactHeightAppearance; // ivar: __edgeAttachedCompactHeightAppearance
@property (readonly, nonatomic) _UISheetPresentationControllerAppearance *_effectiveAppearance; // ivar: __effectiveAppearance
@property (readonly, nonatomic, getter=_isEffectiveDismissible) BOOL _effectiveDismissible; // ivar: __effectiveDismissible
@property (readonly, nonatomic) CGRect _effectiveKeyboardFrame; // ivar: __effectiveKeyboardFrame
@property (readonly, nonatomic, getter=_isEffectivePresented) BOOL _effectivePresented; // ivar: __effectivePresented
@property (nonatomic, setter=_setFirstResponderRequiresKeyboard:) BOOL _firstResponderRequiresKeyboard; // ivar: __firstResponderRequiresKeyboard
@property (copy, nonatomic, setter=_setFloatingAppearance:) _UISheetPresentationControllerAppearance *_floatingAppearance; // ivar: __floatingAppearance
@property (readonly, nonatomic, getter=_isForcedFullScreen) BOOL _forcedFullScreen; // ivar: __forcedFullScreen
@property (readonly, nonatomic) CGRect _frameOfPresentedViewInContainerView; // ivar: __frameOfPresentedViewInContainerView
@property (readonly, nonatomic) CGRect _fullHeightPresentedViewFrame;
@property (readonly, nonatomic) CGRect _fullHeightUntransformedFrame; // ivar: __fullHeightUntransformedFrame
@property (readonly, nonatomic) CGRect _fullHeightUntransformedFrameForDepthLevel; // ivar: __fullHeightUntransformedFrameForDepthLevel
@property (readonly, nonatomic, getter=_isFunctionallyFullScreen) BOOL _functionallyFullScreen; // ivar: __functionallyFullScreen
@property (readonly, nonatomic) NSInteger _grabberAction; // ivar: __grabberAction
@property (readonly, nonatomic) CGFloat _grabberAlpha; // ivar: __grabberAlpha
@property (nonatomic, setter=_setGrabberSpacing:) CGFloat _grabberSpacing; // ivar: __grabberSpacing
@property (readonly) BOOL _hasChildSheet;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL _hidden; // ivar: __hidden
@property (copy, nonatomic, setter=_setHiddenAncestorSheetID:) NSString *_hiddenAncestorSheetID; // ivar: __hiddenAncestorSheetID
@property (readonly, nonatomic, getter=_isHidingUnderneathDescendant) BOOL _hidingUnderneathDescendant; // ivar: __hidingUnderneathDescendant
@property (readonly, nonatomic, getter=_isHidingUnderneathDescendantForDepthLevel) BOOL _hidingUnderneathDescendantForDepthLevel; // ivar: __hidingUnderneathDescendantForDepthLevel
@property (nonatomic, setter=_setHorizontalAlignment:) NSInteger _horizontalAlignment; // ivar: __horizontalAlignment
@property (readonly, nonatomic) UIRectCornerRadii _hostedCornerRadii; // ivar: __hostedCornerRadii
@property (readonly, nonatomic) CGRect _hostedDismissFrame;
@property (readonly, nonatomic) CGRect _hostedUntransformedFrame; // ivar: __hostedUntransformedFrame
@property (nonatomic, getter=_isHosting, setter=_setHosting:) BOOL _hosting; // ivar: __hosting
@property (readonly, nonatomic) NSInteger _indexOfActiveDetentForTappingGrabber; // ivar: __indexOfActiveDetentForTappingGrabber
@property (readonly, nonatomic) NSInteger _indexOfActiveDimmingDetent; // ivar: __indexOfActiveDimmingDetent
@property (readonly, nonatomic) NSInteger _indexOfCurrentActiveDetent; // ivar: __indexOfCurrentActiveDetent
@property (readonly, nonatomic) NSInteger _indexOfCurrentActiveOrDismissDetent; // ivar: __indexOfCurrentActiveOrDismissDetent
@property (copy, nonatomic) id *_indexOfCurrentActiveOrDismissDetentWasInvalidated; // ivar: __indexOfCurrentActiveOrDismissDetentWasInvalidated
@property (readonly, nonatomic, getter=_isInteractionEnabled) BOOL _interactionEnabled; // ivar: __interactionEnabled
@property (readonly, nonatomic, getter=_isInverted) BOOL _inverted; // ivar: __inverted
@property (nonatomic, setter=_setKeyboardFrame:) CGRect _keyboardFrame; // ivar: __keyboardFrame
@property (nonatomic, setter=_setLatestUserChosenOffset:) CGFloat _latestUserChosenOffset; // ivar: __latestUserChosenOffset
@property (readonly, nonatomic) CGFloat _magicShadowOpacity; // ivar: __magicShadowOpacity
@property (nonatomic, setter=_setMarginInCompactHeight:) CGFloat _marginInCompactHeight; // ivar: __marginInCompactHeight
@property (nonatomic, setter=_setMarginInRegularWidthRegularHeight:) CGFloat _marginInRegularWidthRegularHeight; // ivar: __marginInRegularWidthRegularHeight
@property (readonly, nonatomic) UIEdgeInsets _margins; // ivar: __margins
@property (readonly, nonatomic) UIEdgeInsets _marginsWhenFloating; // ivar: __marginsWhenFloating
@property (readonly, nonatomic) CGFloat _maximumDetentValue;
@property (readonly, nonatomic) _UISheetPresentationMetrics *_metrics; // ivar: __metrics
@property (nonatomic, setter=_setMode:) NSInteger _mode; // ivar: __mode
@property (readonly, nonatomic) NSMutableArray *_mutableActiveDetents; // ivar: __mutableActiveDetents
@property (readonly, nonatomic) NSMutableArray *_mutableDetentValues; // ivar: __mutableDetentValues
@property (readonly, nonatomic) CGFloat _nonFullHeightOffset; // ivar: __nonFullHeightOffset
@property (readonly, nonatomic) NSInteger _numberOfActiveNonDismissDetents; // ivar: __numberOfActiveNonDismissDetents
@property (readonly, nonatomic) CGFloat _offsetAdjustment; // ivar: __offsetAdjustment
@property (readonly, nonatomic) CGFloat _offsetForCurrentActiveDetent; // ivar: __offsetForCurrentActiveDetent
@property (weak, nonatomic, setter=_setParentSheetLayoutInfo:) _UISheetLayoutInfo *_parentLayoutInfo; // ivar: __parentLayoutInfo
@property (nonatomic, setter=_setPeeksWhenFloating:) BOOL _peeksWhenFloating; // ivar: __peeksWhenFloating
@property (readonly, nonatomic) CGFloat _percentDimmed; // ivar: __percentDimmed
@property (readonly, nonatomic) CGFloat _percentDimmedFromOffset; // ivar: __percentDimmedFromOffset
@property (readonly, nonatomic) CGFloat _percentFullHeight; // ivar: __percentFullHeight
@property (readonly, nonatomic) CGFloat _percentFullScreen; // ivar: __percentFullScreen
@property (readonly, nonatomic) CGFloat _percentPresented; // ivar: __percentPresented
@property (nonatomic, setter=_setPreferredCornerRadius:) CGFloat _preferredCornerRadius; // ivar: __preferredCornerRadius
@property (readonly, nonatomic) CGSize _preferredSize; // ivar: __preferredSize
@property (nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge; // ivar: __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge
@property (nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) BOOL _prefersScrollingResizesWhenDetentDirectionIsDown; // ivar: __prefersScrollingResizesWhenDetentDirectionIsDown
@property (nonatomic, getter=_isPresented, setter=_setPresented:) BOOL _presented; // ivar: __presented
@property (retain, nonatomic, setter=_setPresentedViewController:) UIViewController *_presentedViewController; // ivar: __presentedViewController
@property (weak, nonatomic, setter=_setPresentingViewController:) UIViewController *_presentingViewController; // ivar: __presentingViewController
@property (readonly, nonatomic) CGFloat _proposedDepthLevel; // ivar: __proposedDepthLevel
@property (readonly, nonatomic) CGFloat _proposedDepthLevelIncrement; // ivar: __proposedDepthLevelIncrement
@property (readonly, nonatomic) CGPoint _rawCurrentOffset; // ivar: __rawCurrentOffset
@property (nonatomic, getter=_isReduceMotionEnabled, setter=_setReduceMotionEnabled:) BOOL _reduceMotionEnabled; // ivar: __reduceMotionEnabled
@property (nonatomic, setter=_setRemoteContainsFirstResponder:) BOOL _remoteContainsFirstResponder; // ivar: __remoteContainsFirstResponder
@property (nonatomic, setter=_setRemoteFirstResponderRequiresKeyboard:) BOOL _remoteFirstResponderRequiresKeyboard; // ivar: __remoteFirstResponderRequiresKeyboard
@property (nonatomic, setter=_setRemoteKeyboardFrame:) CGRect _remoteKeyboardFrame; // ivar: __remoteKeyboardFrame
@property (readonly, nonatomic) CGFloat _rubberBandExtentBeyondMaximumOffset; // ivar: __rubberBandExtentBeyondMaximumOffset
@property (copy, nonatomic) id *_rubberBandExtentBeyondMaximumOffsetWasInvalidated; // ivar: __rubberBandExtentBeyondMaximumOffsetWasInvalidated
@property (readonly, nonatomic) CGFloat _rubberBandExtentBeyondMinimumOffset; // ivar: __rubberBandExtentBeyondMinimumOffset
@property (copy, nonatomic) id *_rubberBandExtentBeyondMinimumOffsetWasInvalidated; // ivar: __rubberBandExtentBeyondMinimumOffsetWasInvalidated
@property (readonly, nonatomic) BOOL _scalesDownBehindDescendants;
@property (nonatomic, setter=_setScreenSize:) CGSize _screenSize; // ivar: __screenSize
@property (readonly, nonatomic, getter=_isScrollInteractionEnabled) BOOL _scrollInteractionEnabled; // ivar: __scrollInteractionEnabled
@property (retain, nonatomic, setter=_setSelectedDetentIdentifier:) NSString *_selectedDetentIdentifier; // ivar: __selectedDetentIdentifier
@property (readonly, nonatomic) CGFloat _shadowOpacity; // ivar: __shadowOpacity
@property (copy, nonatomic, setter=_setSheetID:) NSString *_sheetID; // ivar: __sheetID
@property (readonly, nonatomic) BOOL _shouldDimmingIgnoreTouches; // ivar: __shouldDimmingIgnoreTouches
@property (nonatomic, setter=_setShouldDismissWhenTappedOutside:) BOOL _shouldDismissWhenTappedOutside; // ivar: __shouldDismissWhenTappedOutside
@property (readonly, nonatomic) BOOL _shouldPresentedViewControllerControlStatusBarAppearance; // ivar: __shouldPresentedViewControllerControlStatusBarAppearance
@property (nonatomic, setter=_setShouldScaleDownBehindDescendants:) BOOL _shouldScaleDownBehindDescendants; // ivar: __shouldScaleDownBehindDescendants
@property (readonly, nonatomic) CGFloat _smallestNonDismissDetentOffset; // ivar: __smallestNonDismissDetentOffset
@property (nonatomic, setter=_setSourceFrame:) CGRect _sourceFrame; // ivar: __sourceFrame
@property (readonly, nonatomic) CGRect _stackAlignmentFrame; // ivar: __stackAlignmentFrame
@property (readonly, nonatomic) BOOL _stacksWithChild; // ivar: __stacksWithChild
@property (copy, nonatomic, setter=_setStandardAppearance:) _UISheetPresentationControllerAppearance *_standardAppearance; // ivar: __standardAppearance
@property (nonatomic, setter=_setTearOffset:) CGFloat _tearOffset; // ivar: __tearOffset
@property (readonly, nonatomic) UIEdgeInsets _touchInsets; // ivar: __touchInsets
@property (readonly, nonatomic) CGAffineTransform _transform; // ivar: __transform
@property (nonatomic, getter=_isTransitioning, setter=_setTransitioning:) BOOL _transitioning; // ivar: __transitioning
@property (nonatomic, setter=_setTucksIntoUnsafeAreaInCompactHeight:) BOOL _tucksIntoUnsafeAreaInCompactHeight; // ivar: __tucksIntoUnsafeAreaInCompactHeight
@property (readonly, nonatomic) UIEdgeInsets _unsafeInsets; // ivar: __unsafeInsets
@property (readonly, nonatomic) CGRect _untransformedFrame; // ivar: __untransformedFrame
@property (nonatomic, setter=_setWantsEdgeAttached:) BOOL _wantsEdgeAttached; // ivar: __wantsEdgeAttached
@property (nonatomic, setter=_setWantsEdgeAttachedInCompactHeight:) BOOL _wantsEdgeAttachedInCompactHeight; // ivar: __wantsEdgeAttachedInCompactHeight
@property (nonatomic, setter=_setWantsFloatingInRegularWidthCompactHeight:) BOOL _wantsFloatingInRegularWidthCompactHeight; // ivar: __wantsFloatingInRegularWidthCompactHeight
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen; // ivar: __wantsFullScreen
@property (nonatomic, setter=_setWantsGrabber:) BOOL _wantsGrabber; // ivar: __wantsGrabber
@property (nonatomic, setter=_setWantsInvertedWhenFloating:) BOOL _wantsInvertedWhenFloating; // ivar: __wantsInvertedWhenFloating
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenEdgeAttached:) BOOL _widthFollowsPreferredContentSizeWhenEdgeAttached; // ivar: __widthFollowsPreferredContentSizeWhenEdgeAttached
@property (readonly, nonatomic) CGFloat _zPosition; // ivar: __zPosition
@property (readonly, nonatomic) UITraitCollection *containerTraitCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maximumDetentValue;
@property (readonly) Class superclass;


-(id)_descendantDescription;
-(id)initWithMetrics:(id)arg0 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)_invalidateCurrentOffset;
-(void)_invalidateDetents;
-(void)_invalidatePreferredSize;
-(void)_layout;


@end


#endif