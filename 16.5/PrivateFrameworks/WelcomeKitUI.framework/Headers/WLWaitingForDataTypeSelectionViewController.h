// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLWAITINGFORDATATYPESELECTIONVIEWCONTROLLER_H
#define WLWAITINGFORDATATYPESELECTIONVIEWCONTROLLER_H

@class NSString;
@protocol OBSetupAssistantSupport;


#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLWaitingForDataTypeSelectionViewController : WLOnboardingViewController <OBSetupAssistantSupport>

 {
    WLWelcomeController *_welcomeController;
}


@property (copy, nonatomic) id *cancellationBlock; // ivar: _cancellationBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (readonly) Class superclass;
@property (copy, nonatomic) id *viewWillDismissBlock; // ivar: _viewWillDismissBlock


-(id)initWithSourceDevice:(id)arg0 welcomeController:(id)arg1 ;
-(void)cancel;
-(void)showActivityIndicatorView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif