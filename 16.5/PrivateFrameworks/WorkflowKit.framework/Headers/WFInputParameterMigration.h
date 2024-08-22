// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINPUTPARAMETERMIGRATION_H
#define WFINPUTPARAMETERMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFInputParameterMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(id)findActionProvidingInputToActionAtIndex:(NSUInteger)arg0 inWorkflow:(id)arg1 reachedBeginning:(*BOOL)arg2 inputActionIndex:(*NSUInteger)arg3 ;
-(id)findGetVariableActionProvidingInputToActionAtIndex:(NSInteger)arg0 inWorkflow:(id)arg1 ;
-(void)migrateLegacyInputVariablesInParameterDictionary:(id)arg0 toVariable:(id)arg1 ;
-(void)migrateWorkflow;
-(void)recursivelyFindDictionaryWithKey:(id)arg0 inArray:(id)arg1 then:(id)arg2 ;
-(void)recursivelyFindDictionaryWithKey:(id)arg0 inDictionary:(id)arg1 then:(id)arg2 ;
-(void)recursivelyFindDictionaryWithKey:(id)arg0 inObject:(id)arg1 then:(id)arg2 ;


@end


#endif