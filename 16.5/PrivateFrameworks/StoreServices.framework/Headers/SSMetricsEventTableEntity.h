// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSEVENTTABLEENTITY_H
#define SSMETRICSEVENTTABLEENTITY_H

@class NSDictionary;


#import "SSSQLiteEntity.h"

@interface SSMetricsEventTableEntity : SSSQLiteEntity {
    NSDictionary *_reportingDictionary;
}




+(id)databaseTable;
-(id)reportingCanaryIdentifier;
-(id)reportingDictionary;
-(id)reportingJSON;
-(void)dealloc;


@end


#endif