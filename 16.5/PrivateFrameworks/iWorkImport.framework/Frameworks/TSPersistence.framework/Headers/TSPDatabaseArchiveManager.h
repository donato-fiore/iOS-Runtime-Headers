// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDATABASEARCHIVEMANAGER_H
#define TSPDATABASEARCHIVEMANAGER_H


#import <Foundation/Foundation.h>


@interface TSPDatabaseArchiveManager : NSObject



+(BOOL)_processDistributableArchiveEntry:(id)arg0 database:(id)arg1 fileManager:(id)arg2 error:(*id)arg3 ;
+(BOOL)_processGetRelationships:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)_processLoad:(id)arg0 classType:(*int)arg1 database:(id)arg2 fileManager:(id)arg3 error:(*id)arg4 ;
+(BOOL)populateDistributableArchiveEntry:(id)arg0 database:(id)arg1 fileManager:(id)arg2 ;


@end


#endif