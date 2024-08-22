// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFIDPSACTIVEPROBESTATS_H
#define WIFIANALYTICSAWDWIFIDPSACTIVEPROBESTATS_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiDPSActiveProbeStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRttGatewayBE;
@property (nonatomic) BOOL hasRttGatewayBK;
@property (nonatomic) BOOL hasRttGatewayVI;
@property (nonatomic) BOOL hasRttGatewayVO;
@property (nonatomic) BOOL hasRttPrimaryDnsBE;
@property (nonatomic) BOOL hasRttPrimaryDnsBK;
@property (nonatomic) BOOL hasRttPrimaryDnsVI;
@property (nonatomic) BOOL hasRttPrimaryDnsVO;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int rttGatewayBE; // ivar: _rttGatewayBE
@property (nonatomic) unsigned int rttGatewayBK; // ivar: _rttGatewayBK
@property (nonatomic) unsigned int rttGatewayVI; // ivar: _rttGatewayVI
@property (nonatomic) unsigned int rttGatewayVO; // ivar: _rttGatewayVO
@property (nonatomic) unsigned int rttPrimaryDnsBE; // ivar: _rttPrimaryDnsBE
@property (nonatomic) unsigned int rttPrimaryDnsBK; // ivar: _rttPrimaryDnsBK
@property (nonatomic) unsigned int rttPrimaryDnsVI; // ivar: _rttPrimaryDnsVI
@property (nonatomic) unsigned int rttPrimaryDnsVO; // ivar: _rttPrimaryDnsVO
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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