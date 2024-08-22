// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONDRAGMANAGER_H
#define SBICONDRAGMANAGER_H

@class NSMapTable, NSMutableDictionary, NSMutableArray, NSString;
@protocol SBIconListViewDragObserver, SBHIconDragAutoScrollAssistantDelegate, SBIconDragManagerDelegate;

#import <Foundation/Foundation.h>

#import "SBHIconDragAutoScrollAssistant.h"
#import "SBIconDraggingEditContext.h"

@interface SBIconDragManager : NSObject <SBIconListViewDragObserver, SBHIconDragAutoScrollAssistantDelegate>

 {
    NSMapTable *_iconDrags;
    NSMapTable *_uniqueIdentifiersPerDropSession;
    NSMapTable *_uniqueIdentifiersPerDragSession;
    NSMutableDictionary *_revertingReplacementIndexPaths;
    NSMutableArray *_singleUseDragWindows;
    SBHIconDragAutoScrollAssistant *_autoScrollAssistant;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBIconDragManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBIconDraggingEditContext *draggingEditContext; // ivar: _draggingEditContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIconDragging) BOOL iconDragging;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTrackingActiveOrDroppingIconDrags) BOOL trackingActiveOrDroppingIconDrags;
@property (readonly, nonatomic, getter=isTrackingDroppingIconDrags) BOOL trackingDroppingIconDrags;
@property (readonly, nonatomic, getter=isTrackingMultipleIconDrags) BOOL trackingMultipleIconDrags;
@property (readonly, nonatomic, getter=isTrackingMultipleItemIconDrags) BOOL trackingMultipleItemIconDrags;
@property (readonly, nonatomic, getter=isTrackingUserActiveIconDrags) BOOL trackingUserActiveIconDrags;


+(void)cancelAllDrags;
+(void)enumerateAppDragContextsInDragItems:(id)arg0 usingBlock:(id)arg1 ;
+(void)enumerateMedusaPlatterDragPreviewsInDragItems:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)_isTrackingDrag:(id)arg0 ;
-(BOOL)_isTrackingDragWithIdentifier:(id)arg0 ;
-(BOOL)_shouldPerformRippleAnimationForInsertingDragItem:(id)arg0 toIconListView:(id)arg1 ;
-(BOOL)canAcceptDropInSession:(id)arg0 inIconListView:(id)arg1 ;
-(BOOL)canHandleIconDropSession:(id)arg0 inIconListView:(id)arg1 ;
-(BOOL)canMakeIconViewRecipient:(id)arg0 ;
-(BOOL)doesIconLocationRepresentRealIconPosition:(id)arg0 ;
-(BOOL)doesIconViewRepresentRealIconPosition:(id)arg0 ;
-(BOOL)iconView:(id)arg0 canAddDragItemsToSession:(id)arg1 ;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)isEditing;
-(BOOL)isManagingTemporarilyRemovedIcon:(id)arg0 ;
-(BOOL)isRootFolderContentVisible;
-(BOOL)isTrackingActiveDragOfIcon:(id)arg0 ;
-(BOOL)isTrackingDragInUserActiveLiftPreviewOriginatingFromIconView:(id)arg0 ;
-(BOOL)isTrackingDragMatchingPredicate:(id)arg0 ;
-(BOOL)isTrackingDragOfIcon:(id)arg0 ;
-(BOOL)isTrackingDragOriginatingFromIconView:(id)arg0 ;
-(BOOL)isTrackingDragOriginatingFromOrDroppingIntoIconView:(id)arg0 otherThanDragWithIdentifier:(id)arg1 ;
-(BOOL)isTrackingDropIntoDestinationIconView:(id)arg0 ;
-(BOOL)isTrackingUserActiveDragOriginatingFromIconView:(id)arg0 ;
-(BOOL)isTrackingWidgetIconDrags;
-(BOOL)isTrackingWidgetStackIconDrags;
-(BOOL)removeAllDragPlaceholders;
-(BOOL)removeAllDragPlaceholdersInFolder:(id)arg0 passingTest:(id)arg1 ;
-(BOOL)removeDragPlaceholdersForDragWithIdentifier:(id)arg0 ;
-(BOOL)removeDragPlaceholdersForDragWithIdentifier:(id)arg0 placeholderPath:(*id)arg1 ;
-(BOOL)replaceAllDragPlaceholdersWithReferencedIcons;
-(BOOL)replaceDragPlaceholderWithReferencedIcons:(id)arg0 ;
-(BOOL)replaceDragPlaceholdersWithReferencedIconsInDragWithIdentifier:(id)arg0 ;
-(BOOL)revertLocationForIcon:(id)arg0 toGridPath:(id)arg1 ;
-(BOOL)revertLocationForIcon:(id)arg0 toPath:(id)arg1 ;
-(BOOL)revertLocationsForIcons:(id)arg0 dragIdentifier:(id)arg1 ;
-(BOOL)shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg0 onIconView:(id)arg1 ;
-(BOOL)shouldBeginEditingWhenAddingDragItems;
-(BOOL)shouldBeginEditingWhenDragBegins;
-(BOOL)shouldBeginEditingWhenLiftPreviewBegins;
-(BOOL)shouldCancelDragsWhenEditingEnds;
-(BOOL)shouldUseGhostIconForIconView:(id)arg0 ;
-(BOOL)swapTrackedIconWithIdentifier:(id)arg0 withIcon:(id)arg1 ;
-(CGFloat)defaultIconLayoutAnimationDuration;
-(CGFloat)delayAfterAfterLiftPreviewToBeginEditing;
-(NSUInteger)countOfTrackedDragsOriginatingFromOrDroppingIntoIconView:(id)arg0 ;
-(NSUInteger)listGridCellInfoOptions;
-(NSUInteger)maximumAllowedIconDroppingAnimationsForListView:(id)arg0 ;
-(id)_applicationBundleIdentifierForDragItem:(id)arg0 ;
-(id)_iconForDragItem:(id)arg0 inIconListView:(id)arg1 ;
-(id)_iconIdentifierForDragItem:(id)arg0 ;
-(id)_iconViewForDragItem:(id)arg0 inIconListView:(id)arg1 ;
-(id)_replaceDraggedIconViewWithPlaceholder:(id)arg0 ;
-(id)_windowForDragPreviewsForPlatterView:(id)arg0 forWindowScene:(id)arg1 ;
-(id)allDragIdentifiers;
-(id)appDragLocalContextForDragItem:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)draggedIconForIdentifier:(id)arg0 ;
-(id)draggedIconIdentifiersForDragDropSession:(id)arg0 ;
-(id)draggedIconsForIdentifiers:(id)arg0 ;
-(id)firstHiddenIconIdentifierInDrag:(id)arg0 ;
-(id)fullIndexPathForRevertingIcon:(id)arg0 context:(id)arg1 ;
-(id)iconDragContextForDragDropSession:(id)arg0 ;
-(id)iconDragContextForDragItem:(id)arg0 ;
-(id)iconDragContextForDragSession:(id)arg0 ;
-(id)iconDragContextForDragWithIdentifier:(id)arg0 ;
-(id)iconDragContextForDropSession:(id)arg0 ;
-(id)iconDropSessionDidUpdate:(id)arg0 inIconListView:(id)arg1 ;
-(id)iconListView:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)iconListView:(id)arg0 iconViewForDroppingIconDragItem:(id)arg1 proposedIconView:(id)arg2 ;
-(id)iconListView:(id)arg0 previewForDroppingIconDragItem:(id)arg1 proposedPreview:(id)arg2 ;
-(id)iconListViewForIndexPath:(id)arg0 ;
-(id)iconView:(id)arg0 dragPreviewForItem:(id)arg1 session:(id)arg2 previewParameters:(id)arg3 ;
-(id)iconViewWillCancelDrag:(id)arg0 ;
-(id)init;
-(id)leafIconForIdentifier:(id)arg0 ;
-(id)leafIconsInList:(id)arg0 matchingApplicationBundleIdentifierOfIcons:(id)arg1 ;
-(id)model;
-(id)rootFolder;
-(id)simulateDragStartedFromIconView:(id)arg0 ;
-(id)simulateIconDropSessionDidEnterWithIconIdentifiers:(id)arg0 inIconListView:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)uniqueIdentifierForIconDragSession:(id)arg0 ;
-(id)uniqueIdentifierForIconDropSession:(id)arg0 ;
-(void)_cleanUpAllDraggingState;
-(void)_handleScaleAdjustmentForDropSession:(id)arg0 currentListView:(id)arg1 ;
-(void)_invalidateAutoScrollAssistant;
-(void)_startTrackingDragWithIdentifier:(id)arg0 session:(id)arg1 ;
-(void)_stopTrackingDragIfPossibleWithIdentifier:(id)arg0 ;
-(void)_stopTrackingDragWithIdentifier:(id)arg0 ;
-(void)_updateAutoScrollAssistantForDropSession:(id)arg0 ;
-(void)_updateDragPreviewIconViewForDropSession:(id)arg0 inIconListView:(id)arg1 ;
-(void)_updateDragPreviewsForEditingState:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)addAppLocalContextsFromDragItems:(id)arg0 session:(id)arg1 toDragWithIdentifier:(id)arg2 ;
-(void)addPlatterViewToMedusaDragOffscreenWindow:(id)arg0 forWindowScene:(id)arg1 ;
-(void)autoScrollAssistant:(id)arg0 triggeredAutoScrollInDirection:(NSInteger)arg1 ;
-(void)cancelAllDrags;
-(void)cancelEditingAndAllDrags;
-(void)captureInitialIconStateToDragContext:(id)arg0 ;
-(void)changeStateOfDragWithIdentifier:(id)arg0 toState:(NSInteger)arg1 ;
-(void)compactAndLayoutRootIconLists;
-(void)compactAndLayoutRootIconListsWithDuration:(CGFloat)arg0 ;
-(void)concludeIconDrop:(id)arg0 ;
-(void)createIconsFromDragItemsIfNecessary:(id)arg0 withDragIdentifier:(id)arg1 ;
-(void)enumerateIconDragContextsUsingBlock:(id)arg0 ;
-(void)enumerateIconDragIdentifiersUsingBlock:(id)arg0 ;
-(void)iconDropSession:(id)arg0 didPauseAtLocation:(struct CGPoint )arg1 inIconListView:(id)arg2 ;
-(void)iconDropSessionDidEnd:(id)arg0 ;
-(void)iconDropSessionDidEnd:(id)arg0 identifier:(id)arg1 draggedIconIdentifiers:(id)arg2 ;
-(void)iconDropSessionDidEnter:(id)arg0 identifier:(id)arg1 draggedIconIdentifiers:(id)arg2 inIconListView:(id)arg3 ;
-(void)iconDropSessionDidEnter:(id)arg0 inIconListView:(id)arg1 ;
-(void)iconDropSessionDidExit:(id)arg0 fromIconListView:(id)arg1 ;
-(void)iconDropSessionDidExitWithIdentifier:(id)arg0 fromIconListView:(id)arg1 ;
-(void)iconDropSessionWithIdentifier:(id)arg0 draggedIconIdentifiers:(id)arg1 didPauseAtLocation:(struct CGPoint )arg2 inIconListView:(id)arg3 ;
-(void)iconListView:(id)arg0 concludeIconDrop:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDragItem:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)iconListView:(id)arg0 iconDropSessionDidEnd:(id)arg1 ;
-(void)iconListView:(id)arg0 willUseIconView:(id)arg1 forDroppingIconDragItem:(id)arg2 ;
-(void)iconView:(id)arg0 didEndDragSession:(id)arg1 withOperation:(NSUInteger)arg2 ;
-(void)iconView:(id)arg0 dragLiftAnimationDidChangeDirection:(NSInteger)arg1 ;
-(void)iconView:(id)arg0 item:(id)arg1 willAnimateDragCancelWithAnimator:(id)arg2 ;
-(void)iconView:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)iconView:(id)arg0 willAddDragItems:(id)arg1 toSession:(id)arg2 ;
-(void)iconView:(id)arg0 willAnimateDragLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)iconView:(id)arg0 willUsePreviewForCancelling:(id)arg1 targetIconView:(id)arg2 ;
-(void)iconViewWillBeginDrag:(id)arg0 session:(id)arg1 ;
-(void)informQuickActionPlatterDidFinishPresentation:(id)arg0 ;
-(void)layoutIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)noteDragItemWasConsumedExternallyForDropSession:(id)arg0 ;
-(void)noteFolderBeganScrolling;
-(void)noteFolderControllerWillClose:(id)arg0 ;
-(void)noteIconManagerEditingDidChange;
-(void)noteIconTapped;
-(void)performIconDrop:(id)arg0 identifier:(id)arg1 draggedIconIdentifiers:(id)arg2 inIconListView:(id)arg3 ;
-(void)performIconDrop:(id)arg0 inIconListView:(id)arg1 ;
-(void)performSpringLoadedInteractionForIconDragOnIconView:(id)arg0 ;
-(void)removeAllGrabbedIconViews;
-(void)removeEmptyFolders;
-(void)removeEmptyFoldersInFolder:(id)arg0 ;
-(void)removeNearestLeafIconsMatchingIcons:(id)arg0 inList:(id)arg1 dragContext:(id)arg2 ;
-(void)removePlatterViewFromMedusaDragOffscreenWindow:(id)arg0 ;
-(void)replaceAllBouncedIconsInContext:(id)arg0 ;
-(void)resetWatchdogTimerForDragWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)revertActiveDragChanges;
-(void)revertDragChangesForDragWithIdentifier:(id)arg0 ;
-(void)revertLocationsForIconsInAllListsForDragWithIdentifier:(id)arg0 ;
-(void)revertLocationsForIconsInList:(id)arg0 dragIdentifier:(id)arg1 ;
-(void)revertLocationsForUnplacedIconsInDragWithIdentifier:(id)arg0 ;
-(void)setIndexPath:(id)arg0 whenRevertingIconsWithPathPrefix:(id)arg1 ;
-(void)simulateIconDragWithIdentifier:(id)arg0 didPauseAtLocation:(struct CGPoint )arg1 inIconListView:(id)arg2 ;
-(void)simulateIconDraggingEndedWithIdentifier:(id)arg0 ;
-(void)simulateIconDropSessionWithIdentifier:(id)arg0 didEnterWithIconIdentifiers:(id)arg1 inIconListView:(id)arg2 ;
-(void)simulatePerformIconDropWithIdentifier:(id)arg0 inIconListView:(id)arg1 ;
-(void)startTrackingDragLocationForEditingFromDropSession:(id)arg0 orDragSession:(id)arg1 ;
-(void)stopTrackingDragLocationForEditingForDragWithIdentifier:(id)arg0 ;
-(void)updateExistingIconPlaceholderForDragWithIdentifier:(id)arg0 ;
-(void)watchdogDragWithIdentifier:(id)arg0 ;
-(void)watchdogTimerDidFire:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif