// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNOTCHEDSTATUSBARPROXIMITYBACKLIGHTPOLICY_H
#define SBNOTCHEDSTATUSBARPROXIMITYBACKLIGHTPOLICY_H

@class NSString;
@protocol SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate;


#import "SBDefaultProximityBacklightPolicy.h"
#import "SBProximityTouchHandlingController.h"
#import "SBNotchedStatusBarProximityBacklightPolicyEnablementCondition.h"
#import "SBProximitySettings.h"

@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate>

 {
    SBProximityTouchHandlingController *_proxTouchHandlingController;
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition *_enablementCondition;
    NSUInteger _timesEnabledWithObjectInProximity;
    NSUInteger _touchesReceivedWithObjectInProximity;
    BOOL _objectInProximity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_proximitySettings, setter=_setProximitySettings:) SBProximitySettings *proximitySettings; // ivar: _proximitySettings
@property (readonly) Class superclass;


-(CGFloat)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(BOOL)arg0 ;
-(id)_createNewEnablementCondition;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 touchHandlingController:(id)arg1 ;
-(void)_absorbTouchesBelowStatusBarHeight;
-(void)_absorbTouchesFullScreen;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(CGFloat)arg0 ;
-(void)_stopAbsorbingTouches;
-(void)condition:(id)arg0 enablementDidChange:(BOOL)arg1 ;
-(void)dealloc;
-(void)didHitAllowedRegion:(struct CGPoint )arg0 ;
-(void)proximitySensorManager:(id)arg0 objectWithinProximityDidChange:(BOOL)arg1 ;
-(void)windowSceneDidConnect:(id)arg0 ;


@end


#endif