// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSNRDEVICECAPABILITYCONDITION_H
#define TPSNRDEVICECAPABILITYCONDITION_H

@class NSArray;


#import "TPSCondition.h"

@interface TPSNRDeviceCapabilityCondition : TPSCondition

@property (copy, nonatomic) NSArray *values;


-(id)_valuesFromValuesArray:(id)arg0 ;
-(id)init;
-(id)targetingValidations;


@end


#endif