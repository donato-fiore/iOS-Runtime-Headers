// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONSTRUCTUREDLISTVIEWCONTROLLER_H
#define NCNOTIFICATIONSTRUCTUREDLISTVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, ATXDigestOnboardingSuggestion, ATXDigestOnboardingSuggestionClient, ATXDigestOnboardingSuggestionLogging, NSDate, UIPanGestureRecognizer, NCNotificationRequest, NSHashTable, UIScrollView;
@protocol NCNotificationMasterListDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationOptionsMenuSettingsDelegate, NCModalNavigationControllerDelegate, NCDigestOnboardingNavigationControllerDelegate, ATXDigestOnboardingSuggestionClientObserver, NCModeManagerObserver, NCCreateContactNavigationViewControllerDelegate, NCSupplementaryViewPrototypeRecipeDelegate, _UIAlwaysOnEnvironmentObserver, NCLegibilitySettingsAdjusting, NCNotificationListCoalescingControlsHandler, NCNotificationStructuredListViewControllerDelegate, NCNotificationListComponent, NCNotificationListSupplementaryViewsContaining;


#import "NCMaterialDisplayingCaptureOnlyViewController.h"
#import "NCNotificationListSectionHeaderView.h"
#import "NCNotificationManagementViewPresenter.h"
#import "NCNotificationMasterList.h"
#import "NCNotificationListView.h"
#import "NCModalNavigationController.h"
#import "NCModeManager.h"
#import "NCNotificationViewController.h"
#import "NCNotificationOptionsMenu.h"
#import "NCNotificationListTouchEaterManager.h"

@interface NCNotificationStructuredListViewController : UIViewController <NCNotificationMasterListDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationOptionsMenuSettingsDelegate, NCModalNavigationControllerDelegate, NCDigestOnboardingNavigationControllerDelegate, ATXDigestOnboardingSuggestionClientObserver, NCModeManagerObserver, NCCreateContactNavigationViewControllerDelegate, NCSupplementaryViewPrototypeRecipeDelegate, _UIAlwaysOnEnvironmentObserver, NCLegibilitySettingsAdjusting>



@property (nonatomic) BOOL backgroundBlurred; // ivar: _backgroundBlurred
@property (readonly, nonatomic) NSString *backgroundGroupNameBase;
@property (retain, nonatomic) NCMaterialDisplayingCaptureOnlyViewController *captureOnlyMaterialViewController; // ivar: _captureOnlyMaterialViewController
@property (weak, nonatomic) NSObject<NCNotificationListCoalescingControlsHandler> *coalescingControlsHandlerInForceTouchState; // ivar: _coalescingControlsHandlerInForceTouchState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationStructuredListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // ivar: _deviceAuthenticated
@property (retain, nonatomic) NSArray *digestOnboardingLastBundleIdentifiersSelection; // ivar: _digestOnboardingLastBundleIdentifiersSelection
@property (retain, nonatomic) NSArray *digestOnboardingLastScheduledDeliveryTimesSelection; // ivar: _digestOnboardingLastScheduledDeliveryTimesSelection
@property (retain, nonatomic) ATXDigestOnboardingSuggestion *digestOnboardingSuggestion; // ivar: _digestOnboardingSuggestion
@property (retain, nonatomic) ATXDigestOnboardingSuggestionClient *digestOnboardingSuggestionClient; // ivar: _digestOnboardingSuggestionClient
@property (retain, nonatomic) ATXDigestOnboardingSuggestionLogging *digestOnboardingSuggestionLogging; // ivar: _digestOnboardingSuggestionLogging
@property (retain, nonatomic) NSDate *digestOnboardingSuggestionPresentationTime; // ivar: _digestOnboardingSuggestionPresentationTime
@property (readonly, nonatomic) CGSize effectiveContentSize;
@property (readonly, nonatomic) BOOL hasVisibleContent;
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly, nonatomic) BOOL hasVisibleUrgentBreakthroughContent;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NCNotificationListSectionHeaderView *headerViewInForceTouchState; // ivar: _headerViewInForceTouchState
@property (weak, nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (nonatomic, getter=isHomeAffordanceVisible) BOOL homeAffordanceVisible;
@property (readonly, nonatomic) UIEdgeInsets insetMargins; // ivar: _insetMargins
@property (readonly, nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (retain, nonatomic) NCNotificationManagementViewPresenter *managementViewPresenter; // ivar: _managementViewPresenter
@property (retain, nonatomic) NCNotificationMasterList *masterList; // ivar: _masterList
@property (retain, nonatomic) NCNotificationListView *masterListView; // ivar: _masterListView
@property (retain, nonatomic) NCModalNavigationController *modalNavigationController; // ivar: _modalNavigationController
@property (retain, nonatomic) NCModeManager *modeManager; // ivar: _modeManager
@property (weak, nonatomic) NSObject<NCNotificationListComponent> *notificationListComponentPresentingOptionsMenu; // ivar: _notificationListComponentPresentingOptionsMenu
@property (nonatomic) BOOL notificationListExpandsVisibleRegionOnSignificantScroll;
@property (retain, nonatomic) NCNotificationRequest *notificationRequestRemovedWhilePresentingLongLook; // ivar: _notificationRequestRemovedWhilePresentingLongLook
@property (weak, nonatomic) NCNotificationViewController *notificationViewControllerPresentingLongLook; // ivar: _notificationViewControllerPresentingLongLook
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NCNotificationOptionsMenu *optionsMenu; // ivar: _optionsMenu
@property (readonly, nonatomic, getter=isOverlayFooterContentVisible) BOOL overlayFooterContentVisible;
@property (readonly, nonatomic, getter=isPresentingNotificationInLongLook) BOOL presentingNotificationInLongLook;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) CGPoint scrollViewVisibleContentLayoutOffset;
@property (readonly, nonatomic, getter=isScrollingListContent) BOOL scrollingListContent;
@property (nonatomic) BOOL showNotificationsInAlwaysOn; // ivar: _showNotificationsInAlwaysOn
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NCNotificationListSupplementaryViewsContaining> *testRecipeSupplementaryViewsContainer; // ivar: _testRecipeSupplementaryViewsContainer
@property (retain, nonatomic) NCNotificationListTouchEaterManager *touchEaterManager; // ivar: _touchEaterManager


-(BOOL)_canShowWhileLocked;
-(BOOL)_forwarNotificationRequestToLongLookIfNecessary:(id)arg0 ;
-(BOOL)_isPresentingDigestOnboardingSuggestion;
-(BOOL)_shouldPresentDigestOnboardingSuggestion;
-(BOOL)dismissModalFullScreenAnimated:(BOOL)arg0 ;
-(BOOL)interpretsViewAsContent:(id)arg0 ;
-(BOOL)isContentExtensionVisible:(id)arg0 ;
-(BOOL)notificationListComponent:(id)arg0 isClockNotificationRequest:(id)arg1 ;
-(BOOL)notificationListComponent:(id)arg0 shouldAllowInteractionsForNotificationRequest:(id)arg1 ;
-(BOOL)notificationListComponentShouldAllowLongPressGesture:(id)arg0 ;
-(BOOL)notificationMasterList:(id)arg0 shouldFilterNotificationRequest:(id)arg1 ;
-(BOOL)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg0 ;
-(BOOL)shouldHintDefaultActionForNotificationListBaseComponent:(id)arg0 ;
-(CGFloat)insetHorizontalMarginForNotificationListComponent:(id)arg0 ;
-(Class)notificationMasterListNotificationViewControllerClass:(id)arg0 ;
-(id)_logDescription;
-(id)_notificationSystemSettings;
-(id)_sectionSettingsForSectionIdentifier:(id)arg0 ;
-(id)backgroundGroupNameBaseForNotificationListBaseComponent:(id)arg0 ;
-(id)containerViewForPreviewInteractionPresentedContentForNotificationListBaseComponent:(id)arg0 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg0 ;
-(id)init;
-(id)insertSupplementaryViewsContainerAtListPosition:(NSUInteger)arg0 identifier:(id)arg1 withDescription:(id)arg2 ;
-(id)insertSupplementaryViewsContainerAtListPosition:(NSUInteger)arg0 withDescription:(id)arg1 ;
-(id)legibilitySettingsForNotificationListBaseComponent:(id)arg0 ;
-(id)newCaptureOnlyMaterialViewController;
-(id)notificationListComponent:(id)arg0 containerViewProviderForExpandedContentForViewController:(id)arg1 ;
-(id)notificationListComponent:(id)arg0 keyboardAssertionForGestureWindow:(id)arg1 ;
-(id)notificationListComponent:(id)arg0 notificationRequestForUUID:(id)arg1 ;
-(id)notificationListComponent:(id)arg0 sectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)notificationListComponentRequestsCurrentModeConfiguration:(id)arg0 ;
-(id)notificationManagementViewPresenter:(id)arg0 sectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)notificationManagementViewPresenterRequestsSystemSettings:(id)arg0 ;
-(id)notificationOptionsMenu:(id)arg0 sectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)notificationOptionsMenuRequestsCurrentModeConfiguration:(id)arg0 ;
-(id)notificationOptionsMenuRequestsSystemSettings:(id)arg0 ;
-(id)notificationRequestWithNotificationIdentifier:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)notificationSystemSettingsForNotificationListComponent:(id)arg0 ;
-(id)notificationUsageTrackingStateForNotificationListComponent:(id)arg0 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id)arg0 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_didChangeDeepestActionResponder;
-(void)_didChangeDeepestUnambiguousResponder;
-(void)_didExitAlwaysOn;
-(void)_presentNavigationControllerAndBeginModalInteraction:(id)arg0 sender:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_presentOptionsMenuForNotificationRequest:(id)arg0 withPresentingView:(id)arg1 optionsForSection:(BOOL)arg2 ;
-(void)_requestAuthenticationAndPerformBlock:(id)arg0 ;
-(void)_resetSwipeInteractionWithRevealedActionsAnimated:(BOOL)arg0 ;
-(void)_scheduleDigestOnboardingSuggestion;
-(void)_setScheduledDeliveryEnabledForSectionIdentifier:(id)arg0 ;
-(void)_setSystemScheduledDeliveryEnabled:(BOOL)arg0 scheduledDeliveryTimes:(id)arg1 ;
-(void)_toggleDigestOnboardingSuggestionIfNecessary;
-(void)addContentObserver:(id)arg0 ;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)collapseGroupForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)createContactNavigationControllerDidComplete:(id)arg0 ;
-(void)digestOnboardingNavigationController:(id)arg0 didChangeDeliveryTimesActiveSelection:(id)arg1 appBundleIdentifiersActiveSelection:(id)arg2 ;
-(void)digestOnboardingNavigationController:(id)arg0 didScheduleDigestDeliveryTimes:(id)arg1 forAppBundleIdentifiers:(id)arg2 ;
-(void)digestOnboardingNavigationControllerDidDeferSetup:(id)arg0 ;
-(void)digestOnboardingSuggestionClient:(id)arg0 didSuggestOnboarding:(id)arg1 ;
-(void)expandGroupForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)listViewControllerPresentedByUserAction;
-(void)migrateNotifications;
-(void)modalNavigationControllerDidDismiss:(id)arg0 ;
-(void)modeManager:(id)arg0 didUpdateCurrentModeConfiguration:(id)arg1 previousModeConfiguration:(id)arg2 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationListBaseComponent:(id)arg0 didAddViewController:(id)arg1 ;
-(void)notificationListBaseComponent:(id)arg0 didBeginUserInteractionWithViewController:(id)arg1 ;
-(void)notificationListBaseComponent:(id)arg0 didEndUserInteractionWithViewController:(id)arg1 ;
-(void)notificationListBaseComponent:(id)arg0 didPresentCoalescingControlsHandler:(id)arg1 inForceTouchState:(BOOL)arg2 ;
-(void)notificationListBaseComponent:(id)arg0 didRemoveViewController:(id)arg1 ;
-(void)notificationListBaseComponent:(id)arg0 didTransitionActionsForSwipeInteraction:(id)arg1 revealed:(BOOL)arg2 ;
-(void)notificationListBaseComponent:(id)arg0 didTransitionCoalescingControlsHandler:(id)arg1 toClearState:(BOOL)arg2 ;
-(void)notificationListBaseComponent:(id)arg0 didUpdateViewController:(id)arg1 ;
-(void)notificationListBaseComponent:(id)arg0 requestsClearingPresentables:(id)arg1 ;
-(void)notificationListBaseComponent:(id)arg0 requestsModalPresentationOfNavigationController:(id)arg1 sender:(id)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)notificationListBaseComponent:(id)arg0 willUpdateViewController:(id)arg1 ;
-(void)notificationListBaseComponentDidRemoveAll:(id)arg0 ;
-(void)notificationListBaseComponentDidSignificantUserInteraction:(id)arg0 ;
-(void)notificationListBaseComponentRequestsClearingAll:(id)arg0 ;
-(void)notificationListComponent:(id)arg0 acceptedSummaryOnboarding:(BOOL)arg1 ;
-(void)notificationListComponent:(id)arg0 didPresentSectionHeaderView:(id)arg1 inForceTouchState:(BOOL)arg2 ;
-(void)notificationListComponent:(id)arg0 didRemoveNotificationRequest:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 didTransitionSectionHeaderView:(id)arg1 toClearState:(BOOL)arg2 ;
-(void)notificationListComponent:(id)arg0 isPresentingLongLookForViewController:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 requestPermissionToExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;
-(void)notificationListComponent:(id)arg0 requestsAuthenticationAndPerformBlock:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 requestsClearingNotificationRequestsInSections:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 requestsExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 requestAuthentication:(BOOL)arg3 withParameters:(id)arg4 completion:(id)arg5 ;
-(void)notificationListComponent:(id)arg0 requestsPresentingManagementViewForNotificationRequest:(id)arg1 managementViewType:(NSUInteger)arg2 withPresentingView:(id)arg3 completion:(id)arg4 ;
// -(void)notificationListComponent:(id)arg0 requestsPresentingOptionsMenuForNotificationRequest:(id)arg1 presentingViewProvider:(id)arg2 optionsForSection:(unk)arg3 completion:(BOOL)arg4  ;
-(void)notificationListComponent:(id)arg0 setAllowsDirectMessages:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationListComponent:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationListComponent:(id)arg0 setModeConfiguration:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)notificationListComponent:(id)arg0 setNotificationSystemSettings:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 setScheduledDelivery:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)notificationListComponent:(id)arg0 shouldFinishLongLookTransitionForNotificationRequest:(id)arg1 trigger:(NSInteger)arg2 withCompletionBlock:(id)arg3 ;
-(void)notificationListComponent:(id)arg0 willDismissLongLookForCancelActionForViewController:(id)arg1 ;
-(void)notificationListComponentChangedContent:(id)arg0 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsNotifications:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setDeliverQuietly:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5 ;
-(void)notificationManagementViewPresenter:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)notificationManagementViewPresenter:(id)arg0 setScheduledDelivery:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenterDidDismissManagementView:(id)arg0 ;
-(void)notificationManagementViewPresenterWillPresentManagementView:(id)arg0 ;
-(void)notificationMasterList:(id)arg0 didUpdateOverlayFooterContentVisibility:(BOOL)arg1 ;
-(void)notificationMasterList:(id)arg0 requestsClearingFromIncomingSectionNotificationRequests:(id)arg1 ;
-(void)notificationMasterList:(id)arg0 requestsPresentingFocusActivityPickerFromView:(id)arg1 ;
-(void)notificationMasterList:(id)arg0 scrollViewDidScroll:(id)arg1 ;
-(void)notificationMasterList:(id)arg0 scrollViewWillBeginDragging:(id)arg1 ;
-(void)notificationMasterList:(id)arg0 scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint )arg2 targetContentOffset:(struct CGPoint *)arg3 ;
-(void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg0 ;
-(void)notificationMasterListWillExpandNotificationListCount:(id)arg0 ;
-(void)notificationOptionsMenu:(id)arg0 addSenderToContactsForNotificationRequest:(id)arg1 withSectionIdentifier:(id)arg2 ;
-(void)notificationOptionsMenu:(id)arg0 requestsClearingSectionWithIdentifier:(id)arg1 ;
-(void)notificationOptionsMenu:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationOptionsMenu:(id)arg0 setAllowsNotifications:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationOptionsMenu:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationOptionsMenu:(id)arg0 setModeConfiguration:(id)arg1 ;
-(void)notificationOptionsMenu:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5 ;
-(void)notificationOptionsMenu:(id)arg0 setScheduledDelivery:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationOptionsMenuWillDismiss:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)notifyContentObservers;
-(void)removeContentObserver:(id)arg0 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)removeOverrideNotificationListDisplayStyleSettingForReason:(id)arg0 ;
-(void)revealNotificationHistory:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setOverrideNotificationListDisplayStyleSetting:(NSUInteger)arg0 forReason:(id)arg1 hideNotificationCount:(BOOL)arg2 ;
-(void)toggleFilteringForSectionIdentifier:(id)arg0 shouldFilter:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateNotificationSystemSettings:(id)arg0 previousSystemSettings:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillMoveToWindow:(id)arg0 ;


@end


#endif