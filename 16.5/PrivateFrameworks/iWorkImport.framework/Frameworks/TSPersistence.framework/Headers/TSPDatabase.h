// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDATABASE_H
#define TSPDATABASE_H

@class TSUDatabase, NSURL;



@interface TSPDatabase : TSUDatabase {
    NSURL *_packageURL;
    BOOL _incrementalVacuum;
    *sqlite3_stmt _insertObjectStatement;
    *sqlite3_stmt _insertDataStateStatement;
    *sqlite3_stmt _updateDataStateStatement;
    *sqlite3_stmt _insertRelationshipStatement;
    *sqlite3_stmt _relationshipTargetsStatement;
}




-(*void)filterIdentifiers:(*void)arg0 error:(*id)arg1 ;
-(*void)newRelationshipTargetsForSourceIdentifier:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)documentVersion:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)documentVersion:(struct ? *)arg0 closedCleanlyToken:(*NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)insertDataStateWithSize:(int)arg0 identifier:(*NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)insertObjectWithIdentifier:(NSInteger)arg0 stateIdentifier:(struct ObjectStateIdentifier *)arg1 classType:(int)arg2 error:(*id)arg3 ;
-(BOOL)insertRelationshipWithSourceIdentifier:(NSInteger)arg0 targetIdentifier:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)lastObjectIdentifier:(*NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)needsUpgradeFromSchemaVersion:(int)arg0 ;
-(BOOL)numberOfDatabaseObjects:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)parseArchive:(struct Message *)arg0 forObject:(id)arg1 error:(*id)arg2 ;
-(BOOL)setClosedCleanlyToken:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setDocumentVersion:(struct ? )arg0 error:(*id)arg1 ;
-(BOOL)updateDataStateWithIdentifier:(NSInteger)arg0 size:(int)arg1 error:(*id)arg2 ;
-(BOOL)upgradeFromSchemaVersion:(int)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initReadonlyWithPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithPath:(id)arg0 error:(*id)arg1 ;
-(id)objectFromStatement:(struct sqlite3_stmt *)arg0 ;
-(id)queryFirstObjectWithStatement:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)queryObjectWithIdentifier:(NSInteger)arg0 error:(*id)arg1 ;
-(id)queryObjectsWithMessageTypes:(*int)arg0 messageTypesCount:(int)arg1 error:(*id)arg2 ;
-(struct sqlite3_blob *)openBlobForObject:(id)arg0 error:(*id)arg1 ;
-(struct sqlite3_blob *)openDataStateBlobWithIdentifier:(NSInteger)arg0 error:(*id)arg1 ;
-(struct sqlite3_blob *)openDataStateBlobWithIdentifier:(NSInteger)arg0 willWrite:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif