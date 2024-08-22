// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCLOUDDEVICESCONDITION_H
#define TPSCLOUDDEVICESCONDITION_H

@class NSString, NSArray;
@protocol TPSCloudDeviceDataSource;


#import "TPSCondition.h"

@interface TPSCloudDevicesCondition : TPSCondition <TPSCloudDeviceDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *registeredDevices; // ivar: _registeredDevices
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *values;


-(id)_valuesFromValuesArray:(id)arg0 ;
-(id)init;
-(id)targetingValidations;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif