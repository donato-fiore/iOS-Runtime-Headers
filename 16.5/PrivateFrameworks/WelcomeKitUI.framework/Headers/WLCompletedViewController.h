// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLCOMPLETEDVIEWCONTROLLER_H
#define WLCOMPLETEDVIEWCONTROLLER_H

@class WLContext, NSString;
@protocol OBSetupAssistantSupport;


#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLCompletedViewController : WLOnboardingViewController <OBSetupAssistantSupport>

 {
    WLWelcomeController *_welcomeController;
    WLContext *_context;
}


@property (copy, nonatomic) id *continueHandler; // ivar: _continueHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWelcomeController:(id)arg0 context:(id)arg1 imported:(BOOL)arg2 ;
-(void)_continueTapped:(id)arg0 ;
-(void)_detailTapped:(id)arg0 ;


@end


#endif