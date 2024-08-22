// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPLAYACTIVITYTABLE_H
#define ICPLAYACTIVITYTABLE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICSQLiteConnection.h"

@interface ICPlayActivityTable : NSObject {
    ICSQLiteConnection *_databaseConnection;
    NSString *_databasePath;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
}




+(BOOL)_setupDatabase:(id)arg0 ;
+(id)_defaultDatabasePath;
+(id)_eventsDatabaseTableName;
+(id)_propertiesDatabaseTableName;
+(void)_migrateDatabaseFiles;
-(BOOL)_removeDatabaseReturningError:(*id)arg0 ;
-(BOOL)_setValue:(id)arg0 forDatabasePropertyKey:(id)arg1 ;
-(BOOL)getPlayActivityEvents:(*id)arg0 storeAccountID:(NSInteger)arg1 returningError:(*id)arg2 ;
-(BOOL)getStoreAccounts:(*id)arg0 returningError:(*id)arg1 ;
-(BOOL)hasPendingPlayActivityEvents:(*BOOL)arg0 returningError:(*id)arg1 ;
-(BOOL)insertPlayActivityEvent:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)removePlayActivityEvents:(id)arg0 returningError:(*id)arg1 ;
-(id)_valueForDatabasePropertyKey:(id)arg0 ;
-(id)eventsRevisionVersionToken;
-(id)init;
-(id)initWithDatabasePath:(id)arg0 ;
-(void)performTransactionWithBlock:(id)arg0 ;


@end


#endif