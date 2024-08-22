// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSQLITEDATABASE_H
#define SSSQLITEDATABASE_H

@class NSString, BKSProcessAssertion;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSSQLiteDatabase : NSObject {
    *sqlite3 _db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    BOOL _readOnly;
    BOOL _shouldAttemptToReopenDB;
    BOOL _isInTransaction;
    NSString *_protectionType;
    *__CFDictionary _statementCache;
    BOOL _takesTaskCompletionAssertions;
    BKSProcessAssertion *_taskAssertion;
    NSInteger _taskAssertionCount;
}


@property (copy, nonatomic) id *setupBlock; // ivar: _setupBlock
@property BOOL takesTaskCompletionAssertions;


+(BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg0 ;
+(BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg0 ;
+(void)_stepStatement:(struct sqlite3_stmt *)arg0 hasRow:(*BOOL)arg1 didFinish:(*BOOL)arg2 isCorrupt:(*BOOL)arg3 ;
-(BOOL)columnName:(id)arg0 existsInTable:(id)arg1 ;
-(BOOL)executeSQL:(id)arg0 ;
-(BOOL)setUserVersion:(NSInteger)arg0 ;
-(BOOL)setUserVersion:(NSInteger)arg0 forDatabase:(id)arg1 ;
-(BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg0 ;
-(BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg0 ;
-(NSInteger)countChanges;
-(NSInteger)userVersion;
-(NSInteger)userVersionForDatabase:(id)arg0 ;
-(id)_openDatabaseIfNotOpen;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)initWithDatabaseURL:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)initWithDatabaseURL:(id)arg0 readOnly:(BOOL)arg1 protectionType:(id)arg2 ;
-(id)newDispatchSourceWithType:(struct dispatch_source_type_s *)arg0 ;
-(int)_closeDatabaseIfOpen;
-(int)_openFlags;
-(int)_resetAndReopenDatabaseWithPath:(id)arg0 ;
-(struct sqlite3_stmt *)_statementForSQL:(id)arg0 cache:(BOOL)arg1 ;
-(void)_accessDatabaseUsingBlock:(id)arg0 ;
-(void)_beginTaskCompletionAssertion;
-(void)_endTaskCompletionAssertion;
-(void)_expireBackgroundTask;
-(void)_resetCorruptDatabase;
-(void)_resetDatabaseWithPath:(id)arg0 ;
-(void)accessDatabaseUsingBlock:(id)arg0 ;
-(void)beginTaskCompletionAssertion;
-(void)dealloc;
-(void)dispatchAfter:(NSUInteger)arg0 block:(id)arg1 ;
-(void)dispatchBlockAsync:(id)arg0 ;
-(void)dispatchBlockSync:(id)arg0 ;
-(void)endTaskCompletionAssertion;
-(void)expireBackgroundTask;
-(void)performTransactionWithBlock:(id)arg0 ;
-(void)prepareStatementForSQL:(id)arg0 cache:(BOOL)arg1 usingBlock:(id)arg2 ;


@end


#endif