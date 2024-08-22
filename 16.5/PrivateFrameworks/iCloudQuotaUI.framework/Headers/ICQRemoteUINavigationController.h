// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQREMOTEUINAVIGATIONCONTROLLER_H
#define ICQREMOTEUINAVIGATIONCONTROLLER_H

@class UINavigationController;



@interface ICQRemoteUINavigationController : UINavigationController

@property (nonatomic) BOOL shouldSignalDelegateOnDismiss; // ivar: _shouldSignalDelegateOnDismiss


-(id)initWithRootViewController:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif