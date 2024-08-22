// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRDEVICESETUPCANCELACTION_H
#define TRDEVICESETUPCANCELACTION_H

@class NSError;


#import "TRDeviceSetupAction.h"

@interface TRDeviceSetupCancelAction : TRDeviceSetupAction

@property (readonly, nonatomic) NSError *error; // ivar: _error


-(id)init;
-(id)initWithError:(id)arg0 ;


@end


#endif