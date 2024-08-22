// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCCLOUDRECORDING_H
#define RCCLOUDRECORDING_H

@class NSManagedObject, NSURL, NSData, AVAsset, NSDate, NSString, NSNumber, CLLocation;
@protocol RCMutableRecording, _NSFileBackedFuture, RCFolder;



@interface RCCloudRecording : NSManagedObject <RCMutableRecording>



@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (retain, nonatomic) NSData *audioDigest;
@property (retain, nonatomic) NSObject<_NSFileBackedFuture> *audioFuture;
@property (retain, nonatomic) AVAsset *avAsset; // ivar: _avAsset
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *customLabel;
@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *deletionDate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloading;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *encryptedTitle;
@property (copy, nonatomic) NSString *encryptedTitle;
@property (nonatomic) BOOL enhanced;
@property (copy, nonatomic) NSDate *evictionDate;
@property (nonatomic) BOOL favorite;
@property (nonatomic) NSUInteger flags;
@property (readonly, nonatomic) NSObject<RCFolder> *folder;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentBeingModified;
@property (nonatomic) CGFloat length;
@property (copy, nonatomic) NSNumber *localDuration;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic) BOOL manuallyRenamed;
@property (nonatomic) BOOL musicMemo;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL pendingRestore;
@property (nonatomic) BOOL playable;
@property (readonly, nonatomic) NSNumber *purgeableAudioFileSize;
@property (nonatomic) BOOL recordedOnWatch;
@property (copy, nonatomic) NSNumber *sharedFlags;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<_NSFileBackedFuture> *syncedAudioFuture;
@property (copy, nonatomic) NSDate *syncedDate;
@property (nonatomic) CGFloat syncedDuration;
@property (copy, nonatomic) NSDate *syncedEvictionDate;
@property (nonatomic) NSUInteger syncedSharedFlags;
@property (copy, nonatomic) NSString *syncedUniqueID;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL uploaded;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *userFolderUUID;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) BOOL watchOS;


+(BOOL)isRecordingPurgeable:(id)arg0 ;
+(BOOL)setPurgeable:(BOOL)arg0 recordingURL:(id)arg1 error:(*id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg0 ;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg0 ;
-(BOOL)_copyCustomLabelToEncryptedTitleIfNeeded;
-(BOOL)_copyEncryptedTitleToCustomLabelIfNeeded;
-(BOOL)_isOlderThanMandatoryMigrationAge;
-(BOOL)_isReadyToMigrate;
-(BOOL)_migrateCustomLabelIfNeeded:(BOOL)arg0 ;
-(BOOL)synchronizeWithExistingAudioFuture:(*id)arg0 ;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(id)_detailLabel;
-(id)_labelAllowingEmptyString:(BOOL)arg0 ;
-(id)_migratedTitleDateString;
-(id)_uniqueMigratedTitleWithTitleBase:(id)arg0 ;
-(id)copyResourcesForSharingIntoDirectory:(id)arg0 ;
-(id)name;
-(id)purgeAudioFileWithModel:(id)arg0 error:(*id)arg1 ;
-(id)recordingsModel;
-(id)searchableItem;
-(id)subjectForActivityType:(id)arg0 ;
-(void)_updateAudioFuture:(id)arg0 ;
-(void)awakeFromFetch;
-(void)copySharedFlagsFromOriginalRecording:(id)arg0 ;
-(void)migrateCustomLabelIfNeeded;
-(void)migrateLocalProperties;
-(void)setName:(id)arg0 ;
-(void)synchronizeRecordingMetadata;
-(void)updateForLocalTitleChange:(BOOL)arg0 ;
-(void)updateForRemoteTitleChange:(BOOL)arg0 ;
-(void)updateNilTitleFields:(BOOL)arg0 ;
-(void)willSave;


@end


#endif