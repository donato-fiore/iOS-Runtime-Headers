// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMISCELLANEOUSDEFAULTS_H
#define SBMISCELLANEOUSDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBMiscellaneousDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) float backlightLevel;
@property (nonatomic) NSInteger dataPlanActivationPromptCount;
@property (readonly, nonatomic) BOOL disableAsyncRenderingSurfaceRetention;
@property (readonly, nonatomic) BOOL disableAutomaticMallocStackLogging;
@property (readonly, nonatomic) BOOL enableDynamicJetsamLimits;
@property (nonatomic) BOOL launchWithMallocStackLogging;
@property (nonatomic) BOOL sensitiveUIEnabled;
@property (nonatomic) BOOL suppressAlertsForKeynote;
@property (readonly, nonatomic) BOOL suppressNoSimAlert;
@property (readonly, nonatomic) BOOL walletPreArmForceLockButton;


-(void)_bindAndRegisterDefaults;


@end


#endif