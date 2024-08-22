// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOWNLOADBUTTONACTIONHANDLER_H
#define VUIDOWNLOADBUTTONACTIONHANDLER_H

@class UIView, UIViewController;

#import <Foundation/Foundation.h>

#import "VUIAlertController.h"
#import "VUIDownloadButtonViewModel.h"

@interface VUIDownloadButtonActionHandler : NSObject

@property (copy, nonatomic) id *acknowledgementDownloadCancelled; // ivar: _acknowledgementDownloadCancelled
@property (copy, nonatomic) id *acknowledgementDownloadDeleted; // ivar: _acknowledgementDownloadDeleted
@property (retain, nonatomic) VUIAlertController *deleteConfirmationAlertController; // ivar: _deleteConfirmationAlertController
@property (weak, nonatomic) UIView *parentView; // ivar: _parentView
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) VUIDownloadButtonViewModel *viewModel; // ivar: _viewModel


-(BOOL)_shouldShowRenewalOption;
-(BOOL)ignoreDownloadActionIfInRetailDemoMode;
-(id)_localize:(id)arg0 token:(id)arg1 value:(id)arg2 ;
-(id)_renewalAlertAction;
-(id)initWithViewModel:(id)arg0 ;
-(id)topPresentedViewController;
-(void)_askUserAndDeleteIfNeeded;
-(void)_checkForAccountSignInWithCompletionHandler:(id)arg0 ;
-(void)_dismissConfirmationAlertController;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg0 ;
-(void)_showDownloadingInfoDialog;
-(void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(BOOL)arg0 ;
-(void)performAction:(BOOL)arg0 confirmBeforeStopDownloading:(BOOL)arg1 ;


@end


#endif