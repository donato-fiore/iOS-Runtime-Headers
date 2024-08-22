// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSERVERPERSISTEDSTATE_H
#define BRCSERVERPERSISTEDSTATE_H

@class NSMutableDictionary, NSString, NSDate;
@protocol NSSecureCoding, NSCopying, PQLBindable;

#import <Foundation/Foundation.h>

#import "BRCServerChangeState.h"

@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable>

 {
    NSMutableDictionary *_pendingMigrations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastSyncDownDate; // ivar: _lastSyncDownDate
@property (nonatomic) NSUInteger minLastUsedTime; // ivar: _minLastUsedTime
@property (nonatomic) NSInteger nextRank; // ivar: _nextRank
@property (retain) BRCServerChangeState *sharedDatabaseChangeState; // ivar: _sharedDatabaseChangeState
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)mangledIDIsPendingMigration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dumpMigrationQueriesForMangledID:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(id)migrationQueryKeyForMangledID:(id)arg0 continuationCursor:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initiateMigrationQueryForMangledIDs:(id)arg0 key:(id)arg1 ;
-(void)migrationQueryForMangledID:(id)arg0 key:(id)arg1 didUpdateWithCursor:(id)arg2 ;
-(void)saveToDB:(id)arg0 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;


@end


#endif