// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMSHELLEXTERNALDISPLAYSCENEMANAGER_H
#define SBSYSTEMSHELLEXTERNALDISPLAYSCENEMANAGER_H

@class UIApplicationSceneClientSettingsDiffInspector, NSString;
@protocol SBLayoutStateSceneIdentityProviderDataSource, SBSuspendedUnderLockManagerDelegate;


#import "SBSceneManager.h"
#import "SBSuspendedUnderLockManager.h"
#import "SBMainDisplayLayoutStateManager.h"
#import "SBWindowScene.h"
#import "SBMainDisplayLayoutState.h"

@interface SBSystemShellExternalDisplaySceneManager : SBSceneManager <SBLayoutStateSceneIdentityProviderDataSource, SBSuspendedUnderLockManagerDelegate>

 {
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
}


@property (readonly, nonatomic) SBMainDisplayLayoutStateManager *_layoutStateManager;
@property (readonly, nonatomic) SBWindowScene *_windowScene;
@property (readonly, nonatomic) SBMainDisplayLayoutState *currentLayoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock;


-(BOOL)_shouldAutoHostScene:(id)arg0 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg0 updatedClientSettingsDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(BOOL)suspendedUnderLockManager:(id)arg0 shouldPreventSuspendUnderLockForScene:(id)arg1 ;
-(BOOL)suspendedUnderLockManager:(id)arg0 shouldPreventUnderLockForScene:(id)arg1 ;
-(id)_appSceneClientSettingsDiffInspector;
-(id)externalApplicationSceneHandles;
-(id)initWithReference:(id)arg0 sceneIdentityProvider:(id)arg1 presentationBinder:(id)arg2 ;
-(id)initWithReference:(id)arg0 sceneIdentityProvider:(id)arg1 presentationBinder:(id)arg2 snapshotBehavior:(NSUInteger)arg3 ;
-(id)layoutStateManager;
-(id)newSceneIdentifierForBundleIdentifier:(id)arg0 supportsMultiwindow:(BOOL)arg1 ;
-(id)runningApplicationScenes:(id)arg0 ;
-(id)sceneSnapshotRequestStrategyForSceneSnapshotRequestor:(id)arg0 ;
-(id)suspendedUnderLockManager:(id)arg0 sceneHandleForScene:(id)arg1 ;
-(id)suspendedUnderLockManagerDisplayConfiguration:(id)arg0 ;
-(id)suspendedUnderLockManagerVisibleScenes:(id)arg0 ;
-(id)transientApplicationSceneHandlesForApplication:(id)arg0 ;
-(void)_doObserverCalloutWithBlock:(id)arg0 ;
-(void)_noteDidChangeToVisibility:(NSUInteger)arg0 previouslyExisted:(BOOL)arg1 forScene:(id)arg2 ;
-(void)_noteDidCommitUpdateForScene:(id)arg0 ;
-(void)_reconnectSceneRemnant:(id)arg0 forProcess:(id)arg1 sceneManager:(id)arg2 ;
-(void)_scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)_scene:(id)arg0 interceptUpdateWithNewSettings:(id)arg1 ;
-(void)_scene:(id)arg0 willUpdateWithSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)dealloc;


@end


#endif