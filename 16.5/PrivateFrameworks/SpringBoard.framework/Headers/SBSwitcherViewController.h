// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERVIEWCONTROLLER_H
#define SBSWITCHERVIEWCONTROLLER_H

@class UIViewController, SBOrientationTransformWrapperView;
@protocol SBSwitcherViewControllerDelegate;



@interface SBSwitcherViewController : UIViewController {
    SBOrientationTransformWrapperView *_contentWrapperView;
}


@property (nonatomic) NSInteger contentOrientation;
@property (weak, nonatomic) NSObject<SBSwitcherViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)shouldAutorotate;
-(NSInteger)_overrideInterfaceOrientationMechanics;
-(NSUInteger)supportedInterfaceOrientations;
-(void)addContentView:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif