// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFINDMYFRIENDSINTENTMIGRATION_H
#define WFFINDMYFRIENDSINTENTMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFFindMyFriendsIntentMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
+(id)classNameConversion;
+(id)launchIdConversion;
+(id)parameterConversion;
-(BOOL)convertParametersAndUpdateIntent:(*id)arg0 ;
-(BOOL)updateBundleIdentifierForIntent:(id)arg0 ;
-(BOOL)updateClassNameForIntent:(id)arg0 ;
-(void)migrateWorkflow;


@end


#endif