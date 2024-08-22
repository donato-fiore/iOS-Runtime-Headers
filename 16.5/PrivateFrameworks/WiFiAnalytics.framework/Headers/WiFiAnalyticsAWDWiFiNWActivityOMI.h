// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYOMI_H
#define WIFIANALYTICSAWDWIFINWACTIVITYOMI_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityOMI : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int chBWAck; // ivar: _chBWAck
@property (nonatomic) unsigned int chBWReq; // ivar: _chBWReq
@property (nonatomic) unsigned int completionDelay; // ivar: _completionDelay
@property (nonatomic) unsigned int dLResoundAck; // ivar: _dLResoundAck
@property (nonatomic) unsigned int dLResoundReq; // ivar: _dLResoundReq
@property (nonatomic) unsigned int eRSUAck; // ivar: _eRSUAck
@property (nonatomic) unsigned int eRSUReq; // ivar: _eRSUReq
@property (nonatomic) BOOL hasChBWAck;
@property (nonatomic) BOOL hasChBWReq;
@property (nonatomic) BOOL hasCompletionDelay;
@property (nonatomic) BOOL hasDLResoundAck;
@property (nonatomic) BOOL hasDLResoundReq;
@property (nonatomic) BOOL hasERSUAck;
@property (nonatomic) BOOL hasERSUReq;
@property (nonatomic) BOOL hasRetries;
@property (nonatomic) BOOL hasRxNSSAck;
@property (nonatomic) BOOL hasRxNSSReq;
@property (nonatomic) BOOL hasScheduled;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTxNSTSAck;
@property (nonatomic) BOOL hasTxNSTSReq;
@property (nonatomic) BOOL hasULMUAck;
@property (nonatomic) BOOL hasULMUReq;
@property (nonatomic) unsigned int retries; // ivar: _retries
@property (nonatomic) unsigned int rxNSSAck; // ivar: _rxNSSAck
@property (nonatomic) unsigned int rxNSSReq; // ivar: _rxNSSReq
@property (nonatomic) unsigned int scheduled; // ivar: _scheduled
@property (nonatomic) unsigned int success; // ivar: _success
@property (nonatomic) unsigned int txNSTSAck; // ivar: _txNSTSAck
@property (nonatomic) unsigned int txNSTSReq; // ivar: _txNSTSReq
@property (nonatomic) unsigned int uLMUAck; // ivar: _uLMUAck
@property (nonatomic) unsigned int uLMUReq; // ivar: _uLMUReq


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