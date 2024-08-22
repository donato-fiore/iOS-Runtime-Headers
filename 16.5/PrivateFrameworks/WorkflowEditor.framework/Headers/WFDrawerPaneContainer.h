// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDRAWERPANECONTAINER_H
#define WFDRAWERPANECONTAINER_H

@class UIViewController, UIView, NSString, UIViewController<WFDrawerPane>;
@protocol WFDrawerGestureCoordinatorDelegate, WFDrawerPaneContainerDelegate;


#import "WFDrawerAnimationManager.h"
#import "WFDrawerDismissalHelper.h"
#import "WFDrawerGestureCoordinator.h"

@interface WFDrawerPaneContainer : UIViewController <WFDrawerGestureCoordinatorDelegate>



@property (readonly, nonatomic) WFDrawerAnimationManager *animationManager; // ivar: _animationManager
@property (readonly, weak, nonatomic) UIView *backgroundDimmingView; // ivar: _backgroundDimmingView
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDrawerPaneContainerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger dimming; // ivar: _dimming
@property (readonly, nonatomic) WFDrawerDismissalHelper *dismissalHelper; // ivar: _dismissalHelper
@property (readonly, nonatomic) CGFloat drawerHeight;
@property (readonly, nonatomic) UIViewController<WFDrawerPane> *drawerPane; // ivar: _drawerPane
@property (readonly, nonatomic) UIView *drawerView;
@property (readonly, weak, nonatomic) UIView *foregroundDimmingView; // ivar: _foregroundDimmingView
@property (readonly, nonatomic) WFDrawerGestureCoordinator *gestureCoordinator; // ivar: _gestureCoordinator
@property (readonly, nonatomic) CGRect grabberAreaBounds;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInactive) BOOL inactive; // ivar: _inactive
@property (readonly, nonatomic) CGFloat maximumDrawerHeight;
@property (readonly, nonatomic) CGFloat minimumDrawerHeight;
@property (readonly) Class superclass;
@property (nonatomic) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (readonly, nonatomic) NSUInteger visibility; // ivar: _visibility


-(CGFloat)heightForVisibility:(NSUInteger)arg0 ;
-(NSUInteger)closestVisibilityForHeight:(CGFloat)arg0 ;
-(NSUInteger)closestVisibilityWithVelocity:(CGFloat)arg0 acceleration:(CGFloat)arg1 previousVisibility:(NSUInteger)arg2 ;
-(NSUInteger)growingVisibilityForHeight:(CGFloat)arg0 ;
-(NSUInteger)shrinkingVisibilityForHeight:(CGFloat)arg0 ;
-(id)initWithDrawerPane:(id)arg0 ;
-(void)gestureCoordinator:(id)arg0 didContinueInteractionWithDrawerHeight:(CGFloat)arg1 ;
-(void)gestureCoordinator:(id)arg0 didFinishInteractionWithVelocity:(CGFloat)arg1 acceleration:(CGFloat)arg2 animation:(id)arg3 ;
-(void)gestureCoordinatorDidBeginInteraction:(id)arg0 ;
-(void)installForegroundDimmingViewIfNeeded;
-(void)layoutDrawerViewController;
-(void)layoutDrawerViewControllerForDrawerHeight:(CGFloat)arg0 ;
-(void)loadView;
-(void)removeForegroundDimmingViewIfUnused;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setupDimmingViewsForAnimationToDimming:(NSUInteger)arg0 ;
-(void)transitionToVisibility:(NSUInteger)arg0 withDimming:(NSUInteger)arg1 animated:(BOOL)arg2 interruptible:(BOOL)arg3 completion:(id)arg4 ;
-(void)transitionWithPushedAnimationToVisibility:(NSUInteger)arg0 withDimming:(NSUInteger)arg1 animated:(BOOL)arg2 interruptible:(BOOL)arg3 completion:(id)arg4 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif