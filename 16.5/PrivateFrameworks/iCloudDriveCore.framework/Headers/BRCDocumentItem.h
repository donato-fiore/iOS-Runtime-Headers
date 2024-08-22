// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDOCUMENTITEM_H
#define BRCDOCUMENTITEM_H

@class NSDictionary, NSNumber, NSSet, NSString, NSError;
@protocol BRCTopLevelShareable;


#import "BRCLocalItem.h"
#import "BRCAliasItem.h"
#import "BRCDirectoryItem.h"
#import "BRCDocumentItem.h"
#import "BRCLocalVersion.h"
#import "BRCGenerationID.h"

@interface BRCDocumentItem : BRCLocalItem <BRCTopLevelShareable>



@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) NSDictionary *conflictLoserState;
@property (readonly, nonatomic) BRCLocalVersion *currentVersion; // ivar: _currentVersion
@property (readonly, nonatomic) unsigned short downloadStatus;
@property (readonly, nonatomic) NSNumber *fileIDForUpload; // ivar: _fileIDForUpload
@property (readonly, nonatomic) BRCGenerationID *generationIDForUpload; // ivar: _generationIDForUpload
@property (readonly, nonatomic) BOOL hasFileIDForUpload;
@property (readonly, nonatomic) BOOL hasLocalContent;
@property (readonly, nonatomic) BOOL isAutomaticallyEvictable;
@property (readonly, nonatomic) BOOL isEvictable;
@property (readonly, nonatomic) BOOL isVisibleIniCloudDrive;
@property (readonly, nonatomic) unsigned int queryItemStatus;
@property (readonly, nonatomic) NSSet *resolvedConflictLoserEtags; // ivar: _resolvedConflictLoserEtags
@property (readonly, nonatomic) BOOL shouldBeGreedy;
@property (readonly, nonatomic) BOOL shouldHaveThumbnail;
@property (readonly, nonatomic) BOOL shouldTransferThumbnail;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;
@property (readonly, nonatomic) NSError *uploadError;


+(BOOL)isDocumentAutomaticallyEvictableWithExtension:(id)arg0 ;
+(BOOL)isDocumentAutomaticallyEvictableWithName:(id)arg0 ;
+(BOOL)shouldDocumentBeGreedyWithName:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_deleteFromDB:(id)arg0 keepAliases:(BOOL)arg1 ;
-(BOOL)_insertInDB:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(BOOL)_isInterestingUpdateForNotifs;
-(BOOL)_needsSyncBubbleRecomputeForError:(id)arg0 origError:(id)arg1 ;
-(BOOL)_nukePackageItemsFromDB:(id)arg0 ;
-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)_updatePackageItemsIfNecessaryWithImportObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)contentRecordNeedsForceAllFieldsWhenDeadInServerTruth:(BOOL)arg0 ;
-(BOOL)hasShareIDAndIsOwnedByMe;
-(BOOL)isCrossZoneMoveTombstone;
-(BOOL)isDocument;
-(BOOL)isDocumentBeingCopiedToNewZone;
-(BOOL)isPackage;
-(BOOL)isShareableItem;
-(BOOL)markLatestSyncRequestAcknowledgedInZone:(id)arg0 ;
-(BOOL)startDownloadInTask:(id)arg0 options:(NSUInteger)arg1 etagIfLoser:(id)arg2 stageFileName:(id)arg3 error:(*id)arg4 ;
-(BOOL)supportsServerSideAssetCopies;
-(BOOL)updateFromServerItem:(id)arg0 ;
-(BOOL)updateWithImportObject:(id)arg0 onlyContentDependentProperties:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)validateLoggingToFile:(struct __sFILE *)arg0 ;
-(NSUInteger)diffAgainstLocalItem:(id)arg0 ;
-(NSUInteger)diffAgainstServerItem:(id)arg0 ;
-(id)_initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)_initWithImportObject:(id)arg0 error:(*id)arg1 ;
-(id)_initWithLocalItem:(id)arg0 ;
-(id)_initWithServerItem:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(id)aliasItemID;
-(id)asShareableItem;
-(id)baseContentsRecord;
-(id)collaborationIdentifierIfComputable;
-(id)contentsRecordID;
-(id)descriptionWithContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)syncContextUsedForTransfers;
-(void)_crossZoneMoveToParent:(id)arg0 ;
-(void)_insertTombstoneForPreviousZoneGlobalID;
-(void)_markAsDeadTombstoneWithPreviousGlobalID;
-(void)_updateReadThrottleIfNeededForRowID:(NSUInteger)arg0 forCreation:(BOOL)arg1 ;
-(void)_updateRecursivePropertiesInDB:(id)arg0 dbRowID:(NSUInteger)arg1 diffs:(NSUInteger)arg2 ;
-(void)_updateUploadJobIfNeededWithDiffs:(NSUInteger)arg0 ;
-(void)addResolvedConflictLoserEtag:(id)arg0 ;
-(void)appDidResolveConflictLoserWithEtag:(id)arg0 ;
-(void)cancelDownloadWithEtag:(id)arg0 ;
-(void)clearVersionSignatures:(NSUInteger)arg0 isPackage:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceVersionConflictByClearkingCKInfo;
-(void)forceiWorkConflictEtag:(id)arg0 ;
-(void)forceiWorkSharingInfoResend;
-(void)handleUnknownItemError;
-(void)markCrossZoneMovedForServerAssetCopyWithParentItem:(id)arg0 ;
-(void)markDead;
-(void)markDoneMigratingToFPFS;
-(void)markForceNeedsSyncUp;
-(void)markForceUpload;
-(void)markItemForgottenByServer;
-(void)markLatestSyncRequestRejectedInZone:(id)arg0 ;
-(void)markNeedsReading;
-(void)markNeedsUploadOrSyncingUp;
-(void)markOverQuotaWithError:(id)arg0 ;
-(void)markUploadedWithRecord:(id)arg0 ;
-(void)reIngestFromFileProvider;
-(void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg0 ;
-(void)updateVersionMetadataFromServerItem:(id)arg0 preventVersionDiffs:(BOOL)arg1 ;
-(void)updateWithContentModificationDate:(id)arg0 ;
-(void)updateWithLogicalName:(id)arg0 newParent:(id)arg1 ;
-(void)updateWithLogicalName:(id)arg0 newParent:(id)arg1 forceTopLevelShareMove:(BOOL)arg2 ;


@end


#endif