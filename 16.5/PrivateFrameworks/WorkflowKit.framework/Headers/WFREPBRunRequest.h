// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREPBRUNREQUEST_H
#define WFREPBRUNREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface WFREPBRunRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic) int payloadType; // ivar: _payloadType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)payloadTypeAsString:(int)arg0 ;
-(int)StringAsPayloadType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif