// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOTHERNETWORKVIEWCONTROLLER_H
#define WFOTHERNETWORKVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray, UIColor, NSOrderedSet;
@protocol UITableViewDelegate, UITableViewDataSource, WFAccessoryViewController, UITextFieldDelegate, WFOtherNetworkProvider, WFNetworkView, WFCredentialsProviderContext, WFOtherNetworkViewControllerDelegate;


#import "WFAppearanceProxy.h"
#import "WFTextFieldCell.h"
#import "WFValueListViewController.h"

@interface WFOtherNetworkViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, WFAccessoryViewController, UITextFieldDelegate, WFOtherNetworkProvider, WFNetworkView>



@property (readonly, copy, nonatomic) NSString *SSID; // ivar: SSID
@property (retain, nonatomic) NSArray *TLSIdentities; // ivar: _TLSIdentities
@property (nonatomic) *__SecIdentity TLSIdentity; // ivar: _TLSIdentity
@property (nonatomic) BOOL WAPIEnabled; // ivar: _WAPIEnabled
@property (retain, nonatomic) NSArray *WAPIIdentities; // ivar: _WAPIIdentities
@property (nonatomic) id *WAPIIdentity; // ivar: _WAPIIdentity
@property (nonatomic) id *WAPIRootCertificate; // ivar: _WAPIRootCertificate
@property (retain, nonatomic) NSArray *WAPIRootCertificates; // ivar: _WAPIRootCertificates
@property (nonatomic) BOOL WPA2EnterpriseEnabledMFPCapable; // ivar: _WPA2EnterpriseEnabledMFPCapable
@property (nonatomic) BOOL WPA3EnterpriseEnabled; // ivar: _WPA3EnterpriseEnabled
@property (nonatomic) BOOL WPA3PersonalEnabled; // ivar: _WPA3PersonalEnabled
@property (nonatomic) NSString *activityString; // ivar: _activityString
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSObject<WFCredentialsProviderContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultActivityString; // ivar: _defaultActivityString
@property (weak, nonatomic) NSObject<WFOtherNetworkViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *details; // ivar: _details
@property (nonatomic) NSInteger deviceCapability; // ivar: _deviceCapability
@property (nonatomic) NSInteger firstResponderCell; // ivar: _firstResponderCell
@property (copy, nonatomic) NSString *hardwareMACAddress; // ivar: _hardwareMACAddress
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUsingRandomAddress; // ivar: _isUsingRandomAddress
@property (nonatomic) BOOL joinable; // ivar: _joinable
@property (nonatomic) BOOL joining; // ivar: _joining
@property (nonatomic) WFTextFieldCell *mostRecentFirstResponder; // ivar: _mostRecentFirstResponder
@property (retain, nonatomic) WFTextFieldCell *nameCell; // ivar: _nameCell
@property (copy, nonatomic) NSString *networkName; // ivar: _networkName
@property (nonatomic) BOOL overrideDefaultSecurity; // ivar: _overrideDefaultSecurity
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) WFTextFieldCell *passwordCell; // ivar: _passwordCell
@property (nonatomic) BOOL passwordRequired; // ivar: _passwordRequired
@property (nonatomic) NSInteger profileMode; // ivar: _profileMode
@property (retain, nonatomic) WFValueListViewController *profileModeTitlesValueVC; // ivar: _profileModeTitlesValueVC
@property (copy, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (retain, nonatomic) NSOrderedSet *sections; // ivar: _sections
@property (nonatomic) NSInteger securityMode; // ivar: _securityMode
@property (retain, nonatomic) NSOrderedSet *securityRows; // ivar: _securityRows
@property (retain, nonatomic) WFValueListViewController *securityTitlesValueVC; // ivar: _securityTitlesValueVC
@property (nonatomic) BOOL shouldCancelContextWhenViewDisappear; // ivar: _shouldCancelContextWhenViewDisappear
@property NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsWiFiPasswordSharing; // ivar: _supportsWiFiPasswordSharing
@property (copy, nonatomic) NSString *username; // ivar: _username
@property (retain, nonatomic) WFTextFieldCell *usernameCell; // ivar: _usernameCell
@property (readonly, nonatomic) BOOL wantsModalPresentation; // ivar: _wantsModalPresentation


-(BOOL)_canShowModes;
-(BOOL)_canShowWhileLocked;
-(NSInteger)_profileModeFromTitle:(id)arg0 ;
-(NSInteger)_returnKeyType;
-(NSInteger)_securityModeFromTitle:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_availableProfileModeTitles;
-(id)_availableProfileModes;
-(id)_availableSecurityModes;
-(id)_availableSecurityTitles;
-(id)_getTLSIdentity:(id)arg0 ;
-(id)_getWAPIIdentity:(id)arg0 ;
-(id)_getWAPIRootCertificate:(id)arg0 ;
-(id)_profileModeStringFromType:(NSInteger)arg0 ;
-(id)_sectionsForStyle:(NSInteger)arg0 ;
-(id)_securityRowsForStyle:(NSInteger)arg0 ;
-(id)_securityStringFromType:(NSInteger)arg0 ;
-(id)initWithCredentialsProviderContext:(id)arg0 deviceCapability:(NSInteger)arg1 appearanceProxy:(id)arg2 ;
-(id)initWithOtherNetworkProviderContext:(id)arg0 deviceCapability:(NSInteger)arg1 appearanceProxy:(id)arg2 ;
-(id)initWithOtherNetworkStyle:(NSInteger)arg0 ;
-(id)initWithOtherNetworkStyle:(NSInteger)arg0 withTableStyle:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_dismiss:(id)arg0 ;
-(void)_join:(id)arg0 ;
-(void)_scrollToCellAndBecomeFirstResponder:(id)arg0 ;
-(void)_setFirstResponderAfterCell:(id)arg0 ;
-(void)_updateJoinable;
-(void)_updateSections;
-(void)dealloc;
-(void)keyboardShown:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)orientationChanged:(id)arg0 ;
-(void)receiveSharedPassword:(id)arg0 ;
-(void)resetFirstResponder;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif