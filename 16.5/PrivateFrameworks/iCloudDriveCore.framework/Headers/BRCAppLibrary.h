// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCAPPLIBRARY_H
#define BRCAPPLIBRARY_H

@class NSMutableSet, NSString, BRContainer, NSNumber, BRMangledID, NSMutableDictionary, NSURL;
@protocol BRCListOperationDelegate, BRCForegroundClient, BRCAppLibraryDelegate;

#import <Foundation/Foundation.h>

#import "BRCListDirectoryContentsOperation.h"
#import "BRCPQLConnection.h"
#import "BRCALRowID.h"
#import "BRCPrivateClientZone.h"
#import "BRCAccountSessionFPFS.h"
#import "brc_task_tracker.h"
#import "BRCSyncContext.h"
#import "BRCZoneRowID.h"

@interface BRCAppLibrary : NSObject <BRCListOperationDelegate, BRCForegroundClient>

 {
    uint8_t _activeQueries;
    uint8_t _activeRecursiveQueries;
    uint8_t _activeAliasQueries;
    NSMutableSet *_XPCClientsUsingUbiquity;
    BOOL _activated;
    BOOL _addedToSharedMetadataSyncContextForegroundClient;
    NSMutableSet *_targetSharedServerZones;
    NSMutableSet *_foregroundClients;
    BRCListDirectoryContentsOperation *_pristineFetchOp;
    BRCListDirectoryContentsOperation *_trashFetchOp;
}


@property (readonly, nonatomic) NSString *absolutePath;
@property (readonly, nonatomic) NSString *appLibraryID; // ivar: _appLibraryID
@property (readonly, nonatomic) BRContainer *containerMetadata; // ivar: _containerMetadata
@property (retain, nonatomic) NSString *containerMetadataEtag; // ivar: _containerMetadataEtag
@property (nonatomic) BOOL containerMetadataNeedsSyncUp; // ivar: _containerMetadataNeedsSyncUp
@property (nonatomic) NSUInteger containerMetadataSyncRequestID; // ivar: _containerMetadataSyncRequestID
@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db
@property (retain, nonatomic) BRCALRowID *dbRowID; // ivar: _dbRowID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) BRCPrivateClientZone *defaultClientZone; // ivar: _defaultClientZone
@property (retain, nonatomic) NSObject<BRCAppLibraryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (retain, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (readonly) BOOL hasActiveQueries;
@property (readonly) BOOL hasActiveRecursiveQueries;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isCloudDocsAppLibrary;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isGreedy;
@property (readonly, nonatomic) BOOL isiCloudDesktopAppLibrary;
@property (readonly, nonatomic) NSString *logName;
@property (readonly, nonatomic) BRMangledID *mangledID; // ivar: _mangledID
@property (nonatomic) BOOL needsSave; // ivar: _needsSave
@property (readonly, nonatomic) NSString *pathRelativeToRoot;
@property (readonly, nonatomic) NSMutableDictionary *plist;
@property (retain, nonatomic) NSNumber *rootQuotaUsage; // ivar: _rootQuotaUsage
@property (retain, nonatomic) BRCAccountSessionFPFS *session; // ivar: _session
@property (readonly, nonatomic) BOOL shouldEvictUploadedItems;
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syncedFolderType;
@property (readonly, nonatomic) brc_task_tracker *tracker; // ivar: _tracker
@property (readonly, nonatomic) BRCSyncContext *transferSyncContext;
@property (readonly, nonatomic) BRCSyncContext *transferSyncContextIfExists;
@property (readonly, nonatomic) NSURL *url;
@property (retain, nonatomic) BRCZoneRowID *zoneRowID; // ivar: _zoneRowID


-(BOOL)hasDocumentsOrDirectory;
-(BOOL)hasLocalChanges;
-(BOOL)hasUbiquitousDocuments;
-(BOOL)hasUbiquityClientsConnected;
-(BOOL)includesDataScope;
-(BOOL)integrityCheckBoosting;
-(BOOL)isDesktopAppLibrary;
-(BOOL)isDocumentScopePublic;
-(BOOL)isDocumentsAppLibrary;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAppLibrary:(id)arg0 ;
-(BOOL)isStillTargetingSharedServerZone:(id)arg0 ;
-(BOOL)recreateDocumentsFolderIfNeededInDB;
-(BOOL)shouldSaveContainerMetadataServerside;
-(BOOL)supportsSpotlightIndexing;
-(BOOL)wasMovedToCloudDocs;
-(BOOL)zoneHasShareAlias;
-(NSInteger)throttleHashWithItemID:(id)arg0 ;
-(NSUInteger)documentCountWithDB:(id)arg0 ;
-(NSUInteger)documentSizeUsageWithDB:(id)arg0 ;
-(id)_recursivelyDeleteItemsUnderItemID:(id)arg0 filterPredicate:(id)arg1 ;
-(id)_targetSharedServerZonesEnumerator;
-(id)_unwrappedDescriptionWithContext:(id)arg0 ;
-(id)createDocumentsFolder;
-(id)deleteAppLibrary;
-(id)descriptionWithContext:(id)arg0 ;
-(id)documentsFolder;
-(id)documentsFolderFileObjectID;
-(id)documentsFolderItemID;
-(id)documentsFolderWithDB:(id)arg0 ;
-(id)enumerateChildrenOfItemGlobalID:(id)arg0 sortOrder:(unsigned char)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 db:(id)arg4 ;
-(id)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)arg0 db:(id)arg1 ;
-(id)fetchDocumentsDirectoryItem;
-(id)fetchDocumentsDirectoryItem:(id)arg0 ;
-(id)fetchRootItem;
-(id)fetchRootItemInDB:(id)arg0 ;
-(id)init;
-(id)initWithMangledID:(id)arg0 dbRowID:(id)arg1 zoneRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(BOOL)arg6 createdRootOnDisk:(BOOL)arg7 createdCZMMoved:(BOOL)arg8 rootFileID:(id)arg9 ;
-(id)itemByRowID:(NSUInteger)arg0 ;
-(id)itemByRowID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)itemIDByRowID:(NSUInteger)arg0 ;
-(id)itemIDByRowID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)itemsEnumeratorChildOf:(id)arg0 withDeadItems:(BOOL)arg1 rankMin:(NSUInteger)arg2 rankMax:(NSUInteger)arg3 count:(NSUInteger)arg4 db:(id)arg5 ;
-(id)itemsEnumeratorWithRankMin:(NSUInteger)arg0 rankMax:(NSUInteger)arg1 namePrefix:(id)arg2 withDeadItems:(BOOL)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeOnlyFolders:(BOOL)arg5 shouldIncludeDocumentsScope:(BOOL)arg6 shouldIncludeDataScope:(BOOL)arg7 shouldIncludeExternalScope:(BOOL)arg8 shouldIncludeTrashScope:(BOOL)arg9 count:(NSUInteger)arg10 db:(id)arg11 ;
-(id)rootFileObjectID;
-(id)rootItemGlobalID;
-(id)rootItemID;
-(unsigned int)_activateState:(unsigned int)arg0 origState:(unsigned int)arg1 ;
-(void)_addTargetSharedServerZone:(id)arg0 ;
-(void)_addTargetSharedServerZoneForSharedItem:(id)arg0 ;
-(void)_removeAllTargetSharedServerZonesWhenNoLongerForeground;
-(void)_removeTargetSharedServerZoneIfNecessary:(id)arg0 ;
-(void)_resolveTargetSharedClientZonesWhenBecameForeground;
-(void)_updateContainerMetadataFromRecord:(id)arg0 stripIcons:(BOOL)arg1 ;
-(void)_updateIsInCloudDocsZone;
-(void)activate;
-(void)addClientUsingUbiquity:(id)arg0 ;
-(void)addForegroundClient:(id)arg0 ;
-(void)associateWithClientZone:(id)arg0 ;
-(void)associateWithClientZone:(id)arg0 offline:(BOOL)arg1 ;
-(void)clearStateBits:(unsigned int)arg0 ;
-(void)close;
-(void)didCreateDataScopedItem;
-(void)didCreateDocumentScopedItem;
-(void)didReceiveHandoffRequest;
-(void)didRemoveDocumentsFolder;
-(void)didUpdateDocumentScopePublic;
-(void)fetchPristineness;
-(void)fetchTrashItems;
-(void)listOperation:(id)arg0 wasReplacedByOperation:(id)arg1 ;
-(void)notifyClient:(id)arg0 whenFaultingIsDone:(id)arg1 ;
-(void)recomputeShouldEvictState;
-(void)registerQueryIsRecursive:(BOOL)arg0 ;
-(void)removeClientUsingUbiquity:(id)arg0 ;
-(void)removeForegroundClient:(id)arg0 ;
-(void)scheduleContainerMetadataSyncUp;
-(void)scheduleFullLibraryContentsFetch;
-(void)setIsOverQuota:(BOOL)arg0 ;
-(void)unregisterQueryIsRecursive:(BOOL)arg0 ;
-(void)updateWithPlist:(id)arg0 ;
-(void)zoneDidChangeMovedToCloudDocsState;


@end


#endif