// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREMOTETRANSIENTOVERLAYHOSTVIEWCONTROLLER_H
#define SBREMOTETRANSIENTOVERLAYHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSMutableSet, NSNumber, NSString, _UILegibilitySettings;
@protocol SBUIRemoteAlertHostInterface_Internal, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding, SBRemoteTransientOverlayHostViewControllerDelegate, SBIdleTimerCoordinating;



@interface SBRemoteTransientOverlayHostViewController : UIRemoteViewController <SBUIRemoteAlertHostInterface_Internal, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding>

 {
    BOOL _allowsHomeButtonDismissal;
    CGFloat _customIdleExpirationTimeout;
    NSInteger _dismissalAnimationStyle;
    NSMutableSet *_idleTimerDisabledReasons;
    NSNumber *_launchingInterfaceOrientationValue;
    NSUInteger _preferredHardwareButtonEvents;
    int _preferredStatusBarVisibility;
    NSNumber *_preferredStatusBarStyleValue;
    NSNumber *_preferredWhitePointAdaptivityStyleValue;
    NSInteger _requestedBackgroundStyle;
    BOOL _prefersWallpaperTunnelActive;
    BOOL _shouldDisableIdleWarn;
    BOOL _shouldUseLockedIdleTimerDuration;
    NSInteger _swipeDismissalStyle;
    NSNumber *_hasTranslucentContentValue;
}


@property (nonatomic, getter=isActivatingForSiri) BOOL activatingForSiri; // ivar: _activatingForSiri
@property (nonatomic) BOOL allowsCustomPresentationDismissalAnimations; // ivar: _allowsCustomPresentationDismissalAnimations
@property (readonly, nonatomic) BOOL allowsStackingOverlayContentAbove; // ivar: _allowsStackingOverlayContentAbove
@property (readonly, nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory; // ivar: _attachedToWindowedAccessory
@property (readonly, nonatomic, getter=isContentOpaque) BOOL contentOpaque; // ivar: _contentOpaque
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRemoteTransientOverlayHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (nonatomic) BOOL isScreenshotMarkup; // ivar: _isScreenshotMarkup
@property (readonly, nonatomic) NSInteger preferredBackgroundStyle; // ivar: _preferredBackgroundStyle
@property (readonly, nonatomic) NSInteger preferredLockedGestureDismissalStyle; // ivar: _preferredLockedGestureDismissalStyle
@property (readonly, copy, nonatomic) NSNumber *preferredSceneDeactivationReasonValue; // ivar: _preferredSceneDeactivationReasonValue
@property (readonly, copy, nonatomic) _UILegibilitySettings *preferredStatusBarLegibilitySettings; // ivar: _preferredStatusBarLegibilitySettings
@property (readonly, nonatomic) NSUInteger preferredStatusBarStyleOverridesToSuppress; // ivar: _preferredStatusBarStyleOverridesToSuppress
@property (readonly, nonatomic) NSInteger preferredUnlockedGestureDismissalStyle; // ivar: _preferredUnlockedGestureDismissalStyle
@property (readonly, nonatomic) BOOL shouldDisableBanners; // ivar: _shouldDisableBanners
@property (readonly, nonatomic) BOOL shouldDisableControlCenter; // ivar: _shouldDisableControlCenter
@property (readonly, nonatomic) BOOL shouldDisableInteractiveScreenshotGesture; // ivar: _shouldDisableInteractiveScreenshotGesture
@property (readonly, nonatomic) BOOL shouldDisableOrientationUpdates; // ivar: _shouldDisableOrientationUpdates
@property (readonly, nonatomic) BOOL shouldDisableReachability; // ivar: _shouldDisableReachability
@property (readonly, nonatomic) BOOL shouldDisableSiri; // ivar: _shouldDisableSiri
@property (nonatomic) BOOL shouldEnableFadeInAnimation; // ivar: _shouldEnableFadeInAnimation
@property (nonatomic) BOOL shouldEnableFadeOutAnimation; // ivar: _shouldEnableFadeOutAnimation
@property (nonatomic) BOOL shouldIgnoreContentOverlayInsetUpdates; // ivar: _shouldIgnoreContentOverlayInsetUpdates
@property (readonly, nonatomic) BOOL shouldInvalidateWhenDeactivated; // ivar: _shouldInvalidateWhenDeactivated
@property (readonly, nonatomic) BOOL shouldPendAlertItems; // ivar: _shouldPendAlertItems
@property (readonly) Class superclass;
@property (nonatomic, getter=isSwitcherEligible) BOOL switcherEligible; // ivar: _switcherEligible
@property (readonly, nonatomic) CGRect windowedAccessoryCutoutFrameInScreen; // ivar: _windowedAccessoryCutoutFrameInScreen


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(BOOL)_performButtonEvents:(NSUInteger)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)handleDoubleHeightStatusBarTap;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)resignFirstResponder;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(int)_preferredStatusBarVisibility;
-(void)_participateInSystemAnimationFence:(id)arg0 ;
-(void)_updateContentOpaqueProperty;
-(void)_updateContentOverlayInsetsFromParentIfNecessary;
-(void)_updatePreferredBackgroundStyleWithAnimationSettings:(id)arg0 ;
-(void)_updatePreferredGestureDismissalStyles;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)deactivate;
-(void)didInvalidateForRemoteAlert;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg0 windowedAccessoryCutoutFrameInScreen:(struct CGRect )arg1 ;
-(void)dismiss;
-(void)dismissForTransientOverlayAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)handlePictureInPictureDidBegin;
-(void)invalidate;
-(void)prepareForActivationWithContext:(id)arg0 presentationMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)presentForTransientOverlayAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)preserveInputViewsAnimated:(BOOL)arg0 ;
-(void)restoreInputViewsAnimated:(BOOL)arg0 ;
-(void)setAllowsAlertItems:(BOOL)arg0 ;
-(void)setAllowsAlertStacking:(BOOL)arg0 ;
-(void)setAllowsBanners:(BOOL)arg0 ;
-(void)setAllowsControlCenter:(BOOL)arg0 ;
-(void)setAllowsMenuButtonDismissal:(BOOL)arg0 ;
-(void)setAllowsSiri:(BOOL)arg0 ;
-(void)setBackgroundStyle:(NSInteger)arg0 withDuration:(CGFloat)arg1 ;
-(void)setDesiredAutoLockDuration:(CGFloat)arg0 ;
-(void)setDesiredHardwareButtonEvents:(NSUInteger)arg0 ;
-(void)setDesiredIdleTimerSettings:(id)arg0 ;
-(void)setDesiredStatusBarStyleOverrides:(NSUInteger)arg0 ;
-(void)setDismissalAnimationStyle:(NSInteger)arg0 ;
-(void)setIdleTimerDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setInteractiveScreenshotGestureDisabled:(BOOL)arg0 ;
-(void)setLaunchingInterfaceOrientation:(NSInteger)arg0 ;
-(void)setOrientationChangedEventsEnabled:(BOOL)arg0 ;
-(void)setReachabilityDisabled:(BOOL)arg0 ;
-(void)setSceneDeactivationReason:(id)arg0 ;
-(void)setShouldDisableFadeInAnimation:(BOOL)arg0 ;
-(void)setShouldDismissOnUILock:(BOOL)arg0 ;
-(void)setStatusBarHidden:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)setStyleOverridesToCancel:(NSUInteger)arg0 animationSettings:(id)arg1 ;
-(void)setSupportedInterfaceOrientationOverride:(NSUInteger)arg0 ;
-(void)setSwipeDismissalStyle:(NSInteger)arg0 ;
-(void)setWallpaperStyle:(NSInteger)arg0 withDuration:(CGFloat)arg1 ;
-(void)setWallpaperTunnelActive:(BOOL)arg0 ;
-(void)setWhitePointAdaptivityStyle:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif