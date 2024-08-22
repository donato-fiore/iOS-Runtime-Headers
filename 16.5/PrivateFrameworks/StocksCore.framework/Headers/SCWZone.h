// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWZONE_H
#define SCWZONE_H

@class NSArray;
@protocol SCWZoneStore;

#import <Foundation/Foundation.h>

#import "SCWZoneDiff.h"
#import "SCWZoneSchema.h"

@interface SCWZone : NSObject

@property (readonly, copy, nonatomic) SCWZoneDiff *clientDiff;
@property (readonly, copy, nonatomic) NSArray *clientRecords;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, nonatomic) BOOL needsFirstSync;
@property (readonly, nonatomic) SCWZoneSchema *schema; // ivar: _schema
@property (retain, nonatomic) NSObject<SCWZoneStore> *store; // ivar: _store


-(id)initWithSchema:(id)arg0 store:(id)arg1 ;


@end


#endif