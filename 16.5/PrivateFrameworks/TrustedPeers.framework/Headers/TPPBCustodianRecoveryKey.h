// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPBCUSTODIANRECOVERYKEY_H
#define TPPBCUSTODIANRECOVERYKEY_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface TPPBCustodianRecoveryKey : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *encryptionPublicKey; // ivar: _encryptionPublicKey
@property (readonly, nonatomic) BOOL hasEncryptionPublicKey;
@property (nonatomic) BOOL hasKind;
@property (readonly, nonatomic) BOOL hasSigningPublicKey;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) int kind; // ivar: _kind
@property (retain, nonatomic) NSData *signingPublicKey; // ivar: _signingPublicKey
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)kindAsString:(int)arg0 ;
-(int)StringAsKind:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif