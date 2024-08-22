// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVPLAYACTIVITYTABLE_H
#define SSVPLAYACTIVITYTABLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSVPlayActivityTable : NSObject {
    SSSQLiteDatabase *_database;
}


@property (nonatomic) NSUInteger currentEventsRevision;
@property (readonly, copy, nonatomic) NSString *eventsRevisionVersionToken;


+(BOOL)_setupDatabase:(id)arg0 ;
+(id)_eventsDatabaseTableName;
+(id)_propertiesDatabaseTableName;
+(id)databasePath;
-(BOOL)_getPlayActivityEvents:(*id)arg0 relevantRevisionsIndexSet:(*id)arg1 withStartRevision:(NSUInteger)arg2 endRevision:(NSUInteger)arg3 storeAccountID:(NSUInteger)arg4 shouldFilterStoreAccountID:(BOOL)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(*id)arg8 ;
-(BOOL)_setValue:(id)arg0 forDatabasePropertyKey:(id)arg1 ;
-(BOOL)getPlayActivityEvents:(*id)arg0 relevantRevisionsIndexSet:(*id)arg1 withStartRevision:(NSUInteger)arg2 endRevision:(NSUInteger)arg3 additionalRevisionsIndexSet:(id)arg4 ignoredRevisionsIndexSet:(id)arg5 error:(*id)arg6 ;
-(BOOL)getPlayActivityEvents:(*id)arg0 relevantRevisionsIndexSet:(*id)arg1 withStartRevision:(NSUInteger)arg2 endRevision:(NSUInteger)arg3 storeAccountID:(NSUInteger)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(*id)arg7 ;
-(BOOL)insertPlayActivityEvent:(id)arg0 withRevision:(NSUInteger)arg1 returningError:(*id)arg2 ;
-(BOOL)removePlayActivityEventsUpToRevision:(NSUInteger)arg0 returningError:(*id)arg1 ;
// -(id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(id)arg0 count:(unk)arg1  ;
-(id)_valueForDatabasePropertyKey:(id)arg0 ;
-(id)init;
-(id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg0 ;
-(id)revisionsIndexSetForPlayActivityEvents:(id)arg0 ;
-(void)performTransactionWithBlock:(id)arg0 ;


@end


#endif