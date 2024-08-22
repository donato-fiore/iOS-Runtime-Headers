// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCURRENTDATEACTIONMIGRATION_H
#define WFCURRENTDATEACTIONMIGRATION_H

@class NSDateFormatter;


#import "WFWorkflowMigration.h"

@interface WFCurrentDateActionMigration : WFWorkflowMigration

@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter


+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(void)migrateWorkflow;


@end


#endif