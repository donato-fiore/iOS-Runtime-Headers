// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIUSERMODELDATASTOREMOCK_H
#define TIUSERMODELDATASTOREMOCK_H

@class NSMutableArray, NSMutableDictionary, NSString, NSDate;
@protocol TIUserModelDataStoring;

#import <Foundation/Foundation.h>


@interface TIUserModelDataStoreMock : NSObject <TIUserModelDataStoring>

 {
    NSMutableArray *_database;
    NSMutableDictionary *_durableDatabase;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *durableLastMigrationDate; // ivar: _durableLastMigrationDate
@property (readonly) int durableVersion; // ivar: _durableVersion
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isValid;
@property (retain) NSDate *propertiesLastMigrationDate; // ivar: _propertiesLastMigrationDate
@property (readonly) int propertiesVersion; // ivar: _propertiesVersion
@property (readonly) Class superclass;
@property (retain) NSDate *transientLastMigrationDate; // ivar: _transientLastMigrationDate
@property (readonly) int transientVersion; // ivar: _transientVersion


-(BOOL)addValue:(id)arg0 andSecondaryValue:(id)arg1 andRealValue:(id)arg2 andProperties:(id)arg3 forKey:(id)arg4 forInputMode:(id)arg5 forDate:(id)arg6 ;
-(BOOL)purgeDataForKey:(id)arg0 forInputMode:(id)arg1 beforeDate:(id)arg2 ;
-(BOOL)purgeDataForKeyPrefix:(id)arg0 forInputMode:(id)arg1 beforeDate:(id)arg2 ;
-(BOOL)setDurableValue:(id)arg0 forKey:(id)arg1 forDate:(id)arg2 ;
-(BOOL)updateDurableValue:(id)arg0 forKey:(id)arg1 forDate:(id)arg2 ;
-(id)getAllKnownInputModes;
-(id)getAllKnownInputModesSinceDate:(id)arg0 ;
-(id)getAllValuesForKey:(id)arg0 forInputMode:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(id)getAllValuesForKey:(id)arg0 forInputMode:(id)arg1 sinceDate:(id)arg2 ;
-(id)getAllValuesForKeyPrefix:(id)arg0 forInputMode:(id)arg1 sinceDate:(id)arg2 ;
-(id)getDailyAndWeeklyValuesForKeyPrefix:(id)arg0 forInputMode:(id)arg1 weeklyKeySuffixes:(id)arg2 endDate:(id)arg3 ;
-(id)getDurableValueForKey:(id)arg0 ;
-(id)getInputModesForKey:(id)arg0 ;
-(id)init;
-(void)clear;


@end


#endif