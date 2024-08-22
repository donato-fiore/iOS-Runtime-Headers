// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSHOMESCREENSERVICE_H
#define SBSHOMESCREENSERVICE_H

@class BSServiceConnection, NSHashTable, NSArray, NSString;
@protocol SBSHomeScreenServiceServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBSDebugActiveWidgetInfo.h"

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface>

 {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    os_unfair_lock_s _lock;
    NSHashTable *_installedWebClipObservers;
    NSHashTable *_homeScreenLayoutObservers;
}


@property (nonatomic) BOOL addsNewIconsToHomeScreen;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *allIconLists;
@property (nonatomic, getter=isCachedHomeScreenLayoutAvailable) BOOL cachedHomeScreenLayoutAvailable; // ivar: _cachedHomeScreenLayoutAvailable
@property (nonatomic, getter=isCachedHomeScreenLayoutAvailableValid) BOOL cachedHomeScreenLayoutAvailableValid; // ivar: _cachedHomeScreenLayoutAvailableValid
@property (readonly, nonatomic) SBSDebugActiveWidgetInfo *debuggingActiveWidgetInfo;
@property (nonatomic, getter=isHomeScreenLayoutAvailable) BOOL homeScreenLayoutAvailable; // ivar: _homeScreenLayoutAvailable
@property (nonatomic, getter=isLargeIconLayoutEnabled) BOOL largeIconLayoutEnabled;
@property (readonly, copy, nonatomic) NSArray *overflowSlotCounts;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (nonatomic) BOOL showsHomeScreenSearchAffordance;


-(BOOL)debugContinuityWithBadgeType:(id)arg0 deviceTypeIdentifier:(id)arg1 ;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg0 ;
-(id)addHomeScreenLayoutAvailabilityObserver:(id)arg0 ;
-(id)addInstalledWebClipsObserver:(id)arg0 ;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg0 ;
-(id)folderPathToIconWithBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)silhouetteLayoutForPageAtIndex:(NSUInteger)arg0 ;
-(void)addApplicationIconToHomeScreenWithBundleIdentifier:(id)arg0 ;
-(void)addDebugIconWithSizeClassDescription:(id)arg0 inPage:(NSUInteger)arg1 atPositionDescription:(id)arg2 ;
-(void)addEmptyPage;
-(void)addSuggestedPageWithPageType:(id)arg0 focusModeIdentifier:(id)arg1 ;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg0 ;
-(void)changeDisplayedDateOffsetOverride:(CGFloat)arg0 ;
-(void)changeDisplayedDateOverride:(id)arg0 ;
-(void)clearAllOverflowSlotCounts;
-(void)clearTodayViewLayout;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(void)configureDeweyOneCategoryWithAllApps;
-(void)configureLibraryWithCategoryLimit:(NSInteger)arg0 ;
-(void)dealloc;
-(void)dismissAppLibraryWithCompletion:(id)arg0 ;
-(void)forbidApplicationBundleIdentifierFromLibrary:(id)arg0 withCompletion:(id)arg1 ;
-(void)homeScreenLayoutAvailabilityDidChange:(id)arg0 ;
-(void)ignoreAllApps;
-(void)insertEmptyPageAtIndex:(NSUInteger)arg0 ;
-(void)installedWebClipsDidChange;
-(void)organizeAllIconsAcrossPagesWithPageCount:(NSUInteger)arg0 ;
-(void)organizeAllIconsIntoFoldersWithPageCount:(NSUInteger)arg0 ;
-(void)overrideBadgeValue:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)presentAppLibraryAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentAppLibraryCategoryPodForCategoryIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)randomizeAllIconsAcrossPagesWithPageCount:(NSUInteger)arg0 ;
-(void)reloadHomeScreenLayout;
-(void)reloadIcons;
-(void)removeAllWidgets;
-(void)removeHomeScreenLayoutAvailabilityObservationAssertion:(id)arg0 ;
-(void)removeInstalledWebClipsObservationAssertion:(id)arg0 ;
-(void)removeWidgetsFromHomeScreen;
-(void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestAppLibraryUpdateWithReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestSuggestedApplicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)resetCategoriesLayoutWithCompletion:(id)arg0 ;
-(void)resetHomeScreenLayoutWithCompletion:(id)arg0 ;
-(void)resetTodayViewLayout;
-(void)runDownloadingIconTest;
-(void)runFloatingDockStressTestWithCompletion:(id)arg0 ;
-(void)runRemoveAndRestoreIconTest;
-(void)runWidgetDiscoverabilityTest;
-(void)setIconListsHidden:(id)arg0 ;
-(void)setupHomeScreenForWidgetScrollPerformanceTest;
-(void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif