// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLTRANSFERRINGVIEWCONTROLLER_H
#define WLTRANSFERRINGVIEWCONTROLLER_H

@class NSDateComponentsFormatter, NSString;
@protocol OBSetupAssistantSupport, OS_dispatch_source;


#import "WLOnboardingProgressViewController.h"
#import "WLWelcomeController.h"

@interface WLTransferringViewController : WLOnboardingProgressViewController <OBSetupAssistantSupport>

 {
    WLWelcomeController *_welcomeController;
    NSDateComponentsFormatter *_remainingDownloadTimeFormatter;
    CGFloat _remainingDownloadTime;
    NSObject<OS_dispatch_source> *_remainingDownloadTimeUpdateTimer;
}


@property (copy, nonatomic) id *cancellationBlock; // ivar: _cancellationBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *progressDescription; // ivar: _progressDescription
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (readonly) Class superclass;
@property (copy, nonatomic) id *viewWillDismissBlock; // ivar: _viewWillDismissBlock


-(id)initWithSourceDevice:(id)arg0 welcomeController:(id)arg1 ;
-(void)_cancelRemainingDownloadTimeUpdateTimer;
-(void)cancel;
-(void)dealloc;
-(void)importDidStart;
-(void)setProgressText:(id)arg0 ;
-(void)setRemainingDownloadTime:(CGFloat)arg0 ;
-(void)showActivityIndicatorView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif