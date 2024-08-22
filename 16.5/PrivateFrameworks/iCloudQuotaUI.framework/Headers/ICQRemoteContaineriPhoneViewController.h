// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQREMOTECONTAINERIPHONEVIEWCONTROLLER_H
#define ICQREMOTECONTAINERIPHONEVIEWCONTROLLER_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate;


#import "ICQRemoteContainerViewController.h"

@interface ICQRemoteContaineriPhoneViewController : ICQRemoteContainerViewController <UIViewControllerTransitioningDelegate>



@property (nonatomic) CGSize containerContentSize; // ivar: _containerContentSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)initWithRootViewController:(id)arg0 ;
-(struct CGRect )_dismissalFrameForContentSize:(struct CGSize )arg0 ;
-(struct CGRect )_layoutFrameForContentSize:(struct CGSize )arg0 ;
-(void)_layoutContainerView:(BOOL)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif