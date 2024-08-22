// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMONITOREDACCOUNTSTORE_H
#define ICMONITOREDACCOUNTSTORE_H

@class ACMonitoredAccountStore, NSHashTable, ACAccountType, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICMonitoredAccountStore : NSObject <ACMonitoredAccountStoreDelegateProtocol>

 {
    ACMonitoredAccountStore *_accountStore;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
    ACAccountType *_cachedStoreAccountType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedAccountStore;
-(BOOL)saveAccount:(id)arg0 error:(*id)arg1 ;
-(id)_registerAndLoadAccountsIfNecessary;
-(id)acAccountStore;
-(id)activeStoreAccountWithError:(*id)arg0 ;
-(id)allStoreAccountsWithError:(*id)arg0 ;
-(id)init;
-(id)localStoreAccountWithError:(*id)arg0 ;
-(id)primaryAppleAccountWithError:(*id)arg0 ;
-(id)storeAccountForDSID:(id)arg0 error:(*id)arg1 ;
-(id)storeAccountForHomeUserIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)storeAccountTypeWithError:(*id)arg0 ;
-(id)storeAccountWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)accountCredentialChanged:(id)arg0 ;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;


@end


#endif