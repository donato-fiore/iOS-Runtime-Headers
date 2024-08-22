// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQICLOUDHEADERSPECIFIERPROVIDER_H
#define ICQICLOUDHEADERSPECIFIERPROVIDER_H

@class AIDAAccountManager, PSListController<AAUISpecifierProviderDelegate>, NSArray, NSString;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>

#import "ICQCloudStorageSpecifierProvider.h"

@interface ICQiCloudHeaderSpecifierProvider : NSObject <AAUISpecifierProvider>

 {
    AIDAAccountManager *_accountManager;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    ICQCloudStorageSpecifierProvider *_storageGroupSpecifierProvider;
    id<AAUISpecifierProvider> *_storageViolationTipSpecifierProvider;
    NSArray *_storageSpecifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(BOOL)handleURL:(id)arg0 ;
-(id)account;
-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 navigationController:(id)arg1 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 ;


@end


#endif