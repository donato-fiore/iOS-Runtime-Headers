// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFILEPARAMETERSTATE_H
#define WFFILEPARAMETERSTATE_H



#import "WFVariableSubstitutableParameterState.h"

@interface WFFileParameterState : WFVariableSubstitutableParameterState



+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)processForMultipleStateWithContext:(id)arg0 error:(*id)arg1 resolution:(*NSInteger)arg2 ;
-(id)resolveFileURLWithContext:(id)arg0 error:(*id)arg1 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;
-(void)requestAccessToFileWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif