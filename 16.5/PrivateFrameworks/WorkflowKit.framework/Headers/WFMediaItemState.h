// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMEDIAITEMSTATE_H
#define WFMEDIAITEMSTATE_H



#import "WFVariableSubstitutableParameterState.h"

@interface WFMediaItemState : WFVariableSubstitutableParameterState



+(id)processingValueClasses;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithMediaType:(id)arg0 persistentID:(id)arg1 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif