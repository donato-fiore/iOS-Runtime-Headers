// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTACCOUNTMANAGER_H
#define SUSCRIPTACCOUNTMANAGER_H

@class NSMutableArray, NSLock, NSArray;

#import <Foundation/Foundation.h>


@interface SUScriptAccountManager : NSObject {
    NSMutableArray *_accounts;
    NSLock *_lock;
}


@property (readonly, retain) NSArray *accounts;


+(id)beginAccountManagerSessionForObject:(id)arg0 ;
+(void)endAccountManagerSessionForObject:(id)arg0 ;
-(id)accountForDSID:(id)arg0 ;
-(id)init;
-(void)_accountsChangedNotification:(id)arg0 ;
-(void)_dispatchEvent:(id)arg0 forName:(id)arg1 ;
-(void)_ntsReloadAccounts;
-(void)dealloc;


@end


#endif