// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITABBARCONTROLLER_H
#define SKUITABBARCONTROLLER_H

@class UITabBarController, UIViewController, NSString;
@protocol SKUIMoreNavigationControllerDelegate;


#import "SKUIFloatingOverlayView.h"

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate>

 {
    SKUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    NSInteger _forcedUserInterfaceStyle;
}


@property (readonly, nonatomic) BOOL containsTransientViewControllerOnly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL sizeTransitionInProgress; // ivar: _sizeTransitionInProgress
@property (readonly) Class superclass;


+(Class)_moreNavigationControllerClass;
-(NSInteger)forcedUserInterfaceStyle;
-(NSInteger)preferredUserInterfaceStyle;
-(id)floatingOverlayViewController;
-(id)init;
-(id)moreNavigationController;
-(id)traitCollection;
-(void)_layoutFloatingOverlayView;
-(void)_setSelectedViewController:(id)arg0 ;
-(void)cancelTransientViewController:(id)arg0 ;
-(void)moreNavigationController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)setFloatingOverlayViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setForcedUserInterfaceStyle:(NSInteger)arg0 ;
-(void)setTransientViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif