// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIUSERMODELDATASTORE_H
#define TIUSERMODELDATASTORE_H

@class NSString, NSDate;
@protocol TIUserModelDataStoring, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring>

 {
    NSString *_path;
    *sqlite3 _user_model_db;
    BOOL _user_model_db_failed;
    NSObject<OS_dispatch_queue> *_database_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *durableLastMigrationDate;
@property (readonly) int durableVersion;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isValid;
@property (readonly) NSDate *propertiesLastMigrationDate;
@property (readonly) int propertiesVersion;
@property (readonly) Class superclass;
@property (readonly) NSDate *transientLastMigrationDate;
@property (readonly) int transientVersion;


+(id)initializeDataStoreAtPath:(id)arg0 ;
-(BOOL)_updateDurableValue:(id)arg0 forKey:(id)arg1 forDate:(id)arg2 withUpdateQuery:(char *)arg3 ;
-(BOOL)addValue:(id)arg0 andSecondaryValue:(id)arg1 andRealValue:(id)arg2 andProperties:(id)arg3 forKey:(id)arg4 forInputMode:(id)arg5 forDate:(id)arg6 ;
-(BOOL)closeDatabase;
-(BOOL)createOrOpenDatabase;
-(BOOL)isDatabaseValid;
-(BOOL)purgeDataForKey:(id)arg0 forInputMode:(id)arg1 beforeDate:(id)arg2 ;
-(BOOL)purgeDataForKeyPrefix:(id)arg0 forInputMode:(id)arg1 beforeDate:(id)arg2 ;
-(BOOL)purgeDurableDataForKeyPrefix:(id)arg0 ;
-(BOOL)setDurableValue:(id)arg0 forKey:(id)arg1 forDate:(id)arg2 ;
-(BOOL)updateDurableValue:(id)arg0 forKey:(id)arg1 forDate:(id)arg2 ;
-(id)durableCreationSchema;
-(id)durableLastMigrationDateFromDatabase:(struct sqlite3 *)arg0 ;
-(id)durableMigrationFromV2Schema;
-(id)durableMigrationFromV3Schema;
-(id)durableMigrationSchemaForDatabase:(struct sqlite3 *)arg0 ;
-(id)durableResetSchema;
-(id)getAllKnownInputModes;
-(id)getAllKnownInputModesSinceDate:(id)arg0 ;
-(id)getAllValuesForKey:(id)arg0 forInputMode:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(id)getAllValuesForKey:(id)arg0 forInputMode:(id)arg1 sinceDate:(id)arg2 ;
-(id)getAllValuesForKeyPrefix:(id)arg0 forInputMode:(id)arg1 sinceDate:(id)arg2 ;
-(id)getDailyAndWeeklyValuesForKeyPrefix:(id)arg0 forInputMode:(id)arg1 weeklyKeySuffixes:(id)arg2 endDate:(id)arg3 ;
-(id)getDurableValueForKey:(id)arg0 ;
-(id)getInputModesForKey:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)lastMigrationDateForKey:(id)arg0 fromDatabase:(struct sqlite3 *)arg1 ;
-(id)propertiesCreationSchema;
-(id)propertiesLastMigrationDateFromDatabase:(struct sqlite3 *)arg0 ;
-(id)propertiesMigrationFromV1Schema;
-(id)propertiesMigrationSchemaForDatabase:(struct sqlite3 *)arg0 ;
-(id)transientCreationSchema;
-(id)transientLastMigrationDateFromDatabase:(struct sqlite3 *)arg0 ;
-(id)transientMigrationSchemaForDatabase:(struct sqlite3 *)arg0 ;
-(id)transientResetSchema;
-(int)durableVersionFromDatabase:(struct sqlite3 *)arg0 ;
-(int)propertiesVersionFromDatabase:(struct sqlite3 *)arg0 ;
-(int)transientVersionFromDatabase:(struct sqlite3 *)arg0 ;
-(int)versionForKey:(id)arg0 fromDatabase:(struct sqlite3 *)arg1 ;
-(void)dealloc;


@end


#endif