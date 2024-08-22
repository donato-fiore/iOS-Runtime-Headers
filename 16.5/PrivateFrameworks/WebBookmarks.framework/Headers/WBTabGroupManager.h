// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBTABGROUPMANAGER_H
#define WBTABGROUPMANAGER_H

@class NSHashTable, WBSCRDTPositionGenerator, NSMutableSet, NSMutableDictionary, WBParticipantPresenceCoordinator, NSString, NSSet, NSArray;
@protocol WBParticipantPresenceCoordinatorDelegate, WBTabGroupSyncAgentSyncObserver, WBSCRDTPositionGeneratorDelegate, WBStateProvider, OS_dispatch_queue, WBTabGroupSyncAgentProtocol;

#import <Foundation/Foundation.h>

#import "WBBrowserState.h"
#import "WBTabCollection.h"

@interface WBTabGroupManager : NSObject <WBParticipantPresenceCoordinatorDelegate, WBTabGroupSyncAgentSyncObserver, WBSCRDTPositionGeneratorDelegate, WBStateProvider>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSHashTable *_observers;
    WBSCRDTPositionGenerator *_positionGenerator;
    NSMutableSet *_recentlyAddedTabGroupsAwaitingFirstStartPage;
    NSMutableDictionary *_removedTabGroupsByUUID;
    NSMutableDictionary *_removedTabsByUUID;
    NSMutableDictionary *_localTabsByUUID;
    NSMutableDictionary *_localTabGroupsByUUID;
    NSMutableDictionary *_syncableTabsByUUID;
    NSMutableDictionary *_syncableTabGroupsByUUID;
    BOOL _didFinishSetup;
    id *_setupCompletionHandler;
    WBParticipantPresenceCoordinator *_presenceCoordinator;
    BOOL _enableSharedTabGroupsFastSyncPresence;
    BOOL _hasSharedTabGroups;
    BOOL _isBroadcastingPresenceUpdates;
    NSInteger _numberOfDevicePresenceReportingRequests;
}


@property (readonly, nonatomic) WBBrowserState *browserState;
@property (readonly, nonatomic, getter=hasCompletedMigration) BOOL completedMigration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (nonatomic) NSUInteger maximumTabsPerGroup;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (readonly, copy, nonatomic) NSSet *recentlyAddedTabGroupsAwaitingFirstStartPage;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<WBTabGroupSyncAgentProtocol> *syncAgentProxy; // ivar: _syncAgentProxy
@property (readonly, nonatomic) WBTabCollection *tabCollection; // ivar: _tabCollection
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, copy, nonatomic) NSArray *windowStates;
@property (readonly, copy, nonatomic) NSArray *windows;
@property (readonly, nonatomic) int windowsFolderSpecialID;


+(id)ephemeralTabGroupManager;
-(BOOL)_shouldBeginDevicePresenceReporting;
-(BOOL)_shouldEndDevicePresenceReporting;
-(BOOL)insertItems:(id)arg0 inParentWithID:(unsigned int)arg1 afterItem:(id)arg2 ;
-(BOOL)saveBrowserState:(id)arg0 ;
-(BOOL)saveWindowState:(id)arg0 ;
-(NSInteger)_nextInMemoryPositionChangeID;
-(NSInteger)nextChangeIDForPositionInPositionGenerator:(id)arg0 ;
-(id)_generatePositionForTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(id)_insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 isMove:(BOOL)arg2 ;
-(id)_itemSyncPositionComparator:(SEL)arg0 ;
-(id)_localTabGroups;
-(id)_tabCacheForTabGroup:(id)arg0 ;
-(id)_tabGroupCacheForTabGroup:(id)arg0 ;
-(id)_tabGroupWithUUID:(id)arg0 ;
-(id)_tabWithUUID:(id)arg0 ;
-(id)activeParticipantsInTab:(id)arg0 ;
-(id)activeParticipantsInTabGroup:(id)arg0 ;
-(id)deviceIdentifierForPositionGenerator:(id)arg0 ;
-(id)initWithCollection:(id)arg0 ;
-(id)insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(id)moveTabs:(id)arg0 toTabGroup:(id)arg1 afterTab:(id)arg2 withoutPersistingTabGroupsWithUUIDStrings:(id)arg3 ;
-(id)positionGenerator:(id)arg0 positionForRecordName:(id)arg1 ;
-(id)positionGenerator:(id)arg0 recordNameOfBookmarksAfterRecordWithName:(id)arg1 ;
-(id)positionGenerator:(id)arg0 recordNameOfBookmarksBeforeRecordWithName:(id)arg1 ;
-(id)presenceTabUUIDForParticipant:(id)arg0 inTabGroup:(id)arg1 ;
-(id)scopedBookmarkListWithID:(int)arg0 filteredUsingString:(id)arg1 ;
-(id)shareRecordForTabGroup:(id)arg0 ;
-(id)tabGroupMatchingShare:(id)arg0 ;
-(id)tabGroupWithUUID:(id)arg0 ;
-(id)tabWithUUID:(id)arg0 ;
-(id)tabsForTabGroup:(id)arg0 ;
-(id)topScopedBookmarkListForTabGroup:(id)arg0 ;
-(id)updateTabGroupWithUUID:(id)arg0 persist:(BOOL)arg1 usingBlock:(id)arg2 ;
-(id)updateTabWithUUID:(id)arg0 persist:(BOOL)arg1 notify:(BOOL)arg2 usingBlock:(id)arg3 ;
-(id)updateTabsInTabGroupWithUUID:(id)arg0 persist:(BOOL)arg1 usingBlock:(id)arg2 ;
-(id)windowStateWithUUID:(id)arg0 ;
-(id)windowWithUUID:(id)arg0 ;
-(void)_beginDevicePresenceReportingIfNeeded;
-(void)_cacheTabGroup:(id)arg0 ;
-(void)_commonInit;
-(void)_didRemoveTabGroups:(id)arg0 updateTabGroups:(id)arg1 ;
-(void)_endDevicePresenceReportingIfNeeded;
-(void)_movePresenceForParticipantToTabWithUUID:(id)arg0 ;
-(void)_notifyScopedBookmarkChangesInFolderWithID:(int)arg0 ;
-(void)_performMergeForTabGroups:(id)arg0 resultHandler:(id)arg1 ;
-(void)_reloadTabGroupsWithResultHandler:(id)arg0 ;
-(void)_reorderTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(void)_tabGroupSyncDidFinish:(id)arg0 ;
-(void)_uncacheTab:(id)arg0 ;
-(void)_uncacheTabGroup:(id)arg0 ;
-(void)_updatePositionsForTabsInTabGroup:(id)arg0 ;
-(void)activeParticipantsDidUpdateInTabGroupWithUUID:(id)arg0 ;
-(void)activeParticipantsDidUpdateInTabWithUUID:(id)arg0 ;
-(void)addTabGroupObserver:(id)arg0 ;
-(void)beginParticipantPresenceReportingForTabGroupWithUUID:(id)arg0 ;
-(void)beginSharingTabGroupWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteScopedBookmarkWithUUID:(id)arg0 ;
-(void)deleteScopedBookmarkWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteWindowStates:(id)arg0 completionHandler:(id)arg1 ;
-(void)disableDevicePresenceReporting;
-(void)disableSuddenTerminationForPendingChanges;
-(void)enableDevicePresenceReporting;
-(void)endParticipantPresenceReportingForTabGroupWithUUID:(id)arg0 ;
-(void)getActiveParticipantsInTab:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertScopedBookmark:(id)arg0 inScopedBookmarkFolderWithID:(int)arg1 afterBookmarkWithUUID:(id)arg2 ;
-(void)movePresenceForParticipantToTabWithUUID:(id)arg0 ;
-(void)moveTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(void)participantPresenceCoordinator:(id)arg0 didUpdateParticipantsInTabGroupWithIdentifier:(id)arg1 ;
-(void)participantPresenceCoordinator:(id)arg0 didUpdateParticipantsInTabWithIdentifier:(id)arg1 ;
-(void)recentlyAddedTabGroupIsAwaitingFirstStartPage:(id)arg0 ;
-(void)registerWindowState:(id)arg0 ;
-(void)reloadTabGroupsFromDatabaseWithCompletionHandler:(id)arg0 ;
-(void)removeTabGroup:(id)arg0 ;
-(void)removeTabGroupObserver:(id)arg0 ;
-(void)reorderScopedBookmarkWithUUID:(id)arg0 afterBookmarkWithUUID:(id)arg1 notify:(BOOL)arg2 ;
-(void)saveBrowserState:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveWindowState:(id)arg0 completionHandler:(id)arg1 ;
-(void)shareRecordForTabGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)tabGroupHasDisplayedStartPage:(id)arg0 ;
-(void)updateScopedBookmarkWithUUID:(id)arg0 title:(id)arg1 address:(id)arg2 ;
-(void)updateTabsInTabGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)userDidAcceptCloudKitShareWithMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)waitForPendingChanges;
-(void)waitForSetupWithCompletionHandler:(id)arg0 ;


@end


#endif