// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLFAILUREVIEWCONTROLLER_H
#define WLFAILUREVIEWCONTROLLER_H

@class WLContext;


#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLFailureViewController : WLOnboardingViewController {
    WLWelcomeController *_welcomeController;
    WLContext *_context;
}


@property (copy, nonatomic) id *resetBlock; // ivar: _resetBlock


-(id)initWithWelcomeController:(id)arg0 context:(id)arg1 ;
-(void)_detailTapped:(id)arg0 ;
-(void)_reset;


@end


#endif