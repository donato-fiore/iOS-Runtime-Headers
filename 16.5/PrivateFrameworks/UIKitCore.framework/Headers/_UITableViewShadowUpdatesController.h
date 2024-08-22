// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLEVIEWSHADOWUPDATESCONTROLLER_H
#define _UITABLEVIEWSHADOWUPDATESCONTROLLER_H

@class NSString, NSMutableArray;
@protocol UITableViewDataSourcePrivate, UIDataSourceModelAssociation, UITableViewDelegatePrivate, UITableViewDataSourcePrefetching, UITableViewDragDelegate_Private, UITableViewDropDelegate_Private, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate_Internal;

#import <Foundation/Foundation.h>

#import "_UIDataSourceSnapshotter.h"
#import "UITableView.h"
#import "_UIDataSourceUpdateMap.h"

@interface _UITableViewShadowUpdatesController : NSObject <UITableViewDataSourcePrivate, UIDataSourceModelAssociation, UITableViewDelegatePrivate, UITableViewDataSourcePrefetching, UITableViewDragDelegate_Private, UITableViewDropDelegate_Private, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate_Internal>



@property (readonly, nonatomic) _UIDataSourceSnapshotter *dataSourceAfterShadowUpdates;
@property (readonly, nonatomic) _UIDataSourceSnapshotter *dataSourceBeforeShadowUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasShadowUpdates;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // ivar: _initialSnapshot
@property (retain, nonatomic) NSMutableArray *shadowUpdates; // ivar: _shadowUpdates
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // ivar: _updateMap


-(BOOL)_tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)_tableView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)_tableView:(id)arg0 dragSessionSupportsSystemDrag:(id)arg1 ;
-(BOOL)_tableView:(id)arg0 shouldSpringLoadRowAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 canPerformPrimaryActionForRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 dragSessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)tableView:(id)arg0 dragSessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(BOOL)tableView:(id)arg0 selectionFollowsFocusForRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldSpringLoadRowAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(BOOL)tableView:(id)arg0 shouldUpdateFocusFromRowAtIndexPath:(id)arg1 toView:(id)arg2 heading:(NSUInteger)arg3 ;
-(BOOL)tableView:(id)arg0 shouldUpdateFocusInContext:(id)arg1 ;
-(BOOL)tableView:(id)arg0 wantsHeaderForSection:(NSInteger)arg1 ;
-(CGFloat)heightForFooterInTableView:(id)arg0 ;
-(CGFloat)heightForHeaderInTableView:(id)arg0 ;
-(CGFloat)marginForTableView:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 maxTitleWidthForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 maxTitleWidthForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableViewSpacingForExtraSeparators:(id)arg0 ;
-(NSInteger)__tableView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)__tableView:(id)arg0 dataOwnerForDropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)sectionAfterShadowUpdates:(NSInteger)arg0 ;
-(NSInteger)sectionBeforeShadowUpdates:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 accessoryTypeForRowWithIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 indentationLevelForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(NSInteger)tableView:(id)arg0 titleAlignmentForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 titleAlignmentForHeaderInSection:(NSInteger)arg1 ;
-(id)_rebasedShadowUpdatesForUpdate:(id)arg0 initialSnapshot:(id)arg1 ;
-(id)_tableView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)_tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg0 sectionIndexTitlesTrimmedToCount:(NSUInteger)arg1 ;
-(id)_tableView:(id)arg0 targetIndexPathForProposedIndexPath:(id)arg1 currentIndexPath:(id)arg2 dropSession:(id)arg3 ;
-(id)indexPathAfterShadowUpdates:(id)arg0 ;
-(id)indexPathAfterShadowUpdates:(id)arg0 allowAppendingInsert:(BOOL)arg1 ;
-(id)indexPathAfterShadowUpdates:(id)arg0 startingAtUpdate:(id)arg1 ;
-(id)indexPathBeforeShadowUpdates:(id)arg0 ;
-(id)indexPathBeforeShadowUpdates:(id)arg0 startingBeforeUpdate:(id)arg1 ;
-(id)indexPathForElementWithModelIdentifier:(id)arg0 inView:(id)arg1 ;
-(id)indexPathForPreferredFocusedItemForTableView:(id)arg0 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg0 ;
-(id)indexPathsAfterShadowUpdates:(id)arg0 ;
-(id)indexPathsAfterShadowUpdates:(id)arg0 allowAppendingInsert:(BOOL)arg1 ;
-(id)indexPathsBeforeShadowUpdates:(id)arg0 ;
-(id)initWithTableView:(id)arg0 ;
-(id)modelIdentifierForElementAtIndexPath:(id)arg0 inView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)sectionsAfterShadowUpdates:(id)arg0 ;
-(id)sectionsAfterShadowUpdates:(id)arg0 allowAppendingInsert:(BOOL)arg1 ;
-(id)sectionsBeforeShadowUpdates:(id)arg0 ;
-(id)shadowUpdateWithIdentifier:(id)arg0 ;
-(id)tableView:(id)arg0 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 detailTextForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 dragPreviewParametersForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 dropPreviewParametersForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 indexPathForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 leadingSwipeActionsForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willDeselectRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)viewForFooterInTableView:(id)arg0 ;
-(id)viewForHeaderInTableView:(id)arg0 ;
-(struct CGPoint )tableView:(id)arg0 newContentOffsetAfterUpdate:(struct CGPoint )arg1 context:(id)arg2 ;
-(struct CGRect )tableView:(id)arg0 calloutTargetRectForCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(struct CGRect )tableView:(id)arg0 frameForSectionIndexGivenProposedFrame:(struct CGRect )arg1 ;
-(void)_tableView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)_tableView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)_tableView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)_tableView:(id)arg0 dropSessionDidEnter:(id)arg1 ;
-(void)_tableView:(id)arg0 dropSessionDidExit:(id)arg1 ;
-(void)_tableView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)appendShadowUpdate:(id)arg0 ;
-(void)rebaseExistingShadowUpdatesForUpdates:(id)arg0 ;
-(void)regenerateUpdateMap;
-(void)removeShadowUpdate:(id)arg0 ;
-(void)reset;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 cancelPrefetchingForRowsAtIndexPaths:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didCancelReorderingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndReorderingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndSwipingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didFocusRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnfocusRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnhighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)tableView:(id)arg0 didUpdateTextFieldForRowAtIndexPath:(id)arg1 withValue:(id)arg2 ;
-(void)tableView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)tableView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)tableView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)tableView:(id)arg0 dropSessionDidEnter:(id)arg1 ;
-(void)tableView:(id)arg0 dropSessionDidExit:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)tableView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)tableView:(id)arg0 performPrimaryActionForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 prefetchRowsAtIndexPaths:(id)arg1 ;
-(void)tableView:(id)arg0 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginReorderingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginSwipingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willCommitMenuWithAnimator:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayContextMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)tableView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)tableViewDidFinishReload:(id)arg0 ;


@end


#endif