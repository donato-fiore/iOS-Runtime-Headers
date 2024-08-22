// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCONBOARDINGVIEWCONTROLLER_H
#define NCONBOARDINGVIEWCONTROLLER_H

@class OBWelcomeController, OBTrayButton, NSString;
@protocol NCOnboardingViewControllerDelegate;



@interface NCOnboardingViewController : OBWelcomeController {
    OBTrayButton *_nextButton;
}


@property (weak, nonatomic) NSObject<NCOnboardingViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL nextButtonEnabled; // ivar: _nextButtonEnabled
@property (retain, nonatomic) NSString *nextButtonText; // ivar: _nextButtonText


-(BOOL)_canShowWhileLocked;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 contentLayout:(NSInteger)arg2 ;
-(void)_nextButtonPressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif