// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQCLOUDSTORAGESPECIFIERPROVIDER_H
#define ICQCLOUDSTORAGESPECIFIERPROVIDER_H

@class AIDAAccountManager, PSListController<AAUISpecifierProviderDelegate>, PSSpecifier, ICQCloudStorageSummary, FLFollowUpController, NSString, NSArray;
@protocol DelayedPushDelegate, RUITableViewRowDelegate, AAUISpecifierProvider, NSObject, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>

#import "ICQPreferencesRemoteUIDelegate.h"
#import "ICQUITipSpecifierProvider.h"

@interface ICQCloudStorageSpecifierProvider : NSObject <DelayedPushDelegate, RUITableViewRowDelegate, AAUISpecifierProvider>

 {
    AIDAAccountManager *_accountManager;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    PSSpecifier *_activeSpecifier;
    ICQPreferencesRemoteUIDelegate *_ruiDelegate;
    BOOL _delayedEnterManageStorage;
    id<NSObject> *_quotaChangeNotificationObserver;
    ICQCloudStorageSummary *_storageSummary;
    PSSpecifier *_manageStorageSpecifier;
    PSSpecifier *_storageGraphSpecifier;
    ICQUITipSpecifierProvider *_tipSpecifierProvider;
    FLFollowUpController *_followUpController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *initialStorageFlowAction; // ivar: _initialStorageFlowAction
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(BOOL)_handleManagedStorageURL:(id)arg0 ;
-(BOOL)handleURL:(id)arg0 ;
-(Class)tableCellClassForTableViewRow:(id)arg0 ;
-(id)_valueForStorageGraphSpecifier:(id)arg0 ;
-(id)account;
-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 ;
-(void)_enterManageStorage:(id)arg0 ;
-(void)_fetchStorageSummary:(id)arg0 ;
-(void)_finishLoadingActiveSpecifier;
-(void)_handleStorageUpgradeURL:(id)arg0 ;
-(void)_manageStorageSpecifierWasTapped:(id)arg0 ;
-(void)_reloadStorageSpecifiers;
-(void)_replaceRUISectionWithTipUIFromObjectModel:(id)arg0 inPage:(id)arg1 ;
-(void)_startObservingQuotaChangeNotifications;
-(void)_stopObservingQuotaChangeNotifications;
-(void)dealloc;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadStarted:(id)arg0 ;
-(void)remoteUIDelegate:(id)arg0 didCreatePage:(id)arg1 inObjectModel:(id)arg2 ;


@end


#endif