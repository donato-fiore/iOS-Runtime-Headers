// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCENE_H
#define UISCENE_H

@class NSString, FBSScene, NSArray, NSDictionary, FBSSceneSettings, NSMutableDictionary, NSPointerArray, NSMutableArray, NSNumber, BKSAnimationFenceHandle;
@protocol FBSSceneDelegate, BSDebugDescriptionProviding, UISceneDelegate;


#import "UIResponder.h"
#import "UISceneSession.h"
#import "UISceneActivationConditions.h"
#import "_UISceneLifecycleMonitor.h"
#import "UIScene.h"
#import "UIApplicationSceneClientSettings.h"
#import "UIApplicationSceneSettings.h"
#import "_UIEventDeferringManager.h"
#import "_UIFocusSystemSceneComponent.h"
#import "_UIKeyWindowSceneObserver.h"
#import "UIPointerLockState.h"

@interface UIScene : UIResponder <FBSSceneDelegate, BSDebugDescriptionProviding>

 {
    UISceneSession *_session;
    id<UISceneDelegate> *_delegate;
    NSString *_title;
    NSString *_subtitle;
    UISceneActivationConditions *_activationConditions;
    FBSScene *_scene;
    NSArray *_initialSettingsDiffActions;
    NSArray *_finalSettingsDiffActions;
    NSArray *_initialSceneBSActionHandlers;
    NSArray *_finalSceneBSActionHandlers;
    NSDictionary *_additionalSettingsDiffActions;
    NSArray *_flattenedDiffActions;
    NSDictionary *_additionalBSActionResponders;
    NSArray *_flattenedBSActionResponders;
    NSDictionary *_registeredComponents;
    _UISceneLifecycleMonitor *_lifecycleMonitor;
    FBSSceneSettings *_overrideSettings;
    NSMutableDictionary *_postSettingsUpdateResponseBlocks;
    UIScene *_settingsScene;
    NSPointerArray *_inheritingScenes;
    NSString *_sceneIdentifier;
    NSString *_persistenceIdentifier;
    ? _sceneFlags;
    NSMutableArray *_heldSceneEventResponseBlocks;
}


@property (readonly, nonatomic, getter=_FBSScene) FBSScene *_FBSScene;
@property (retain, nonatomic, setter=_setActivationConditions:) UISceneActivationConditions *_activationConditions;
@property (readonly, nonatomic, getter=_isActive) BOOL _active;
@property (readonly, nonatomic) BOOL _affectsAppLifecycleIfInternal;
@property (readonly, nonatomic) BOOL _affectsScreenOrientation;
@property (readonly, nonatomic) NSArray *_allWindows;
@property (readonly, nonatomic) BOOL _allowsEventUIWindowRouting;
@property (retain, nonatomic, getter=_cachedInterfaceOrientation, setter=_setCachedInterfaceOrientation:) NSNumber *_cachedInterfaceOrientation; // ivar: __cachedInterfaceOrientation
@property (readonly, nonatomic) BOOL _canDynamicallySpecifySupportedInterfaceOrientations;
@property (readonly, nonatomic, getter=_isConnecting) BOOL _connecting;
@property (nonatomic, setter=_setDiscardSessionOnUserDisconnect:) BOOL _discardSessionOnUserDisconnect;
@property (readonly, nonatomic) FBSSceneSettings *_effectiveSettings;
@property (readonly, nonatomic) UIApplicationSceneClientSettings *_effectiveUIClientSettings;
@property (readonly, nonatomic) UIApplicationSceneSettings *_effectiveUISettings;
@property (readonly, nonatomic, getter=_isEligibleForSuspension) BOOL _eligibleForSuspension;
@property (readonly, nonatomic) _UIEventDeferringManager *_eventDeferringManager;
@property (readonly, nonatomic) _UIFocusSystemSceneComponent *_focusSystemSceneComponent;
@property (readonly, nonatomic) BOOL _hasInvaidated;
@property (readonly, nonatomic) BOOL _hasInvalidated;
@property (readonly, nonatomic) BOOL _hasLifecycle;
@property (readonly, nonatomic) BOOL _hasSettingsScene;
@property (readonly, nonatomic) BOOL _hostsWindows;
@property (readonly, nonatomic) NSString *_identifier;
@property (readonly, nonatomic) NSArray *_interitingScenes;
@property (readonly, nonatomic, getter=_isInternal) BOOL _internal;
@property (nonatomic, setter=_setInvolvedInMediaPlayback:) BOOL _involvedInMediaPlayback;
@property (readonly, nonatomic) BOOL _isTargetOfKeyboardEventDeferringEnvironment;
@property (readonly, nonatomic, getter=_isUIKitManaged) BOOL _isUIKitManaged;
@property (readonly, nonatomic) _UIKeyWindowSceneObserver *_keyWindowSceneObserver;
@property (readonly, nonatomic) _UISceneLifecycleMonitor *_lifecycleMonitor;
@property (readonly, nonatomic) FBSSceneSettings *_oldSettings; // ivar: _oldSettings
@property (readonly, nonatomic) NSString *_persistenceIdentifier;
@property (readonly, nonatomic, getter=_isReadyForSuspension) BOOL _readyForSuspension;
@property (nonatomic, getter=_isRespondingToLifecycleEvent, setter=_setIsRespondingToLifecycleEvent:) BOOL _respondingToLifecycleEvent; // ivar: _respondingToLifecycleEvent
@property (readonly, nonatomic, getter=_isRunningInTaskSwitcher) BOOL _runningInTaskSwitcher;
@property (readonly, nonatomic) NSArray *_sceneBSActionResponders;
@property (readonly, nonatomic) NSArray *_sceneComponents;
@property (readonly, nonatomic) NSString *_sceneIdentifier;
@property (readonly, nonatomic) BOOL _sceneSessionRoleIsCarPlayOrNonInteractiveExternal;
@property (readonly, nonatomic) NSArray *_settingsDiffActions;
@property (weak, nonatomic, setter=_setSettingsScene:) UIScene *_settingsScene;
@property (readonly, nonatomic, getter=_isSuspendedEventsOnly) BOOL _suspendedEventsOnly;
@property (readonly, nonatomic, getter=_isSuspendedUnderLock) BOOL _suspendedUnderLock;
@property (readonly, nonatomic) BKSAnimationFenceHandle *_synchronizedDrawingFence;
@property (readonly, nonatomic) FBSSceneSettings *_synthesizedSettings;
@property (readonly, nonatomic) CGFloat _systemMinimumMargin;
@property (readonly, nonatomic) NSArray *_visibleWindows;
@property (readonly, nonatomic) NSArray *_windows;
@property (retain, nonatomic) UISceneActivationConditions *activationConditions;
@property (readonly, nonatomic) NSInteger activationState;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<UISceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPointerLockState *pointerLockState;
@property (readonly, nonatomic) UISceneSession *session;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(*void)_unsafeScenesIncludingInternal;
+(BOOL)_supportsEventUIWindowRouting;
+(Class)_implicitSceneFilterClass;
+(NSInteger)_UIO_sceneType;
+(NSInteger)_activationStateFromSceneSettings:(id)arg0 ;
+(id)_connectionOptionsForScene:(id)arg0 withSpecification:(id)arg1 transitionContext:(id)arg2 actions:(id)arg3 sceneSession:(id)arg4 ;
+(id)_mostActiveScene;
+(id)_persistenceIdentifierForScene:(id)arg0 ;
+(id)_sceneForFBSScene:(id)arg0 ;
+(id)_sceneForFBSScene:(id)arg0 create:(BOOL)arg1 withSession:(id)arg2 connectionOptions:(id)arg3 ;
+(id)_sceneForFBSScene:(id)arg0 usingPredicate:(id)arg1 ;
+(id)_scenesIncludingInternal:(BOOL)arg0 ;
+(id)_scenesIncludingInternalForPK:(BOOL)arg0 ;
+(id)_synchronizeDrawingAndReturnFence;
+(void)_enumerateAllWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 asCopy:(BOOL)arg2 withBlock:(id)arg3 ;
+(void)_registerSceneComponentClass:(Class)arg0 withKey:(id)arg1 predicate:(id)arg2 ;
+(void)_synchronizeDrawing;
+(void)_synchronizeDrawingUsingFence:(id)arg0 ;
+(void)_synchronizeDrawingWithFence:(id)arg0 ;
-(BOOL)_isConnected;
-(BOOL)_shouldAllowFencing;
-(BOOL)_shouldDeferInitialWindowUpdateBeforeConnection:(id)arg0 ;
-(BOOL)_shouldDeferInitialWindowUpdateBeforeConnectionAndTrackIfNeeded:(id)arg0 ;
-(BOOL)_subclassTracksWindowsNeedingDeferredInitialUpdates;
-(BOOL)_tracksWindowsNeedingDeferredInitialUpdates;
-(BOOL)_windowIsFront:(id)arg0 ;
-(id)_backlightSceneEnvironment;
-(id)_carPlaySceneComponent;
-(id)_currentOpenApplicationEndpoint;
-(id)_fbsSceneLayerForWindow:(id)arg0 ;
-(id)_fixupInheritedClientSettings:(id)arg0 ;
-(id)_fixupInheritedSettings:(id)arg0 ;
-(id)_sceneComponentForKey:(id)arg0 ;
-(id)_synchronizeDrawingAndReturnFence;
-(id)_topVisibleWindowEnumeratingAsCopy:(BOOL)arg0 passingTest:(id)arg1 ;
-(id)_topVisibleWindowPassingTest:(id)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSession:(id)arg0 connectionOptions:(id)arg1 ;
-(id)nextResponder;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )_boundsForInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGRect )_referenceBounds;
-(struct UIEdgeInsets )_safeAreaInsetsForInterfaceOrientation:(NSInteger)arg0 ;
-(void)__captureWindow:(id)arg0 ;
-(void)__releaseWindow:(id)arg0 ;
-(void)_addInheritingScene:(id)arg0 ;
-(void)_addSubclassDebugDescriptionWithBuilder:(id)arg0 ;
-(void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)arg0 ;
-(void)_applyOverrideSettings:(id)arg0 forActions:(id)arg1 ;
-(void)_calculateFlattenedBSActionResponders;
-(void)_calculateFlattenedDiffActions;
-(void)_compatibilityModeZoomDidChange;
-(void)_completeStateRestoration;
-(void)_computeMetrics:(BOOL)arg0 ;
-(void)_computeMetricsForWindows:(id)arg0 animated:(BOOL)arg1 ;
// -(void)_emitSceneSettingsUpdateResponseForCompletion:(id)arg0 afterSceneUpdateWork:(unk)arg1  ;
-(void)_enableOverrideSettingsForActions:(id)arg0 ;
// -(void)_enqueuePostSettingsUpdateResponseBlock:(id)arg0 inPhase:(unk)arg1  ;
-(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 asCopy:(BOOL)arg2 stopped:(*BOOL)arg3 withBlock:(id)arg4 ;
-(void)_extendStateRestoration;
-(void)_finishSceneConnection;
-(void)_guardedSetOverrideSettings:(id)arg0 ;
-(void)_initializeSceneComponents;
-(void)_invalidate;
-(void)_noteDisplayIdentityDidChangeWithConfiguration:(id)arg0 ;
-(void)_openURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)_performDeferredInitialWindowUpdateForConnection;
-(void)_performSystemSnapshotWithActions:(id)arg0 ;
-(void)_prepareCommonStateForActionRespondingFromTransitionContext:(id)arg0 ;
-(void)_prepareForResume;
-(void)_prepareForSuspend;
-(void)_readySceneForConnection;
-(void)_refreshActivationConditions;
-(void)_registerBSActionResponderArray:(id)arg0 forKey:(id)arg1 ;
-(void)_registerSceneActionsHandlerArray:(id)arg0 forKey:(id)arg1 ;
-(void)_registerSceneComponent:(id)arg0 forKey:(id)arg1 ;
-(void)_registerSettingsDiffActionArray:(id)arg0 forKey:(id)arg1 ;
-(void)_removeInheritingScene:(id)arg0 ;
-(void)_scheduleSceneEventResponseWithResponseBlock:(id)arg0 ;
-(void)_setShouldHoldSceneEventResponses:(BOOL)arg0 ;
-(void)_synchronizeDrawing;
-(void)_synchronizeDrawingUsingFence:(id)arg0 ;
-(void)_synchronizeDrawingWithFence:(id)arg0 ;
-(void)_unregisterBSActionResponderArray:(id)arg0 ;
-(void)_unregisterSceneActionsHandlerArray:(id)arg0 ;
-(void)_unregisterSceneComponentForKey:(id)arg0 ;
-(void)_unregisterSettingsDiffActionArrayForKey:(id)arg0 ;
-(void)_updateSceneTraitsAndPushTraitsToScreen:(BOOL)arg0 ;
-(void)_updateSceneTraitsAndPushTraitsToScreen:(BOOL)arg0 callParentWillTransitionToTraitCollection:(BOOL)arg1 ;
-(void)_updateUIClientSettingsWithBlock:(id)arg0 ;
-(void)_updateUIClientSettingsWithTransitionBlock:(id)arg0 ;
-(void)_updateUIClientSettingsWithUITransitionBlock:(id)arg0 ;
-(void)_willRestoreInteractionStateForUserActivityManager:(id)arg0 ;
-(void)completeStateRestoration;
-(void)extendStateRestoration;
-(void)openURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 fromTransitionContext:(id)arg2 ;
-(void)scene:(id)arg0 didUpdateWithDiff:(id)arg1 transitionContext:(id)arg2 completion:(id)arg3 ;


@end


#endif