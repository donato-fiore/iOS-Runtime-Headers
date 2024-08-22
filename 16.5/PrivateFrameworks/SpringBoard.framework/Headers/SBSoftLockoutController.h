// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSOFTLOCKOUTCONTROLLER_H
#define SBSOFTLOCKOUTCONTROLLER_H

@class NSString;
@protocol CSExternalLockProviding, CSCoverSheetViewControllerObserver, BSInvalidatable, SBSoftLockoutControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBLockScreenManager.h"

@interface SBSoftLockoutController : NSObject <CSExternalLockProviding, CSCoverSheetViewControllerObserver>

 {
    SBLockScreenManager *_lockScreenManager;
    NSUInteger _desiredBiometricLockoutState;
    id<BSInvalidatable> *_passcodeRequiredAssertion;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSoftLockoutControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) BOOL showPasscode;
@property (readonly) Class superclass;


-(BOOL)unlockFromSource:(int)arg0 ;
-(id)initWithBiometricLockoutState:(NSUInteger)arg0 ;
-(id)initWithBiometricLockoutState:(NSUInteger)arg0 lockScreenManager:(id)arg1 ;
-(void)_clearPasscodeRequiredAssertion;
-(void)_createPasscodeRequiredAssertion;
-(void)coverSheetViewControllerDidDismissPasscodeLockView:(id)arg0 ;
-(void)dealloc;
-(void)reload;


@end


#endif