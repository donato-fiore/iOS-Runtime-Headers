// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRACCOUNTSMANAGER_H
#define TRACCOUNTSMANAGER_H

@class ACAccount, SSAccount, NSString, ACAccountStore, GKLocalPlayer;

#import <Foundation/Foundation.h>


@interface TRAccountsManager : NSObject

@property (readonly, nonatomic) ACAccount *activeiCloudAccount;
@property (readonly, nonatomic) SSAccount *activeiTunesStoreAccount;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *homeSharingAppleID;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property (retain, nonatomic) ACAccountStore *iCloudAccountStore; // ivar: _iCloudAccountStore
@property (readonly, nonatomic) GKLocalPlayer *localGameCenterPlayer;


+(id)sharedInstance;
-(id)accountTypesWithDefaultAccountID:(id)arg0 ;
-(id)defaultAccountIDForAuthenticationAccountType:(NSUInteger)arg0 ;


@end


#endif