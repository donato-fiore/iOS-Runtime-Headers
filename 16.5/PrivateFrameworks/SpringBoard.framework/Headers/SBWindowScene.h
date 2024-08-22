// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOWSCENE_H
#define SBWINDOWSCENE_H

@class UIWindowScene, BNBannerController, CSCoverSheetViewController, NSString, SBFTraitsArbiter, SBFZStackResolver;
@protocol SBWindowSceneContextProviding, SBAssistantSceneControlling, SBWindowSceneDelegate, FBSDisplayLayoutPublishing, SBTransientOverlayPresenting, SBUILockStateProviding;


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
#import "SBMedusaHostedKeyboardWindowController.h"
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

@interface SBWindowScene : UIWindowScene <SBWindowSceneContextProviding>

 {
    BOOL _isInvalidating;
    BOOL _isInvalidated;
}


@property (readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property (readonly, nonatomic) SBDisplayAppInteractionEventSource *appInteractionEventSource;
@property (readonly, nonatomic) NSObject<SBAssistantSceneControlling> *assistantController;
@property (readonly, nonatomic) BNBannerController *bannerController;
@property (readonly, nonatomic) SBControlCenterController *controlCenterController;
@property (readonly, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<SBWindowSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<FBSDisplayLayoutPublishing> *displayLayoutPublisher;
@property (readonly, nonatomic) SBFloatingDockController *floatingDockController;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExternalDisplayWindowScene;
@property (readonly, nonatomic) BOOL isMainDisplayWindowScene;
@property (readonly, nonatomic) SBMainDisplayLayoutStateManager *layoutStateManager;
@property (readonly, nonatomic) SBSceneLayoutStateProvider *layoutStateProvider;
@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic) SBLockedPointerManager *lockedPointerManager;
@property (readonly, nonatomic) SBMedusaHostedKeyboardWindowController *medusaHostedKeyboardWindowController;
@property (readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (readonly, nonatomic) SBModalLibraryController *modalLibraryController;
@property (readonly, nonatomic) SBModalUIFluidDismissGestureManager *modalUIFluidDismissGestureManager;
@property (readonly, nonatomic) SBWindowScenePIPManager *pictureInPictureManager;
@property (readonly, nonatomic) SBReachabilitySceneController *reachabilityController;
@property (readonly, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (readonly, nonatomic) SBSceneManager *sceneManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBSwitcherController *switcherController;
@property (readonly, nonatomic) SBSystemApertureController *systemApertureController;
@property (readonly, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (readonly, nonatomic) SBSystemPointerInteractionManager *systemPointerInteractionManager;
@property (readonly, nonatomic) SBFTraitsArbiter *traitsArbiter;
@property (readonly, nonatomic) SBTraitsPipelineManager *traitsPipelineManager;
@property (readonly, nonatomic) NSObject<SBTransientOverlayPresenting> *transientOverlayPresenter;
@property (readonly, nonatomic) SBTransientUIInteractionManager *transientUIInteractionManager;
@property (readonly, nonatomic) NSObject<SBUILockStateProviding> *uiLockStateProvider;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly, nonatomic) SBWindowHidingManager *windowHidingManager;
@property (readonly, nonatomic) SBFZStackResolver *zStackResolver;


-(BOOL)_windowsIgnoreSceneClientOrientation;
-(BOOL)isInvalidated;
-(BOOL)isInvalidating;
-(id)_abstractWindowSceneDelegate;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toNeighboringDisplayWindowScene:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toNeighboringDisplayWindowScene:(id)arg1 ;
-(void)invalidate;
-(void)setInvalidating:(BOOL)arg0 ;


@end


#endif