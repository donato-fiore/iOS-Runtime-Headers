// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPOTLIGHTTRANSIENTOVERLAYVIEWCONTROLLER_H
#define SBSPOTLIGHTTRANSIENTOVERLAYVIEWCONTROLLER_H

@class UIVisualEffectView, NSString, UIPanGestureRecognizer, UIView, UITapGestureRecognizer, FBSDisplayConfiguration;
@protocol SPUIRemoteSearchViewDelegate, SBTransientOverlayTransitionContextProviding, SBSpotlightTransientOverlayViewControllerDelegate;


#import "SBTransientOverlayViewController.h"
#import "SBSpotlightTransientOverlaySpotlightViewController.h"
#import "SBModalUIFluidDismissGestureManager.h"
#import "SBSpotlightSettings.h"

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <SPUIRemoteSearchViewDelegate>

 {
    UIVisualEffectView *_blurEffectView;
    SBSpotlightTransientOverlaySpotlightViewController *_spotlightViewController;
    BOOL _presentingInteractively;
    BOOL _performedAlongsideAnimations;
    id<SBTransientOverlayTransitionContextProviding> *_interactivePresentationContextProvider;
}


@property (nonatomic) NSUInteger animationCount; // ivar: _animationCount
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSpotlightTransientOverlayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger dismissalSource; // ivar: _dismissalSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBModalUIFluidDismissGestureManager *modalUIDismissGestureManager; // ivar: _modalUIDismissGestureManager
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (nonatomic) NSUInteger presentationSource; // ivar: _presentationSource
@property (retain, nonatomic) UIView *scalingView; // ivar: _scalingView
@property (retain, nonatomic) SBSpotlightSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissGestureRecognizer; // ivar: _tapToDismissGestureRecognizer
@property (weak, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration; // ivar: _targetDisplayConfiguration


-(BOOL)_canShowWhileLocked;
-(BOOL)_isReduceMotionOrTransparency;
-(BOOL)_isSpotlightVisible;
-(BOOL)allowsStackingOverlayContentAbove;
-(BOOL)dismissesForCoverSheetPresentation;
-(BOOL)dismissesSiriForPresentation;
-(BOOL)handleHomeButtonPress;
-(BOOL)isContentOpaque;
-(BOOL)prefersEmbeddedDisplayPresentation;
-(BOOL)prefersWindowHitTestingDisabled;
-(BOOL)preservesAppSwitcherDuringPresentationAndDismissal;
-(BOOL)preventsClippingToBounds;
-(BOOL)shouldAutorotate;
-(BOOL)shouldPreventDragAndDrop;
-(NSInteger)homeAffordanceSuppression;
-(NSInteger)preferredLockedGestureDismissalStyle;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredUnlockedGestureDismissalStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)hostedSceneIdentityTokens;
-(id)init;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)preferredDisplayLayoutElementIdentifier;
-(id)presentationDimmingViewColor;
-(id)sceneDeactivationPredicate:(SEL)arg0 ;
-(int)_preferredStatusBarVisibility;
-(void)_configureBlurFilterOnView:(id)arg0 ;
-(void)_handlePanGestureRecognizer:(id)arg0 ;
-(void)_handleTapToDismissGestureRecognizer:(id)arg0 ;
// -(void)_setSpotlightAlpha:(CGFloat)arg0 scale:(CGFloat)arg1 blurProgress:(CGFloat)arg2 translation:(struct CGPoint )arg3 withAnimationMode:(NSInteger)arg4 alongsideAnimationBlock:(id)arg5 completion:(unk)arg6  ;
// -(void)_setSpotlightPresented:(BOOL)arg0 withAnimationMode:(NSInteger)arg1 alongsideAnimationBlock:(id)arg2 completion:(unk)arg3  ;
-(void)beginInteractivePresentation;
-(void)dealloc;
-(void)dismissSearchView;
-(void)endInteractivePresentation:(BOOL)arg0 ;
-(void)handleGestureDismissal;
-(void)updateInteractivePresentationWithProgress:(CGFloat)arg0 translation:(CGFloat)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif