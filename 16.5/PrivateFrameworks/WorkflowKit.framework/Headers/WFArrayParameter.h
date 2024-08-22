// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFARRAYPARAMETER_H
#define WFARRAYPARAMETER_H

@class NSSet;


#import "WFParameter.h"

@interface WFArrayParameter : WFParameter

@property (readonly, nonatomic) NSSet *allowedValueTypes; // ivar: _allowedValueTypes
@property (readonly, nonatomic) BOOL supportsVariables; // ivar: _supportsVariables


-(BOOL)allowsMultipleValues;
-(Class)stateClass;
-(id)defaultSerializedRepresentation;
-(id)defaultSupportedVariableTypes;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif