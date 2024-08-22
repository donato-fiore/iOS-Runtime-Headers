// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDBTLECONNECTIONSTATS_H
#define WIFIANALYTICSAWDBTLECONNECTIONSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDBTLEConnectionStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int complete; // ivar: _complete
@property (nonatomic) unsigned int dc0; // ivar: _dc0
@property (nonatomic) unsigned int dc1; // ivar: _dc1
@property (nonatomic) unsigned int dc2; // ivar: _dc2
@property (nonatomic) unsigned int dc3; // ivar: _dc3
@property (nonatomic) unsigned int dc4; // ivar: _dc4
@property (nonatomic) unsigned int dc5; // ivar: _dc5
@property (nonatomic) BOOL hasComplete;
@property (nonatomic) BOOL hasDc0;
@property (nonatomic) BOOL hasDc1;
@property (nonatomic) BOOL hasDc2;
@property (nonatomic) BOOL hasDc3;
@property (nonatomic) BOOL hasDc4;
@property (nonatomic) BOOL hasDc5;
@property (nonatomic) BOOL hasPeakOutage;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) BOOL hasTotalDuration;
@property (nonatomic) unsigned int peakOutage; // ivar: _peakOutage
@property (nonatomic) unsigned int start; // ivar: _start
@property (nonatomic) unsigned int totalDuration; // ivar: _totalDuration


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