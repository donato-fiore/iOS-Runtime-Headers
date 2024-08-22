// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYRUUSAGE_H
#define WIFIANALYTICSAWDWIFINWACTIVITYRUUSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityRuUsage : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *rxs; // ivar: _rxs
@property (retain, nonatomic) NSMutableArray *txs; // ivar: _txs


+(Class)rxType;
+(Class)txType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rxAtIndex:(NSUInteger)arg0 ;
-(id)txAtIndex:(NSUInteger)arg0 ;
-(void)addRx:(id)arg0 ;
-(void)addTx:(id)arg0 ;
-(void)clearRxs;
-(void)clearTxs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif