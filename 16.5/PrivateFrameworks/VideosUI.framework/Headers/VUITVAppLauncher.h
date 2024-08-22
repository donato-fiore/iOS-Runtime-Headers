// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUITVAPPLAUNCHER_H
#define VUITVAPPLAUNCHER_H

@class UIWindow, NSString, NSDictionary, VUIStateMachine, NSArray;
@protocol VUITVApplicationControllerDelegate, UIGestureRecognizerDelegate, VUITVAppLaunchProtocol, VUIRootSplitViewController, VUITabBarProtocol;

#import <Foundation/Foundation.h>

#import "VUITVApplicationController.h"
#import "VUIBootURLController.h"
#import "ATAParsedOpenURL.h"

@interface VUITVAppLauncher : NSObject <VUITVApplicationControllerDelegate, UIGestureRecognizerDelegate, VUITVAppLaunchProtocol>

 {
    os_unfair_lock_s _isStillProcessingStartupItemsLock;
    BOOL _isStillProcessingStartupItems;
}


@property (retain, nonatomic) VUITVApplicationController *appController; // ivar: _appController
@property (nonatomic) BOOL appWasForegrounded; // ivar: _appWasForegrounded
@property (retain, nonatomic) UIWindow *appWindow; // ivar: _appWindow
@property (retain, nonatomic) VUIBootURLController *bootURLController; // ivar: _bootURLController
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deeplinkCompletionHandler; // ivar: _deeplinkCompletionHandler
@property (retain, nonatomic) ATAParsedOpenURL *deferredParsedOpenURL; // ivar: _deferredParsedOpenURL
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAppRunning;
@property (nonatomic) BOOL isDeeplinkLaunched; // ivar: _isDeeplinkLaunched
@property (nonatomic) BOOL isStillProcessingStartupItems;
@property (nonatomic) BOOL isTerminating; // ivar: _isTerminating
@property (copy, nonatomic) NSDictionary *launchOptions; // ivar: _launchOptions
@property (nonatomic) BOOL overrideOrientation; // ivar: _overrideOrientation
@property (retain, nonatomic) NSObject<VUIRootSplitViewController> *splitViewController; // ivar: _splitViewController
@property (nonatomic) BOOL startupOfferProcessingCompleted; // ivar: _startupOfferProcessingCompleted
@property (nonatomic) BOOL startupPrewarmSubscriptionDataCompleted; // ivar: _startupPrewarmSubscriptionDataCompleted
@property (retain, nonatomic) VUIStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (copy, nonatomic) id *switchTabHandler; // ivar: _switchTabHandler
@property (retain, nonatomic) NSObject<VUITabBarProtocol> *tabBarController; // ivar: _tabBarController
@property (retain, nonatomic) NSArray *tabBarItems; // ivar: _tabBarItems


+(BOOL)_isDeeplinkTVButton:(id)arg0 ;
+(BOOL)_isRunningState:(id)arg0 ;
+(id)_libraryOnlyTabBarItem;
+(id)sharedInstance;
-(BOOL)_isActiveMediaLibraryTheDeviceMediaLibrary;
-(BOOL)_shouldRecordExitEvent;
-(BOOL)applicationDidFinishLaunchingWithOptions:(id)arg0 ;
-(BOOL)applicationWillFinishLaunchingWithOptions:(id)arg0 ;
-(BOOL)openURL:(id)arg0 options:(id)arg1 ;
-(CGFloat)appContainerWidth;
-(id)_dialogMetricsForGDPR;
-(id)init;
-(id)rootViewControllerForAppController:(id)arg0 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_applicationWillTerminateNotification:(id)arg0 ;
-(void)_configureStateMachine;
-(void)_fetchApplicationControllerBootURL;
-(void)_fetchFullFeatureFlag:(id)arg0 ;
-(void)_finishAppLoading;
-(void)_finishJavascriptSetupWithTabBarItems:(id)arg0 setSelectedIndexFromDefaults:(BOOL)arg1 ;
-(void)_handleAMSEngagementSheetPresentation:(BOOL)arg0 ;
-(void)_handleDeferredParsedOpenURLIfNeeded;
-(void)_handleNetworkReachabilityDidChangeNotification:(id)arg0 ;
-(void)_handleOfferProcessingDidFinishNotification:(id)arg0 ;
-(void)_handleOfferProcessingDidStartNotification:(id)arg0 ;
-(void)_handleParsedOpenURL:(id)arg0 ;
-(void)_handlePrewarmSubscriptionDataNotification:(id)arg0 ;
-(void)_initializeBookmarkService;
-(void)_initializeMediaLibrary;
-(void)_initializePlayer;
-(void)_javascriptSetTabBarItems:(id)arg0 ;
-(void)_notifyInAppMessagingIfComplete;
-(void)_presentSyndicationOnboardingIfNeeded;
-(void)_registerStateMachineHandlers;
-(void)_resetJavascriptState;
-(void)_showJavascriptUnavailableUIWithNetworkAvailable:(BOOL)arg0 ;
-(void)_startApplicationControllerWithBootURL:(id)arg0 ;
-(void)_startJavascriptSetup;
-(void)_stopApplicationController;
-(void)_syncBookmarkServiceIfRequired;
-(void)_updateDeviceMediaLibraryFromCloud;
-(void)_updateTabControllerWithTabBarItems:(id)arg0 setSelectedIndexFromDefaults:(BOOL)arg1 ;
-(void)appController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appController:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(void)appController:(id)arg0 didStopWithOptions:(id)arg1 ;
-(void)appController:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)cleanUp;
-(void)configureAppWindow;
-(void)didAcceptGDPRWelcome;
-(void)didFailToLaunch:(id)arg0 ;
-(void)didShowGDPRWelcome;
-(void)hideLoadingView;
-(void)preWarm:(id)arg0 ;
-(void)processStartupItems;
-(void)refreshTabBarItems;
-(void)registerForApplicationNotifications;
-(void)selectTabBarItem:(id)arg0 ;
-(void)setMainWindow:(id)arg0 ;
-(void)showLoadingView;


@end


#endif