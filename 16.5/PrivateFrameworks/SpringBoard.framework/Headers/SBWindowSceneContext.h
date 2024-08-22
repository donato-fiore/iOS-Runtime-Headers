// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOWSCENECONTEXT_H
#define SBWINDOWSCENECONTEXT_H

@class UIScene, BNBannerController, CSCoverSheetViewController, NSString, SBFTraitsArbiter, SBFZStackResolver;
@protocol _UISceneComponentProviding, SBWindowSceneContextProviding, SBAssistantSceneControlling, FBSDisplayLayoutPublishing, SBTransientOverlayPresenting, SBUILockStateProviding;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"
#import "SBMedusaHostedKeyboardWindowController.h"
#import "SBAlertItemsController.h"
#import "SBDisplayAppInteractionEventSource.h"
#import "SBControlCenterController.h"
#import "SBCoverSheetPresentationManager.h"
#import "SBFloatingDockController.h"
#import "SBMainDisplayLayoutStateManager.h"
#import "SBSceneLayoutStateProvider.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBLockScreenManager.h"
#import "SBLockedPointerManager.h"
#import "SBModalAlertPresentationCoordinator.h"
#import "SBModalLibraryController.h"
#import "SBModalUIFluidDismissGestureManager.h"
#import "SBWindowScenePIPManager.h"
#import "SBReachabilitySceneController.h"
#import "SBRecordingIndicatorManager.h"
#import "SBSceneManager.h"
#import "SBSwitcherController.h"
#import "SBSystemApertureController.h"
#import "SBSystemGestureManager.h"
#import "SBSystemPointerInteractionManager.h"
#import "SBTraitsPipelineManager.h"
#import "SBTransientUIInteractionManager.h"
#import "SBWallpaperController.h"
#import "SBWindowHidingManager.h"

@interface SBWindowSceneContext : NSObject <_UISceneComponentProviding, SBWindowSceneContextProviding>

 {
    SBWindowScene *_sbWindowScene;
    SBMedusaHostedKeyboardWindowController *_medusaHostedKeyboardWindowController;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property (readonly, nonatomic) SBDisplayAppInteractionEventSource *appInteractionEventSource;
@property (retain, nonatomic) NSObject<SBAssistantSceneControlling> *assistantController; // ivar: _assistantController
@property (readonly, nonatomic) BNBannerController *bannerController; // ivar: _bannerController
@property (readonly, nonatomic) SBControlCenterController *controlCenterController;
@property (readonly, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FBSDisplayLayoutPublishing> *displayLayoutPublisher; // ivar: _displayLayoutPublisher
@property (retain, nonatomic) SBFloatingDockController *floatingDockController; // ivar: _floatingDockController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBMainDisplayLayoutStateManager *layoutStateManager; // ivar: _layoutStateManager
@property (retain, nonatomic) SBSceneLayoutStateProvider *layoutStateProvider; // ivar: _layoutStateProvider
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // ivar: _layoutStateTransitionCoordinator
@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockedPointerManager *lockedPointerManager; // ivar: _lockedPointerManager
@property (readonly, nonatomic) SBMedusaHostedKeyboardWindowController *medusaHostedKeyboardWindowController;
@property (readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (retain, nonatomic) SBModalLibraryController *modalLibraryController; // ivar: _modalLibraryController
@property (retain, nonatomic) SBModalUIFluidDismissGestureManager *modalUIFluidDismissGestureManager; // ivar: _modalUIFluidDismissGestureManager
@property (retain, nonatomic) SBWindowScenePIPManager *pictureInPictureManager; // ivar: _pictureInPictureManager
@property (retain, nonatomic) SBReachabilitySceneController *reachabilityController; // ivar: _reachabilityController
@property (retain, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager; // ivar: _recordingIndicatorManager
@property (readonly, nonatomic) SBSceneManager *sceneManager;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBSwitcherController *switcherController; // ivar: _switcherController
@property (retain, nonatomic) SBSystemApertureController *systemApertureController; // ivar: _systemApertureController
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager; // ivar: _systemGestureManager
@property (retain, nonatomic) SBSystemPointerInteractionManager *systemPointerInteractionManager; // ivar: _systemPointerInteractionManager
@property (retain, nonatomic) SBFTraitsArbiter *traitsArbiter; // ivar: _traitsArbiter
@property (retain, nonatomic) SBTraitsPipelineManager *traitsPipelineManager; // ivar: _traitsPipelineManager
@property (readonly, nonatomic) NSObject<SBTransientOverlayPresenting> *transientOverlayPresenter;
@property (retain, nonatomic) SBTransientUIInteractionManager *transientUIInteractionManager; // ivar: _transientUIInteractionManager
@property (retain, nonatomic, setter=setUILockStateProvider:) NSObject<SBUILockStateProviding> *uiLockStateProvider; // ivar: _uiLockStateProvider
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (retain, nonatomic) SBWindowHidingManager *windowHidingManager; // ivar: _windowHidingManager
@property (retain, nonatomic) SBFZStackResolver *zStackResolver; // ivar: _zStackResolver


-(id)initWithScene:(id)arg0 ;


@end


#endif