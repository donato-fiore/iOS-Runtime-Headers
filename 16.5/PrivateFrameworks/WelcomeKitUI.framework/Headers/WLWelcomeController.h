// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLWELCOMECONTROLLER_H
#define WLWELCOMECONTROLLER_H

@class BFFNavigationController, WLSourceDevicesController, WLSourceDevice, WLDataMigrationController, NSString, WLMigrationKitController;
@protocol WLSourceDevicesDelegate, WLDataMigrationDelegate, BFFNavigationControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WLUIClient.h"
#import "WLImportViewController.h"
#import "WLTransferringViewController.h"

@interface WLWelcomeController : NSObject <WLSourceDevicesDelegate, WLDataMigrationDelegate, BFFNavigationControllerDelegate>

 {
    BOOL _uiTestMode;
    BOOL _forceUITestModeDownloadError;
    BFFNavigationController *_navigationController;
    WLSourceDevicesController *_sourceDevicesController;
    BOOL _dismissAfterSourceDevicePairingTimeout;
    WLSourceDevice *_sourceDevice;
    BOOL _migrateUsingRetryPolicies;
    NSUInteger _migrationState;
    WLDataMigrationController *_migrationController;
    NSObject<OS_dispatch_queue> *_migrationControllerDelegateQueueTargetedAtMainQueue;
    BOOL _migrationControllerIsRestartable;
    BOOL _migrationConcluded;
    BOOL _isPairingCanceled;
}


@property (retain, nonatomic) WLUIClient *client; // ivar: _client
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WLImportViewController *importViewController; // ivar: _importViewController
@property (retain, nonatomic) WLMigrationKitController *migrationKitController; // ivar: _migrationKitController
@property (copy, nonatomic) id *resetHandler; // ivar: _resetHandler
@property (readonly) Class superclass;
@property (weak, nonatomic) WLTransferringViewController *transferringViewController; // ivar: _transferringViewController
@property (nonatomic) BOOL useMigrationKit; // ivar: _useMigrationKit
@property (nonatomic) BOOL useMigrationKitInAP; // ivar: _useMigrationKitInAP


-(id)initWithWelcomeViewController:(id)arg0 forceUITestMode:(BOOL)arg1 forceUITestModeDownloadError:(BOOL)arg2 ;
-(void)_completeWithSuccess:(BOOL)arg0 ;
-(void)_configureWelcomeViewController:(id)arg0 ;
-(void)_didCompleteMigrationWithSuccess:(BOOL)arg0 retry:(BOOL)arg1 context:(id)arg2 ;
-(void)_didPairWithSourceDevice:(id)arg0 ;
-(void)_importLocalContent;
-(void)_pushViewController:(id)arg0 andRemovePreviousTopmostViewControllerWithCompletion:(id)arg1 ;
-(void)_setStashDataLocally:(BOOL)arg0 ;
-(void)_showCompleted:(id)arg0 ;
-(void)_showPairingCode:(id)arg0 wifiPSK:(id)arg1 ssid:(id)arg2 ;
-(void)_showPreparation:(id)arg0 ;
-(void)_showRetry;
-(void)_showTransferring;
-(void)_showWaitingForDataTypeSelection;
-(void)_sourceDevicePairingPeriodDidEnd;
-(void)_startMigration;
-(void)_startPairing;
-(void)_updateTransferringForImport;
-(void)authenticate;
-(void)cancel;
-(void)change:(NSInteger)arg0 context:(id)arg1 ;
-(void)complete:(id)arg0 ;
-(void)controllerDidGetInterrupted;
-(void)daemon:(id)arg0 didChangeState:(NSInteger)arg1 withContext:(id)arg2 ;
-(void)daemon:(id)arg0 didCreateCode:(id)arg1 ;
-(void)daemon:(id)arg0 didImportWithContext:(id)arg1 ;
-(void)daemon:(id)arg0 didReceiveClient:(id)arg1 brand:(id)arg2 model:(id)arg3 name:(id)arg4 ;
-(void)daemon:(id)arg0 didUpdateProgress:(float)arg1 remainingTime:(NSUInteger)arg2 ;
-(void)daemonDidAuthenticateClient:(id)arg0 ;
-(void)daemonDidGetInterrupted;
-(void)daemonDidRejectClient:(id)arg0 ;
-(void)daemonWillImport:(id)arg0 ;
-(void)dataMigrator:(id)arg0 didFailWithError:(id)arg1 ;
-(void)dataMigrator:(id)arg0 didUpdateMigrationState:(NSUInteger)arg1 ;
-(void)dataMigrator:(id)arg0 didUpdateProgressPercentage:(float)arg1 ;
-(void)dataMigrator:(id)arg0 didUpdateRemainingDownloadTime:(CGFloat)arg1 ;
-(void)dataMigratorDidBecomeRestartable:(id)arg0 ;
-(void)dataMigratorDidFinish:(id)arg0 withImportErrors:(BOOL)arg1 context:(id)arg2 ;
-(void)dataMigratorDidGetInterrupted;
-(void)dealloc;
-(void)deleteMessages;
-(void)didDiscoverCandidate:(id)arg0 ;
-(void)import;
-(void)lookupAppDataContainer:(id)arg0 ;
-(void)popViewController;
-(void)reject;
-(void)reset;
-(void)retry;
-(void)run;
-(void)setNavigationController:(id)arg0 ;
-(void)showCancellation:(id)arg0 ;
-(void)showCancellationAlert:(id)arg0 ;
-(void)showFailure:(id)arg0 ;
-(void)showImport;
-(void)showReject;
-(void)sourceDeviceController:(id)arg0 didDiscoverCandidate:(id)arg1 ;
-(void)sourceDeviceController:(id)arg0 didDiscoverDevice:(id)arg1 ;
-(void)stop;
-(void)stopAP;
-(void)updateProgress:(float)arg0 remainingTime:(NSUInteger)arg1 ;
-(void)wifiAndDeviceDiscoveryDidGetInterrupted;


@end


#endif