// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVARIABLECONDITIONALSUBJECTSTATE_H
#define WFVARIABLECONDITIONALSUBJECTSTATE_H

@class NSString, WFContentProperty;
@protocol WFVariableSupportingParameterState;


#import "WFConditionalSubjectParameterState.h"
#import "WFVariable.h"
#import "WFVariableParameterState.h"

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState <WFVariableSupportingParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFContentProperty *effectiveContentProperty; // ivar: _effectiveContentProperty
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) WFVariableParameterState *variableState; // ivar: _variableState


+(id)subjectType;
-(BOOL)isCaseInsensitive;
-(BOOL)isEnumeration;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIrrational;
-(Class)contentClassProvidingContentProperty;
-(Class)effectiveContentClass;
-(NSInteger)contentType;
-(NSUInteger)comparableTimeUnits;
-(NSUInteger)displayableTimeUnits;
-(NSUInteger)tense;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithVariable:(id)arg0 ;
-(id)initWithVariableState:(id)arg0 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg0 ;
-(id)serializedRepresentation;
-(id)supportedComparisonOperators;
-(id)unitType;
-(void)getContentWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(id)arg0 ;


@end


#endif