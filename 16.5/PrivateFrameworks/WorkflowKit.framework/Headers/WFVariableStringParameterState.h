// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVARIABLESTRINGPARAMETERSTATE_H
#define WFVARIABLESTRINGPARAMETERSTATE_H

@class NSString;
@protocol WFVariableSupportingParameterState;

#import <Foundation/Foundation.h>

#import "WFVariable.h"
#import "WFVariableString.h"

@interface WFVariableStringParameterState : NSObject <WFVariableSupportingParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldSerializeAsPlainString;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger userInputInsertionIndex; // ivar: _userInputInsertionIndex
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, copy, nonatomic) WFVariableString *variableString; // ivar: _variableString


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithVariable:(id)arg0 ;
-(id)initWithVariableString:(id)arg0 ;
-(id)initWithVariableString:(id)arg0 userInputInsertionIndex:(NSInteger)arg1 ;
-(id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;
-(id)serializedRepresentation;
-(id)stateByReplacingVariable:(id)arg0 withVariable:(id)arg1 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif