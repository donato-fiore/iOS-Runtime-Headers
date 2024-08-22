// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONSUMMARIZEDSECTIONLIST_H
#define NCNOTIFICATIONSUMMARIZEDSECTIONLIST_H

@class NSUUID, NSString, PLSwipeInteraction;
@protocol NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationSummaryOrderProviderDelegate, PLSwipeInteractionDelegate;


#import "NCNotificationCombinedSectionList.h"
#import "NCNotificationSummaryOrderProvider.h"
#import "NCNotificationSummaryPlatterContainingView.h"

@interface NCNotificationSummarizedSectionList : NCNotificationCombinedSectionList <NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationSummaryOrderProviderDelegate, PLSwipeInteractionDelegate>

 {
    BOOL _adjustsFontForContentSizeCategory;
}


@property (readonly, copy, nonatomic) NSUUID *atxUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHorizontallyDisplaced) BOOL horizontallyDisplaced; // ivar: _horizontallyDisplaced
@property (nonatomic, getter=isPerformingClearAll) BOOL performingClearAll; // ivar: _performingClearAll
@property (nonatomic) BOOL shouldAdjustIndex; // ivar: _shouldAdjustIndex
@property (retain, nonatomic) NCNotificationSummaryOrderProvider *summaryOrderProvider; // ivar: _summaryOrderProvider
@property (retain, nonatomic) NCNotificationSummaryPlatterContainingView *summaryPlatterContainingView; // ivar: _summaryPlatterContainingView
@property (retain, nonatomic) PLSwipeInteraction *summaryPlatterViewSwipeInteraction; // ivar: _summaryPlatterViewSwipeInteraction
@property (readonly) Class superclass;


-(BOOL)_shouldHideNotificationGroupList:(id)arg0 ;
-(BOOL)_shouldHideNotificationRequest:(id)arg0 ;
-(BOOL)_shouldPerformSwipeClipping;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)notificationGroupListShouldReloadNotificationCells:(id)arg0 ;
-(BOOL)shouldContinuePresentingActionButtonsForSwipeInteraction:(id)arg0 ;
-(BOOL)swipeInteraction:(id)arg0 shouldRevealActionsFromLayoutLocation:(NSUInteger)arg1 ;
-(CGFloat)buttonsCornerRadiusForSwipeInteraction:(id)arg0 ;
-(CGFloat)footerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 withWidth:(CGFloat)arg2 ;
-(NSUInteger)notificationCountForSummaryOrderProvider:(id)arg0 ;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_clearAction;
-(id)_newSectionHeaderView;
-(id)_notificationGroupsForDigestRankOrdering;
-(id)comparisonDate;
-(id)listComponentDelegateForSummaryPlatterViewForNotificationSummaryOrderProvider:(id)arg0 ;
-(id)materialGroupNameBaseForNotificationSummaryOrderProvider:(id)arg0 ;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(id)swipeInteraction:(id)arg0 actionsToRevealFromLayoutLocation:(NSUInteger)arg1 ;
-(id)titlesForSectionListsInSummaryForSummaryOrderProvider:(id)arg0 ;
-(id)viewToMoveForSwipeInteraction:(id)arg0 ;
-(void)_collapseAllGroupListViews;
-(void)_collapseAllSectionListViews;
-(void)_collapseSection;
-(void)_configureSectionListView:(id)arg0 ;
-(void)_configureSummaryPlatterViewSwipeInteractionIfNecessary;
-(void)_configureSwipeClippingIfNecessary;
-(void)_didPerformSignificantUserInteraction;
-(void)_expandSection;
-(void)_hideSummaryPlatterView;
-(void)_insertViewToListAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_prepareForExpand;
-(void)_reloadGroupListLeadingNotificationRequests;
-(void)_removeViewFromListAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_resetSwipeClipping;
-(void)_setupSwipeClipping;
-(void)_showSummaryPlatterView;
-(void)_updateSectionForRankOrderedIfNecessaryAndReloadDigest:(BOOL)arg0 ;
-(void)clearAll;
-(void)collapseSummarizedSectionList;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)mergeNotificationGroups:(id)arg0 reorderGroupNotifications:(BOOL)arg1 ;
-(void)notificationListBaseComponentDidRemoveAll:(id)arg0 ;
-(void)notificationListComponent:(id)arg0 didRemoveNotificationRequest:(id)arg1 ;
-(void)notificationSummaryOrderProvider:(id)arg0 didUpdateOrderedNotificationGroupLists:(id)arg1 ;
-(void)notificationSummaryOrderProvider:(id)arg0 requestsPerformingDefaultActionForNotificationRequest:(id)arg1 inGroupList:(id)arg2 ;
-(void)notificationSummaryOrderProviderDidTapOnLeadingSummaryPlatterView:(id)arg0 ;
-(void)notificationSummaryOrderProviderRequestsReloadingLeadingSummaryPlatterView:(id)arg0 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)sectionHeaderViewDidRequestCollapsing:(id)arg0 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg0 ;
-(void)setDeviceAuthenticated:(BOOL)arg0 ;
-(void)swipeInteraction:(id)arg0 didMoveToNewXPosition:(CGFloat)arg1 ;
-(void)swipeInteractionDidBeginHidingActions:(id)arg0 ;
-(void)swipeInteractionDidBeginRevealingActions:(id)arg0 ;
-(void)swipeInteractionDidSignificantUserInteraction:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;


@end


#endif