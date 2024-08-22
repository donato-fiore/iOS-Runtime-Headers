// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPPTOPERATION_H
#define SBPPTOPERATION_H

@class NSOperation, NSString;



@interface SBPPTOperation : NSOperation {
    id *_finishTestBlock;
    id *_startTestBlock;
    id *_finishSubTestBlock;
    id *_startSubTestBlock;
    CGFloat _operationStartTime;
    CGFloat _operationEndTime;
}


@property (copy, nonatomic) NSString *operationName; // ivar: _operationName


+(BOOL)_isLibraryDismissalAllowedWithCompletion:(id)arg0 ;
+(BOOL)_isLibraryPresentationAllowedWithCompletion:(id)arg0 ;
+(BOOL)isLibraryPresented;
+(id)_libraryViewController;
+(id)_mainDisplayWindowScene;
+(id)_mainDisplayWindowScene;
+(id)appLibraryDismissExpandedPod;
+(id)appLibraryExpandFirstPod;
+(id)configureAppLibraryForAllAppsInOnePod;
+(id)configureAppLibraryForEachAppHavingOwnPod;
+(id)dismissAppLibraryOverlay;
+(id)dismissAppLibraryPad:(BOOL)arg0 ;
+(id)dismissAppLibrarySearch;
+(id)dismissOverlaysAndResetHomeScreenToFirstIconPageAnimated:(BOOL)arg0 ;
+(id)dismissOverlaysAndResetHomeScreenToLastIconPageAnimated:(BOOL)arg0 ;
+(id)dismissOverlaysAndResetHomeScreenToPage:(NSUInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
+(id)operationToActivateApplicationWithBundleIdentifier:(id)arg0 ;
+(id)operationToActivateNullOffscreenApp;
+(id)operationToCreateFolderWithName:(id)arg0 containingIconsForBundleIdentifiers:(id)arg1 ;
+(id)operationToDismissAppSwitcherAndReturnToSource;
+(id)operationToDismissBannerNotification;
+(id)operationToDismissCoverSheet;
+(id)operationToDismissFloatingDock;
+(id)operationToDismissPageManagement;
+(id)operationToFinishTest:(id)arg0 ;
+(id)operationToLoadPPTAppSwitcherState;
+(id)operationToLockInterface;
+(id)operationToMonitorCoverSheetTransitionWithTestName:(id)arg0 execute:(id)arg1 ;
+(id)operationToOpenFolderWithName:(id)arg0 ;
+(id)operationToPresentAppSwitcher;
+(id)operationToPresentBannerNotification;
+(id)operationToPresentCoverSheet;
+(id)operationToPresentFloatingDock;
+(id)operationToPresentPageManagement;
+(id)operationToPreventSystemIdle;
+(id)operationToPublishExampleNotificationsWithNotificationCount:(NSUInteger)arg0 threadCount:(NSUInteger)arg1 ;
+(id)operationToRemoveExampleNotifications;
+(id)operationToRestoreAppSwitcherState;
+(id)operationToRestoreHomeScreenState;
+(id)operationToResumeSystemIdle;
+(id)operationToSaveAppSwitcherState;
+(id)operationToSaveHomeScreenState;
+(id)operationToSetAllApplicationsBlockedForScreenTime:(BOOL)arg0 ;
+(id)operationToSetApplicationWithBundleIdentifier:(id)arg0 blockedForScreenTime:(BOOL)arg1 ;
+(id)operationToSetInterfaceOrientation:(NSInteger)arg0 ;
+(id)operationToStartTest:(id)arg0 ;
+(id)operationToSwipeDownInMiddleOfInterface;
+(id)operationToSwipeLeftInMiddleOfInterface;
+(id)operationToSwipeRightInMiddleOfInterface;
+(id)operationToSwipeUpInMiddleOfInterface;
+(id)operationToSynthesizeEventsForCommandString:(id)arg0 ;
+(id)operationToSynthesizeEventsForEventActions:(id)arg0 ;
+(id)operationToSynthesizeEventsForEventStream:(id)arg0 ;
+(id)operationToTerminateApplicationWithBundleIdentifier:(id)arg0 ;
+(id)operationToTerminateNullOffscreenApp;
+(id)operationToTransitionToHomeScreen;
+(id)operationToUnlockInterface;
+(id)operationToUnlockInterfaceFinishingUIUnlock:(BOOL)arg0 ;
+(id)operationToUpdateHomeScreenPagesForActiveFocusMode;
+(id)operationToWaitForNotificationName:(id)arg0 object:(id)arg1 timeout:(CGFloat)arg2 ;
+(id)operationToWaitForTimeInterval:(CGFloat)arg0 ;
+(id)performTapAtPointWithBlock:(id)arg0 ;
+(id)presentAppLibrary;
+(id)presentAppLibrary:(BOOL)arg0 ;
+(id)presentAppLibraryPhone;
+(id)presentAppLibrarySearchByTappingSearchField;
+(id)pullToAppLibrarySearch;
+(id)resetAndPrepareforNextTest;
+(id)resetAppLibraryToTop;
+(void)_appLibrarySupport__performPanGesturesOnScreenFromPage:(NSUInteger)arg0 toPage:(NSUInteger)arg1 completion:(id)arg2 ;
+(void)_appLibrarySupport_performDragFromPoint:(struct CGPoint )arg0 andDragTo:(struct CGPoint )arg1 duration:(CGFloat)arg2 fromView:(id)arg3 withCompletion:(id)arg4 ;
+(void)_appLibrarySupport_performLeftToRightPanGestureOnScreenWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
+(void)_appLibrarySupport_performPanGestureAwayFromUserInterfaceLayoutDirectionOnScreenWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
+(void)_appLibrarySupport_performPanGestureTowardsUserInterfaceLayoutDirectionOnScreenWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
+(void)_appLibrarySupport_performPanGesturesOnScreenUntilOnDefaultHomeScreenIconPageWithCompletion:(id)arg0 ;
+(void)_appLibrarySupport_performPanGesturesOnScreenUntilOnDeweyOverlayWithCompletion:(id)arg0 ;
+(void)_appLibrarySupport_performPanGesturesOnScreenUntilOnPage:(NSUInteger)arg0 withCompletion:(id)arg1 ;
+(void)_appLibrarySupport_performPanWithComposer:(id)arg0 startLocation:(struct CGPoint )arg1 endLocation:(struct CGPoint )arg2 duration:(CGFloat)arg3 ;
+(void)_appLibrarySupport_performRightToLeftPanGestureOnScreenWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
+(void)_appLibrarySupport_performTapAtPoint:(struct CGPoint )arg0 fromView:(id)arg1 withCompletion:(id)arg2 ;
+(void)_dismissOverlaysAndResetHomeScreenToPage:(NSUInteger)arg0 animated:(BOOL)arg1 operation:(id)arg2 completion:(id)arg3 ;
+(void)enqueueOperations:(id)arg0 ;
-(id)init;
-(id)markFinishedSubTest:(id)arg0 forTestName:(id)arg1 ;
-(id)markFinishedTest:(id)arg0 ;
-(id)markStartSubTest:(id)arg0 forTestName:(id)arg1 ;
-(id)markStartedTest:(id)arg0 ;
-(void)operationDidFinish;
-(void)operationWillStart;


@end


#endif