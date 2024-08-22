// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENEMANAGER_H
#define SBSCENEMANAGER_H

@class FBSceneManager, NSMapTable, BSCopyingCacheSet, NSCountedSet, NSHashTable, NSMutableSet, NSSet, NSString, FBSDisplayIdentity;
@protocol FBSceneManagerObserver, FBSceneDelegate, FBSceneManagerDelegate_Private, BSDescriptionProviding, BSInvalidatable, SBApplicationSceneHandleProviding, SBSceneLayoutChildTransactionProviding, SBApplicationSceneIdentityProviding;

#import <Foundation/Foundation.h>

#import "SBSceneManagerReference.h"
#import "SBPolicyAggregator.h"
#import "SBRootWindowScenePresentationBinder.h"
#import "SBSceneSnapshotRequestor.h"
#import "SBLayoutStateManager.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBWindowScene.h"
#import "SBLayoutState.h"

@interface SBSceneManager : NSObject <FBSceneManagerObserver, FBSceneDelegate, FBSceneManagerDelegate_Private, BSDescriptionProviding, BSInvalidatable, SBApplicationSceneHandleProviding, SBSceneLayoutChildTransactionProviding>

 {
    NSInteger _state;
    FBSceneManager *_sceneManager;
    SBSceneManagerReference *_selfReference;
    BOOL _hidden;
    SBPolicyAggregator *_policyAggregator;
    SBRootWindowScenePresentationBinder *_presentationBinder;
    SBSceneSnapshotRequestor *_snapshotRequestor;
    SBLayoutStateManager *_layoutStateManager;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    NSMapTable *_persistentMapSceneIdentityToSceneHandle;
    NSMapTable *_transientMapSceneIdentityToSceneHandle;
    BSCopyingCacheSet *_boundScenes;
    BSCopyingCacheSet *_boundSingleScenes;
    BSCopyingCacheSet *_boundPointerUIScenes;
    BSCopyingCacheSet *_allScenes;
    BSCopyingCacheSet *_daemonScenes;
    BSCopyingCacheSet *_workspaceScenes;
    BSCopyingCacheSet *_externalApplicationSceneHandles;
    BSCopyingCacheSet *_externalForegroundApplicationSceneHandles;
    BSCopyingCacheSet *_reportedExternalForegroundApplicationSceneHandles;
    NSCountedSet *_assertedBackgroundScenes;
    NSHashTable *_observers;
    BOOL _layoutControllerCreationReentrancyGuard;
    NSMutableSet *_childTransactionProviders;
    id<SBApplicationSceneIdentityProviding> *_sceneIdentityProvider;
}


@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
@property (readonly, nonatomic) SBWindowScene *_windowScene;
@property (readonly, nonatomic) NSSet *boundPointerUIScenes;
@property (readonly, nonatomic) SBLayoutState *currentLayoutState; // ivar: _currentLayoutState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) SBPolicyAggregator *policyAggregator;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(Class)_applicationSceneHandleClass;
-(BOOL)_handleAction:(id)arg0 forScene:(id)arg1 ;
-(BOOL)_shouldAutoHostScene:(id)arg0 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg0 updatedClientSettingsDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(id)_appSceneClientSettingsDiffInspector;
-(id)_sbWindowScene;
-(id)allScenes;
-(id)assertBackgroundedStatusForScenes:(id)arg0 ;
-(id)childTransactionsForTransitionRequest:(id)arg0 ;
-(id)daemonScenes;
-(id)debugNameForSceneSnapshotRequestor:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg0 ;
-(id)existingSceneHandleForScene:(id)arg0 ;
-(id)existingSceneHandleForSceneIdentity:(id)arg0 ;
-(id)externalApplicationSceneHandles;
-(id)externalForegroundApplicationSceneHandles;
-(id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg0 ;
-(id)initWithReference:(id)arg0 sceneIdentityProvider:(id)arg1 presentationBinder:(id)arg2 ;
-(id)initWithReference:(id)arg0 sceneIdentityProvider:(id)arg1 presentationBinder:(id)arg2 snapshotBehavior:(NSUInteger)arg3 ;
-(id)newSceneIdentifierForBundleIdentifier:(id)arg0 ;
-(id)newSceneIdentifierForBundleIdentifier:(id)arg0 supportsMultiwindow:(BOOL)arg1 ;
-(id)newSceneIdentityForApplication:(id)arg0 ;
-(id)preventTakingSupplementalSnapshotsForBackgroundingScenesWithReason:(id)arg0 ;
-(id)sceneIdentifierForBundleIdentifier:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 createPrimaryIfRequired:(BOOL)arg1 sceneSessionRole:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg0 excludingIdentifiers:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 allowSceneCreation:(BOOL)arg4 visibleIdentifiers:(id)arg5 preferredDisplay:(id)arg6 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 visibleIdentifiers:(id)arg4 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 sceneSessionRole:(id)arg3 ;
-(id)sceneManager:(id)arg0 createDefaultTransitionContextForScene:(id)arg1 ;
-(id)sceneSnapshotRequestContextForSceneSnapshotRequestor:(id)arg0 ;
-(id)sceneSnapshotRequestStrategyForSceneSnapshotRequestor:(id)arg0 ;
-(id)scenesForWorkspaceWithID:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)transientApplicationSceneHandlesForApplication:(id)arg0 ;
-(id)windowScene;
-(void)_addReportedForegroundExternalApplicationSceneHandle:(id)arg0 ;
-(void)_addScene:(id)arg0 ;
-(void)_addSceneToPresentationBinder:(id)arg0 trackedCollection:(id)arg1 ;
-(void)_doObserverCalloutWithBlock:(id)arg0 ;
-(void)_noteDidChangeToVisibility:(NSUInteger)arg0 previouslyExisted:(BOOL)arg1 forScene:(id)arg2 ;
-(void)_noteDidCommitUpdateForScene:(id)arg0 ;
-(void)_noteObserversDidInvalidate;
-(void)_prepareToRemoveScene:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)_reconnectSceneRemnant:(id)arg0 forProcess:(id)arg1 sceneManager:(id)arg2 ;
-(void)_removeReportedForegroundExternalApplicationSceneHandle:(id)arg0 ;
-(void)_removeScene:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)_removeSceneFromPresentationBinder:(id)arg0 trackedCollection:(id)arg1 ;
-(void)_scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)_scene:(id)arg0 interceptUpdateWithNewSettings:(id)arg1 ;
-(void)_scene:(id)arg0 willUpdateWithSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)_updateStateForScene:(id)arg0 withSettings:(id)arg1 ;
-(void)_userInterfaceStyleArbiterStyleChanged:(id)arg0 ;
-(void)addChildTransactionProvider:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addPointerUISceneToPresentationBinder:(id)arg0 ;
-(void)addSingleSceneToPresentationBinder:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)moveScene:(id)arg0 toSceneManager:(id)arg1 ;
-(void)removeChildTransactionProvider:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePointerUISceneFromPresentationBinder:(id)arg0 ;
-(void)removeSingleSceneFromPresentationBinder:(id)arg0 ;
-(void)scene:(id)arg0 didApplyUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didCompleteUpdateWithContext:(id)arg1 error:(id)arg2 ;
-(void)scene:(id)arg0 didPrepareUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;
-(void)updatePresentationBinder:(id)arg0 ;


@end


#endif