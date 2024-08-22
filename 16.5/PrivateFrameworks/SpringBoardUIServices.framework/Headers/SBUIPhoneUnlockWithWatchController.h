// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPHONEUNLOCKWITHWATCHCONTROLLER_H
#define SBUIPHONEUNLOCKWITHWATCHCONTROLLER_H

@class SFAutoUnlockManager, NSHashTable, NSString;
@protocol SFAutoUnlockManagerDelegate, SBUIBiometricResourceObserver, SBUIBiometricResource, SBUIPhoneUnlockWithWatchControllerDelegate;

#import <Foundation/Foundation.h>


@interface SBUIPhoneUnlockWithWatchController : NSObject <SFAutoUnlockManagerDelegate, SBUIBiometricResourceObserver>

 {
    SFAutoUnlockManager *_autoUnlockManager;
    SFAutoUnlockManager *_testAutoUnlockManager;
    NSHashTable *_observers;
    BOOL _bottomFaceOccludedSinceScreenOn;
    BOOL _faceWUPoseEligibleSinceScreenOn;
    BOOL _faceOccludedSinceScreenOn;
}


@property (retain, nonatomic) NSObject<SBUIBiometricResource> *biometricResource; // ivar: _biometricResource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBUIPhoneUnlockWithWatchControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL liftToWakeGestureDetectedSinceScreenOn; // ivar: _liftToWakeGestureDetectedSinceScreenOn
@property (nonatomic) BOOL significantUserInteractionOccuredSinceScreenOn; // ivar: _significantUserInteractionOccuredSinceScreenOn
@property (readonly) Class superclass;
@property (nonatomic) BOOL wakeSourceIsUserAction; // ivar: _wakeSourceIsUserAction


+(id)sharedInstance;
-(BOOL)didDetectFaceRequirementsForPAU;
-(BOOL)phoneUnlockWithWatchEnabled;
-(BOOL)phoneUnlockWithWatchSupported;
-(BOOL)shouldPhoneCompleteAutoUnlockWithNotification;
-(BOOL)showRawErrorCodes;
-(id)_autoUnlockManager;
-(id)_testAutoUnlockManager;
-(id)init;
-(void)_handleUnlockAttemptFailedWithError:(id)arg0 ;
-(void)_handleUnlockAttemptSucceeded;
-(void)_sendCoreAnalyticsEventWithPayload:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)attemptPhoneUnlockWithWatch;
-(void)biometricResource:(id)arg0 observeEvent:(NSUInteger)arg1 ;
-(void)completePhoneAutoUnlockWithNotification:(BOOL)arg0 ;
-(void)handleScreenOff;
-(void)manager:(id)arg0 beganAttemptWithDevice:(id)arg1 ;
-(void)manager:(id)arg0 completedUnlockWithDevice:(id)arg1 ;
-(void)manager:(id)arg0 failedAttemptWithError:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)setBottomFaceOccludedSinceScreenOn:(BOOL)arg0 ;
-(void)setFaceOccludedSinceScreenOn:(BOOL)arg0 ;
-(void)setFaceWUPoseEligibleSinceScreenOn:(BOOL)arg0 ;
-(void)setTestAutoUnlockManager:(id)arg0 ;


@end


#endif