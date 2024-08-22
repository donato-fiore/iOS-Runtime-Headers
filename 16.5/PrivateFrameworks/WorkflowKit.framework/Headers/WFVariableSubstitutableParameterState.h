// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVARIABLESUBSTITUTABLEPARAMETERSTATE_H
#define WFVARIABLESUBSTITUTABLEPARAMETERSTATE_H

@class NSString;
@protocol WFVariableSupportingParameterState;

#import <Foundation/Foundation.h>

#import "WFVariable.h"

@interface WFVariableSubstitutableParameterState : NSObject <WFVariableSupportingParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) WFVariable *variable; // ivar: _variable


+(Class)processingValueClass;
+(id)processingValueClasses;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)stateIsEquivalent:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithValue:(id)arg0 ;
-(id)initWithVariable:(id)arg0 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif