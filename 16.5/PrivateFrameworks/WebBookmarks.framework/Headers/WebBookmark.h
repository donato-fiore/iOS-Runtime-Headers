// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBBOOKMARK_H
#define WEBBOOKMARK_H

@class NSString, NSData, NSDictionary, WBSCRDTField, WBSCRDTGeneration, NSNumber, NSDate, NSArray, WBSCRDTPosition;
@protocol NSSecureCoding, NSCopying, WBBookmarkRepresentable;

#import <Foundation/Foundation.h>

#import "WBBookmarkSyncData.h"
#import "WebBookmark.h"

@interface WebBookmark : NSObject <NSSecureCoding, NSCopying, WBBookmarkRepresentable>

 {
    os_unfair_recursive_lock_s _fieldsWriteLock;
    NSString *_syncKey;
    NSData *_syncData;
    WBBookmarkSyncData *_cachedWBSyncData;
    BOOL _addedLocally;
    NSInteger _archiveStatus;
    NSInteger _webFilterStatus;
    NSDictionary *_extraAttributes;
    NSDictionary *_localAttributes;
    unsigned int _orderIndex;
    BOOL _usedForInMemoryChangeTracking;
    WBSCRDTField *_backgroundImageModifiedField;
    WBSCRDTField *_dateAddedField;
    WBSCRDTField *_dateLastViewedField;
    WBSCRDTField *_iconURLField;
    WBSCRDTField *_isSelectedFavoritesFolderField;
    WBSCRDTField *_labelField;
    WBSCRDTField *_lastSelectedChildField;
    WBSCRDTField *_locationField;
    WBSCRDTField *_minimumSyncAPIVersionField;
    WBSCRDTField *_previewTextField;
    WBSCRDTField *_syncStateField;
}


@property (readonly, copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (nonatomic, getter=isAddedLocally) BOOL addedLocally;
@property (copy, nonatomic) NSString *address;
@property (readonly, nonatomic) NSUInteger archiveSize;
@property (nonatomic) NSInteger archiveStatus;
@property (readonly, nonatomic) WBSCRDTGeneration *backgroundImageGeneration;
@property (copy, nonatomic) NSNumber *backgroundImageModifiedState;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) NSInteger bookmarkType;
@property (readonly, nonatomic) NSInteger collectionType; // ivar: _collectionType
@property (copy, nonatomic) NSString *creationDeviceIdentifier; // ivar: _creationDeviceIdentifier
@property (retain, nonatomic) NSDate *dateAdded;
@property (readonly, copy, nonatomic) id *dateAddedProvider;
@property (readonly, copy, nonatomic) id *dateAddedUpdater;
@property (retain, nonatomic) NSDate *dateLastArchived;
@property (retain, nonatomic) NSDate *dateLastFetched;
@property (retain, nonatomic) NSDate *dateLastViewed;
@property (readonly, copy, nonatomic) id *dateLastViewedProvider;
@property (readonly, copy, nonatomic) id *dateLastViewedUpdater;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable; // ivar: _deletable
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationForInMemoryChangeTracking;
@property (readonly, nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (copy, nonatomic) NSDictionary *extraAttributes;
@property (nonatomic) BOOL fetchedIconData; // ivar: _fetchedIconData
@property (readonly, copy, nonatomic) NSArray *fields;
@property (readonly, nonatomic, getter=isFolder) BOOL folder; // ivar: _folder
@property (readonly, nonatomic) NSInteger folderType;
@property (readonly, nonatomic, getter=isFullArchiveAvailable) BOOL fullArchiveAvailable;
@property (nonatomic) BOOL hasFetchedMetadata;
@property (readonly, nonatomic) BOOL hasShareRecord; // ivar: _hasShareRecord
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (copy, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, copy, nonatomic) id *iconURLProvider;
@property (readonly, copy, nonatomic) id *iconURLUpdater;
@property (readonly, nonatomic) int identifier; // ivar: _id
@property (readonly, nonatomic, getter=isInserted) BOOL inserted; // ivar: _inserted
@property (readonly, nonatomic) BOOL isBookmarksBarFolder;
@property (readonly, nonatomic) BOOL isBookmarksMenuFolder;
@property (readonly, nonatomic) BOOL isBuiltinBookmark;
@property (readonly, nonatomic) BOOL isFrequentlyVisitedSitesFolder;
@property (readonly, nonatomic) BOOL isMarkedAsRead;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isReadingListFolder;
@property (readonly, nonatomic) BOOL isReadingListItem;
@property (readonly, nonatomic) BOOL isWebFilterAllowedSitesFolder;
@property (readonly, nonatomic) NSInteger itemType;
@property (readonly, nonatomic) WBSCRDTField *labelField;
@property (retain, nonatomic) WBSCRDTGeneration *lastReadGeneration;
@property (nonatomic) int lastSelectedChildID;
@property (copy, nonatomic) NSDictionary *localAttributes;
@property (copy, nonatomic) NSString *localPreviewText;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) WBSCRDTField *locationField;
@property (copy, nonatomic) NSNumber *minimumSyncAPIVersion;
@property (nonatomic) NSUInteger modifiedAttributes; // ivar: _modifiedAttributes
@property (readonly, copy, nonatomic) NSArray *modifiedFields;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (nonatomic) BOOL needsSyncUpdate; // ivar: _needsSyncUpdate
@property (copy, nonatomic) NSDictionary *nextPageURLs;
@property (readonly, copy, nonatomic) NSString *offlineArchiveDirectoryPath;
@property (readonly, nonatomic) BOOL omitFromUI;
@property (readonly, nonatomic) unsigned int orderIndex;
@property (readonly, nonatomic) int parentID;
@property (readonly, copy, nonatomic) NSString *pinnedAddress;
@property (readonly, copy, nonatomic) NSString *pinnedTitle;
@property (copy, nonatomic) NSString *previewText;
@property (readonly, copy, nonatomic) id *previewTextProvider;
@property (readonly, copy, nonatomic) id *previewTextUpdater;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (copy, nonatomic) NSString *readingListIconURL;
@property (copy, nonatomic) NSString *readingListIconUUID;
@property (copy, nonatomic, getter=isSelectedFavoritesFolder) NSNumber *selectedFavoritesFolder;
@property (copy, nonatomic) NSString *serverID; // ivar: _serverID
@property (nonatomic) BOOL shouldArchive;
@property (readonly, nonatomic) int specialID; // ivar: _specialID
@property (nonatomic) NSInteger subtype;
@property (readonly, nonatomic) NSInteger subtype; // ivar: _subtype
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *syncData;
@property (copy, nonatomic) NSString *syncKey;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (copy, nonatomic) NSNumber *syncState;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable; // ivar: _syncable
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) WBBookmarkSyncData *wbSyncData;
@property (nonatomic) NSInteger webFilterStatus;


+(BOOL)supportsSecureCoding;
+(id)_allowedSiteBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
+(id)_trimmedPreviewText:(id)arg0 ;
+(id)_trimmedTitle:(id)arg0 ;
-(BOOL)_usedForInMemoryChangeTracking;
-(BOOL)attributesMarkedAsModified:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBookmark:(id)arg0 ;
-(BOOL)shouldReattemptArchiveWithAutomaticArchivingEnabled:(BOOL)arg0 ;
-(NSInteger)_mergeFields:(id)arg0 withFields:(id)arg1 forBookmark:(id)arg2 ;
-(NSInteger)mergeAttributes:(NSUInteger)arg0 withBookmark:(id)arg1 ;
-(NSUInteger)_attributesForField:(id)arg0 ;
-(NSUInteger)_sizeForFileOrDirectory:(id)arg0 withAttributes:(id)arg1 ;
-(id)_fieldWithValue:(id)arg0 generationKey:(id)arg1 modifiedAttributes:(NSUInteger)arg2 syncData:(id)arg3 ;
// -(id)_fieldWithValueProvider:(id)arg0 valueUpdater:(unk)arg1 generationKey:(id)arg2 modifiedAttributes:(unk)arg3 syncData:(id)arg4  ;
-(id)_fieldsForAttributes:(NSUInteger)arg0 ;
-(id)_initForCopy;
-(id)_labelGenerationKey;
-(id)_readingListPropertyNamed:(id)arg0 ;
-(id)_stringForReadingListArchiveStatus:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionPreservingPrivacy:(BOOL)arg0 ;
-(id)fieldForAttribute:(NSUInteger)arg0 ;
-(id)generationKeyForField:(id)arg0 ;
-(id)init;
-(id)initBuiltinBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initBuiltinDeviceBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initCarrierBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initFolderWithParentID:(int)arg0 collectionType:(NSInteger)arg1 ;
-(id)initFolderWithParentID:(int)arg0 deviceIdentifier:(id)arg1 collectionType:(NSInteger)arg2 ;
-(id)initFolderWithParentID:(int)arg0 subtype:(NSInteger)arg1 deviceIdentifier:(id)arg2 collectionType:(NSInteger)arg3 ;
-(id)initFrequentlyVisitedSiteWithWebBookmark:(id)arg0 title:(id)arg1 ;
-(id)initReadingListBookmarkWithTitle:(id)arg0 address:(id)arg1 previewText:(id)arg2 ;
-(id)initWhiteListBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initWithBookmark:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentationForInMemoryChangeTracking:(id)arg0 ;
-(id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg0 deviceIdentifier:(id)arg1 collectionType:(NSInteger)arg2 ;
-(id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg0 deviceIdentifier:(id)arg1 hasIcon:(BOOL)arg2 collectionType:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 address:(id)arg1 collectionType:(NSInteger)arg2 ;
-(id)initWithTitle:(id)arg0 address:(id)arg1 parentID:(int)arg2 collectionType:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 address:(id)arg1 parentID:(int)arg2 deviceIdentifier:(id)arg3 collectionType:(NSInteger)arg4 ;
-(id)initWithTitle:(id)arg0 address:(id)arg1 parentID:(int)arg2 folder:(BOOL)arg3 deviceIdentifier:(id)arg4 collectionType:(NSInteger)arg5 ;
-(id)initWithTitle:(id)arg0 address:(id)arg1 parentID:(int)arg2 subtype:(NSInteger)arg3 deviceIdentifier:(id)arg4 collectionType:(NSInteger)arg5 ;
-(id)selectedFavoritesFolderUpdater:(SEL)arg0 ;
-(id)shortTypeDescription;
-(id)webarchivePathForNextPageURL:(id)arg0 ;
-(id)webarchivePathInReaderForm:(BOOL)arg0 fileExists:(*BOOL)arg1 ;
-(void)_modifyExtraReadingListAttributes:(id)arg0 ;
-(void)_modifyLocalReadingListAttributes:(id)arg0 ;
-(void)_removeDirectoryAtPath:(id)arg0 ;
-(void)_setID:(int)arg0 ;
-(void)_setUpFieldsWithLabel:(id)arg0 lastSelectedChild:(int)arg1 location:(id)arg2 syncData:(id)arg3 ;
-(void)_setUsedForInMemoryChangeTracking:(BOOL)arg0 ;
-(void)_updateExtraAttributeValuesUsingBlock:(id)arg0 ;
-(void)cleanUpRedundantPreviewText;
-(void)clearArchive;
-(void)clearArchiveSynchronously;
-(void)clearModifiedAttributes;
-(void)encodeWithCoder:(id)arg0 ;
-(void)lockFields;
-(void)markAsRead;
-(void)markAttributesAsModified:(NSUInteger)arg0 ;
-(void)markSpecial:(int)arg0 ;
-(void)mergeWithBookmark:(id)arg0 ;
-(void)performWithFieldsWriteLock:(id)arg0 ;
-(void)setPinned:(BOOL)arg0 title:(id)arg1 address:(id)arg2 ;
-(void)unlockFields;
-(void)updateGenerationsInSyncData:(id)arg0 forAttributes:(NSUInteger)arg1 ;


@end


#endif