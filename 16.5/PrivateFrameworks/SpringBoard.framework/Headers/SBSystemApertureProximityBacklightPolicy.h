// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREPROXIMITYBACKLIGHTPOLICY_H
#define SBSYSTEMAPERTUREPROXIMITYBACKLIGHTPOLICY_H

@class UIView, NSTimer, NSString;
@protocol _SBSystemApertureProximityTouchHandlingViewDelegate, BSInvalidatable, SBSystemApertureProximityBacklightPolicyDelegate;


#import "SBDefaultProximityBacklightPolicy.h"
#import "SBHIDUISensorModeController.h"
#import "SBSystemGestureManager.h"
#import "SBProximitySettings.h"

@interface SBSystemApertureProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <_SBSystemApertureProximityTouchHandlingViewDelegate>

 {
    SBHIDUISensorModeController *_sensorModeController;
    SBSystemGestureManager *_systemGestureManager;
    id<BSInvalidatable> *_suppressSystemGestures;
    UIView *_touchTrackingView;
    UIView *_touchBlockingView;
    NSUInteger _numberOfTouchesWhileObjectInProximity;
    NSTimer *_touchAllowanceGracePeriodTimer;
    BOOL _objectThatCanPreventTouchesInProximity;
    BOOL _objectInProximityAccordingToProxManager;
    BOOL _isTrackingTouchPossiblyInJindoWithObjectInProximity;
    BOOL _suppressBacklightChanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSystemApertureProximityBacklightPolicyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_proximitySettings, setter=_setProximitySettings:) SBProximitySettings *proximitySettings; // ivar: _proximitySettings
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemApertureBacklightPolicy) BOOL systemApertureBacklightPolicy; // ivar: _systemApertureBacklightPolicy


-(BOOL)_isGracePeriodDisabledByEntitledApp;
-(BOOL)proximityBacklightPolicyTouchHandlingView:(id)arg0 shouldConsumeTouchForHitTest:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_objectThatCanPreventTouchesWithinProximityDidChange:(BOOL)arg0 fromGracePeriod:(BOOL)arg1 ;
-(void)_scheduleBacklightFactorToZeroForTouchWithinSystemAperture;
-(void)_startCancelingTouches;
-(void)_stopCancelingTouches;
-(void)dealloc;
-(void)didHitAllowedRegion:(struct CGPoint )arg0 ;
-(void)proximitySensorManager:(id)arg0 objectWithinProximityDidChange:(BOOL)arg1 ;
-(void)proximitySensorManager:(id)arg0 objectWithinProximityDidChange:(BOOL)arg1 detectionMode:(int)arg2 ;
-(void)proximitySensorManager:(id)arg0 shouldSuppressBacklightChanges:(BOOL)arg1 ;


@end


#endif