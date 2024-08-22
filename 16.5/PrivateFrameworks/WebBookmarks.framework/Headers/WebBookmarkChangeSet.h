// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBBOOKMARKCHANGESET_H
#define WEBBOOKMARKCHANGESET_H

@class NSMutableOrderedSet, NSMutableDictionary, NSArray, NSURL;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WebBookmarkChangeSet : NSObject <NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    int _lastBookmarkIDForAddingInMemoryBookmark;
    NSMutableOrderedSet *_changes;
    NSMutableDictionary *_bookmarkIDToChanges;
    NSMutableDictionary *_associatedIDToChanges;
    NSMutableDictionary *_folderIDToChildrenChanges;
    NSMutableDictionary *_folderIDToDeletedChildrenChanges;
    NSMutableDictionary *_folderIDToAddedChildrenChanges;
    NSMutableDictionary *_folderIDToModifiedChildrenChanges;
    NSMutableDictionary *_folderIDToReorderedChildrenChanges;
}


@property (readonly, copy, nonatomic) NSArray *changes;
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL shouldSync;


+(BOOL)supportsSecureCoding;
-(BOOL)bookmarkIsAddedInMemory:(int)arg0 ;
-(BOOL)folderHasReplaceChange:(int)arg0 ;
-(BOOL)isBookmarkDeleted:(int)arg0 ;
-(NSInteger)replayChangesOnBookmark:(id)arg0 ;
-(NSUInteger)numberOfAddedBookmarksInBookmarkFolder:(int)arg0 ;
-(NSUInteger)numberOfReorderedBookmarksInBookmarkFolder:(int)arg0 ;
-(id)addedBookmarksInBookmarkFolder:(int)arg0 ;
-(id)bookmarksAfterReplayingChangesToBookmarks:(id)arg0 inFolderWithID:(int)arg1 ;
-(id)deletedBookmarkIDsInBookmarkFolder:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 readPersistedChanges:(BOOL)arg1 ;
-(id)modifiedBookmarksInBookmarkFolder:(int)arg0 ;
-(int)nextBookmarkIDForAddingBookmarkInMemory;
-(void)_addChange:(id)arg0 ;
-(void)_coalesceChangesForChangeIfNeeded:(id)arg0 ;
-(void)_readPersistedChanges;
-(void)_removeAllChanges;
-(void)_removeChange:(id)arg0 ;
-(void)addChange:(id)arg0 ;
-(void)addChanges:(id)arg0 ;
-(void)applyModificationsToBookmarks:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)persistChangesWithCompletion:(id)arg0 ;
-(void)removeAllChanges;
-(void)removeChange:(id)arg0 ;
-(void)updateAddChangesWithInMemoryBookmarkID:(int)arg0 toDatabaseGeneratedID:(int)arg1 ;


@end


#endif