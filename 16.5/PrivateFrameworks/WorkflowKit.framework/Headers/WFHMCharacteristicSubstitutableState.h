// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHMCHARACTERISTICSUBSTITUTABLESTATE_H
#define WFHMCHARACTERISTICSUBSTITUTABLESTATE_H

@class HMCharacteristic, NSString, NSDictionary;


#import "WFVariableSubstitutableParameterState.h"

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (retain, nonatomic) NSDictionary *serializedCharacteristic; // ivar: _serializedCharacteristic


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharacteristic:(id)arg0 homeIdentifier:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif