// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCSAVEDRECORDINGSMODEL_H
#define RCSAVEDRECORDINGSMODEL_H

@class NSManagedObjectContext, NSISO8601DateFormatter, NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "RCPersistentContainer.h"

@interface RCSavedRecordingsModel : NSObject {
    RCPersistentContainer *_container;
    NSManagedObjectContext *_context;
    NSISO8601DateFormatter *_unencryptedTitleDateFormatter;
}


@property (readonly, nonatomic) NSArray *allRecordings;
@property (readonly, nonatomic) NSSet *audioProperties;
@property (readonly, nonatomic) RCPersistentContainer *container;
@property (nonatomic) NSInteger isSavingDisabledCount; // ivar: _isSavingDisabledCount


+(id)_copyFileIntoRecordingsDirectory:(id)arg0 ;
+(id)_dateFormatterComponentFormatting;
+(id)_moveFileIntoRecordingsDirectory:(id)arg0 ;
+(id)currentLocationBasedName;
+(id)newBackgroundModel;
+(id)newMainQueueModel;
+(id)recordingsModelForContext:(id)arg0 ;
+(id)savedRecordingsDirectory;
+(id)sharedModelForQueue:(id)arg0 ;
+(id)standardNameForRecordingWithCreationDate:(id)arg0 uniqueID:(id)arg1 ;
+(id)standardPathForRecording:(id)arg0 ;
+(id)standardPathForRecordingWithCreationDate:(id)arg0 uniqueID:(id)arg1 ;
+(id)standardURLForRecordingWithCreationDate:(id)arg0 ;
+(id)startStoreServers:(id)arg0 ;
+(void)_determineImportabilityOfRecordingWithAudioFile:(id)arg0 preferredFormat:(unsigned int)arg1 completionHandler:(id)arg2 ;
+(void)_importImportableRecordingWithAudioAsset:(id)arg0 name:(id)arg1 date:(id)arg2 uniqueID:(id)arg3 presetName:(id)arg4 outputFileType:(id)arg5 completionHandler:(id)arg6 ;
+(void)_importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 uniqueID:(id)arg3 preferredFormat:(unsigned int)arg4 completionHandler:(id)arg5 ;
+(void)_insertRecordingWithImportableAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 uniqueID:(id)arg3 completionHandler:(id)arg4 ;
+(void)determineImportabilityOfRecordingWithAudioURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 completionHandler:(id)arg3 ;
+(void)importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 userInfo:(id)arg3 completionHandler:(id)arg4 ;
+(void)importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 xpcConnection:(id)arg3 userInfo:(id)arg4 completionHandler:(id)arg5 ;
-(BOOL)__saveManagedObjectContext:(*id)arg0 ;
-(BOOL)_mergeDuplicateNameFoldersWithName:(id)arg0 ;
-(BOOL)_mergeDuplicateUUIDFolders:(id)arg0 ;
-(BOOL)automaticallyDownloadFileBackedFutures;
-(BOOL)deleteDatabaseProperty:(id)arg0 ;
-(BOOL)encryptedFieldsMigrationExists;
-(BOOL)exportToCloudForStore:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)fetchExportProgress:(id)arg0 forStore:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)fetchObjectsFromCloud:(id)arg0 entityToAttributesToFetch:(id)arg1 forStore:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)hasExistingRecordingForAudioFile:(id)arg0 ;
-(BOOL)importFromCloudForStore:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)resetCloudForStore:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)saveIfNecessary:(*id)arg0 ;
-(BOOL)setValue:(id)arg0 forDatabaseProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg0 forDatabaseProperty:(id)arg1 save:(BOOL)arg2 ;
-(NSUInteger)_countForFetchRequest:(id)arg0 ;
-(NSUInteger)_rankForFolderInsert;
-(NSUInteger)fetchPlayableRecordingsCount;
-(NSUInteger)playableCountForFolder:(id)arg0 ;
-(NSUInteger)userFolderCount;
-(id)_allTitles;
-(id)_existingFoldersWithName:(id)arg0 searchOption:(int)arg1 ;
-(id)_foldersWithUUID:(id)arg0 ;
-(id)_recordingsFetchRequestForFolder:(id)arg0 ;
-(id)_recordingsForFolderUUID:(id)arg0 ;
-(id)_recordingsWithUniqueID:(id)arg0 ;
-(id)_transactionHistorySinceToken:(id)arg0 forStore:(id)arg1 ;
-(id)_transactionsAndChangesForObjectIDs:(id)arg0 ;
-(id)_transactionsAndChangesWithFetchRequest:(id)arg0 ;
-(id)_userDefinedFolders:(id)arg0 searchOption:(int)arg1 ;
-(id)_userFolderFetchRequest;
-(id)cacheDeletedRecordings;
-(id)cloudRecordingEntity;
-(id)cloudStoresByID;
-(id)context;
-(id)createEncryptedFieldsMigration:(int)arg0 ;
-(id)duplicateRecording:(id)arg0 error:(*id)arg1 ;
-(id)encryptedFieldMigrations;
-(id)enumerateChangeHistorySinceToken:(id)arg0 forStore:(id)arg1 usingBlock:(id)arg2 ;
-(id)existingFolderWithName:(id)arg0 ;
-(id)existingFolderWithUUID:(id)arg0 ;
-(id)existingFoldersWithCaseInsensitiveName:(id)arg0 ;
-(id)existingRecordingsWithCaseInsensitiveName:(id)arg0 error:(*id)arg1 ;
-(id)folderEntity;
-(id)folderWithName:(id)arg0 ;
-(id)foldersWithPredicate:(id)arg0 ;
-(id)init;
-(id)initWithContainer:(id)arg0 concurrencyType:(NSUInteger)arg1 ;
-(id)insertRecordingWithAudioFile:(id)arg0 duration:(CGFloat)arg1 date:(id)arg2 ;
-(id)insertRecordingWithAudioFile:(id)arg0 duration:(CGFloat)arg1 date:(id)arg2 customLabelBase:(id)arg3 ;
-(id)insertRecordingWithAudioFile:(id)arg0 duration:(CGFloat)arg1 date:(id)arg2 customTitleBase:(id)arg3 uniqueID:(id)arg4 ;
-(id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg0 ;
-(id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg0 ;
-(id)queryManager;
-(id)recordingWithID:(id)arg0 ;
-(id)recordingWithPath:(id)arg0 ;
-(id)recordingWithURIRepresentation:(id)arg0 ;
-(id)recordingWithUniqueID:(id)arg0 ;
-(id)recordingsForSpotlightSearch:(id)arg0 ;
-(id)recordingsWithNilEncryptedTitleOrCustomLabel;
-(id)recordingsWithPredicate:(id)arg0 ;
-(id)recordingsWithTitle:(id)arg0 ;
-(id)recordingsWithUniqueID:(id)arg0 ;
-(id)recordingsWithUniqueIDs:(id)arg0 ;
-(id)transactionForToken:(id)arg0 forStore:(id)arg1 ;
-(id)unencryptedTitleDateFormatter;
-(id)unencryptedTitleDateStringFromDate:(id)arg0 ;
-(id)userFolders;
-(id)userFoldersFetchedResultsController;
-(id)valueForDatabaseProperty:(id)arg0 ;
-(id)visibleRecordingsFetchedResultsController;
-(void)_copyPropertiesFromOriginalRecording:(id)arg0 newRecording:(id)arg1 ;
-(void)_deleteRecordingsWithDurationLessThan:(CGFloat)arg0 passingTest:(id)arg1 ;
-(void)_enumerateFetchedRecordingTitles:(id)arg0 ;
-(void)_enumerateRecordingsWithEntityDescription:(id)arg0 propertiesToFetch:(id)arg1 sortDescriptors:(id)arg2 withBlock:(id)arg3 ;
-(void)_mergeFolders:(id)arg0 intoTargetFolder:(id)arg1 ;
-(void)_rerankFolders;
-(void)_scheduleAutomaticRecordingDeletions;
-(void)_synchronizeRecordingsMetadata;
-(void)addRecording:(id)arg0 toFolder:(id)arg1 ;
-(void)addRecordings:(id)arg0 toFolder:(id)arg1 ;
-(void)deleteFolder:(id)arg0 ;
-(void)deleteRecording:(id)arg0 ;
-(void)deleteRecordings:(id)arg0 ;
-(void)enumerateExistingRecordingsWithBlock:(id)arg0 ;
-(void)enumerateExistingRecordingsWithProperties:(id)arg0 sortDescriptors:(id)arg1 block:(id)arg2 ;
-(void)eraseAllDeleted;
-(void)eraseRecording:(id)arg0 ;
-(void)eraseRecordings:(id)arg0 ;
-(void)eraseRecordingsDeletedBeforeDate:(id)arg0 ;
-(void)mergeRecordings:(id)arg0 ;
-(void)moveFolder:(id)arg0 toIndexPath:(id)arg1 ;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)performWithSavingDisabled:(id)arg0 ;
-(void)reconcileChangedFolder:(id)arg0 change:(id)arg1 ;
-(void)removeRecording:(id)arg0 fromFolder:(id)arg1 ;
-(void)renameFolder:(id)arg0 toName:(id)arg1 ;
-(void)resetPersistedTransientState;
-(void)restoreDeletedRecording:(id)arg0 ;
-(void)restoreDeletedRecordings:(id)arg0 ;
-(void)saveIfNecessary;
-(void)setEnhanced:(BOOL)arg0 ofRecording:(id)arg1 ;
-(void)setFavorite:(BOOL)arg0 ofRecording:(id)arg1 ;
-(void)setTitle:(id)arg0 ofRecording:(id)arg1 ;


@end


#endif