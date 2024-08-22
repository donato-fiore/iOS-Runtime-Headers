// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBTABCOLLECTION_H
#define WBTABCOLLECTION_H

@class NSString, NSError, NSArray;
@protocol WBTabProvider_Internal, WBStateProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBBrowserState.h"
#import "WBCollectionConfiguration.h"
#import "WebBookmarkTabCollection.h"

@interface WBTabCollection : NSObject <WBTabProvider_Internal, WBStateProvider>

 {
    NSObject<OS_dispatch_queue> *_databaseQueue;
}


@property (readonly, nonatomic) WBBrowserState *browserState;
@property (nonatomic, getter=hasCompletedMigration) BOOL completedMigration;
@property (readonly, nonatomic) WBCollectionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLockedSync;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (nonatomic) NSUInteger maximumTabsPerGroup; // ivar: _maximumTabsPerGroup
@property (readonly, copy, nonatomic) NSArray *mutableTabGroups;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (readonly, nonatomic) BOOL shouldUpdatePresence;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WebBookmarkTabCollection *tabCollection; // ivar: _collection
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, copy, nonatomic) NSArray *windowStates;
@property (readonly, copy, nonatomic) NSArray *windows;
@property (readonly, nonatomic) int windowsFolderSpecialID;


+(id)currentDeviceIdentifier;
+(id)databasePathForConfiguration:(id)arg0 ;
+(id)inMemoryChangeSet;
-(BOOL)_deleteItems:(id)arg0 leaveTombstones:(BOOL)arg1 ;
-(BOOL)_deleteTabGroup:(id)arg0 leaveTombstone:(BOOL)arg1 ;
-(BOOL)_insertBookmark:(id)arg0 afterBookmark:(id)arg1 inFolderWithID:(int)arg2 ;
-(BOOL)_insertItems:(id)arg0 inParentWithID:(unsigned int)arg1 afterItem:(id)arg2 ;
-(BOOL)_insertItemsIntoPlace:(id)arg0 inParentWithID:(unsigned int)arg1 ;
-(BOOL)_reorderBookmarkIntoPlace:(id)arg0 ;
-(BOOL)_reorderItem:(id)arg0 afterItem:(id)arg1 ;
-(BOOL)_reorderItemIntoPlace:(id)arg0 ;
-(BOOL)_saveBrowserState:(id)arg0 ;
-(BOOL)_saveItem:(id)arg0 ;
-(BOOL)_saveItems:(id)arg0 ;
-(BOOL)_updateItems:(id)arg0 inParentWithID:(unsigned int)arg1 ;
-(BOOL)_updatePinnedTabs:(id)arg0 privatePinnedTabs:(id)arg1 ;
-(BOOL)closeWindowState:(id)arg0 ;
-(BOOL)deleteAllLocalSavedState;
-(BOOL)deleteAllWindowStates;
-(BOOL)deleteItems:(id)arg0 leaveTombstones:(BOOL)arg1 ;
-(BOOL)deleteTabGroup:(id)arg0 ;
-(BOOL)deleteTabs:(id)arg0 ;
-(BOOL)deleteWindowState:(id)arg0 ;
-(BOOL)deleteWindowStates:(id)arg0 ;
-(BOOL)insertItems:(id)arg0 inParentWithID:(unsigned int)arg1 afterItem:(id)arg2 ;
-(BOOL)insertTab:(id)arg0 inTabGroup:(id)arg1 afterTab:(id)arg2 ;
-(BOOL)insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(BOOL)insertTabs:(id)arg0 inTabGroup:(id)arg1 afterTab:(id)arg2 ;
-(BOOL)lockSync;
-(BOOL)reorderItem:(id)arg0 afterItem:(id)arg1 ;
-(BOOL)saveBrowserState:(id)arg0 ;
-(BOOL)saveItem:(id)arg0 ;
-(BOOL)saveTabGroup:(id)arg0 ;
-(BOOL)saveWindow:(id)arg0 ;
-(BOOL)saveWindowState:(id)arg0 ;
-(BOOL)updateItems:(id)arg0 inParentWithID:(unsigned int)arg1 ;
-(BOOL)updateTabs:(id)arg0 inTabGroup:(id)arg1 ;
-(id)_activeParticipantsFromParticipantData:(id)arg0 ;
-(id)_bookmarksForTabs:(id)arg0 ;
-(id)_bookmarksForTabs:(id)arg0 syncable:(BOOL)arg1 ;
-(id)_bookmarksFromItems:(id)arg0 ;
-(id)_collection;
-(id)_collectionWithConfiguration:(id)arg0 checkIntegrity:(BOOL)arg1 ;
-(id)_descriptionForScopedBookmark:(id)arg0 ;
-(id)_participantDataForTab:(id)arg0 ;
-(id)_shareRecordForTabGroup:(id)arg0 ;
-(id)activeParticipantsInTab:(id)arg0 ;
-(id)activeParticipantsInTabGroup:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 openDatabase:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg0 openDatabase:(BOOL)arg1 checkIntegrity:(BOOL)arg2 ;
-(id)initWithTabCollection:(id)arg0 ;
-(id)itemsInParentWithID:(unsigned int)arg0 ofType:(Class)arg1 ;
-(id)mutableTabGroupWithUUID:(id)arg0 ;
-(id)mutableTabWithUUID:(id)arg0 ;
-(id)mutableTabsForTabGroup:(id)arg0 ;
-(id)presenceTabUUIDForParticipant:(id)arg0 inTabGroup:(id)arg1 ;
-(id)recordIDForTab:(id)arg0 ;
-(id)scopedBookmarkListWithID:(int)arg0 ;
-(id)scopedBookmarkListWithID:(int)arg0 filteredUsingString:(id)arg1 ;
-(id)scopedBookmarkWithUUID:(id)arg0 ;
-(id)shareRecordForTabGroup:(id)arg0 ;
-(id)tabGroupMatchingShare:(id)arg0 inTabGroups:(id)arg1 ;
-(id)tabGroupUUIDForServerID:(id)arg0 ;
-(id)tabGroupWithUUID:(id)arg0 ;
-(id)tabUUIDForServerID:(id)arg0 ;
-(id)tabWithUUID:(id)arg0 ;
-(id)tabsForTabGroup:(id)arg0 ;
-(id)topScopedBookmarkListForTabGroup:(id)arg0 ;
-(id)windowStateWithUUID:(id)arg0 ;
-(id)windowWithUUID:(id)arg0 ;
-(void)_createDatabaseQueue;
-(void)_readPropertiesOfBookmark:(id)arg0 ;
-(void)createTopScopedBookmarkListIfNeededForTabGroup:(id)arg0 ;
-(void)deleteItems:(id)arg0 leaveTombstones:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)deleteWindowStates:(id)arg0 completionHandler:(id)arg1 ;
-(void)disableSuddenTerminationForPendingChanges;
-(void)getActiveParticipantsInTab:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertItems:(id)arg0 inParent:(id)arg1 afterItem:(id)arg2 completionHandler:(id)arg3 ;
-(void)insertItems:(id)arg0 inParentWithID:(unsigned int)arg1 afterItem:(id)arg2 completionHandler:(id)arg3 ;
-(void)insertItemsIntoPlace:(id)arg0 inParent:(id)arg1 completionHandler:(id)arg2 ;
-(void)insertItemsIntoPlace:(id)arg0 inParentWithID:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)performMaintenance;
-(void)reloadItems:(id)arg0 ;
-(void)reorderItem:(id)arg0 afterItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)reorderItemIntoPlace:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveBrowserState:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveWindowState:(id)arg0 completionHandler:(id)arg1 ;
-(void)shareRecordForTabGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlockSync;
-(void)updateItems:(id)arg0 inParentWithID:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)updateTabsInTabGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)waitForPendingChanges;


@end


#endif