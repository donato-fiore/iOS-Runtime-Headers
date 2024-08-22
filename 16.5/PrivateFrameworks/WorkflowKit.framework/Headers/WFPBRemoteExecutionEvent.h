// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPBREMOTEEXECUTIONEVENT_H
#define WFPBREMOTEEXECUTIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBRemoteExecutionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSString *connectionType; // ivar: _connectionType
@property (retain, nonatomic) NSString *destinationType; // ivar: _destinationType
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (nonatomic) BOOL hasCompleted;
@property (readonly, nonatomic) BOOL hasConnectionType;
@property (readonly, nonatomic) BOOL hasDestinationType;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *source; // ivar: _source


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