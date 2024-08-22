// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCKZONE_H
#define SCKZONE_H

@class NSArray;
@protocol SCKZoneStore;

#import <Foundation/Foundation.h>

#import "SCKZoneDiff.h"
#import "SCKZoneSchema.h"

@interface SCKZone : NSObject

@property (readonly, copy, nonatomic) SCKZoneDiff *clientDiff;
@property (readonly, copy, nonatomic) NSArray *clientRecords;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, nonatomic) BOOL needsFirstSync;
@property (readonly, nonatomic) SCKZoneSchema *schema; // ivar: _schema
@property (retain, nonatomic) NSObject<SCKZoneStore> *store; // ivar: _store


-(id)initWithSchema:(id)arg0 store:(id)arg1 ;


@end


#endif