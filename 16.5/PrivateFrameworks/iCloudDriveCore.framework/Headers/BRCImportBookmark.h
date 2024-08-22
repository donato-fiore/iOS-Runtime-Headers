// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCIMPORTBOOKMARK_H
#define BRCIMPORTBOOKMARK_H

@class BRMangledID;

#import <Foundation/Foundation.h>

#import "BRCItemID.h"

@interface BRCImportBookmark : NSObject

@property (readonly, nonatomic) BOOL isTrashBookmark; // ivar: _isTrashBookmark
@property (readonly, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) BRMangledID *mangledID; // ivar: _mangledID


+(id)extractBookmarkDataFromTemplateItem:(id)arg0 isTrashBookmark:(*BOOL)arg1 ;
-(id)initWithBookmarkData:(id)arg0 isTrashBookmark:(BOOL)arg1 session:(id)arg2 ;


@end


#endif