// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDSYMPTOMSSDMPARTICIPANT_H
#define AWDSYMPTOMSSDMPARTICIPANT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDSymptomsSDMParticipant : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger additionalFlags; // ivar: _additionalFlags
@property (nonatomic) NSUInteger dlThroughputBytesPerSecond; // ivar: _dlThroughputBytesPerSecond
@property (nonatomic) BOOL hasAdditionalFlags;
@property (nonatomic) BOOL hasDlThroughputBytesPerSecond;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasParticipationDelta;
@property (nonatomic) BOOL hasPeriodDuration;
@property (nonatomic) BOOL hasUlThroughputBytesPerSecond;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger participationDelta; // ivar: _participationDelta
@property (nonatomic) NSUInteger periodDuration; // ivar: _periodDuration
@property (nonatomic) NSUInteger ulThroughputBytesPerSecond; // ivar: _ulThroughputBytesPerSecond


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