// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSQLITEENTITY_H
#define SSSQLITEENTITY_H

@class NSString;
@protocol SSSQLiteEntity;

#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity>



@property (readonly, nonatomic) SSSQLiteDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL existsInDatabase;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (readonly) Class superclass;


+(BOOL)_insertValues:(id)arg0 intoTable:(id)arg1 withPersistentID:(NSInteger)arg2 database:(id)arg3 ;
+(Class)memoryEntityClass;
+(id)_aggregateValueForProperty:(id)arg0 function:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(id)anyInDatabase:(id)arg0 predicate:(id)arg1 ;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)arg0 ;
+(id)countForProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 ;
+(id)databasePropertyToGetClientProperty:(id)arg0 ;
+(id)databasePropertyToSetClientProperty:(id)arg0 ;
+(id)databaseValueForProperty:(id)arg0 clientValue:(id)arg1 ;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)foreignDatabaseColumnForProperty:(id)arg0 ;
+(id)foreignDatabaseTableForProperty:(id)arg0 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg0 ;
+(id)joinClauseForProperty:(id)arg0 ;
+(id)maxValueForProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 ;
+(id)minValueForProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 ;
+(id)queryWithDatabase:(id)arg0 predicate:(id)arg1 ;
+(id)queryWithDatabase:(id)arg0 predicate:(id)arg1 orderingProperties:(id)arg2 ;
-(BOOL)_deleteRowFromTable:(id)arg0 usingColumn:(id)arg1 ;
-(BOOL)deleteFromDatabase;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(BOOL)setValuesWithDictionary:(id)arg0 ;
-(id)_copyTableClusteredValuesWithValues:(id)arg0 ;
-(id)copyValuesForClientProperties:(id)arg0 ;
-(id)copyXPCEncodedValuesForClientProperties:(id)arg0 ;
-(id)initWithPersistentID:(NSInteger)arg0 inDatabase:(id)arg1 ;
-(id)initWithPropertyValues:(id)arg0 inDatabase:(id)arg1 ;
-(id)valueForProperty:(id)arg0 ;
-(void)getValues:(*id)arg0 forProperties:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif