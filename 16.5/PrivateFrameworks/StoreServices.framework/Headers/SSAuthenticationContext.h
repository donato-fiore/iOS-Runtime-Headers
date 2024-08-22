// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSAUTHENTICATIONCONTEXT_H
#define SSAUTHENTICATIONCONTEXT_H

@class NSDictionary, NSString, NSNumber, NSArray;
@protocol SSXPCCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SSURLBagContext.h"

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSDictionary *HTTPHeaders; // ivar: _httpHeaders
@property (readonly, nonatomic) SSURLBagContext *URLBagContext;
@property (readonly, copy, nonatomic) NSString *accountName; // ivar: _accountName
@property (readonly, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable; // ivar: _accountNameEditable
@property (readonly) NSInteger accountScope; // ivar: _accountScope
@property (readonly, nonatomic) BOOL allowsBioAuthentication; // ivar: _allowsBioAuthentication
@property (readonly, nonatomic) BOOL allowsBootstrapCellularData; // ivar: _allowsBootstrapCellularData
@property (readonly, nonatomic) BOOL allowsRetry; // ivar: _allowsRetry
@property (readonly, nonatomic) BOOL allowsSilentAuthentication; // ivar: _allowsSilentAuthentication
@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) BOOL canCreateNewAccount; // ivar: _canCreateNewAccount
@property (readonly, nonatomic) BOOL canSetActiveAccount; // ivar: _canSetActiveAccount
@property (readonly, copy, nonatomic) NSString *cancelButtonLabel; // ivar: _cancelButtonLabel
@property (readonly, copy, nonatomic) NSString *clientIdentifierHeader; // ivar: _clientIdentifierHeader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDemoAccount) BOOL demoAccount; // ivar: _demoAccount
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL displaysOnLockScreen; // ivar: _displaysOnLockScreen
@property (readonly, nonatomic) BOOL forceDaemonAuthentication; // ivar: _forceDaemonAuthentication
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *initialPassword;
@property (readonly, copy, nonatomic) NSString *logUUID; // ivar: _logUUID
@property (readonly, copy, nonatomic) NSString *okButtonLabel; // ivar: _okButtonLabel
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, copy, nonatomic) NSString *passwordEquivalentToken; // ivar: _passwordEquivalentToken
@property (readonly, nonatomic) BOOL persistsAcrossDeviceLock; // ivar: _persistsAcrossDeviceLock
@property (readonly, nonatomic) BOOL persistsPasswordFallback; // ivar: _persistsPasswordFallback
@property (readonly, copy, nonatomic) NSString *preferredITunesStoreClient; // ivar: _preferredITunesStoreClient
@property (readonly, nonatomic) NSInteger promptStyle; // ivar: _promptStyle
@property (readonly, copy, nonatomic) NSString *promptTitle; // ivar: _promptTitle
@property (readonly, copy, nonatomic) NSString *reasonDescription; // ivar: _reasonDescription
@property (readonly, copy, nonatomic) NSDictionary *requestParameters; // ivar: _requestParameters
@property (readonly, retain, nonatomic) NSNumber *requiredUniqueIdentifier; // ivar: _requiredUniqueIdentifier
@property (readonly, nonatomic) BOOL shouldCreateNewSession; // ivar: _shouldCreateNewSession
@property (readonly, nonatomic) BOOL shouldFollowAccountButtons; // ivar: _shouldFollowAccountButtons
@property (readonly, nonatomic) BOOL shouldIgnoreAccountConversion; // ivar: _shouldIgnoreAccountConversion
@property (readonly, nonatomic) BOOL shouldIgnoreProtocol; // ivar: _shouldIgnoreProtocol
@property (readonly, nonatomic) BOOL shouldPersonalizeResponseActions; // ivar: _shouldPersonalizeResponseActions
@property (readonly, nonatomic) BOOL shouldSuppressDialogs; // ivar: _shouldSuppressDialogs
@property (readonly, copy, nonatomic) NSDictionary *signupRequestParameters; // ivar: _signupRequestParameters
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger tokenType; // ivar: _tokenType
@property (readonly, copy, nonatomic) NSString *touchIDContinueToken; // ivar: _touchIDContinueToken
@property (readonly, copy, nonatomic) NSArray *userAgentComponents; // ivar: _userAgentComponents


+(id)contextForSignIn;
-(BOOL)_allowCreateAccount;
-(id)_initSSAuthenticationContext;
-(id)accountStoreOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccountIdentifier:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_copyIvarsToCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif