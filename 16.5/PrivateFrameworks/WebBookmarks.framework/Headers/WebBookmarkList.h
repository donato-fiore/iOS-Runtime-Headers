// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBBOOKMARKLIST_H
#define WEBBOOKMARKLIST_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WebBookmarkListQuery.h"
#import "WebBookmarkCollection.h"
#import "WebBookmarkList.h"

@interface WebBookmarkList : NSObject {
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    WebBookmarkListQuery *_query;
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) unsigned int bookmarkCount;
@property (readonly, nonatomic) int folderID;
@property (retain, nonatomic) WebBookmarkList *shadowBookmarkList; // ivar: _shadowBookmarkList


-(id)_arrayForDifferenceCalculation;
-(id)_bookmarkAtIndex:(unsigned int)arg0 paginate:(BOOL)arg1 ;
-(id)bookmarkArray;
-(id)bookmarkArrayRequestingCount:(unsigned int)arg0 ;
-(id)bookmarkAtIndex:(unsigned int)arg0 ;
-(id)differenceFromList:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)initWithQuery:(id)arg0 skipOffset:(unsigned int)arg1 collection:(id)arg2 ;
-(id)initWithQuery:(id)arg0 skipOffset:(unsigned int)arg1 collection:(id)arg2 queue:(id)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned int)arg0 ;
-(unsigned int)_primaryBookmarkCount;
-(unsigned int)_reverseOrderIndex:(unsigned int)arg0 ;
-(void)_loadBookmarksForDifferenceFromList:(id)arg0 ;
-(void)_moveBookmarkAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1 ;


@end


#endif