// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBCHANGERECORD_H
#define WBCHANGERECORD_H


#import <Foundation/Foundation.h>

#import "WebBookmark.h"
#import "WebBookmarkCollection.h"

@interface WBChangeRecord : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) int changeType; // ivar: _changeType
@property (readonly, nonatomic) WebBookmarkCollection *collection; // ivar: _collection
@property (readonly, nonatomic) NSInteger localRecordGeneration; // ivar: _localRecordGeneration


-(id)_changedAttributeDescription;
-(id)description;
-(id)initWithBookmarkCollection:(id)arg0 bookmark:(id)arg1 changeType:(int)arg2 localRecordGeneration:(NSInteger)arg3 ;


@end


#endif