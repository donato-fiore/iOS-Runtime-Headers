// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCUSTOMINTENTENUMERATIONPARAMETER_H
#define WFCUSTOMINTENTENUMERATIONPARAMETER_H

@class INCodableEnumAttribute, NSDictionary, NSArray;


#import "WFEnumerationParameter.h"

@interface WFCustomIntentEnumerationParameter : WFEnumerationParameter

@property (readonly, nonatomic) INCodableEnumAttribute *enumAttribute; // ivar: _enumAttribute
@property (readonly, nonatomic) NSDictionary *enumNamesToKeys; // ivar: _enumNamesToKeys
@property (readonly, nonatomic) NSDictionary *enumNamesToLabels; // ivar: _enumNamesToLabels
@property (readonly, nonatomic) NSDictionary *keysToEnumNames; // ivar: _keysToEnumNames
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates


-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;


@end


#endif