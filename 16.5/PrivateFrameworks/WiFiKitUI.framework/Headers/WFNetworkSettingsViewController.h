// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFNETWORKSETTINGSVIEWCONTROLLER_H
#define WFNETWORKSETTINGSVIEWCONTROLLER_H

@class UITableViewHeaderFooterView, UIAlertController, NSArray, UISwitch, UIColor, NSString, UITableViewCell, NSDate, NSAttributedString;
@protocol UITableViewDelegate, UITableViewDataSource, WFNetworkView, WFDetailsProviderContext, WFNetworkSettingsViewControllerDataCoordinator, WFNetworkSettingsViewControllerDelegate;


#import "WFInsetTableViewController.h"
#import "WFAppearanceProxy.h"
#import "WFNetworkSettingsCellFactory.h"
#import "WFNetworkSettingsConfig.h"
#import "WFHyperlinkFooterView.h"

@interface WFNetworkSettingsViewController : WFInsetTableViewController <UITableViewDelegate, UITableViewDataSource, WFNetworkView>

 {
    UITableViewHeaderFooterView *_wifiModeFooterView;
    UITableViewHeaderFooterView *_lowDataModeFooterView;
    UITableViewHeaderFooterView *_privacyProxyEnabledFooterView;
    UITableViewHeaderFooterView *_randomMACFooterView;
    UITableViewHeaderFooterView *_outrankedFooterView;
    UITableViewHeaderFooterView *_managedNetworkHeaderView;
}


@property (retain, nonatomic) UIAlertController *alert; // ivar: _alert
@property (nonatomic) BOOL allowViewPassword; // ivar: _allowViewPassword
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (retain) NSArray *autoJoinSectionRows; // ivar: _autoJoinSectionRows
@property (retain, nonatomic) UISwitch *autoJoinSwitch; // ivar: _autoJoinSwitch
@property (retain, nonatomic) UISwitch *autoLoginSwitch; // ivar: _autoLoginSwitch
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) WFNetworkSettingsCellFactory *cellFactory; // ivar: _cellFactory
@property (copy, nonatomic) WFNetworkSettingsConfig *config; // ivar: _config
@property (retain, nonatomic) NSObject<WFDetailsProviderContext> *context; // ivar: _context
@property (nonatomic) BOOL credentailCellTapped; // ivar: _credentailCellTapped
@property (weak, nonatomic) NSObject<WFNetworkSettingsViewControllerDataCoordinator> *dataCoordinator; // ivar: _dataCoordinator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFNetworkSettingsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceCapability; // ivar: _deviceCapability
@property (retain, nonatomic) NSString *hardwareMACAddress; // ivar: _hardwareMACAddress
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUsingRandomMac; // ivar: _isUsingRandomMac
@property (retain, nonatomic) WFHyperlinkFooterView *linkFooterView; // ivar: _linkFooterView
@property (retain, nonatomic) UITableViewCell *networkQualityCell; // ivar: _networkQualityCell
@property (retain, nonatomic) NSDate *networkQualityFooterDate; // ivar: _networkQualityFooterDate
@property (retain, nonatomic) WFHyperlinkFooterView *networkQualityFooterView; // ivar: _networkQualityFooterView
@property (nonatomic) BOOL networkQualitySpinning; // ivar: _networkQualitySpinning
@property (retain, nonatomic) UISwitch *privacyProxyEnabledSwitch; // ivar: _privacyProxyEnabledSwitch
@property (nonatomic) BOOL randomFeatureEnabled; // ivar: _randomFeatureEnabled
@property (retain, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (retain, nonatomic) UISwitch *randomMACSwitch; // ivar: _randomMACSwitch
@property (nonatomic) BOOL randomMACSwitchOn; // ivar: _randomMACSwitchOn
@property (retain, nonatomic) NSAttributedString *recommendationLinkAttributedString; // ivar: _recommendationLinkAttributedString
@property (retain, nonatomic) UISwitch *saveDataModeSwitch; // ivar: _saveDataModeSwitch
@property (retain) NSArray *sections; // ivar: _sections
@property (nonatomic) BOOL showManagedNetworkHeader; // ivar: _showManagedNetworkHeader
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsModalPresentation;


-(BOOL)_canShowWhileLocked;
-(BOOL)_isAutoJoinConfigurable;
-(BOOL)_isChinaDevice;
-(BOOL)_isIPv4ConfigAuto;
-(BOOL)_shouldShowIPv6ForConfig:(id)arg0 ;
-(BOOL)_shouldShowRandomConfigSwith;
-(BOOL)_showRecommendationSupportLink;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)_disableModeFromKey:(id)arg0 ;
-(NSInteger)_sectionTypeAtSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_WiFiModeFooterView;
-(id)_autoJoinRowsFromContext:(id)arg0 ;
-(id)_displayStringForDisableMode:(NSInteger)arg0 ;
-(id)_lowDataModeFooterView;
-(id)_macAddressToDisplay;
-(id)_outrankedFooterView;
-(id)_passcodePromptForViewingPasswords;
-(id)_privacyProxyEnabledFooterView;
-(id)_randomAddressToDisplay;
-(id)_randomMACFooterTextToDisplay;
-(id)_randomMACFooterView;
-(id)_sectionsFromConfig:(id)arg0 context:(id)arg1 ;
-(id)_stringForSettingsSection:(NSInteger)arg0 ;
-(id)_touchIDPromptForViewingPasswords;
-(id)_wifiPasswordContextOptions;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 detailsContext:(id)arg1 hardwareMACAddress:(id)arg2 ;
-(id)initWithConfig:(id)arg0 detailsContext:(id)arg1 hardwareMACAddress:(id)arg2 appearanceProxy:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_autoJoinSwitchChanged:(id)arg0 ;
-(void)_autoLoginSwitchChanged:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_fillNetworkQualityCell:(id)arg0 ;
-(void)_httpProxyAuthChanged:(id)arg0 ;
-(void)_httpProxyConfigChanged:(NSInteger)arg0 ;
-(void)_logSections:(id)arg0 ;
-(void)_networkQualityOpenURL;
-(void)_openNetworkQualityDetails:(id)arg0 ;
-(void)_openRecommendationsLink:(id)arg0 ;
-(void)_presentDetailViewController:(id)arg0 ;
-(void)_presentRenewLeaseAlertWithSourceRect:(struct CGRect )arg0 ;
-(void)_privacyProxyEnabledChanged:(BOOL)arg0 ;
-(void)_privacyProxyEnabledSwitchChanged:(id)arg0 ;
-(void)_promptChangePrivateAddress;
-(void)_promptForgetNetwork;
-(void)_promptOverrideWiFiOutranked;
-(void)_promptOverrideWiFiOutrankedDev;
-(void)_reloadNetworkQuality;
-(void)_runNetworkQuality;
-(void)_saveAutoJoinEnabledChanged:(BOOL)arg0 ;
-(void)_saveAutoLoginEnabledChanged:(BOOL)arg0 ;
-(void)_saveConfig:(id)arg0 ;
-(void)_saveDataModeSwitchChanged:(id)arg0 ;
-(void)_saveSaveDataModeChanged:(BOOL)arg0 ;
-(void)_updateManagedNetworkHeader;
-(void)_updateRandomMACValueChanged:(BOOL)arg0 ;
-(void)_updateWiFiEMode:(NSInteger)arg0 ;
-(void)_usingRandomMACSwitchChanged:(id)arg0 ;
-(void)dealloc;
-(void)donePressed;
-(void)refreshConfig:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif