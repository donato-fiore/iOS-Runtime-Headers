// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENEMANAGERCOORDINATOR_H
#define SBSCENEMANAGERCOORDINATOR_H

@class FBSceneManager, NSMutableDictionary, NSMutableSet, NSString, UIApplicationSceneDeactivationManager;
@protocol FBSceneManagerDelegate_Private, FBSceneManagerObserver, FBSceneDelegate, FBProcessManagerObserver, FBWorkspaceDelegate, FBSDisplayObserving, SBSceneManagerReferenceDelegate, BLSSceneDelegateWithActionHandlers;

#import <Foundation/Foundation.h>


@interface SBSceneManagerCoordinator : NSObject <FBSceneManagerDelegate_Private, FBSceneManagerObserver, FBSceneDelegate, FBProcessManagerObserver, FBWorkspaceDelegate, FBSDisplayObserving, SBSceneManagerReferenceDelegate, BLSSceneDelegateWithActionHandlers>

 {
    FBSceneManager *_sceneManager;
    NSMutableDictionary *_displayIdentityToReferenceMap;
    NSMutableSet *_workspaceIdentifiersToIgnore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIApplicationSceneDeactivationManager *sceneDeactivationManager; // ivar: _sceneDeactivationManager
@property (readonly) Class superclass;


+(id)mainDisplaySceneManager;
+(id)secureMainDisplaySceneManager;
+(id)sharedInstance;
-(id)_newLayoutStateSceneIdentityProviderWithDisplayIdentity:(id)arg0 ;
-(id)_newSceneIdentityProviderWithDisplayIdentity:(id)arg0 ;
-(id)_referenceForDisplayIdentity:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)_sceneManagerForDisplayIdentity:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)init;
-(id)sceneManager:(id)arg0 createDefaultTransitionContextForScene:(id)arg1 ;
-(id)sceneManagerForDisplayIdentity:(id)arg0 ;
-(id)sceneManagerForPersistenceIdentifier:(id)arg0 ;
-(void)_createSceneForApplication:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)addActionHandler:(id)arg0 forScene:(id)arg1 ;
-(void)dealloc;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;
-(void)enumerateSceneManagersWithBlock:(id)arg0 ;
-(void)processManager:(id)arg0 didAddProcess:(id)arg1 ;
-(void)processManager:(id)arg0 didRemoveProcess:(id)arg1 ;
-(void)registerSceneWorkspaceIdentifierToIgnore:(id)arg0 ;
-(void)removeActionHandler:(id)arg0 forScene:(id)arg1 ;
-(void)scene:(id)arg0 didApplyUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didCompleteUpdateWithContext:(id)arg1 error:(id)arg2 ;
-(void)scene:(id)arg0 didPrepareUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneManager:(id)arg0 clientDidConnectWithHandshake:(id)arg1 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;
-(void)sceneManagerDidInvalidateForReference:(id)arg0 ;
-(void)workspace:(id)arg0 didReceiveSceneRequestWithOptions:(id)arg1 completion:(id)arg2 ;


@end


#endif