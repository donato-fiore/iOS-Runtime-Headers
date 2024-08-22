// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUINAVIGATIONCONTROLLER_H
#define SKUINAVIGATIONCONTROLLER_H

@class SUNavigationController;



@interface SKUINavigationController : SUNavigationController



-(BOOL)_topViewControllerPrefersNavigationBarBackgroundViewHidden;
-(id)_accessibilityButtonBackgroundDefaultTintColor;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)description;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(void)_configureNavigationBar:(id)arg0 withTintColor:(id)arg1 tintAdjustmentMode:(NSInteger)arg2 titleTextTintColor:(id)arg3 shouldTintTitleText:(BOOL)arg4 accessibilityButtonBackgroundTintColor:(id)arg5 ;
-(void)_configureNavigationBarForViewController:(id)arg0 shouldIgnoreTransitionCoordinator:(BOOL)arg1 ;
-(void)_scheduleConfigurationOfNavigationBar;
-(void)_setNavigationPalette:(id)arg0 hidesPaletteShadow:(BOOL)arg1 ;
-(void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg0 ;
-(void)attachPalette:(id)arg0 isPinned:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif