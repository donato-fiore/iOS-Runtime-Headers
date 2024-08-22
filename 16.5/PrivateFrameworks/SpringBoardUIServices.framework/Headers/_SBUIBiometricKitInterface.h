// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBUIBIOMETRICKITINTERFACE_H
#define _SBUIBIOMETRICKITINTERFACE_H

@class NSSet, BKDeviceTouchID, BKDevicePearl, NSString;
@protocol BKOperationDelegate, BKMatchOperationDelegate, BKMatchPearlOperationDelegate, OS_dispatch_queue, _SBUIBiometricKitInterfaceDelegate;

#import <Foundation/Foundation.h>


@interface _SBUIBiometricKitInterface : NSObject <BKOperationDelegate, BKMatchOperationDelegate, BKMatchPearlOperationDelegate>

 {
    NSSet *_biometricDevices;
    NSUInteger _enrolledIdentitiesCount;
    int _enrollmentChangedNotifyToken;
    BOOL _isFingerDetected;
    BKDeviceTouchID *_mesaDevice;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BKDevicePearl *_pearlDevice;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<_SBUIBiometricKitInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPearlIDCapable) BOOL pearlIDCapable;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchIDCapable) BOOL touchIDCapable;


-(BOOL)enableBackgroundFingerDetection:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)hasEnrolledIdentities;
-(BOOL)isFingerOn;
-(BOOL)isPeriocularMatchingEnabled;
-(NSUInteger)_biometricEventForFaceDetectFeedback:(NSInteger)arg0 ;
-(NSUInteger)_eventForLockoutState:(NSInteger)arg0 ;
-(NSUInteger)lockoutState;
-(id)_createPresenceDetectOperationsForDeviceTypes:(id)arg0 error:(*id)arg1 ;
-(id)_trackerForOperation:(id)arg0 ;
-(id)createFaceDetectOperationsWithError:(*id)arg0 ;
-(id)createFingerDetectOperationsWithError:(*id)arg0 ;
-(id)createMatchOperationsWithMode:(NSUInteger)arg0 andCredentialSet:(id)arg1 error:(*id)arg2 ;
-(id)createPearlDevice;
-(id)createPresenceDetectOperationsWithError:(*id)arg0 ;
-(id)init;
-(void)_sendDelegateEvent:(NSUInteger)arg0 ;
-(void)_sendDelegateEventForFaceOcclusionInfo:(id)arg0 ;
-(void)_sendDelegateEventForFaceWUPoseEligibilityInfo:(id)arg0 ;
-(void)_sendDelegateEventForFeedback:(NSInteger)arg0 ;
-(void)_setTracker:(id)arg0 forOperation:(id)arg1 ;
-(void)dealloc;
-(void)forceBioLockout;
-(void)matchOperation:(id)arg0 failedWithReason:(NSInteger)arg1 ;
-(void)matchOperation:(id)arg0 matchedWithResult:(id)arg1 ;
-(void)matchOperation:(id)arg0 providedFaceOcclusionInfo:(id)arg1 ;
-(void)matchOperation:(id)arg0 providedFaceWUPoseEligibilityInfo:(id)arg1 ;
-(void)matchOperation:(id)arg0 providedFeedback:(NSInteger)arg1 ;
-(void)operation:(id)arg0 finishedWithReason:(NSInteger)arg1 ;
-(void)operation:(id)arg0 presenceStateChanged:(BOOL)arg1 ;
-(void)operation:(id)arg0 stateChanged:(NSInteger)arg1 ;


@end


#endif