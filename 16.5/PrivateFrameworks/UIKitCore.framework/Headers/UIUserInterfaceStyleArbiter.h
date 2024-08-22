// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIUSERINTERFACESTYLEARBITER_H
#define UIUSERINTERFACESTYLEARBITER_H

@class UISUserInterfaceStyleMode, NSDate, NSBackgroundActivityScheduler, NSString;
@protocol UISUserInterfaceStyleModeDelegate, BLSBacklightStateObserving;

#import <Foundation/Foundation.h>

#import "_UISunScheduleController.h"
#import "_UICustomScheduleController.h"

@interface UIUserInterfaceStyleArbiter : NSObject <UISUserInterfaceStyleModeDelegate, BLSBacklightStateObserving>

 {
    UISUserInterfaceStyleMode *_styleMode;
    NSInteger _currentModeValue;
    NSInteger _currentStyle;
    NSInteger _lastProposedAutomaticStyle;
    ? _lastOverride;
    BOOL _isAddingBacklightStateObserver;
    BOOL _isObservingBacklightState;
    BOOL _isDim;
    _UISunScheduleController *_sunScheduleController;
    _UICustomScheduleController *_customScheduleController;
    NSDate *_lastUpdateDate;
    NSBackgroundActivityScheduler *_backgroundActivityScheduler;
    int _notificationToken;
}


@property (readonly, nonatomic) NSInteger currentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_updateControllersWithOldModeValue:(NSInteger)arg0 newModeValue:(NSInteger)arg1 ;
-(NSInteger)_proposedStyleForCurrentMode;
-(id)_init;
-(id)nextTransition;
-(void)_backlightStateUpdated:(NSInteger)arg0 updateStyle:(BOOL)arg1 ;
-(void)_logArbiterDecisionToBiomeWithNewStyle:(NSInteger)arg0 reason:(NSInteger)arg1 ;
-(void)_logChangeEventWithNewMode:(NSInteger)arg0 oldMode:(NSInteger)arg1 newStyle:(NSInteger)arg2 oldStyle:(NSInteger)arg3 reason:(NSInteger)arg4 ;
-(void)_logPeriodicEvent;
-(void)_setWatchesScreenDim:(BOOL)arg0 ;
-(void)_updateCurrentStyleAndNotify:(BOOL)arg0 forReason:(NSInteger)arg1 ;
-(void)_updateCurrentStyleForReason:(NSInteger)arg0 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)toggleCurrentStyle;
-(void)toggleCurrentStyleWithOverrideTiming:(NSInteger)arg0 ;
-(void)userInterfaceStyleModeDidChange:(id)arg0 ;


@end


#endif