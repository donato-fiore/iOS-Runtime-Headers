// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSDEVICEVALIDATION_H
#define TPSDEVICEVALIDATION_H

@class NSArray;


#import "TPSInclusivityValidation.h"

@interface TPSDeviceValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *excludeDevices;
@property (readonly, nonatomic) NSArray *targetDevices;


-(BOOL)_matchesDevices:(id)arg0 ;
-(id)initWithTargetDevices:(id)arg0 excludeDevices:(id)arg1 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif