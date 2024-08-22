// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAWAYVIEWPLUGINCONTROLLER_H
#define SBAWAYVIEWPLUGINCONTROLLER_H

@class UIViewController, NSString, _UILegibilitySettings, UIViewController<SBLockScreenPluginViewController>;
@protocol SBLockScreenPluginViewController, SBLockScreenPluginController, SBLockScreenPluginAgent, SBLockScreenPluginAppearance;


#import "SBLockScreenPluginMutableAppearanceContext.h"
#import "SBLockScreenPluginAction.h"

@interface SBAwayViewPluginController : UIViewController <SBLockScreenPluginViewController, SBLockScreenPluginController>

 {
    SBLockScreenPluginMutableAppearanceContext *_appearance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) NSInteger orientation;
@property (weak, nonatomic) NSObject<SBLockScreenPluginAgent> *pluginAgent; // ivar: _agent
@property (readonly, nonatomic) NSObject<SBLockScreenPluginAppearance> *pluginAppearance;
@property (readonly, nonatomic) NSInteger pluginPriority;
@property (readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
@property (readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewCanBeDisplayed; // ivar: _viewCanBeDisplayed


+(void)disableBundleNamed:(id)arg0 ;
+(void)disableBundleNamed:(id)arg0 deactivationContext:(id)arg1 ;
+(void)enableBundleNamed:(id)arg0 ;
+(void)enableBundleNamed:(id)arg0 activationContext:(id)arg1 ;
-(BOOL)allowsControlCenter;
-(BOOL)allowsLockScreenCamera;
-(BOOL)allowsLockScreenHint;
-(BOOL)allowsLockScreenMediaControls;
-(BOOL)allowsLogout;
-(BOOL)allowsPhotoSlideshow;
-(BOOL)allowsScreenshots;
-(BOOL)allowsSiri;
-(BOOL)allowsTimer;
-(BOOL)allowsUnlocking;
-(BOOL)animateResumingToApplicationWithIdentifier:(id)arg0 ;
-(BOOL)disablesAwayItemsCompletely;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg0 ;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)hasCustomSubtitle;
-(BOOL)isContentViewWhiteUnderSlideToUnlockText;
-(BOOL)pluginAnimatesAppearanceTransition:(BOOL)arg0 ;
-(BOOL)pluginHandleEvent:(NSInteger)arg0 ;
-(BOOL)shouldAutoHideNotifications;
-(BOOL)shouldDisableOnRelock;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)showBatteryChargingText;
-(BOOL)showDate;
-(BOOL)showDateView;
-(BOOL)showStatusBar;
-(BOOL)viewWantsOverlayLayout;
-(BOOL)wantsMenuButtonHeldEvent;
-(BOOL)wantsMesaAutoUnlock;
-(NSInteger)notificationBehavior;
-(NSInteger)overlayStyle;
-(NSInteger)presentationStyle;
-(NSUInteger)unlockAnimationStyleForDestinationApp:(id)arg0 ;
-(id)bundleIDForUnlock;
-(id)customHeaderView;
-(id)customSubtitleColor;
-(id)customSubtitleText;
-(id)enableTransitionBlock:(SEL)arg0 ;
-(id)init;
-(id)pluginAnimateAppearanceTransition:(BOOL)arg0 withCompletion:(id)arg1 ;
-(id)slideToUnlockText;
-(void)_updateAppearanceAndNotify:(BOOL)arg0 ;
-(void)disable;
-(void)pluginDidDeactivateWithContext:(id)arg0 ;
-(void)pluginWillActivateWithContext:(id)arg0 ;
-(void)purgeView;
-(void)setActivationContext:(id)arg0 ;
-(void)setDeactivationContext:(id)arg0 ;
-(void)setFullscreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg0 duration:(CGFloat)arg1 ;
-(void)setNeedsLegibilityAppearanceUpdate;


@end


#endif