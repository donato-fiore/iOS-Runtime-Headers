// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIAPPINSTALLCONFIRMATIONVIEWCONTROLLER_H
#define VUIAPPINSTALLCONFIRMATIONVIEWCONTROLLER_H

@class NSString, UIButton, UIBarButtonItem;
@protocol WLKInstallable;


#import "VUIAppLoadingViewController.h"
#import "VUIAppInstallConfirmationView.h"
#import "VUIAppInstallLockup.h"

@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController {
    NSString *_updateTitle;
    NSString *_updateMessage;
}


@property (readonly, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (copy, nonatomic) id *appStoreHandler; // ivar: _appStoreHandler
@property (retain, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (copy, nonatomic) id *cancelationHandler; // ivar: _cancelationHandler
@property (retain, nonatomic) VUIAppInstallConfirmationView *confirmationView; // ivar: _confirmationView
@property (retain, nonatomic) NSObject<WLKInstallable> *installable; // ivar: _installable
@property (readonly, nonatomic) VUIAppInstallLockup *lockup;
@property (copy, nonatomic) id *secondaryLinkHandler; // ivar: _secondaryLinkHandler
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)_fileSizeWithDeviceSizes:(id)arg0 ;
-(id)_namedRatingWithRatings:(id)arg0 ;
-(id)init;
-(id)initWithInstallable:(id)arg0 ;
-(void)_fetchAppInfo;
-(void)_fetchStoreInfoForAdamID:(id)arg0 completion:(id)arg1 ;
-(void)_handleAction;
-(void)_handleAppStore;
-(void)_handleCancel;
-(void)_handleSecondaryLink;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)loadView;
-(void)setInstallingState;
-(void)setMessage:(id)arg0 ;
-(void)setPreInstallState;
-(void)setSecondaryLinkTitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setUpdateMessage:(id)arg0 ;
-(void)setUpdateTitle:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif