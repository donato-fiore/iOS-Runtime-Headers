// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMUISCENECONTROLLER_H
#define SBSYSTEMUISCENECONTROLLER_H

@class FBProcess, NSMutableArray, NSMapTable, RBSProcessIdentity, NSString, SBFSceneWorkspaceController, SBFSceneWorkspaceDefaultDelegate;
@protocol FBProcessManagerObserver, FBProcessObserver, SBScenePresentingDelegate, SBFSceneWorkspaceControlling, BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBSystemUISceneController : NSObject <FBProcessManagerObserver, FBProcessObserver, SBScenePresentingDelegate, SBFSceneWorkspaceControlling, BSDescriptionProviding>

 {
    FBProcess *_clientProcess;
    NSUInteger _sceneIDGeneration;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    NSMutableArray *_sceneControllers;
    NSMapTable *_presentersMap;
    NSMapTable *_sceneControllersByWindowScene;
}


@property (readonly, nonatomic) RBSProcessIdentity *clientProcessIdentity; // ivar: _clientProcessIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *jobLabel; // ivar: _jobLabel
@property (readonly, nonatomic) CGFloat level; // ivar: _level
@property (readonly, nonatomic) NSInteger sceneVendingPolicy; // ivar: _sceneVendingPolicy
@property (readonly, nonatomic) SBFSceneWorkspaceController *sceneWorkspaceController; // ivar: _sceneWorkspaceController
@property (retain, nonatomic) SBFSceneWorkspaceDefaultDelegate *sceneWorkspaceControllerDelegate; // ivar: _sceneWorkspaceControllerDelegate
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *traitsRole; // ivar: _traitsRole


+(id)_setupInfo;
-(BOOL)enumerateScenesWithBlock:(id)arg0 ;
-(id)__newSceneIdentifierForWindowScene:(id)arg0 ;
-(id)_newAppSceneRequestOptionsForWindowScene:(id)arg0 withBlueprintOptions:(id)arg1 ;
-(id)_newSceneControllerForWindowScene:(id)arg0 sceneRequestOptions:(id)arg1 traitsRole:(id)arg2 level:(CGFloat)arg3 ;
-(id)_newSceneControllerForWindowScene:(id)arg0 withSceneRequestOptions:(id)arg1 ;
-(id)_orderedPresenters;
-(id)addPresenter:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSceneWorkspaceIdentifier:(id)arg0 clientProcessIdentity:(id)arg1 sceneVendingPolicy:(NSInteger)arg2 traitsRole:(id)arg3 jobLabel:(id)arg4 level:(CGFloat)arg5 ;
-(id)sceneFromIdentityToken:(id)arg0 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg0 ;
-(id)sceneWorkspaceControllerForProcessIdentity:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_evaluateAvailablePresenters:(id)arg0 forSceneControllers:(id)arg1 ;
-(void)_invalidateSceneControllersForWindowScene:(id)arg0 ;
-(void)_setNeedsPresentersEvaluation;
-(void)createSceneForProcessIdentity:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg0 processIdentity:(id)arg1 completion:(id)arg2 ;
-(void)processDidExit:(id)arg0 ;
-(void)processManager:(id)arg0 didAddProcess:(id)arg1 ;
-(void)processManager:(id)arg0 didRemoveProcess:(id)arg1 ;
-(void)scenePresenterVisibilityDidChange:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif