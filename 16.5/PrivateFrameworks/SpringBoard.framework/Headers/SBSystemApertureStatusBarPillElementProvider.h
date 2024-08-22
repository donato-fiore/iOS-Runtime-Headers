// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURESTATUSBARPILLELEMENTPROVIDER_H
#define SBSYSTEMAPERTURESTATUSBARPILLELEMENTPROVIDER_H

@class NSMutableSet, UIStatusBarServer, NSTimer, NSString, NSHashTable;
@protocol UIStatusBarServerClient, SBWindowSceneStatusBarAssertionManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneStatusBarStateObserver, BSInvalidatable, SBSystemApertureStatusBarStyleOverridesSuppressing;

#import <Foundation/Foundation.h>

#import "SBSystemApertureStatusBarPillElement.h"
#import "SBSystemApertureController.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBSystemApertureSettings.h"
#import "SBWindowSceneStatusBarAssertionManager.h"

@interface SBSystemApertureStatusBarPillElementProvider : NSObject <UIStatusBarServerClient, SBWindowSceneStatusBarAssertionManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneStatusBarStateObserver, BSInvalidatable, SBSystemApertureStatusBarStyleOverridesSuppressing>



@property (readonly, nonatomic) SBSystemApertureStatusBarPillElement *_activeElement;
@property (readonly, nonatomic) SBSystemApertureStatusBarPillElement *_nowLocatingElement;
@property (readonly, nonatomic) SBSystemApertureStatusBarPillElement *_nowRecordingElement;
@property (retain, nonatomic) NSMutableSet *_registeredElements; // ivar: __registeredElements
@property (readonly, nonatomic) UIStatusBarServer *_statusBarServer; // ivar: __statusBarServer
@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (readonly, nonatomic) NSMutableSet *applicationsWithActiveElements; // ivar: _applicationsWithActiveElements
@property (retain, nonatomic) NSTimer *applyOverridesDebounceTimer; // ivar: _applyOverridesDebounceTimer
@property (readonly, nonatomic) NSMutableSet *assertionsForApplicationsWithActiveElements; // ivar: _assertionsForApplicationsWithActiveElements
@property (nonatomic) NSUInteger currentStyleOverrides; // ivar: _currentStyleOverrides
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) SBSystemApertureController *elementRegistrar; // ivar: _elementRegistrar
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBDeviceApplicationSceneHandle *observedSceneHandle; // ivar: _observedSceneHandle
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) NSUInteger resolvedOverrides; // ivar: _resolvedOverrides
@property (retain, nonatomic) SBSystemApertureSettings *settings; // ivar: _settings
@property (weak, nonatomic) SBWindowSceneStatusBarAssertionManager *statusBarAssertionManager; // ivar: _statusBarAssertionManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSHashTable *suppressionAssertions; // ivar: _suppressionAssertions


-(BOOL)_managesDedicatedElementForOverride:(NSUInteger)arg0 ;
-(id)acquireActiveElementAssertionForApplication:(id)arg0 reason:(id)arg1 ;
-(id)acquireSuppressionAssertionForStatusBarStyleOverrides:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)init;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_invalidateElement:(id)arg0 withReason:(id)arg1 ;
-(void)_lockStateChanged;
-(void)_nowLocatingAppsDidChange;
-(void)_nowRecordingAppDidChange;
-(void)_registerElement:(id)arg0 ;
-(void)_updateActiveElementIfNeededForReason:(id)arg0 ;
-(void)_updateActiveElementIfNeededForReason:(id)arg0 notifyingObserversIfNecessary:(BOOL)arg1 ;
-(void)_updateActiveElementIfNeededWithLayoutState:(id)arg0 reason:(id)arg1 ;
-(void)_updateActiveElementIfNeededWithLayoutState:(id)arg0 reason:(id)arg1 notifyingObserversIfNecessary:(BOOL)arg2 ;
-(void)_updateNowLocatingElementWithReason:(id)arg0 ;
-(void)_updateNowRecordingAndNowLocatingElementsWithReason:(id)arg0 ;
-(void)_updateNowRecordingElementWithReason:(id)arg0 ;
-(void)activateWithRegistrar:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleOverridesToSuppressTo:(NSUInteger)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 addStatusBarSettingsAssertion:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 removeStatusBarSettingsAssertion:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 statusBarSettingsDidChange:(id)arg1 ;
-(void)statusBarServer:(id)arg0 didReceiveDoubleHeightStatusString:(id)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveGlowAnimationState:(BOOL)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStyleOverrides:(NSUInteger)arg1 ;


@end


#endif