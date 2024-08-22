// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDEBUGGINGINFORMATIONOVERLAYVIEWCONTROLLER_H
#define UIDEBUGGINGINFORMATIONOVERLAYVIEWCONTROLLER_H

@protocol UISplitViewControllerDelegate;


#import "UIViewController.h"
#import "UIDebuggingInformationContainerView.h"
#import "UINavigationController.h"
#import "UIView.h"
#import "UIDebuggingInformationRootTableViewController.h"

@interface UIDebuggingInformationOverlayViewController : UIViewController <UISplitViewControllerDelegate>

 {
    UIDebuggingInformationContainerView *_shadowContainer;
    UINavigationController *_navController;
}


@property (readonly, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isFullscreen; // ivar: _isFullscreen
@property CGPoint offset; // ivar: _offset
@property (retain, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController; // ivar: _rootTableViewController


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didReceiveGesture:(id)arg0 ;
-(void)toggleFullscreen;
-(void)viewDidLayoutSubviews;


@end


#endif