// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHANNELACTIVITYUPDATE_H
#define CHANNELACTIVITYUPDATE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ChannelActivityUpdate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger currentVersion; // ivar: _currentVersion
@property (retain, nonatomic) NSData *encryptedUpdatePayload; // ivar: _encryptedUpdatePayload
@property (nonatomic) BOOL hasCurrentVersion;
@property (readonly, nonatomic) BOOL hasEncryptedUpdatePayload;
@property (nonatomic) BOOL hasPrevVersion;
@property (nonatomic) NSUInteger prevVersion; // ivar: _prevVersion


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