// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTAPPLEACCOUNTSTORE_H
#define SUSCRIPTAPPLEACCOUNTSTORE_H

@class ACAccountStore, NSString;


#import "SUScriptObject.h"
#import "SUScriptAppleAccount.h"

@interface SUScriptAppleAccountStore : SUScriptObject {
    ACAccountStore *_accountStore;
    NSString *_effectiveBundleID;
}


@property (readonly) NSString *accessPurposeRead;
@property (readonly) NSString *accessPurposeReadWrite;
@property (readonly) NSString *accessPurposeWrite;
@property (readonly) NSString *accountTypeIdentifierFacebook;
@property (readonly) NSString *accountTypeIdentifierSinaWeibo;
@property (readonly) NSString *accountTypeIdentifierTwitter;
@property (readonly) SUScriptAppleAccount *activeStoreAccount;
@property (readonly) NSString *effectiveBundleID;
@property (readonly) SUScriptAppleAccount *primaryAppleAccount;
@property (readonly) NSInteger renewResultFailed;
@property (readonly) NSInteger renewResultRejected;
@property (readonly) NSInteger renewResultRenewed;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_accountStore;
-(id)_className;
-(id)accountTypeWithIdentifier:(id)arg0 ;
-(id)accountsWithAccountType:(id)arg0 ;
-(id)attributeKeys;
-(id)init;
-(id)makeClientAccessInfoWithAccountType:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)_accountStoreChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)renewCredentialsForAccount:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestAccessWithInfo:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif