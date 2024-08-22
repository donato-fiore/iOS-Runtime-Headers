// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRANSIENTOVERLAYPRESENTATIONMANAGER_H
#define SBTRANSIENTOVERLAYPRESENTATIONMANAGER_H

@class NSMapTable, NSString;
@protocol SBIdleTimerCoordinating, SBIdleTimerProviding, SBButtonEventsHandler, SBTransientOverlayScenePresenterDelegate;

#import <Foundation/Foundation.h>

#import "SBWindowSceneManager.h"
#import "SBAlertItemsController.h"
#import "SBIdleTimerCoordinatorHelper.h"
#import "SBLockStateAggregator.h"
#import "SBReachabilityManager.h"
#import "SBBannerManager.h"
#import "SBCoverSheetPresentationManager.h"

@interface SBTransientOverlayPresentationManager : NSObject <SBIdleTimerCoordinating, SBIdleTimerProviding, SBButtonEventsHandler>

 {
    SBWindowSceneManager *_windowSceneManager;
    NSMapTable *_presentersByWindowScene;
    SBAlertItemsController *_alertItemsController;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBLockStateAggregator *_lockStateAggregator;
    SBReachabilityManager *_reachabilityManager;
}


@property (readonly, nonatomic) BOOL activePresentationPreventsDragAndDrop;
@property (retain, nonatomic) SBBannerManager *bannerManager; // ivar: _bannerManager
@property (readonly, nonatomic) BOOL canActivePresentationBecomeFirstResponder;
@property (readonly, nonatomic) BOOL canActivePresentationBecomeLocalFirstResponder;
@property (retain, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager; // ivar: _coverSheetPresentationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActivePresentation;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator;
@property (readonly, nonatomic) BOOL prefersStatusBarActivityItemVisible;
@property (readonly, nonatomic) NSInteger presentedViewControllerCount;
@property (weak, nonatomic) NSObject<SBTransientOverlayScenePresenterDelegate> *presenterDelegate; // ivar: _presenterDelegate
@property (readonly, nonatomic) BOOL shouldDisableControlCenter;
@property (readonly, nonatomic) BOOL shouldDisableCoverSheetGesture;
@property (readonly, nonatomic) BOOL shouldDisableSiri;
@property (readonly, nonatomic) BOOL shouldUseSceneBasedKeyboardFocusForActivePresentation;
@property (readonly) Class superclass;


-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hasActivePresentationForWindowScene:(id)arg0 ;
-(BOOL)hasActivePresentationFromBundleIdentifier:(id)arg0 ;
-(BOOL)hasActivePresentationFromProcess:(id)arg0 ;
-(BOOL)hasActiveSpotlightPresentation;
-(BOOL)hasPresentationAboveWindowLevel:(CGFloat)arg0 ;
-(BOOL)isPresentingViewController:(id)arg0 ;
-(BOOL)isTopmostPresentedViewController:(id)arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)defaultDisplayConfigurationForTransientOverlayPresentation;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)initWithWindowSceneManager:(id)arg0 alertItemsController:(id)arg1 lockStateAggregator:(id)arg2 reachabilityManager:(id)arg3 ;
-(id)topmostPresentedViewController;
-(id)transientOverlayPresenterForWindowScene:(id)arg0 ;
-(void)dealloc;
-(void)performDismissalRequest:(id)arg0 ;
-(void)performPresentationRequest:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif