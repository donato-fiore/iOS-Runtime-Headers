// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIACCOUNTSETTINGSVIEWCONTROLLER_H
#define VUIACCOUNTSETTINGSVIEWCONTROLLER_H

@class PSListController, NSNumber, NSURL, PSSpecifier, UITextField, NSString, NSTimer;
@protocol UITableViewDataSource, UITextFieldDelegate;



@interface VUIAccountSettingsViewController : PSListController <UITableViewDataSource, UITextFieldDelegate>



@property (retain, nonatomic) NSNumber *_syncMySportsEnabled; // ivar: __syncMySportsEnabled
@property (retain, nonatomic) NSURL *addFundsUrl; // ivar: _addFundsUrl
@property (nonatomic) BOOL authenticationInProgress; // ivar: _authenticationInProgress
@property (retain, nonatomic) PSSpecifier *createAccountSpecifier; // ivar: _createAccountSpecifier
@property (retain, nonatomic) PSSpecifier *credentialsAppleIDSpecifier; // ivar: _credentialsAppleIDSpecifier
@property (retain, nonatomic) UITextField *credentialsAppleIDTextField; // ivar: _credentialsAppleIDTextField
@property (retain, nonatomic) PSSpecifier *credentialsPasswordSpecifier; // ivar: _credentialsPasswordSpecifier
@property (retain, nonatomic) UITextField *credentialsPasswordTextField; // ivar: _credentialsPasswordTextField
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger notifAuthStatus; // ivar: _notifAuthStatus
@property (retain, nonatomic) PSSpecifier *signInSpecifier; // ivar: _signInSpecifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *syncMySportsDebouncer; // ivar: _syncMySportsDebouncer
@property (retain, nonatomic) PSSpecifier *syncMySportsSpecifier; // ivar: _syncMySportsSpecifier
@property (nonatomic) NSInteger watchListAppsCount; // ivar: _watchListAppsCount


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)_alertStyle;
-(id)_accountSpecifiers;
-(id)_clearHistorySpecifiers;
-(id)_createAxIdFromTableCell:(id)arg0 ;
-(id)_credentialsSpecifiers;
-(id)_dialogMetricsData;
-(id)_externalSpecifiers;
-(id)_getConnectedAppsCountString;
-(id)_mySportsSpecifiers;
-(id)_notificationGroupSpecifierIdentifier;
-(id)_notificationSpecifiers;
-(id)_signOutSpecifiers;
-(id)_sourcesSpecifiers;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addPrivacyFooterToGroup:(id)arg0 ;
-(void)_checkConnectedAppsWithDispatchGroup:(id)arg0 ;
-(void)_checkExternalLinksWithDispatchGroup:(id)arg0 ;
-(void)_clearPlayHistory:(id)arg0 ;
-(void)_didSelectSpecifier:(id)arg0 ;
-(void)_dismissViewController;
-(void)_handleAccountSettingsEventWithAmsWebView:(id)arg0 ;
-(void)_handleAccountSettingsEventWithAmsWebView:(id)arg0 storeServicesBagKey:(id)arg1 storeServicesUrl:(id)arg2 ;
-(void)_handleAccountSettingsEventWithUrl:(id)arg0 amsBagKey:(id)arg1 useAMSWebView:(BOOL)arg2 ;
-(void)_handleNotificationsOff;
-(void)_loadDynamicIdentifiers;
-(void)_openiForgotAppleURL;
-(void)_parseUrl:(id)arg0 ;
-(void)_promptForNotificationsAuth;
-(void)_recordDialogClick:(id)arg0 ;
-(void)_setSyncMySportsEnabled:(id)arg0 ;
-(void)_showPrivacySheet:(id)arg0 ;
-(void)_syncMySportsSettingDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif