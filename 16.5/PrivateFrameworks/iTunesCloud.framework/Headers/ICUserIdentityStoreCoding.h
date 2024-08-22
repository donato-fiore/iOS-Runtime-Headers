// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICUSERIDENTITYSTORECODING_H
#define ICUSERIDENTITYSTORECODING_H

@protocol NSSecureCoding, ICUserIdentityStoreBackend;

#import <Foundation/Foundation.h>

#import "ICValueHistory.h"
#import "ICDelegateAccountStoreOptions.h"

@interface ICUserIdentityStoreCoding : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) ICValueHistory *activeAccountHistory; // ivar: _activeAccountHistory
@property (copy, nonatomic) ICValueHistory *activeLockerAccountHistory; // ivar: _activeLockerAccountHistory
@property (copy, nonatomic) NSObject<ICUserIdentityStoreBackend> *backend; // ivar: _backend
@property (copy, nonatomic) ICDelegateAccountStoreOptions *delegateAccountStoreOptions; // ivar: _delegateAccountStoreOptions
@property (readonly, nonatomic) NSInteger identityStoreStyle; // ivar: _identityStoreStyle
@property (readonly, nonatomic) NSInteger uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)_initCommon;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentityStoreStyle:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)lock:(id)arg0 ;


@end


#endif