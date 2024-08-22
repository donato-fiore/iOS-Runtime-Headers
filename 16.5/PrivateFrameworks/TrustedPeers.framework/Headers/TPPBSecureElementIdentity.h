// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPBSECUREELEMENTIDENTITY_H
#define TPPBSECUREELEMENTIDENTITY_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface TPPBSecureElementIdentity : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPeerData;
@property (readonly, nonatomic) BOOL hasPeerIdentifier;
@property (retain, nonatomic) NSData *peerData; // ivar: _peerData
@property (retain, nonatomic) NSData *peerIdentifier; // ivar: _peerIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif