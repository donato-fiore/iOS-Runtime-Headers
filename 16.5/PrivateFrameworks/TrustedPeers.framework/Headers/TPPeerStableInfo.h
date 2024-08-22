// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPEERSTABLEINFO_H
#define TPPEERSTABLEINFO_H

@class NSData, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "TPPolicyVersion.h"
#import "TPPBSecureElementIdentity.h"
#import "TPTypedSignedData.h"
#import "TPPBPeerStableInfoSetting.h"

@interface TPPeerStableInfo : NSObject

@property (readonly, nonatomic) NSUInteger clock;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly) TPPolicyVersion *flexiblePolicyVersion;
@property (readonly) TPPolicyVersion *frozenPolicyVersion;
@property (readonly, nonatomic) BOOL isInheritedAccount;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSDictionary *policySecrets;
@property (readonly, nonatomic) NSData *recoveryEncryptionPublicKey;
@property (readonly, nonatomic) NSData *recoverySigningPublicKey;
@property (readonly, nonatomic) TPPBSecureElementIdentity *secureElementIdentity;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSData *sig;
@property (readonly, nonatomic) int syncUserControllableViews;
@property (retain, nonatomic) TPTypedSignedData *tsd; // ivar: _tsd
@property (readonly, nonatomic) TPPBPeerStableInfoSetting *walrusSetting;
@property (readonly, nonatomic) TPPBPeerStableInfoSetting *webAccess;


+(id)flexiblePolicyVersionFromPb:(id)arg0 ;
+(id)policySecretsFromPb:(id)arg0 ;
-(BOOL)checkSignatureWithKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerStableInfo:(id)arg0 ;
-(id)bestPolicyVersion;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithClock:(NSUInteger)arg0 frozenPolicyVersion:(id)arg1 flexiblePolicyVersion:(id)arg2 policySecrets:(id)arg3 syncUserControllableViews:(int)arg4 secureElementIdentity:(id)arg5 walrusSetting:(id)arg6 webAccess:(id)arg7 deviceName:(id)arg8 serialNumber:(id)arg9 osVersion:(id)arg10 signingKeyPair:(id)arg11 recoverySigningPubKey:(id)arg12 recoveryEncryptionPubKey:(id)arg13 isInheritedAccount:(BOOL)arg14 error:(*id)arg15 ;
-(id)initWithData:(id)arg0 sig:(id)arg1 ;
-(id)pb;


@end


#endif