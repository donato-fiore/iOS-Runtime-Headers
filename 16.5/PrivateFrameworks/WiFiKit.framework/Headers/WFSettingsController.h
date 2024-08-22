// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSETTINGSCONTROLLER_H
#define WFSETTINGSCONTROLLER_H

@class WFAppearanceProxy, WFNetworkSettingsConfig, NSString, NSOperationQueue, WFNetworkSettingsViewController;
@protocol WFNetworkSettingsViewControllerDataCoordinator;

#import <Foundation/Foundation.h>

#import "WFDetailsContext.h"
#import "WFIPMonitor.h"
#import "WFNetworkScanRecord.h"
#import "WFMutableNetworkProfile.h"

@interface WFSettingsController : NSObject <WFNetworkSettingsViewControllerDataCoordinator>



@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (nonatomic) BOOL cloudSyncRunning; // ivar: _cloudSyncRunning
@property (retain, nonatomic) WFNetworkSettingsConfig *config; // ivar: _config
@property (nonatomic, getter=isCurrentNetwork) BOOL currentNetwork; // ivar: _currentNetwork
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFDetailsContext *detailsContext; // ivar: _detailsContext
@property (retain, nonatomic) NSString *hardwareMACAddress; // ivar: _hardwareMACAddress
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFIPMonitor *ipMonitor; // ivar: _ipMonitor
@property (nonatomic) BOOL monitorIPChanges; // ivar: _monitorIPChanges
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (retain, nonatomic) WFMutableNetworkProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (retain, nonatomic) WFNetworkSettingsViewController *settingsViewController; // ivar: _settingsViewController
@property (readonly) Class superclass;


-(id)_baseConfigForNetwork:(id)arg0 current:(BOOL)arg1 ;
-(id)_profileForNetwork:(id)arg0 ;
-(id)initWithDetailsContext:(id)arg0 ;
-(id)initWithDetailsContext:(id)arg0 appearanceProxy:(id)arg1 ;
-(void)_applySetupAppearances;
-(void)_currentNetworkDidChange:(id)arg0 ;
-(void)_ipStateDidChange:(id)arg0 ;
-(void)_refreshSettingsConfig:(id)arg0 ;
-(void)_startMontoringIPChanges;
-(void)_stopMonitoringIPChanges;
-(void)dealloc;
-(void)networkSettingsViewController:(id)arg0 saveConfig:(id)arg1 errorHandler:(id)arg2 ;


@end


#endif