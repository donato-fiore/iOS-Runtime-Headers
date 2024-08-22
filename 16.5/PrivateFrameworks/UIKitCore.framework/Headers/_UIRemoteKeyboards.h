// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIREMOTEKEYBOARDS_H
#define _UIREMOTEKEYBOARDS_H

@class NSHashTable, FBSScene, NSMutableArray, NSMutableSet, NSMapTable, NSString, NSXPCConnection, NSArray;
@protocol _UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardsEventObserverDelegate, _UIAssertionControllerSubject, _UIKeyboardArbiterClient, _UIKeyboardArbitration;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIWindowScene.h"
#import "UIScreen.h"
#import "_UIRemoteKeyboardsEventObserver.h"
#import "_UIAssertionController.h"
#import "_UIKeyboardChangedInformation.h"
#import "UIRemoteKeyboardWindow.h"

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardsEventObserverDelegate, _UIAssertionControllerSubject, _UIKeyboardArbiterClient>

 {
    NSHashTable *_windowControllers;
    int _ignoreLayoutSubviews;
    FBSScene *_requiredScene;
    CGFloat _requiredLevel;
    NSMutableArray *_activePIDs;
    UIView *_keyboardSnapshot;
    BOOL _expectingInitialState;
    int _hostedCount;
    BOOL _hadFocusBeforeOverlay;
    BOOL _deactivatedByControlCenter;
    BOOL _deactivatedBySystemAnimation;
    BOOL _resignActiveByControlCenter;
    BOOL _enqueuedWillEnterForegroundActions;
    UIWindowScene *_suppressedScene;
    BOOL _expectedSuppression;
    int _externalSuppression;
    int _recursionCheck;
    NSMutableSet *_pendingKeyboardGrabs;
    BOOL _takingSnapshot;
    BOOL _windowEnabled;
    UIScreen *_lastScreen;
    BOOL _disablingKeyboard;
    CGFloat _iavHeight;
    NSMapTable *_minimumKeyboardHeights;
    _UIRemoteKeyboardsEventObserver *_eventObserver;
    NSInteger _keyboardSource;
    NSString *_keyboardSceneIdentifierEnteringForeground;
    _UIAssertionController *_assertionController;
}


@property (retain) _UIKeyboardChangedInformation *backupState; // ivar: _backupState
@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly) NSArray *currentHostedPIDs;
@property BOOL currentKeyboard; // ivar: _currentKeyboard
@property (retain) _UIKeyboardChangedInformation *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property BOOL didSignalKeyboardChangedForCurrentKeyboard; // ivar: _didSignalKeyboardChangedForCurrentKeyboard
@property BOOL disableBecomeFirstResponder;
@property (nonatomic) BOOL enableMultiscreenHack; // ivar: _enableMultiscreenHack
@property (copy, nonatomic) NSString *focusedSceneIdentityStringOrIdentifier; // ivar: _focusedSceneIdentityStringOrIdentifier
@property (nonatomic) BOOL handlingRemoteEvent; // ivar: _handlingRemoteEvent
@property BOOL handlingViewServiceEvent; // ivar: _handlingViewServiceEvent
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat iavHeight;
@property (readonly, nonatomic) BOOL isFloating;
@property (readonly) BOOL keyboardActive;
@property (readonly, nonatomic) CGRect keyboardFrameIncludingRemoteIAV;
@property (readonly) BOOL keyboardVisible;
@property (readonly) UIRemoteKeyboardWindow *keyboardWindow;
@property (nonatomic) NSInteger lastEventSource; // ivar: _lastEventSource
@property (nonatomic) CGFloat localAppIAVHeight; // ivar: _localAppIAVHeight
@property (readonly) BOOL oldPathForSnapshot;
@property (readonly) NSObject<_UIKeyboardArbitration> *proxy;
@property (readonly) BOOL remoteKeyboardUndocked;
@property (readonly) FBSScene *requiredScene;
@property (readonly) BOOL sceneIsFullScreen;
@property (nonatomic) BOOL shouldFence; // ivar: _shouldFence
@property (nonatomic) BOOL snapshotting;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) BOOL updatingHeight; // ivar: _updatingHeight
@property (getter=isUpdatingKeyWindow) BOOL updatingKeyWindow; // ivar: _updatingKeyWindow


+(BOOL)enabled;
+(BOOL)useSystemService;
+(BOOL)wantsUnassociatedWindowSceneForKeyboardWindow;
+(id)createArbiterConnection;
+(id)keyboardWindowSceneForScreen:(id)arg0 create:(BOOL)arg1 ;
+(id)serviceName;
+(id)sharedRemoteKeyboards;
-(BOOL)_sceneFocusPermittedForApplication;
-(BOOL)_sceneFocusUpdatePermittedForWindow:(id)arg0 ;
-(BOOL)allowedToEnableKeyboardWindow;
-(BOOL)allowedToShowKeyboard;
-(BOOL)assertionActivationStateForType:(NSUInteger)arg0 ;
-(BOOL)currentStateHasEqualRect:(struct CGRect )arg0 andIAVPosition:(struct CGRect )arg1 ;
-(BOOL)didHandleKeyboardChange:(id)arg0 shouldConsiderSnapshottingKeyboard:(BOOL)arg1 isLocalEvent:(BOOL)arg2 ;
-(BOOL)hasAnyHostedViews;
-(BOOL)hasLocalMinimumKeyboardHeightForScene:(id)arg0 ;
-(BOOL)isOnScreenRotating;
-(BOOL)needsToShowKeyboardForViewServiceHostWindow:(id)arg0 ;
-(BOOL)needsToShowKeyboardForWindow:(id)arg0 ;
-(BOOL)refreshWithLocalMinimumKeyboardHeight:(CGFloat)arg0 forScene:(id)arg1 ;
-(BOOL)remoteKeyboardUndocked:(BOOL)arg0 ;
-(BOOL)shouldAllowInputViewsRestoredForId:(id)arg0 ;
-(BOOL)wantsToShowKeyboardForViewServiceHostWindow:(id)arg0 ;
-(BOOL)wantsToShowKeyboardForWindow:(id)arg0 ;
-(CGFloat)intersectionHeightForWindowScene:(id)arg0 ;
-(CGFloat)intersectionHeightForWindowScene:(id)arg0 isLocalMinimumHeightOut:(*BOOL)arg1 ignoreHorizontalOffset:(BOOL)arg2 ;
-(NSUInteger)localSceneCount;
-(id)_activeScreen;
-(id)init;
-(id)inputWindowRootViewController;
-(id)prepareForHostedWindowWithScene:(id)arg0 ;
-(id)vendKeyboardSuppressionAssertionForReason:(id)arg0 ;
-(id)vendKeyboardSuppressionAssertionForReason:(id)arg0 type:(NSUInteger)arg1 ;
-(id)viewHostForWindow:(id)arg0 ;
-(void)_lostWindow:(id)arg0 ;
-(void)_performOnDistributedControllersExceptSelf:(id)arg0 ;
-(void)_postInputSourceDidChangeNotificationForResponder:(id)arg0 ;
-(void)_updateEventSource:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(void)_updateEventSource:(NSInteger)arg0 options:(NSUInteger)arg1 responder:(id)arg2 ;
-(void)addHostedWindowView:(id)arg0 fromPID:(int)arg1 forScene:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)applicationDidSuspend:(id)arg0 ;
-(void)applicationKeyWindowDidChange:(id)arg0 ;
-(void)applicationKeyWindowWillChange:(id)arg0 ;
-(void)applicationResumedEventsOnly:(id)arg0 ;
-(void)applicationWillAddDeactivationReason:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)applicationWillResume:(id)arg0 ;
-(void)assertionActivationStateChangedToState:(BOOL)arg0 forType:(NSUInteger)arg1 ;
-(void)checkConnection;
-(void)checkState;
-(void)cleanSuppression;
-(void)clearKeyboardSceneIdentifierEnteringForeground:(id)arg0 ;
-(void)completeMoveKeyboardForWindow:(id)arg0 ;
-(void)completeTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)controllerDidLayoutSubviews:(id)arg0 ;
-(void)dealloc;
-(void)finishWithHostedWindow;
-(void)forceKeyboardAway;
-(void)ignoreLayoutNotifications:(id)arg0 ;
-(void)keyboardChangedCompleted;
-(void)peekApplicationEvent:(id)arg0 ;
-(void)performOnControllers:(id)arg0 ;
-(void)performOnDistributedControllers:(id)arg0 ;
-(void)performOnLocalDistributedControllers:(id)arg0 ;
-(void)prepareToMoveKeyboard:(struct CGRect )arg0 withIAV:(struct CGRect )arg1 isIAVRelevant:(BOOL)arg2 showing:(BOOL)arg3 notifyRemote:(BOOL)arg4 forScene:(id)arg5 ;
-(void)preserveKeyboardWithId:(id)arg0 ;
-(void)queue_activeProcessResignWithCompletion:(id)arg0 ;
-(void)queue_failedConnection:(id)arg0 ;
-(void)queue_getDebugInfoWithCompletion:(id)arg0 ;
-(void)queue_keyboardChanged:(id)arg0 onComplete:(id)arg1 ;
-(void)queue_keyboardChangedWithCompletion:(id)arg0 ;
-(void)queue_keyboardIAVChanged:(CGFloat)arg0 onComplete:(id)arg1 ;
-(void)queue_keyboardSuppressed:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)queue_keyboardTransition:(id)arg0 event:(NSUInteger)arg1 withInfo:(id)arg2 onComplete:(id)arg3 ;
-(void)queue_keyboardUIDidChange:(id)arg0 onComplete:(id)arg1 ;
-(void)queue_sceneBecameFocused:(id)arg0 withCompletion:(id)arg1 ;
-(void)queue_setKeyboardDisabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)registerController:(id)arg0 ;
-(void)reloadForSnapshotting;
-(void)resetSnapshotWithWindowCheck:(BOOL)arg0 ;
-(void)restoreKeyboardWithId:(id)arg0 ;
-(void)restorePreservedInputViewsIfNecessary;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneUpdated;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)setKeyboardSceneIdentifierEnteringForegroundForScene:(id)arg0 ;
-(void)setPlacement:(id)arg0 quietly:(BOOL)arg1 animated:(BOOL)arg2 generateSplitNotification:(BOOL)arg3 ;
-(void)setSuppressingKeyboard:(BOOL)arg0 forScene:(id)arg1 ;
-(void)setWindowEnabled:(BOOL)arg0 ;
-(void)setWindowEnabled:(BOOL)arg0 force:(BOOL)arg1 ;
-(void)setWindowLevel:(CGFloat)arg0 sceneLevel:(CGFloat)arg1 forResponder:(id)arg2 ;
-(void)signalToProxyKeyboardChanged:(id)arg0 onCompletion:(id)arg1 ;
-(void)startConnection;
-(void)startTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)stopConnection;
-(void)unregisterController:(id)arg0 ;
-(void)updateCurrentState:(id)arg0 ;
-(void)updateEventSource:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(void)updateEventSource:(NSInteger)arg0 options:(NSUInteger)arg1 responder:(id)arg2 ;
-(void)updateLastScreen:(id)arg0 ;
-(void)updateTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)userSelectedApp:(id)arg0 onCompletion:(id)arg1 ;
-(void)userSelectedProcessIdentifier:(int)arg0 withSceneIdentity:(id)arg1 onCompletion:(id)arg2 ;
-(void)willLock:(id)arg0 ;


@end


#endif