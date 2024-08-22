// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBAR_H
#define _UISTATUSBAR_H

@class NSString, NSSet, NSArray, NSMutableDictionary, NSDictionary;
@protocol UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, UIPointerInteractionDelegate, _UIStatusBarVisualProvider, _UIStatusBarActionable;


#import "UIView.h"
#import "UIAccessibilityHUDGestureManager.h"
#import "_UIStatusBarAction.h"
#import "UIGestureRecognizer.h"
#import "_UIStatusBarData.h"
#import "_UIStatusBarDataAggregator.h"
#import "UIScreen.h"
#import "UIColor.h"
#import "UIPointerInteraction.h"
#import "_UIStatusBarStyleAttributes.h"

@interface _UIStatusBar : UIView <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, UIPointerInteractionDelegate>

 {
    id<_UIStatusBarVisualProvider> *_visualProvider;
    ? _statusBarFlags;
}


@property (retain, nonatomic) UIAccessibilityHUDGestureManager *accessibilityHUDGestureManager; // ivar: _accessibilityHUDGestureManager
@property (retain, nonatomic) _UIStatusBarAction *action; // ivar: _action
@property (readonly, nonatomic) UIGestureRecognizer *actionGestureRecognizer; // ivar: _actionGestureRecognizer
@property (readonly, nonatomic) unsigned int animationContextId;
@property (readonly, nonatomic, getter=areAnimationsEnabled) BOOL animationsEnabled;
@property (nonatomic) CGRect avoidanceFrame; // ivar: _avoidanceFrame
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) _UIStatusBarData *currentAggregatedData; // ivar: _currentAggregatedData
@property (readonly, nonatomic) _UIStatusBarData *currentData; // ivar: _currentData
@property (readonly, nonatomic) _UIStatusBarDataAggregator *dataAggregator; // ivar: _dataAggregator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *dependentDataEntryKeys;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *disabledPartIdentifiers; // ivar: _disabledPartIdentifiers
@property (retain, nonatomic) NSMutableDictionary *displayItemStates; // ivar: _displayItemStates
@property (readonly, nonatomic, getter=_effectiveScaleTransform) CGAffineTransform effectiveScaleTransform;
@property (readonly, nonatomic, getter=_effectiveTargetScreen) UIScreen *effectiveTargetScreen;
@property (copy, nonatomic) NSArray *enabledPartIdentifiers; // ivar: _enabledPartIdentifiers
@property (copy, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (retain, nonatomic) UIView *foregroundView; // ivar: _foregroundView
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<_UIStatusBarActionable> *hoveredActionable; // ivar: _hoveredActionable
@property (retain, nonatomic) NSMutableDictionary *items; // ivar: _items
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (copy, nonatomic) _UIStatusBarData *overlayData;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (copy, nonatomic) id *regionActionValidationBlock; // ivar: _regionActionValidationBlock
@property (readonly, nonatomic) NSDictionary *regions; // ivar: _regions
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // ivar: _styleAttributes
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<_UIStatusBarActionable> *targetActionable; // ivar: _targetActionable
@property (retain, nonatomic) UIScreen *targetScreen; // ivar: _targetScreen
@property (copy, nonatomic) id *updateCompletionHandler; // ivar: _updateCompletionHandler
@property (readonly, nonatomic) NSObject<_UIStatusBarVisualProvider> *visualProvider;
@property (retain, nonatomic, getter=_visualProviderClass, setter=_setVisualProviderClass:) Class visualProviderClass; // ivar: _visualProviderClass
@property (retain, nonatomic, getter=_visualProviderClassName, setter=_setVisualProviderClassName:) NSString *visualProviderClassName;
@property (retain, nonatomic) NSDictionary *visualProviderInfo; // ivar: _visualProviderInfo


+(CGFloat)_effectiveScaleForVisualProviderClass:(Class)arg0 targetScreen:(id)arg1 ;
+(id)sensorActivityIndicatorForScreen:(id)arg0 ;
+(id)sensorActivityIndicatorPartIdentifier;
+(id)stringForStatusBarStyle:(NSInteger)arg0 ;
+(struct CGSize )intrinsicContentSizeForTargetScreen:(id)arg0 orientation:(NSInteger)arg1 onLockScreen:(BOOL)arg2 ;
+(struct CGSize )intrinsicContentSizeForTargetScreen:(id)arg0 orientation:(NSInteger)arg1 onLockScreen:(BOOL)arg2 isAzulBLinked:(BOOL)arg3 ;
+(void)registerSensorActivityIndicator:(id)arg0 forScreen:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg1 ;
-(BOOL)_cursorLocation:(struct CGPoint )arg0 isInsideActionable:(id)arg1 ;
-(BOOL)_cursorLocation:(struct CGPoint )arg0 isInsideHoverableActionable:(id)arg1 ;
-(BOOL)_forceLayoutEngineSolutionInRationalEdges;
-(BOOL)_gestureRecognizer:(id)arg0 isInsideActionable:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 pressInsideActionable:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 touchInsideActionable:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)alphaForPartWithIdentifier:(id)arg0 ;
-(NSInteger)_effectiveStyleFromStyle:(NSInteger)arg0 ;
-(NSInteger)styleForPartWithIdentifier:(id)arg0 ;
-(id)_accessibilityHUDGestureManager:(id)arg0 HUDItemForPoint:(struct CGPoint )arg1 ;
-(id)_actionablesForPartWithIdentifier:(id)arg0 includeInternalItems:(BOOL)arg1 onlyVisible:(BOOL)arg2 ;
-(id)_itemWithIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_rearrangeOverflowedItems;
-(id)_regionsForPartWithIdentifier:(id)arg0 includeInternalItems:(BOOL)arg1 ;
-(id)_statusBarWindowForAccessibilityHUD;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)actionForPartWithIdentifier:(id)arg0 ;
-(id)dataEntryKeysForItemsWithIdentifiers:(id)arg0 ;
-(id)displayItemIdentifiersInRegionsWithIdentifiers:(id)arg0 ;
-(id)displayItemWithIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)itemIdentifiersInRegionsWithIdentifiers:(id)arg0 ;
-(id)itemWithIdentifier:(id)arg0 ;
-(id)itemsDependingOnKeys:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)regionWithIdentifier:(id)arg0 ;
-(id)stateForDisplayItemWithIdentifier:(id)arg0 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;
-(struct CGRect )_extendedHoverFrameForActionable:(id)arg0 ;
-(struct CGRect )_frameForActionable:(id)arg0 ;
-(struct CGRect )_frameForActionable:(id)arg0 actionInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGRect )_pressFrameForActionable:(id)arg0 ;
-(struct CGRect )frameForDisplayItemWithIdentifier:(id)arg0 ;
-(struct CGRect )frameForPartWithIdentifier:(id)arg0 ;
-(struct CGRect )frameForPartWithIdentifier:(id)arg0 includeInternalItems:(BOOL)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIOffset )offsetForPartWithIdentifier:(id)arg0 ;
-(void)_accessibilityHUDGestureManager:(id)arg0 gestureLiftedAtPoint:(struct CGPoint )arg1 ;
-(void)_accessibilityHUDGestureManager:(id)arg0 showHUDItem:(id)arg1 ;
-(void)_delayUpdatesWithKeys:(id)arg0 fromAnimation:(id)arg1 ;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg0 ;
-(void)_fixupDisplayItemAttributes;
-(void)_performAnimations:(id)arg0 ;
-(void)_performWithInheritedAnimation:(id)arg0 ;
-(void)_prepareAnimations:(id)arg0 ;
-(void)_prepareVisualProviderIfNeeded;
-(void)_updateActionGestureRecognizerAllowableTouchTypesIfNeeded;
-(void)_updateDisplayedItemsWithData:(id)arg0 styleAttributes:(id)arg1 extraAnimations:(id)arg2 ;
-(void)_updateRegionItems;
-(void)_updateStyleAttributes;
-(void)_updateWithAggregatedData:(id)arg0 ;
-(void)_updateWithData:(id)arg0 completionHandler:(id)arg1 ;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)resizeSubviewsWithOldSize:(struct CGSize )arg0 ;
-(void)setAlpha:(CGFloat)arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setOffset:(struct UIOffset )arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)statusBarGesture:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateForcingIterativeOverflow;
-(void)updateWithAnimations:(id)arg0 ;
-(void)updateWithData:(id)arg0 ;


@end


#endif