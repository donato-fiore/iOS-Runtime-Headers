// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISNAPSHOTMODALVIEWCONTROLLER_H
#define UISNAPSHOTMODALVIEWCONTROLLER_H



#import "UIViewController.h"
#import "UINavigationController.h"

@interface UISnapshotModalViewController : UIViewController {
    NSInteger _interfaceOrientation;
    UINavigationController *_parentController;
}


@property (retain, nonatomic) UIViewController *disappearingViewController; // ivar: _disappearingViewController


-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(id)initWithInterfaceOrientation:(NSInteger)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif