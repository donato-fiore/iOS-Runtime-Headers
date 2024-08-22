// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHANNELACTIVITYDEACTIVATIONREQUEST_H
#define CHANNELACTIVITYDEACTIVATIONREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;


#import "AuthCredential.h"
#import "ChannelIdentity.h"

@interface ChannelActivityDeactivationRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) AuthCredential *authCredential; // ivar: _authCredential
@property (retain, nonatomic) ChannelIdentity *channelIdentity; // ivar: _channelIdentity
@property (nonatomic) NSUInteger clientTimestampSeconds; // ivar: _clientTimestampSeconds
@property (readonly, nonatomic) BOOL hasAuthCredential;
@property (readonly, nonatomic) BOOL hasChannelIdentity;
@property (nonatomic) BOOL hasClientTimestampSeconds;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


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