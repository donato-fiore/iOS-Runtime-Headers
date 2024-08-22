// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQICLOUDFOOTERSPECIFIERPROVIDER_H
#define ICQICLOUDFOOTERSPECIFIERPROVIDER_H

@class AIDAAccountManager, PSListController<AAUISpecifierProviderDelegate>, ICQCloudStorageSummary, PSSpecifier, NSString, NSArray;
@protocol ICQUpgradeFlowManagerDelegate, DelayedPushDelegate, AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>

#import "ICQUpgradeFlowManager.h"
#import "ICQPreferencesRemoteUIDelegate.h"
#import "ICQUILegacyPurchaseFlowController.h"
#import "ICQUILegacyPurchaseFlowManager.h"

@interface ICQiCloudFooterSpecifierProvider : NSObject <ICQUpgradeFlowManagerDelegate, DelayedPushDelegate, AAUISpecifierProvider>

 {
    AIDAAccountManager *_accountManager;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    ICQCloudStorageSummary *_storageSummary;
    ICQUpgradeFlowManager *_upgradeFlowManager;
    ICQPreferencesRemoteUIDelegate *_ruiDelegate;
    ICQUILegacyPurchaseFlowController *_legacyPurchaseFlowController;
    ICQUILegacyPurchaseFlowManager *_legacyPurchaseFlowManager;
    id<AAUISpecifierProvider> *_icloudPlusSpecifierProvider;
    PSSpecifier *_activeSpecifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(id)_buildSubscriptionSpecifiers;
-(id)_buildiCloudPlusSpecifiers;
-(id)_stringForSpecifier:(id)arg0 ;
-(id)account;
-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 ;
-(void)_beginLoadingSpecifier:(id)arg0 ;
-(void)_fetchStorageSummary;
-(void)_finishLoadingSpecifier;
-(void)_handleICQLink:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_launchFamilyUsageFlowWithURL:(id)arg0 ;
-(void)_launchFlowForSpecifier:(id)arg0 ;
-(void)_launchLegacyPurchaseFlow;
-(void)_launchUpgradeFlowWithICQLink:(id)arg0 ;
-(void)_launchUpgradeFlowWithURL:(id)arg0 ;
-(void)_postQuotaDidChangeNotification;
-(void)_reloadSpecifiers;
-(void)_setupSpecifier:(id)arg0 ;
-(void)_startFamilySharing;
-(void)dealloc;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadStarted:(id)arg0 ;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;


@end


#endif