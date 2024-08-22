// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPOTLIGHTMULTIPLEXINGVIEWCONTROLLER_H
#define SBSPOTLIGHTMULTIPLEXINGVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, _UILegibilitySettings, FBSDisplayConfiguration;
@protocol SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, FBSceneObserver, SBScrollToTopSceneProxyViewDelegate, SBDeviceApplicationSceneStatusBarStateObserver, SBMainDisplaySceneManagerObserver, SBMedusaHostedKeyboardWindowControllerObserver, SBScenePresenting, SBScenePresentingDelegate, BSInvalidatable, SBSpotlightMultiplexingViewControllerDelegate, UIScenePresenter, SPUIRemoteSearchViewDelegate;


#import "SBScrollToTopSceneProxyView.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBWindowSceneStatusBarSettingsAssertion.h"
#import "SBMedusaHostedKeyboardWindowLevelAssertion.h"

@interface SBSpotlightMultiplexingViewController : UIViewController <SBMultiplexedSpotlightDelegate, FBSceneManagerObserver, FBSceneObserver, SBScrollToTopSceneProxyViewDelegate, SBDeviceApplicationSceneStatusBarStateObserver, SBMainDisplaySceneManagerObserver, SBMedusaHostedKeyboardWindowControllerObserver, SBScenePresenting>

 {
    SBScrollToTopSceneProxyView *_scrollToTopView;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBWindowSceneStatusBarSettingsAssertion *_hideStatusBarAssertion;
    id<SBScenePresentingDelegate> *_inputUIPresentingDelegate;
    id<BSInvalidatable> *_inputUIPresenterAssertion;
    UIView *_inputUIView;
}


@property (nonatomic, getter=isActiveDelegate) BOOL activeDelegate; // ivar: _activeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSpotlightMultiplexingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *externalKeyboardView; // ivar: _externalKeyboardView
@property (readonly, nonatomic) BOOL externalKeyboardViewContainsKeyboard;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) UIView *keyboardHostView; // ivar: _keyboardHostView
@property (retain, nonatomic) NSObject<UIScenePresenter> *keyboardPresenter; // ivar: _keyboardPresenter
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSUInteger level;
@property (retain, nonatomic) SBMedusaHostedKeyboardWindowLevelAssertion *medusaHostedKeyboardWindowLevelAssertion; // ivar: _medusaHostedKeyboardWindowLevelAssertion
@property (nonatomic, getter=isSearchContentAvailable) BOOL searchContentAvailable; // ivar: _searchContentAvailable
@property (weak, nonatomic) NSObject<SPUIRemoteSearchViewDelegate> *spotlightDelegate; // ivar: _spotlightDelegate
@property (readonly, nonatomic) SBSpotlightHostedContentMetrics spotlightHostedContentMetrics;
@property (readonly) Class superclass;
@property (weak, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration; // ivar: _targetDisplayConfiguration
@property (nonatomic) BOOL wantsExternalKeyboardView; // ivar: _wantsExternalKeyboardView


+(BOOL)isShownWithinWindow:(id)arg0 ;
+(BOOL)isShownWithinWindowScene:(id)arg0 ;
+(CGFloat)effectiveSpotlightSearchFieldAvoidanceHeight;
+(id)sharedRemoteSearchViewController;
+(id)sharedRemoteSearchViewControllerIfExists;
+(id)spotlightSceneIdentityTokenIfActiveForeground;
-(BOOL)_isStatusBarEffectivelyHidden;
-(BOOL)_remoteSearchViewControllerHasKeyboardPresented;
-(BOOL)isVisibleOnScreen;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSUInteger)_appStatusBarSettingsLevelForSpotlightMultiplexingLevel:(NSUInteger)arg0 ;
-(NSUInteger)remoteSearchViewPresentationSource;
-(id)_spotlightSceneIdentifier;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)parentSceneIdentityToken;
-(id)presentScene:(id)arg0 viewControllerBuilderBlock:(id)arg1 ;
-(id)sceneHandle;
-(void)_acquireInputUIPresentingAssertionIfNecessary;
-(void)_clearStatusBarAssertion;
-(void)_configureExternalKeyboardView;
-(void)_configureExternalKeyboardView:(BOOL)arg0 ;
-(void)_configureSceneObservation:(BOOL)arg0 forScene:(id)arg1 ;
-(void)_configureStatusBarScrollToTopView;
-(void)_evaluateSearchContentAvailabilityForScene:(id)arg0 ;
-(void)_invalidateInputUIPresentingAssertion;
-(void)_notifyExternalKeyboardViewContainsKeyboard:(BOOL)arg0 ;
-(void)_registerStatusBarScrollToTopView;
-(void)_registerStatusBarScrollToTopViewWithWindow:(id)arg0 ;
-(void)_unregisterStatusBarScrollToTopView;
-(void)_unregisterStatusBarScrollToTopViewWithWindow:(id)arg0 ;
-(void)_updateStatusBarAssertion;
-(void)cancel;
-(void)dealloc;
-(void)didBecomeActiveDelegate;
-(void)didResignActiveDelegate:(BOOL)arg0 ;
-(void)dismissSearchView;
-(void)invalidate;
-(void)keyboardLayersDidChange:(id)arg0 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarAlphaTo:(CGFloat)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarHiddenTo:(BOOL)arg1 withAnimation:(NSInteger)arg2 ;
-(void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)arg0 rootedAtWindow:(id)arg1 ;
-(void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)arg0 rootedAtWindow:(id)arg1 ;
-(void)searchViewContentAvailabilityDidChange;
-(void)searchViewKeyboardPresentationStateDidChange;
-(void)setPresentingDelegate:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif