// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHCONTROLLERLIMITEDUISHIELDVIEWCONTROLLER_H
#define _UISEARCHCONTROLLERLIMITEDUISHIELDVIEWCONTROLLER_H



#import "UIViewController.h"
#import "_UISearchControllerLimitedAccessView.h"

@interface _UISearchControllerLimitedUIShieldViewController : UIViewController

@property (copy, nonatomic) id *dismissAction; // ivar: _dismissAction
@property (retain, nonatomic) _UISearchControllerLimitedAccessView *limitedAccessView; // ivar: _limitedAccessView


-(void)_backButtonPressed:(id)arg0 ;
-(void)dealloc;
-(void)loadView;


@end


#endif