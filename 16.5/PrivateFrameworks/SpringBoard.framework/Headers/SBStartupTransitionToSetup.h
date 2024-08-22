// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTARTUPTRANSITIONTOSETUP_H
#define SBSTARTUPTRANSITIONTOSETUP_H

@class SBFUserAuthenticationController;


#import "SBBaseStartupTransition.h"
#import "SBBannerManager.h"
#import "SBApplicationController.h"
#import "SBSetupManager.h"
#import "SBLockScreenManager.h"
#import "SBInitialRestartState.h"

@interface SBStartupTransitionToSetup : SBBaseStartupTransition {
    SBBannerManager *_bannerManager;
    SBFUserAuthenticationController *_authController;
    SBApplicationController *_appController;
    SBSetupManager *_setupManager;
    SBLockScreenManager *_lockScreenManager;
    SBInitialRestartState *_initialRestartState;
}




-(id)initWithDestination:(NSUInteger)arg0 context:(id)arg1 ;
-(id)initWithDestination:(NSUInteger)arg0 context:(id)arg1 initialRestartState:(id)arg2 ;
// -(void)_activateSetupWithCompletion:(id)arg0 underLock:(unk)arg1 fromSnapshot:(BOOL)arg2  ;
-(void)performTransitionWithCompletionBlock:(id)arg0 ;


@end


#endif