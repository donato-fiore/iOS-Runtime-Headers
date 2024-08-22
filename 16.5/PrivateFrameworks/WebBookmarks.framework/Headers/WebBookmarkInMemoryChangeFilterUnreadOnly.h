// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBBOOKMARKINMEMORYCHANGEFILTERUNREADONLY_H
#define WEBBOOKMARKINMEMORYCHANGEFILTERUNREADONLY_H

@class NSString;
@protocol WebBookmarkInMemoryChangeFilter;

#import <Foundation/Foundation.h>


@interface WebBookmarkInMemoryChangeFilterUnreadOnly : NSObject <WebBookmarkInMemoryChangeFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_bookmarksIDsFromBookmarks:(id)arg0 fromChangeSet:(id)arg1 withFilter:(id)arg2 ;
-(id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)arg0 inFolder:(int)arg1 ;
-(id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)arg0 inFolder:(int)arg1 ;


@end


#endif