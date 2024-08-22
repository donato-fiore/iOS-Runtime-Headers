// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHAREDCHANNELCREATERESPONSE_H
#define SHAREDCHANNELCREATERESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "ChannelIdentity.h"

@interface SharedChannelCreateResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ChannelIdentity *channelIdentity; // ivar: _channelIdentity
@property (readonly, nonatomic) BOOL hasChannelIdentity;
@property (nonatomic) BOOL hasRetryIntervalSeconds;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int retryIntervalSeconds; // ivar: _retryIntervalSeconds
@property (nonatomic) int status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif