// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSTAGEREGISTRY_H
#define BRCSTAGEREGISTRY_H

@class NSMutableSet, NSString;
@protocol BRCModule, BRCLowDiskDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCAccountSessionFPFS.h"
#import "BRCStagePersistedState.h"
#import "brc_task_tracker.h"

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate>

 {
    BRCAccountSessionFPFS *_session;
    NSString" _stageDirectoryPath;
    NSUInteger _stageDirectoryFileID;
    NSMutableSet *_activeUploadStageIDs;
    NSMutableSet *_activeDownloadStageIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BRCStagePersistedState *_persistedState;
    BOOL _lowDiskSpace;
    NSObject<OS_dispatch_queue> *_queue;
    brc_task_tracker *_tracker;
}


@property (nonatomic, setter=setCurrentlyDumpingForCiconia:) BOOL currentlyDumpingForCiconia; // ivar: _currentlyDumpingForCiconia
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int deviceID; // ivar: _deviceID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly) Class superclass;


+(unsigned short)computeItemModeFromStatInfo:(id)arg0 isPackage:(BOOL)arg1 ;
+(void)migrateStageToVersion2_0WithSession:(id)arg0 ;
-(BOOL)_graveyardAt:(int)arg0 path:(id)arg1 forItemID:(id)arg2 ;
-(BOOL)_hasContentsInPath:(id)arg0 ;
-(BOOL)copyPackageFileWithPackageFd:(int)arg0 toStageFd:(int)arg1 relpath:(id)arg2 ;
-(BOOL)existsInStage:(NSUInteger)arg0 generationID:(*unsigned int)arg1 ;
-(BOOL)existsInUploadOrLiveItemsStage:(NSUInteger)arg0 generationID:(*unsigned int)arg1 ;
-(BOOL)moveFromStageToGraveyard:(NSUInteger)arg0 forItemID:(id)arg1 ;
-(BOOL)moveFromURLToLiveStage:(id)arg0 liveStageFilename:(id)arg1 error:(*id)arg2 ;
-(BOOL)pendingFetchRecordDirExistsInStageWithStartingChangeToken:(id)arg0 recordZoneID:(id)arg1 ;
-(BOOL)rememberStagedDownloadWithID:(id)arg0 gatherFileID:(*NSUInteger)arg1 generationID:(*unsigned int)arg2 appLibrary:(id)arg3 error:(*id)arg4 ;
-(BOOL)rescueUnuploadedFile:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)saveXattrAtURL:(id)arg0 forSignature:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveXattrBlob:(id)arg0 forSignature:(id)arg1 error:(*id)arg2 ;
-(NSInteger)_garbageCollectDeltaSyncDatabases;
-(NSInteger)_garbageCollectDownloads;
-(NSInteger)_garbageCollectFaults;
-(NSInteger)_garbageCollectOldVersions;
-(NSInteger)_garbageCollectPackages;
-(NSInteger)_garbageCollectQBSDatabases;
-(NSInteger)_garbageCollectSpace:(NSInteger)arg0 ;
-(NSInteger)_garbageCollectUnusedLiveItems;
-(NSInteger)_garbageCollectUploads;
-(NSInteger)_purgeSpaceUnderQueue:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSInteger)_removeUnusedXattrBlobs;
-(NSInteger)garbageCollectSpace:(NSInteger)arg0 ;
-(NSInteger)purgableSpace;
-(NSInteger)purgeGraveyardSpace:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSInteger)purgeSpace:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSUInteger)_processPendingListDatabaseObjects:(id)arg0 ;
-(id)_anchorNameForChangeToken:(id)arg0 recordZoneID:(id)arg1 ;
-(id)_anchorNameForRecordID:(id)arg0 ;
-(id)_anchorNamePrefixForRecordZoneID:(id)arg0 ;
-(id)_liveURLForliveStageFilename:(id)arg0 ;
-(id)_pathForDirIndex:(unsigned char)arg0 ;
-(id)_pathInStage:(NSUInteger)arg0 index:(*unsigned char)arg1 generationID:(*unsigned int)arg2 ;
-(id)createStageURLFromLiveURLForItem:(id)arg0 error:(*id)arg1 ;
-(id)createURLForDownloadWithStageID:(id)arg0 name:(id)arg1 ;
-(id)createURLForUploadWithStageID:(id)arg0 name:(id)arg1 ;
-(id)downloadStageURLWithStageID:(id)arg0 ;
-(id)initWithAccountSession:(id)arg0 ;
-(id)loadXattrBlobForSignature:(id)arg0 error:(*id)arg1 ;
-(id)pendingDeltaFetchRecordDirWithStartingChangeToken:(id)arg0 recordZoneID:(id)arg1 ;
-(id)pendingListRecordDirWithStartingChangeToken:(id)arg0 ;
-(id)urlForXattrSignature:(id)arg0 ;
-(int)_openStageDirectory:(unsigned char)arg0 ;
-(int)_performInStageDirectory:(unsigned char)arg0 block:(id)arg1 ;
-(void)_updatePersistedStateWithLatestGCStartTime:(NSInteger)arg0 ;
-(void)associateDownloadStageID:(id)arg0 withOperation:(id)arg1 ;
-(void)associateSyncUpStageID:(id)arg0 withOperation:(id)arg1 ;
-(void)cancel;
-(void)cleanupStagedDownloadWithID:(id)arg0 forItemID:(id)arg1 ;
-(void)cleanupStagedSyncUpWithID:(id)arg0 ;
-(void)cleanupStagedUploadWithID:(id)arg0 ;
-(void)close;
-(void)disarmLockedTestTimer;
-(void)lowDiskStatusChangedForDevice:(int)arg0 hasEnoughSpace:(BOOL)arg1 ;
-(void)open;
-(void)removeDatabaseObjectsForZone:(id)arg0 ;
-(void)resume;
-(void)setStageDirectoryForXattr:(id)arg0 ;
-(void)unlinkLiveStageFilename:(id)arg0 ;


@end


#endif