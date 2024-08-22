// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKSTARTWORKOUTPARAMETERSTATE_H
#define WFLINKSTARTWORKOUTPARAMETERSTATE_H

@class NSString;


#import "WFVariableSubstitutableParameterState.h"

@interface WFLinkStartWorkoutParameterState : WFVariableSubstitutableParameterState

@property (readonly, copy, nonatomic) NSString *localizedTitle;


+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithLinkAction:(id)arg0 ;


@end


#endif