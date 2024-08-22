// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSPEAKTEXTLANGUAGEPICKERPARAMETERMIGRATION_H
#define WFSPEAKTEXTLANGUAGEPICKERPARAMETERMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFSpeakTextLanguagePickerParameterMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(id)availableLanguageCodes;
-(void)migrateSpeakTextLanguageParameterInParametersDictionary:(id)arg0 ;
-(void)migrateWorkflow;


@end


#endif