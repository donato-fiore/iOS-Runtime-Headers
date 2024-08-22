// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTATUSBARDEFAULTS_H
#define SBSTATUSBARDEFAULTS_H

@class NSArray;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBStatusBarDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) NSArray *countryCodesShowingEmergencyOnlyStatus;
@property (readonly, nonatomic) BOOL showBatteryLevel;
@property (readonly, nonatomic) BOOL showBatteryPercentage;
@property (readonly, nonatomic) BOOL showOptimalCellDataForCarPlay;
@property (readonly, nonatomic) BOOL showOverridesForRecording;
@property (readonly, nonatomic) BOOL showRSSI;
@property (readonly, nonatomic) BOOL showThermalWarning;
@property (readonly, nonatomic) NSUInteger statusBarLogLevel;
@property (readonly, nonatomic) BOOL suppressStatusBarOverrideForScreenSharing;


-(void)_bindAndRegisterDefaults;


@end


#endif