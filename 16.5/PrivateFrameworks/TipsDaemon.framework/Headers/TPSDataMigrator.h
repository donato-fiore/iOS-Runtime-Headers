// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSDATAMIGRATOR_H
#define TPSDATAMIGRATOR_H


#import <Foundation/Foundation.h>


@interface TPSDataMigrator : NSObject



+(void)_performDesiredOutcomeMigration;
+(void)_performSavedTipsMigration;
+(void)performMigrationIfNeeded;
+(void)revertTipStatusArchivalIfNeeded;


@end


#endif