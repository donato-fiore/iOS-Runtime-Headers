// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPCUSTODIANRECOVERYKEY_H
#define TPCUSTODIANRECOVERYKEY_H

@class NSData, NSString, NSUUID;
@protocol TPPublicKey;

#import <Foundation/Foundation.h>


@interface TPCustodianRecoveryKey : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSObject<TPPublicKey> *encryptionPublicKey; // ivar: _encryptionPublicKey
@property (nonatomic) int kind; // ivar: _kind
@property (retain, nonatomic) NSString *peerID; // ivar: _peerID
@property (readonly, nonatomic) NSData *sig; // ivar: _sig
@property (retain, nonatomic) NSObject<TPPublicKey> *signingPublicKey; // ivar: _signingPublicKey
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)custodianRecoveryKeyWithData:(id)arg0 sig:(id)arg1 keyFactory:(id)arg2 ;
+(id)peerIDForData:(id)arg0 sig:(id)arg1 peerIDHashAlgo:(NSInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithUUID:(id)arg0 signingPublicKey:(id)arg1 encryptionPublicKey:(id)arg2 kind:(int)arg3 data:(id)arg4 sig:(id)arg5 peerID:(id)arg6 ;
-(id)initWithUUID:(id)arg0 signingPublicKey:(id)arg1 encryptionPublicKey:(id)arg2 signingKeyPair:(id)arg3 kind:(int)arg4 error:(*id)arg5 ;


@end


#endif