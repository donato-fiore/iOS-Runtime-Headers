// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISQLITEMADATABASE_H
#define TRISQLITEMADATABASE_H

@class NSString, _PASSqliteDatabase;
@protocol _PASDatabaseMigrationProtocol;

#import <Foundation/Foundation.h>


@interface TRISQLiteMADatabase : NSObject <_PASDatabaseMigrationProtocol>

 {
    NSString *_parentDir;
    NSString *_assetDir;
    _PASSqliteDatabase *_db;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)dropTableWithName:(id)arg0 transaction:(id)arg1 ;
-(BOOL)migrateToVersion:(unsigned int)arg0 ;
-(BOOL)vacuum;
-(NSUInteger)assetSizeForSelector:(id)arg0 ;
-(id)_predicateForAssetSelector:(id)arg0 ;
-(id)databaseHandle;
-(id)init;
-(id)initWithParentDir:(id)arg0 ;
-(id)lockContentSync:(id)arg0 forAssetSelector:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(NSInteger)arg3 lockedAssetSelector:(*id)arg4 newerInProgress:(*id)arg5 error:(*id)arg6 ;
-(id)locksForSelector:(id)arg0 ;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(*unsigned int)arg0 ;
-(void)addAutoAssetWithId:(id)arg0 atPath:(id)arg1 ;
-(void)closePermanently;
-(void)eliminateAllForSelector:(id)arg0 completion:(id)arg1 ;
-(void)eliminatePromotedNeverLockedForSelector:(id)arg0 completion:(id)arg1 ;
-(void)endAllPreviousLocksOfReasonSync:(id)arg0 forAssetSelector:(id)arg1 ;
-(void)endAllPreviousLocksOfSelectorSync:(id)arg0 ;


@end


#endif