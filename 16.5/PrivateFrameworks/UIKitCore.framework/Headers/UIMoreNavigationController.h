// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMORENAVIGATIONCONTROLLER_H
#define UIMORENAVIGATIONCONTROLLER_H

@class NSArray;


#import "UINavigationController.h"
#import "UIViewController.h"

@interface UIMoreNavigationController : UINavigationController {
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}


@property (nonatomic) BOOL allowsCustomizing;
@property (nonatomic) UIViewController *displayedViewController;
@property (readonly, nonatomic) UIViewController *moreListController; // ivar: _moreListController
@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) BOOL moreViewControllersChanged;


-(id)_preparedViewController:(id)arg0 ;
-(id)_stateRestorationParentForChildViewController:(id)arg0 index:(*NSUInteger)arg1 ;
-(id)init;
-(void)_ensureChildrenHaveParentViewController;
-(void)_redisplayMoreTableView;
-(void)_restoreOriginalNavigationController;
-(void)_willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)restoreOriginalNavigationControllerIfNecessary:(id)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif