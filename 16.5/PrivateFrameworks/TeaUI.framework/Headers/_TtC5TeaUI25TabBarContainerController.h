// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI25TABBARCONTAINERCONTROLLER_H
#define _TTC5TEAUI25TABBARCONTAINERCONTROLLER_H

@class TtC5TeaUI20NavigationController, UIViewController;



@interface _TtC5TeaUI25TabBarContainerController : TtC5TeaUI20NavigationController {
    ? rootViewController;
    ? $__lazy_storage_$_intrinsicTabBar;
}


@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 navigationBarClass:(Class)arg1 ;
-(void)viewDidLoad;


@end


#endif