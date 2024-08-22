// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPOWERDEFAULTS_H
#define SBPOWERDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBPowerDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL disableIdleSleep;
@property (nonatomic) BOOL hideACPower;
@property (readonly, nonatomic) BOOL hideLowPowerAlerts;
@property (readonly, nonatomic) NSInteger lowBatteryLevel;
@property (readonly, nonatomic) BOOL trackPowerEvents;


-(void)_bindAndRegisterDefaults;


@end


#endif