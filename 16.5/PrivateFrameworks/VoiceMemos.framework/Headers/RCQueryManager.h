// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCQUERYMANAGER_H
#define RCQUERYMANAGER_H

@class NSManagedObjectModel, NSEntityDescription;

#import <Foundation/Foundation.h>


@interface RCQueryManager : NSObject {
    NSManagedObjectModel *_model;
}


@property (readonly, nonatomic) NSEntityDescription *cloudRecordingEntity; // ivar: _cloudRecordingEntity
@property (readonly, nonatomic) NSEntityDescription *folderEntity; // ivar: _folderEntity


+(id)cacheDeletedOnWatchPredicate;
+(id)clearTransientFlagsBatchUpdateRequest;
+(id)customLabelSearchPredicateWithString:(id)arg0 ;
+(id)defaultFetchedProperties;
+(id)defaultSortDescriptors;
+(id)favoritePredicate;
+(id)musicMemoPredicate;
+(id)playablePredicate;
+(id)recordingsInFolderPredicate:(id)arg0 ;
+(id)watchOSPredicate;
-(NSUInteger)playableRecordingsCountWithContext:(id)arg0 ;
-(id)_cloudRecordingFetchRequest;
-(id)_labelPresetsForQuery:(id)arg0 ;
-(id)allCustomLabelsFetchRequest;
-(id)allDeletedRecordingsFetchRequest;
-(id)allFoldersForSortingFetchRequest;
-(id)databasePropertyKeyToPropertyFetchRequest:(id)arg0 ;
-(id)deletedRecordingsFetchRequest;
-(id)encryptedFieldsMigrationsFetchRequest;
-(id)evictionDateBeforeFetchRequest:(id)arg0 ;
-(id)foldersWithNameFetchRequest:(id)arg0 searchOption:(int)arg1 ;
-(id)foldersWithUUIDFetchRequest:(id)arg0 ;
-(id)foldersWithhRankFetchRequest:(NSInteger)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)legacyRecordingWithUniqueIDFetchRequest:(id)arg0 ;
-(id)playableRecordingsFetchRequestWithSubPredicate:(id)arg0 ;
-(id)recordingMatchingNameCaseInsensitiveFetchRequest:(id)arg0 ;
-(id)recordingsForPathFetchRequest:(id)arg0 ;
-(id)recordingsForSpotlightSearchFetchRequest:(id)arg0 ;
-(id)recordingsInFolderFetchRequest:(id)arg0 ;
-(id)recordingsWithNilEncryptedTitleOrCustomLabelFetchRequest;
-(id)recordingsWithTitleFetchRequest:(id)arg0 ;
-(id)recordingsWithUniqueIDFetchRequest:(id)arg0 ;
-(id)recordingsWithUniqueIDsFetchRequest:(id)arg0 ;
-(id)userDefinedFoldersFetchRequest;
-(id)visibleRecordingsFetchRequest;
-(void)updateFetchRequestTemplates;


@end


#endif