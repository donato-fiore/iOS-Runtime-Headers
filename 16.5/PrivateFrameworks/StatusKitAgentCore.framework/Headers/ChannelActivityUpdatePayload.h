// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHANNELACTIVITYUPDATEPAYLOAD_H
#define CHANNELACTIVITYUPDATEPAYLOAD_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface ChannelActivityUpdatePayload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPadding;
@property (nonatomic) BOOL hasUpdateType;
@property (retain, nonatomic) NSData *padding; // ivar: _padding
@property (retain, nonatomic) NSMutableArray *participantPayloads; // ivar: _participantPayloads
@property (nonatomic) int updateType; // ivar: _updateType


+(Class)participantPayloadType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)participantPayloadAtIndex:(NSUInteger)arg0 ;
-(id)updateTypeAsString:(int)arg0 ;
-(int)StringAsUpdateType:(id)arg0 ;
-(void)addParticipantPayload:(id)arg0 ;
-(void)clearParticipantPayloads;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif