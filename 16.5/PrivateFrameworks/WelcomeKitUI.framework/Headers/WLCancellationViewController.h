// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLCANCELLATIONVIEWCONTROLLER_H
#define WLCANCELLATIONVIEWCONTROLLER_H



#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLCancellationViewController : WLOnboardingViewController {
    WLWelcomeController *_welcomeController;
}


@property (copy, nonatomic) id *continueBlock; // ivar: _continueBlock
@property (copy, nonatomic) id *retryBlock; // ivar: _retryBlock


-(id)initWithWelcomeController:(id)arg0 ;
-(void)_continue;
-(void)_retry;


@end


#endif