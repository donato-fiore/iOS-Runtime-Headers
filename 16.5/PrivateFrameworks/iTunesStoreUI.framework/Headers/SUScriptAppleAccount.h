// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTAPPLEACCOUNT_H
#define SUSCRIPTAPPLEACCOUNT_H

@class ACAccount, ACAccountStore, NSString;


#import "SUScriptObject.h"
#import "SUScriptAppleAccountType.h"
#import "SUScriptAppleAccountCredential.h"

@interface SUScriptAppleAccount : SUScriptObject {
    ACAccount *_account;
    ACAccountStore *_accountStore;
}


@property (readonly) NSString *accountDescription;
@property (readonly) SUScriptAppleAccountType *accountType;
@property (readonly) SUScriptAppleAccountCredential *credential;
@property (readonly) NSString *dsID;
@property (readonly) NSString *identifier;
@property (readonly) ACAccount *nativeAccount;
@property (readonly) ACAccountStore *nativeAccountStore;
@property (readonly) NSString *username;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithACAccount:(id)arg0 accountStore:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)dealloc;
-(void)reload;
-(void)setAgeVerificationExpirationDate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif