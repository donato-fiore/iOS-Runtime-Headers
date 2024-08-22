// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDSYMPTOMSLAUNCHINTERVALMETRIC_H
#define AWDSYMPTOMSLAUNCHINTERVALMETRIC_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsLaunchIntervalMetric : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIntervalSincePreviousLaunch;
@property (nonatomic) BOOL hasProcess;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger intervalSincePreviousLaunch; // ivar: _intervalSincePreviousLaunch
@property (nonatomic) int process; // ivar: _process
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)processAsString:(int)arg0 ;
-(int)StringAsProcess:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif