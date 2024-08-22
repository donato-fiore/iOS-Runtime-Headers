// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSTORECONTROLLER_H
#define SUSTORECONTROLLER_H

@class ISOperation, NSString, NSArray, MFMailComposeViewController, NSDictionary, NSURL, UINavigationController, UIWindow;
@protocol SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate, MFMailComposeViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "SUClient.h"
#import "SUSectionsResponse.h"
#import "SUTabBarController.h"

@interface SUStoreController : NSObject <SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate, MFMailComposeViewControllerDelegate>

 {
    SUClient *_client;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    ISOperation *_loadSectionsOperation;
    NSString *_localStoreFrontAtLastSuspend;
    id *_locationObserver;
    NSArray *_overlayConfigurations;
    BOOL _reloadForStorefrontChangeAfterAccountSetup;
    BOOL _reloadSectionsOnNextLaunch;
    NSString *_synchedStoreFrontAtLastSuspend;
    MFMailComposeViewController *_mailComposeViewController;
    NSDictionary *_storeFrontLanguages;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultPNGNameForSuspend;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (readonly, nonatomic, getter=isStoreEnabled) BOOL storeEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SUTabBarController *tabBarController; // ivar: _tabBarController
@property (readonly, nonatomic, getter=isTabBarControllerLoaded) BOOL tabBarControllerLoaded;
@property (readonly, nonatomic) UINavigationController *topNavigationController;
@property (retain, nonatomic) UIWindow *window;


+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(BOOL)_isAccountViewControllerVisible;
-(BOOL)_loadSectionsAllowingCache:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(BOOL)_reloadForStorefrontChange;
-(BOOL)_showWildcatAccountViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)application:(id)arg0 handleOpenURL:(id)arg1 ;
-(BOOL)client:(id)arg0 openInternalURL:(id)arg1 ;
-(BOOL)client:(id)arg0 presentAccountViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)client:(id)arg0 presentModalViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isComposingEmail;
-(BOOL)libraryContainsItemIdentifier:(NSUInteger)arg0 ;
-(BOOL)matchesClientApplication:(id)arg0 ;
-(BOOL)presentOverlayBackgroundViewController:(id)arg0 ;
-(BOOL)reloadSectionWithIdentifier:(id)arg0 url:(id)arg1 ;
-(BOOL)selectSectionWithIdentifier:(id)arg0 ;
-(BOOL)showDialogForCapabilities:(id)arg0 mismatches:(id)arg1 ;
-(CGFloat)defaultImageSnapshotExpiration;
-(id)_resumableViewController;
-(id)copySuspendSettings;
-(id)downloadQueueForClient:(id)arg0 downloadKinds:(id)arg1 ;
-(id)init;
-(id)newScriptInterface;
-(id)overlayBackgroundViewController;
-(id)overlayConfigurationForStorePage:(id)arg0 ;
-(id)storeContentLanguage;
-(id)topViewControllerForClient:(id)arg0 ;
-(void)_accountControllerDisappearedNotification:(id)arg0 ;
-(void)_bagDidLoadNotification:(id)arg0 ;
-(void)_cancelLoadSectionsOperation;
-(void)_cancelSuspendAfterDialogsDismissed;
-(void)_defaultHandleApplicationURLRequestProperties:(id)arg0 ;
-(void)_dialogDidFinishNotification:(id)arg0 ;
-(void)_handleAccountURL:(id)arg0 ;
-(void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg0 ;
-(void)_handleFinishedLoadSectionsOperation:(id)arg0 ;
-(void)_handleSearchURL:(id)arg0 ;
-(void)_handleSectionsLoadFailedWithError:(id)arg0 ;
-(void)_mainThreadStoreFrontChangedNotification:(id)arg0 ;
-(void)_presentSectionFetchUI;
-(void)_reloadForNetworkTypeChange:(id)arg0 ;
-(void)_reloadOverlayConfigurations;
-(void)_reloadWithSectionsResponse:(id)arg0 ;
-(void)_restrictionsChangedNotification:(id)arg0 ;
-(void)_retrySectionsAfterNetworkTransition;
-(void)_saveArchivedNavigationPath;
-(void)_selectFooterSectionNotification:(id)arg0 ;
-(void)_storeFrontChangedNotification:(id)arg0 ;
-(void)beginPurchaseBatch;
-(void)cancelAllOperations;
-(void)composeEmailByRestoringAutosavedMessage;
-(void)composeEmailWithSubject:(id)arg0 body:(id)arg1 ;
-(void)connect;
-(void)dealloc;
-(void)dismissMailComposeViewControllerAnimated:(BOOL)arg0 ;
-(void)dismissOverlayBackgroundViewController;
-(void)endPurchaseBatch;
-(void)exitStoreAfterDialogsDismiss;
-(void)exitStoreWithReason:(NSInteger)arg0 ;
-(void)handleApplicationURL:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)prepareForSuspend;
-(void)presentExternalURLViewController:(id)arg0 ;
-(void)presentMailComposeViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)purchaseManager:(id)arg0 didAddPurchases:(id)arg1 ;
-(void)purchaseManager:(id)arg0 failedToAddPurchases:(id)arg1 ;
-(void)purchaseManager:(id)arg0 willAddPurchases:(id)arg1 ;
-(void)purchaseManagerDidEndUpdates:(id)arg0 ;
-(void)purchaseManagerWillBeginUpdates:(id)arg0 ;
-(void)setupUI;
-(void)tabBarController:(id)arg0 didEndCustomizingViewControllers:(id)arg1 changed:(BOOL)arg2 ;
-(void)tearDownUI;


@end


#endif