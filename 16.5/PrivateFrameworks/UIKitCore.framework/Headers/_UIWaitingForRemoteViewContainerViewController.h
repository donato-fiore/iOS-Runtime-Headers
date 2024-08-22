// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIWAITINGFORREMOTEVIEWCONTAINERVIEWCONTROLLER_H
#define _UIWAITINGFORREMOTEVIEWCONTAINERVIEWCONTROLLER_H



#import "UIViewController.h"
#import "UIActivityIndicatorView.h"

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner; // ivar: _loadingSpinner


-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)stopSpinner;
-(void)viewWillLayoutSubviews;


@end


#endif