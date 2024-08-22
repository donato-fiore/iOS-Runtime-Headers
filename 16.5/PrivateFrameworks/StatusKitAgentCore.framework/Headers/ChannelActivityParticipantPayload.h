// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHANNELACTIVITYPARTICIPANTPAYLOAD_H
#define CHANNELACTIVITYPARTICIPANTPAYLOAD_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ChannelActivityParticipantPayload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *encryptedParticipantPayload; // ivar: _encryptedParticipantPayload
@property (readonly, nonatomic) BOOL hasEncryptedParticipantPayload;
@property (nonatomic) BOOL hasServerUpdateTimestampSeconds;
@property (nonatomic) NSUInteger serverUpdateTimestampSeconds; // ivar: _serverUpdateTimestampSeconds


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