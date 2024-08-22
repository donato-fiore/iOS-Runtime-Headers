// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDARBITERCLIENTINPUTDESTINATION_H
#define _UIKEYBOARDARBITERCLIENTINPUTDESTINATION_H

@class UIKeyboardArbiterClient, NSString, NSMutableSet;


#import "UIWindowScene.h"
#import "UIScreen.h"

@interface _UIKeyboardArbiterClientInputDestination : UIKeyboardArbiterClient {
    BOOL _deactivatedBySystemAnimation;
    BOOL _resignActiveByControlCenter;
    BOOL _hadFocusBeforeOverlay;
    UIWindowScene *_suppressedScene;
    int _hostedCount;
    UIScreen *_lastScreen;
    BOOL _resigningByOtherApp;
    NSString *_keyboardSceneIdentifierEnteringForeground;
}


@property (retain, nonatomic) NSMutableSet *activePIDs; // ivar: _activePIDs
@property (copy, nonatomic) NSString *focusedSceneIdentityStringOrIdentifier; // ivar: _focusedSceneIdentityStringOrIdentifier
@property (retain, nonatomic) NSMutableSet *pendingKeyboardGrabs; // ivar: _pendingKeyboardGrabs
@property (nonatomic) BOOL updatingKeyWindow; // ivar: _updatingKeyWindow


+(id)currentBundleIdentifier;
-(BOOL)_didHandleKeyboardClientChange:(id)arg0 shouldConsiderSnapshottingKeyboard:(BOOL)arg1 isLocalEvent:(BOOL)arg2 ;
-(BOOL)_sceneFocusPermittedForApplication;
-(BOOL)_sceneFocusUpdatePermittedForWindow:(id)arg0 ;
-(BOOL)allowedToEnableKeyboardWindow;
-(BOOL)allowedToShowKeyboard;
-(BOOL)hasWindowHostingPID:(int)arg0 ;
-(BOOL)isHostedInAnotherProcess;
-(BOOL)needsToShowKeyboard;
-(BOOL)needsToShowKeyboardForViewServiceHost;
-(BOOL)shouldIgnoreInputDestinationChange:(BOOL)arg0 withIAVHeight:(CGFloat)arg1 ;
-(BOOL)shouldSnapshot;
-(BOOL)wantsToShowKeyboard;
-(BOOL)wantsToShowKeyboardForViewServiceHost;
-(NSUInteger)localSceneCount;
-(id)_activeScreen;
-(id)currentHostedPIDs;
-(id)init;
-(id)prepareForHostedWindowWithScene:(id)arg0 ;
-(struct CGRect )keyboardFrameIncludingRemoteIAV;
-(void)_layoutKeyboardViews:(id)arg0 ;
-(void)_preserveInputViewsForClientChange:(BOOL)arg0 snapshotIfNecessary:(BOOL)arg1 ;
-(void)addWindowHostingPID:(int)arg0 ;
-(void)applicationKeyWindowDidChange:(id)arg0 ;
-(void)clearKeyboardSceneIdentifierEnteringForeground:(id)arg0 ;
-(void)completeMoveKeyboard;
-(void)configureArbiterCommunication:(id)arg0 ;
-(void)didBecomeActive:(id)arg0 ;
-(void)didFailArbiterConnection;
-(void)didRemoveDeactivationReason:(id)arg0 ;
-(void)didSuspend:(id)arg0 ;
-(void)finishWithHostedWindow;
-(void)handleKeyboardUIDidChange:(id)arg0 ;
-(void)handleKeyboardUITrackingChange:(id)arg0 ;
-(void)inputDestinationDidChange:(BOOL)arg0 withIAVHeight:(CGFloat)arg1 isIAVRelevant:(BOOL)arg2 notifyRemote:(BOOL)arg3 forScene:(id)arg4 ;
-(void)peekApplicationEvent:(id)arg0 ;
-(void)queue_activeProcessResignWithCompletion:(id)arg0 ;
-(void)queue_keyboardChanged:(id)arg0 onComplete:(id)arg1 ;
-(void)queue_keyboardUIDidChange:(id)arg0 onComplete:(id)arg1 ;
-(void)queue_sceneBecameFocused:(id)arg0 withCompletion:(id)arg1 ;
-(void)queue_setKeyboardDisabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)removeWindowHostingPID:(int)arg0 ;
-(void)resignFirstResponderIfNeeded;
-(void)restorePreservedInputViewsIfNecessary;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)setCurrentClientState:(id)arg0 ;
-(void)setKeyboardSceneIdentifierEnteringForegroundForScene:(id)arg0 ;
-(void)setSnapshotting:(BOOL)arg0 ;
-(void)setSuppressingKeyboard:(BOOL)arg0 forScene:(id)arg1 ;
-(void)setWindowEnabled:(BOOL)arg0 ;
-(void)setWindowEnabled:(BOOL)arg0 force:(BOOL)arg1 ;
-(void)setWindowHostingPID:(int)arg0 active:(BOOL)arg1 ;
-(void)signalToProxyKeyboardChanged:(id)arg0 onCompletion:(id)arg1 ;
-(void)startConnection;
-(void)startConnectionWithCompletion:(id)arg0 ;
-(void)stopConnection;
-(void)updateWindowState;
-(void)userSelectedApp:(id)arg0 onCompletion:(id)arg1 ;
-(void)willAddDeactivationReason:(id)arg0 ;
-(void)willResignActive:(id)arg0 ;
-(void)willResume:(id)arg0 ;


@end


#endif