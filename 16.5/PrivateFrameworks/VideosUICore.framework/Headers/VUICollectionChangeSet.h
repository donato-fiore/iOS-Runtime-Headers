// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUICOLLECTIONCHANGESET_H
#define VUICOLLECTIONCHANGESET_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VUICollectionChange.h"

@interface VUICollectionChangeSet : NSObject

@property (retain, nonatomic) VUICollectionChange *deleteChange; // ivar: _deleteChange
@property (readonly, nonatomic) BOOL hasChanges;
@property (retain, nonatomic) VUICollectionChange *insertChange; // ivar: _insertChange
@property (copy, nonatomic) NSArray *moveChanges; // ivar: _moveChanges
@property (copy, nonatomic) NSArray *updateChanges; // ivar: _updateChanges


-(BOOL)containsOnlyChangeKind:(NSUInteger)arg0 ;
-(id)_changesKinds;
-(id)description;


@end


#endif