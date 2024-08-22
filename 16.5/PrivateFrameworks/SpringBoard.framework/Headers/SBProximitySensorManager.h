// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPROXIMITYSENSORMANAGER_H
#define SBPROXIMITYSENSORMANAGER_H

@class NSMutableSet, SBHardwareDefaults, NSHashTable, BSCompoundAssertion, NSString;
@protocol SBUIActiveOrientationObserver, SBProximitySensorControlling;

#import <Foundation/Foundation.h>

#import "SpringBoard.h"

@interface SBProximitySensorManager : NSObject <SBUIActiveOrientationObserver>

 {
    NSMutableSet *_clientsWantingDetectionEnabled;
    NSMutableSet *_clientsWantingGracePeriodDisabled;
    id<SBProximitySensorControlling> *_hidInterface;
    SBHardwareDefaults *_hardwareDefaults;
    NSHashTable *_observers;
    BSCompoundAssertion *_suppressBacklightChangesAssertion;
    int _proximityDetectionMode;
    BOOL _objectInCrudeProximity;
    int _backboardNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGracePeriodDisabled) BOOL gracePeriodDisabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_interfaceOrientationProvider, setter=_setInterfaceOrientationProvider:) SpringBoard *interfaceOrientationProvider; // ivar: _interfaceOrientationProvider
@property (readonly, nonatomic, getter=isObjectInProximity) BOOL objectInProximity; // ivar: _objectInProximity
@property (nonatomic, getter=isProximityDetectionEnabled, setter=_setProximityDetectionEnabled:) BOOL proximityDetectionEnabled; // ivar: _proximityDetectionEnabled
@property (nonatomic, getter=isProximityDetectionPermitted, setter=_setProximityDetectionPermitted:) BOOL proximityDetectionPermitted; // ivar: _proximityDetectionPermitted
@property (readonly) Class superclass;


-(BOOL)_clientsWantDetectionEnabled;
-(id)init;
-(id)initWithHIDInterface:(id)arg0 hardwareDefaults:(id)arg1 interfaceOrientationProvider:(id)arg2 ;
-(id)suppressBacklightChangesForReason:(id)arg0 ;
-(void)_destroy;
-(void)_disableProx;
-(void)_enableProx;
-(void)_reloadDefaults;
-(void)_setObjectInCrudeProximity:(BOOL)arg0 ;
-(void)_updateProxState;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)client:(id)arg0 wantsProximityDetectionEnabled:(BOOL)arg1 ;
-(void)client:(id)arg0 wantsProximityDetectionEnabled:(BOOL)arg1 disableGracePeriod:(BOOL)arg2 ;
-(void)dealloc;
-(void)processHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetProximityCalibration;


@end


#endif