// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCLOCALITEM_H
#define BRCLOCALITEM_H

@class NSNumber, NSString, BRCDirectoryItem<BRCFSRooted>, BRCLocalItem<BRCShareAcceptationFault>, BRCLocalItem<BRCTopLevelShareable>, BRCLocalItem<BRCSharedToMeTopLevel>, NSDictionary, BRFileObjectID, BRCUserRowID, NSError;
@protocol BRCJobsMatching, BRCSyncThrottleItemProtocol, BRCItem;

#import <Foundation/Foundation.h>

#import "BRCZoneRowID.h"
#import "BRFieldCKInfo.h"
#import "BRCAppLibrary.h"
#import "BRCAliasItem.h"
#import "BRCDirectoryItem.h"
#import "BRCDocumentItem.h"
#import "BRCFinderBookmarkItem.h"
#import "BRCSymlinkItem.h"
#import "BRCClientZone.h"
#import "BRCPQLConnection.h"
#import "BRCItemGlobalID.h"
#import "BRCItemID.h"
#import "BRCLocalItem.h"
#import "BRCServerZone.h"
#import "BRCAccountSessionFPFS.h"
#import "BRCLocalStatInfo.h"

@interface BRCLocalItem : NSObject <BRCJobsMatching, BRCSyncThrottleItemProtocol, BRCItem>

 {
    BRCZoneRowID *_parentZoneRowID;
    NSNumber *_minimumSupportedOSRowID;
    NSNumber *_knownByServer;
    NSNumber *_parentFileID;
    BRFieldCKInfo *_sideCarCKInfo;
    NSNumber *_isInDocumentScope;
    id *_serverPathMatchID;
    BOOL _resolvedPath;
    BOOL _forceDelete;
    BOOL _forceDeletedAlready;
    BOOL _forceNotif;
}


@property (retain, nonatomic) BRCAppLibrary *appLibrary; // ivar: _appLibrary
@property (readonly, nonatomic) NSString *appLibraryID;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (readonly, nonatomic) BRCFinderBookmarkItem *asFinderBookmark;
@property (readonly, nonatomic) BRCLocalItem<BRCShareAcceptationFault> *asShareAcceptationFault;
@property (readonly, nonatomic) BRCLocalItem<BRCTopLevelShareable> *asShareableItem;
@property (readonly, nonatomic) BRCLocalItem<BRCSharedToMeTopLevel> *asSharedToMeTopLevelItem;
@property (readonly, nonatomic) BRCSymlinkItem *asSymlink;
@property (readonly, nonatomic) NSString *bookmarkData;
@property (readonly, nonatomic) NSString *bookmarkData;
@property (readonly, nonatomic) BRCClientZone *clientZone; // ivar: _clientZone
@property (readonly, nonatomic) NSString *collaborationIdentifierIfComputable;
@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db
@property (readonly, nonatomic) NSUInteger dbRowID; // ivar: _dbRowID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *digestDescription;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, nonatomic) NSString *extension;
@property (readonly, nonatomic) NSNumber *fileID;
@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, nonatomic) BOOL forceNeedsSyncUpWithoutDiffs;
@property (readonly, nonatomic) BOOL fromReadOnlyDB;
@property (readonly, nonatomic) BOOL hasShareIDAndIsOwnedByMe;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAlmostDead;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isChildSharedItem;
@property (readonly, nonatomic) BOOL isCrossZoneMoveTombstone;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isDeadOrMissingInServerTruth;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isDirectoryFault;
@property (readonly, nonatomic) BOOL isDirectoryWithPackageName;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isDocumentBeingCopiedToNewZone;
@property (readonly, nonatomic) BOOL isFSRoot;
@property (readonly, nonatomic) BOOL isFinderBookmark;
@property (readonly, nonatomic) BOOL isFromInitialScan;
@property (readonly, nonatomic) BOOL isIdleOrRejected;
@property (readonly, nonatomic) BOOL isInDataScope;
@property (readonly, nonatomic) BOOL isInDocumentOrTrashScope;
@property (readonly, nonatomic) BOOL isInDocumentScope;
@property (readonly, nonatomic) BOOL isInTrashScope;
@property (readonly, nonatomic) BOOL isKnownByServer;
@property (readonly, nonatomic) BOOL isKnownByServerOrInFlight;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isLost;
@property (readonly, nonatomic) BOOL isOnDisk;
@property (readonly, nonatomic) BOOL isOwnedByMe;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL isReadAndUploaded;
@property (readonly, nonatomic) BOOL isRejected;
@property (readonly, nonatomic) BOOL isShareAcceptationFault;
@property (readonly, nonatomic) BOOL isShareableItem;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedByMe;
@property (readonly, nonatomic) BOOL isSharedToMe;
@property (readonly, nonatomic) BOOL isSharedToMeChildItem;
@property (readonly, nonatomic) BOOL isSharedToMeTopLevelItem;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isTopLevelSharedItem;
@property (readonly, nonatomic) BOOL isUserVisible; // ivar: _isUserVisible
@property (readonly, nonatomic) BOOL isZoneRoot;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) unsigned char itemScope;
@property (readonly, nonatomic) NSUInteger localDiffs; // ivar: _localDiffs
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) BOOL logicalNameNeedsRename;
@property (readonly, nonatomic) BOOL needsInsert;
@property (readonly, nonatomic) BOOL needsOSUpgradeToSyncUp;
@property (readonly, nonatomic) BOOL needsReading;
@property (readonly, nonatomic) BOOL needsSyncUp;
@property (readonly, nonatomic) BOOL needsUpload;
@property (readonly, nonatomic) NSUInteger notifsRank; // ivar: _notifsRank
@property (readonly, nonatomic) BRCLocalItem *orig; // ivar: _orig
@property (readonly, nonatomic) BRCUserRowID *ownerKey; // ivar: _ownerKey
@property (readonly, nonatomic) BRCClientZone *parentClientZone;
@property (readonly, nonatomic) NSNumber *parentFileID;
@property (readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) BRCItemID *serverPathMatchItemID;
@property (readonly, nonatomic) BRCServerZone *serverZone; // ivar: _serverZone
@property (readonly, nonatomic) BRCAccountSessionFPFS *session; // ivar: _session
@property (nonatomic) NSUInteger sharingOptions; // ivar: _sharingOptions
@property (readonly, nonatomic) BRCLocalStatInfo *st; // ivar: _st
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSError *syncUpError;
@property (readonly, nonatomic) unsigned int syncUpState; // ivar: _syncUpState
@property (readonly, nonatomic) unsigned short uploadStatus;


+(BOOL)computeUserVisibleStatusOfLiveItemWithParentVisible:(BOOL)arg0 parentIsNonDesktopRoot:(BOOL)arg1 parentScope:(unsigned char)arg2 itemFilename:(id)arg3 parentFilename:(id)arg4 appLibrary:(id)arg5 ;
+(BOOL)parseBookmarkData:(id)arg0 inAccountSession:(id)arg1 itemID:(*id)arg2 mangledID:(*id)arg3 unsaltedBookmarkData:(*id)arg4 error:(*id)arg5 ;
+(BOOL)parseUnsaltedBookmarkData:(id)arg0 itemID:(*id)arg1 mangledID:(*id)arg2 error:(*id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)_bookmarkDataWithItemResolutionString:(id)arg0 serverZone:(id)arg1 salted:(BOOL)arg2 ;
+(id)bookmarkDataWithItemResolutionString:(id)arg0 serverZone:(id)arg1 ;
+(id)unsaltedBookmarkDataWithItemResolutionString:(id)arg0 serverZone:(id)arg1 ;
+(unsigned char)computeItemScopeFromParentIsRoot:(BOOL)arg0 parentIsDocuments:(BOOL)arg1 parentScope:(unsigned char)arg2 logicalName:(id)arg3 ;
-(BOOL)_deleteFromDB:(id)arg0 keepAliases:(BOOL)arg1 ;
-(BOOL)_hasFieldChangesNotDiffed;
-(BOOL)_insertInDB:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(BOOL)_isIndexable;
-(BOOL)_isInterestingUpdateForNotifsWithDiffs:(NSUInteger)arg0 ;
-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)checkIsInDocumentsScopeWithParent:(id)arg0 ;
-(BOOL)isMigratingToFPFS;
-(BOOL)markLatestSyncRequestAcknowledgedInZone:(id)arg0 ;
-(BOOL)saveToDB;
-(BOOL)saveToDBForServerEdit:(BOOL)arg0 keepAliases:(BOOL)arg1 ;
-(BOOL)startDownloadInTask:(id)arg0 options:(NSUInteger)arg1 etagIfLoser:(id)arg2 stageFileName:(id)arg3 error:(*id)arg4 ;
-(BOOL)updateFPCreationItemIdentifier:(id)arg0 ;
-(BOOL)updateFromServerItem:(id)arg0 ;
-(BOOL)updateWithImportObject:(id)arg0 onlyContentDependentProperties:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)validateLoggingToFile:(struct __sFILE *)arg0 ;
-(NSUInteger)diffAgainstLocalItem:(id)arg0 ;
-(NSUInteger)diffAgainstServerAliasItem:(id)arg0 ;
-(NSUInteger)diffAgainstServerItem:(id)arg0 ;
-(NSUInteger)maskForDiffsToSyncUpForZone:(id)arg0 sideCarZone:(BOOL)arg1 whenClearing:(BOOL)arg2 ;
-(NSUInteger)metadataSyncUpMask:(BOOL)arg0 ;
-(id)_initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)_initWithImportObject:(id)arg0 error:(*id)arg1 ;
-(id)_initWithLocalItem:(id)arg0 ;
-(id)_initWithServerItem:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(id)_syncZoneRowIDs;
-(id)_updateCrossZoneParent:(id)arg0 ;
-(id)baseSideCarRecord;
-(id)baseStructureRecord;
-(id)computeItemPathRelativeToRoot;
-(id)computedDestinationFilenameFromServerItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithContext:(id)arg0 ;
-(id)initFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)itemParentGlobalID;
-(id)jobsDescription;
-(id)liveStageFilename;
-(id)matchingJobsWhereSQLClause;
-(id)osNameNeededToSyncUp;
-(id)parentItemIDInZone;
-(id)parentItemOnFS;
-(id)setOfParentIDs;
-(id)sharedAliasItemID;
-(id)sideCarInfo;
-(id)sideCarRecordID;
-(id)structureRecordBeingDeadInServerTruth:(BOOL)arg0 shouldPCSChainStatus:(unsigned char)arg1 inZone:(id)arg2 ;
-(id)structureRecordBeingDeadInServerTruth:(BOOL)arg0 stageID:(id)arg1 shouldPCSChainStatus:(unsigned char)arg2 ;
-(id)structureRecordIDInZone:(id)arg0 ;
-(id)unsaltedBookmarkData;
-(void)_ascendItemHierarchyWithBlock:(id)arg0 ;
-(void)_cheapCheckSavingItem;
-(void)_crossZoneMoveToParent:(id)arg0 ;
-(void)_insertTombstoneForCrossZoneMove:(id)arg0 ;
-(void)_learnItemID:(id)arg0 serverItem:(id)arg1 ;
-(void)_markAsDeadTombstoneWithPreviousGlobalID:(id)arg0 ;
-(void)_markNeedsSyncingUp;
-(void)_moveToZoneWhenServerItemIsDead:(id)arg0 ;
-(void)_recomputeUserVisibleAndItemScope;
-(void)_refreshAppLibraryFromParent;
-(void)_removeSharedSpotlightAttributesIfNecessary;
-(void)_restorePreviousGlobalID:(id)arg0 ;
-(void)_sendNotificationIfNeededWithDiffs:(NSUInteger)arg0 regather:(BOOL)arg1 ;
-(void)_updateAppLibraryFromParent:(id)arg0 ;
-(void)_updateParent:(id)arg0 forceTopLevelShareMove:(BOOL)arg1 ;
-(void)_updatePropagatedInfoIfNeeded;
-(void)_updateSharedZoneBoostingWithDiffs:(NSUInteger)arg0 ;
-(void)_updateSyncUpSchedulerWithDiffs:(NSUInteger)arg0 ;
-(void)createSyncUpJob;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleUnknownItemError;
-(void)inheritOSUpgradeNeededFromItem:(id)arg0 ;
-(void)insertTombstoneAliasRecordInZone:(id)arg0 ;
-(void)learnItemID:(id)arg0 serverItem:(id)arg1 ;
-(void)markBouncedToNextAvailableBounceNumber;
-(void)markCannotSynchronizeForTooDeepHierarchy;
-(void)markDead;
-(void)markDoneMigratingToFPFS;
-(void)markForceNeedsSyncUp;
-(void)markForceNotify;
-(void)markForceRejected;
-(void)markFromInitialScan;
-(void)markImportedItemAsSharedWithImportBookmark:(id)arg0 parent:(id)arg1 ;
-(void)markItemForgottenByServer;
-(void)markLatestSyncRequestFailedInZone:(id)arg0 ;
-(void)markLatestSyncRequestRejectedInZone:(id)arg0 ;
-(void)markNeedsDeleteForItemIDTransfer;
-(void)markNeedsDeleteForRescheduleOfItem:(id)arg0 ;
-(void)markNeedsDeleteWhenAlreadyDeadInServerTruth;
-(void)markNeedsOSUpgradeToSyncUpWithName:(id)arg0 ;
-(void)markNeedsUploadOrSyncingUp;
-(void)markRejectedItemRemotelyRevived;
-(void)markRemovedFromFilesystemForServerEdit:(BOOL)arg0 ;
-(void)markRemovedFromFilesystemRecursively:(BOOL)arg0 ;
-(void)moveAsideLocally;
-(void)prepareForSyncUpInZone:(id)arg0 ;
-(void)prepareForSyncUpSideCarZone;
-(void)resetWhileKeepingClientItemsAndWantsUnlink:(BOOL)arg0 ;
-(void)scheduleSyncDownForOOBModifyRecordsAck;
-(void)serializeStructuralPluginHints:(id)arg0 ;
-(void)triggerNotificationIfNeeded;
-(void)updateItemMetadataFromServerItem:(id)arg0 appliedSharingPermission:(BOOL)arg1 ;
-(void)updateParentZoneRowID:(id)arg0 ;
-(void)updateStatMetadataFromServerItem:(id)arg0 ;
-(void)updateStructuralCKInfoFromServerItem:(id)arg0 ;
-(void)updateToBeInTrashWithParent:(id)arg0 trashPutBackPath:(id)arg1 trashPutBackParentID:(id)arg2 ;
-(void)updateToBeUntrashedWithParent:(id)arg0 ;
-(void)updateWithContentModificationDate:(id)arg0 ;
-(void)updateWithCreationDate:(id)arg0 ;
-(void)updateWithFavoriteRank:(NSUInteger)arg0 ;
-(void)updateWithFileSystemFlags:(NSUInteger)arg0 ;
-(void)updateWithFinderTagNames:(id)arg0 ;
-(void)updateWithLastUsedDate:(id)arg0 ;
-(void)updateWithLogicalName:(id)arg0 newParent:(id)arg1 ;
-(void)updateWithLogicalName:(id)arg0 newParent:(id)arg1 forceTopLevelShareMove:(BOOL)arg2 ;
-(void)updateWithXattrs:(id)arg0 ;
-(void)wasMarkedDead;


@end


#endif