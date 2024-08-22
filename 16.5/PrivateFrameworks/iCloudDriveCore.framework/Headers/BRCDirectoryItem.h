// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDIRECTORYITEM_H
#define BRCDIRECTORYITEM_H

@class NSString;
@protocol BRCTopLevelShareable;


#import "BRCLocalItem.h"
#import "BRCAliasItem.h"
#import "BRCDirectoryItem.h"
#import "BRCDocumentItem.h"
#import "BRCItemGlobalID.h"

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>

 {
    BOOL _needsDeleteForItemIDTransfer;
}


@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (nonatomic) NSInteger mtime; // ivar: _mtime
@property (readonly, nonatomic) BRCItemGlobalID *prevZoneGlobalID; // ivar: _prevZoneGlobalID
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;


-(BOOL)_deleteFromDB:(id)arg0 keepAliases:(BOOL)arg1 ;
-(BOOL)_insertInDB:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(BOOL)_insertRecursiveProperties;
-(BOOL)_recomputeChildItemCount;
-(BOOL)_repopulateRecursivePropertiesIfNecessary;
-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)_updateRecursiveProperties;
-(BOOL)containsDirFault;
-(BOOL)containsOverQuotaItems;
-(BOOL)containsPendingDeleteDocuments;
-(BOOL)containsPendingDownload;
-(BOOL)containsPendingUploadOrSyncUp;
-(BOOL)handlePathMatchConflictForDirectoryCreationIfNecessary;
-(BOOL)hasDeadChildren;
-(BOOL)hasLiveChildren;
-(BOOL)hasShareIDAndIsOwnedByMe;
-(BOOL)isAppLibraryTrashFolder;
-(BOOL)isCrossZoneMoveTombstone;
-(BOOL)isDirectory;
-(BOOL)isDirectoryFault;
-(BOOL)isDirectoryWithPackageName;
-(BOOL)isShareableItem;
-(BOOL)isSharedByMeOrContainsSharedByMeItem;
-(BOOL)isSharedToMeOrContainsSharedToMeItem;
-(BOOL)possiblyContainsSharedItem;
-(BOOL)updateFromServerItem:(id)arg0 ;
-(NSUInteger)diffAgainstLocalItem:(id)arg0 ;
-(NSUInteger)diffAgainstServerItem:(id)arg0 ;
-(id)_initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)_initWithLocalItem:(id)arg0 ;
-(id)_initWithServerItem:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(id)_serverChildItemCount;
-(id)asShareableItem;
-(id)childItemCount;
-(id)clientZonesChildrenNeedingSyncUpAreIn;
-(id)collaborationIdentifierIfComputable;
-(id)descriptionWithContext:(id)arg0 ;
-(id)folderRootStructureRecord;
-(id)serverQuotaUsage;
-(void)_crossZoneMoveToParent:(id)arg0 ;
-(void)_insertZombieForCrossZoneMove;
-(void)_learnItemID:(id)arg0 serverItem:(id)arg1 ;
-(void)_markZombieForCrossZoneMove;
-(void)_retryPostponedIfNeededForDiffs:(NSUInteger)arg0 ;
-(void)_signalPropagationToChildren;
-(void)documentsDirectoryUpdatedDocumentsScopePublic;
-(void)markChildPropagationComplete;
-(void)markCrossZoneProgagationComplete;
-(void)markNeedsDeleteForItemIDTransfer;
-(void)markRemovedFromFilesystemRecursively:(BOOL)arg0 ;
-(void)prepareForSyncUpInZone:(id)arg0 ;
-(void)transformIntoFSRoot;
-(void)updateItemMetadataFromServerItem:(id)arg0 appliedSharingPermission:(BOOL)arg1 ;
-(void)updateWithContentModificationDate:(id)arg0 ;


@end


#endif