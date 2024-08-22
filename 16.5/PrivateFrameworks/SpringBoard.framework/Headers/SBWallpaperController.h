// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWALLPAPERCONTROLLER_H
#define SBWALLPAPERCONTROLLER_H

@class UIWindow, UIViewController, UIView, NSMutableSet, NSMapTable, PTSingleTestRecipe, PBUIWallpaperViewController, FCActivityManager, PRSService, PRSPosterConfiguration, NSString, UITraitCollection, SBFWallpaperAggdLogger, PBUIWallpaperConfigurationManager, SBFWallpaperCoreAnalyticsLogger, UIGestureRecognizer;
@protocol PBUILegibilitySettingsProviderDelegate, SBUIActiveOrientationObserver, _UISettingsKeyObserver, PBUIWallpaperPresentingDelegate, PBUIWallpaperReachabilityCoordinating, BSDescriptionProviding, SBWallpaperServerDelegate, PBUIWallpaperViewDelegate, FCActivityManagerObserving, SBFBacklightEnvironmentSceneProviding, UIWindowDelegate, CSWallpaperSnapshotUpdating, PBUILegacyWallpaperPresenting, PBUIWallpaperLegibilityProviding, BSInvalidatable, PBUIIrisWallpaperPlaying, PBUIWallpaperPresenting;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBWallpaperController : NSObject <PBUILegibilitySettingsProviderDelegate, SBUIActiveOrientationObserver, _UISettingsKeyObserver, PBUIWallpaperPresentingDelegate, PBUIWallpaperReachabilityCoordinating, BSDescriptionProviding, SBWallpaperServerDelegate, PBUIWallpaperViewDelegate, FCActivityManagerObserving, SBFBacklightEnvironmentSceneProviding, UIWindowDelegate, CSWallpaperSnapshotUpdating, PBUILegacyWallpaperPresenting, PBUIWallpaperLegibilityProviding>

 {
    UIWindow *_wallpaperWindow;
    UIViewController *_rootWallpaperViewController;
    UIView *_wallpaperContainerView;
    UIView *_wallpaperOverlayContainerView;
    NSInteger _displayedVariant;
    NSMutableSet *_activeOrientationSources;
    NSMapTable *_orientationProviders;
    PTSingleTestRecipe *_migrationTestRecipe;
    PTSingleTestRecipe *_reloadTestRecipe;
    PBUIWallpaperViewController *_wallpaperViewController;
    FCActivityManager *_activityManager;
    PRSService *_posterBoardService;
    PRSPosterConfiguration *_activeLockScreenPosterConfiguration;
    PRSPosterConfiguration *_activeHomeScreenPosterConfiguration;
    BOOL _wallpaperObscured;
}


@property (readonly, nonatomic, getter=_WallpaperOrientationNotForYou) NSInteger _orientation; // ivar: _orientation
@property (readonly, nonatomic) NSInteger activeOrientationSource;
@property (nonatomic) NSInteger activeVariant;
@property (retain, nonatomic) NSObject<BSInvalidatable> *batterySaverAnimationAssertion; // ivar: _batterySaverAnimationAssertion
@property (readonly, copy, nonatomic) NSString *cachingIdentifier; // ivar: _cachingIdentifier
@property (readonly, nonatomic) ? currentHomescreenStyleTransitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat effectiveReachabilityYOffset;
@property (retain, nonatomic) UITraitCollection *fakeBlurViewOverrideTraitCollection; // ivar: _fakeBlurViewOverrideTraitCollection
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat homescreenWallpaperScale;
@property (readonly, nonatomic) NSObject<PBUIIrisWallpaperPlaying> *irisWallpaperPlayer;
@property (readonly, nonatomic) NSObject<PBUIWallpaperLegibilityProviding> *legibilityProvider; // ivar: _wallpaperLegibilityProvider
@property (readonly, nonatomic) CGFloat lockscreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumHomescreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumLockscreenWallpaperScale;
@property (readonly, nonatomic) NSObject<PBUIWallpaperPresenting> *presenter; // ivar: _wallpaperPresenter
@property (readonly, nonatomic) NSUInteger significantEventsCounter;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFWallpaperAggdLogger *wallpaperAggdLogger; // ivar: _wallpaperAggdLogger
@property (readonly, nonatomic) PBUIWallpaperConfigurationManager *wallpaperConfigurationManager; // ivar: _wallpaperConfigurationManager
@property (retain, nonatomic) SBFWallpaperCoreAnalyticsLogger *wallpaperCoreAnalyticsLogger; // ivar: _wallpaperCoreAnalyticsLogger
@property (readonly, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer;
@property (weak, nonatomic) NSObject<PBUIWallpaperPresentingDelegate> *wallpaperPresentingDelegate; // ivar: _wallpaperPresentingDelegate
@property (retain, nonatomic) NSObject<BSInvalidatable> *wallpaperStyleAnimationAssertion; // ivar: _wallpaperStyleAnimationAssertion
@property (nonatomic) CGFloat windowLevel;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


+(id)accessAuthenticator;
+(id)sharedInstance;
-(BOOL)_isAcceptingOrientationChangesFromSource:(NSInteger)arg0 ;
-(BOOL)homeScreenPosterMirrorsLock;
-(BOOL)isWindowIgnoredForReachability:(id)arg0 ;
-(BOOL)posterHandlesWakeAnimation;
-(BOOL)removeWallpaperStyleForPriority:(NSInteger)arg0 forVariant:(NSInteger)arg1 withAnimationFactory:(id)arg2 ;
-(BOOL)setWallpaperStyle:(NSInteger)arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)setWallpaperStyleTransitionState:(struct ? )arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)updateIrisWallpaperForStaticMode;
-(CGFloat)contrastForVariant:(NSInteger)arg0 ;
-(CGFloat)contrastInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(NSInteger)defaultInterfaceOrientationForSource:(NSInteger)arg0 ;
-(NSInteger)wallpaperPresenter:(id)arg0 requestsOrientationWithRefresh:(BOOL)arg1 ;
-(id)_wallpaperViewForVariant:(NSInteger)arg0 ;
-(id)_window;
-(id)activeInterfaceOrientationSourcesDescriptions;
-(id)averageColorForVariant:(NSInteger)arg0 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 withSmudgeRadius:(CGFloat)arg2 ;
-(id)createWallpaperFloatingViewForReason:(id)arg0 ignoreReplica:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)embeddedWindowScene;
-(id)init;
-(id)initWithWallpaperConfigurationManager:(id)arg0 ;
-(id)initWithWallpaperConfigurationManager:(id)arg0 cachingIdentifier:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 orientation:(NSInteger)arg1 variant:(NSInteger)arg2 wallpaperConfigurationManager:(id)arg3 cachingIdentifier:(id)arg4 ;
-(id)legibilitySettingsForVariant:(NSInteger)arg0 ;
-(id)newFakeBlurViewForVariant:(NSInteger)arg0 style:(NSInteger)arg1 transformOptions:(NSUInteger)arg2 ;
-(id)requireWallpaperRasterizationWithReason:(id)arg0 ;
-(id)requireWallpaperWithReason:(id)arg0 ;
-(id)scenesForBacklightSession;
-(id)setWallpaperFloatingLayerContainerView:(id)arg0 forReason:(id)arg1 withAnimationFactory:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)suspendWallpaperAnimationForReason:(id)arg0 ;
-(id)wallpaperView:(id)arg0 wallpaperConfigurationIncludingValueTypes:(NSUInteger)arg1 ;
-(struct CGRect )_screenBoundsForOrientation:(NSInteger)arg0 ;
-(void)_activePostersDidChange:(id)arg0 ;
-(void)_applicationDidFinishLaunching:(id)arg0 ;
-(void)_batterySaverModeChanged:(id)arg0 ;
-(void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(CGFloat)arg0 ;
-(void)_ingestPrimaryWallpaperLayersSnapshotIOSurface:(id)arg0 floatingWallpaperLayerSnapshotIOSurface:(id)arg1 snapshotScale:(CGFloat)arg2 traitCollection:(id)arg3 withCompletion:(id)arg4 ;
-(void)_kickPosterBoard;
-(void)_motionEffectsChanged;
-(void)_noteSignificantTimeChanged:(id)arg0 ;
-(void)_posterBoardServiceDied:(id)arg0 ;
-(void)_posterConfigurationAssociatedConfigurationDidChange:(id)arg0 ;
-(void)_posterDidUpdate:(id)arg0 ;
-(void)_reloadWallpaperAndFlushCaches:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_saveWallpaperAggdKeysForLocations:(NSInteger)arg0 withConfiguration:(id)arg1 ;
-(void)_saveWallpaperCoreAnalyticsForLocations:(NSInteger)arg0 withConfiguration:(id)arg1 ;
-(void)_setupPosterBoardServiceNotifications;
-(void)_snapshotScene:(id)arg0 withOptions:(NSInteger)arg1 traitCollection:(id)arg2 completion:(id)arg3 ;
-(void)_updateForLockScreenPosterConfiguration:(id)arg0 homeScreenPosterConfiguration:(id)arg1 ;
-(void)_updateScreenBlanked;
-(void)_updateWallpaperForLocations:(NSInteger)arg0 options:(NSUInteger)arg1 wallpaperMode:(NSInteger)arg2 withCompletion:(id)arg3 ;
-(void)_updateWallpaperForLocations:(NSInteger)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)activateOrientationSource:(NSInteger)arg0 ;
-(void)activeActivityDidChangeForManager:(id)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)addReachabilityObserver:(id)arg0 ;
-(void)addWallpaperOverlay:(id)arg0 ;
-(void)cancelInProcessAnimations;
-(void)deactivateOrientationSource:(NSInteger)arg0 ;
-(void)dealloc;
-(void)orientationSource:(NSInteger)arg0 didRotateFromInterfaceOrientation:(NSInteger)arg1 ;
-(void)orientationSource:(NSInteger)arg0 willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)orientationSource:(NSInteger)arg0 willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)preheatWallpaperForVariant:(NSInteger)arg0 ;
-(void)providerLegibilitySettingsChanged:(id)arg0 ;
-(void)removeObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)removeReachabilityObserver:(id)arg0 ;
-(void)removeWallpaperOverlay:(id)arg0 ;
-(void)setLockscreenOnlyWallpaperAlpha:(CGFloat)arg0 ;
-(void)setOrientationProvider:(id)arg0 forSource:(NSInteger)arg1 ;
-(void)setWallpaperHidden:(BOOL)arg0 variant:(NSInteger)arg1 reason:(id)arg2 ;
-(void)setWallpaperObscured:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)triggerPosterSignificantEvent;
-(void)updateIrisWallpaperForInteractiveMode;
-(void)updateOrientationAfterSourceChange;
-(void)updatePosterSwitcherSnapshots;
-(void)updateWallpaperAnimationWithIconFlyInTension:(CGFloat)arg0 friction:(CGFloat)arg1 ;
-(void)updateWallpaperAnimationWithProgress:(CGFloat)arg0 ;
-(void)updateWallpaperAnimationWithWakeSourceIsSwipeToUnlock:(BOOL)arg0 ;
-(void)updateWallpaperForLocations:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)updateWallpaperForLocations:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)wallpaperPresenter:(id)arg0 didChangeWallpaperForLocations:(NSInteger)arg1 withConfiguration:(id)arg2 ;
-(void)wallpaperPresenterDidCompleteWallpaperChange:(id)arg0 ;
-(void)wallpaperServer:(id)arg0 fetchContentCutoutBoundsForVariant:(NSInteger)arg1 orientation:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)wallpaperServer:(id)arg0 fetchLimitedOcclusionBoundsForOrientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchLockScreenContentCutoutBoundsForOrientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchLockScreenMaximalContentCutoutBoundsForOrientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchLockScreenTimeBoundsForOrientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchObscurableBoundsForOrientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchOriginalImageDataForVariant:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchOriginalVideoURLDataForVariant:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchSignificantEventsCounterForPosterWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchThumbnailDataForVariant:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 restoreDefaultWallpaperWithCompletionHandler:(id)arg1 ;
-(void)wallpaperServer:(id)arg0 setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)wallpaperServer:(id)arg0 setWallpaperColorName:(id)arg1 forVariants:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)wallpaperServer:(id)arg0 setWallpaperGradient:(id)arg1 forVariants:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)wallpaperServer:(id)arg0 setWallpaperVideoWithWallpaperMode:(id)arg1 cropRect:(struct CGRect )arg2 wallpaperMode:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)wallpaperServer:(id)arg0 triggerPosterSignificantEventCompletionHandler:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif