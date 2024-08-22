// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSINGLESCENECONTROLLER_H
#define SBSINGLESCENECONTROLLER_H

@class RBSProcessIdentity, NSString, FBScene, UISceneRequestOptions, SBFSceneWorkspaceController, FBSDisplayConfiguration;
@protocol FBSceneObserver, SBSceneSettingsUpdaterObserver, BSInvalidatable, BSDescriptionProviding, UIScenePresenter, SBScenePresenting;

#import <Foundation/Foundation.h>

#import "SBSceneSettingsUpdater.h"
#import "SBSystemUISceneDefaultPresenter.h"
#import "SBTraitsSceneParticipantDelegate.h"
#import "SBTraitsOrientedContentViewController.h"
#import "SBSingleSceneWindow.h"

@interface SBSingleSceneController : NSObject <FBSceneObserver, SBSceneSettingsUpdaterObserver, BSInvalidatable, BSDescriptionProviding>

 {
    RBSProcessIdentity *_clientIdentity;
    id<BSInvalidatable> *_settingsUpdaterObserverInvalidatable;
    SBSceneSettingsUpdater *_sceneSettingsUpdater;
    SBSystemUISceneDefaultPresenter *_defaultPresenter;
    id<UIScenePresenter> *_uiScenePresenter;
    SBTraitsSceneParticipantDelegate *_lastSceneTraitsParticipantDelegate;
    SBTraitsOrientedContentViewController *_orientedSceneViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBSingleSceneWindow *hostingWindow;
@property (weak, nonatomic) NSObject<SBScenePresenting> *presenter; // ivar: _presenter
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (nonatomic, getter=isSceneActive) BOOL sceneActive;
@property (nonatomic, getter=isSceneContentVisible) BOOL sceneContentVisible; // ivar: _sceneContentVisible
@property (readonly, nonatomic) UISceneRequestOptions *sceneOptions; // ivar: _sceneOptions
@property (readonly, nonatomic) NSString *scenePersistentIdentifier;
@property (readonly, nonatomic) SBFSceneWorkspaceController *sceneWorkspaceController; // ivar: _sceneWorkspaceController
@property (nonatomic) BOOL shouldActivateForDisplayConfiguration; // ivar: _shouldActivateForDisplayConfiguration
@property (nonatomic) BOOL shouldActivateUponClientConnection; // ivar: _shouldActivateUponClientConnection
@property (nonatomic) BOOL shouldBeKeptActiveWhileForeground; // ivar: _shouldBeKeptActiveWhileForeground
@property (nonatomic) BOOL shouldForegroundForDisplayConfiguration; // ivar: _shouldForegroundForDisplayConfiguration
@property (readonly) Class superclass;
@property (retain, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration; // ivar: _targetDisplayConfiguration
@property (readonly, nonatomic) NSString *traitsRole; // ivar: _traitsRole
@property (nonatomic) BOOL visible; // ivar: _visible
@property (nonatomic, getter=usesWindowHosting) BOOL windowHosting; // ivar: _windowHosting


-(BOOL)_isClientProcessRunning;
-(id)_newActivationContext;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithTargetDisplayConfiguration:(id)arg0 sceneWorkspaceController:(id)arg1 sceneRequestOptions:(id)arg2 clientIdentity:(id)arg3 traitsRole:(id)arg4 level:(CGFloat)arg5 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_dismissScene;
-(void)_evaluateSceneActivationState;
-(void)_evaluateSceneForegroundState;
-(void)_presentScene;
-(void)dealloc;
-(void)didUpdateSceneTraitsDelegate:(id)arg0 ;
-(void)invalidate;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;


@end


#endif