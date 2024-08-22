// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYPEERSTATS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYPEERSTATS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiNWActivityTxCompletions.h"

@interface WiFiAnalyticsAWDWiFiNWActivityPeerStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *acCompletions; // ivar: _acCompletions
@property (retain, nonatomic) NSMutableArray *bytes; // ivar: _bytes
@property (nonatomic) unsigned int ccaValue; // ivar: _ccaValue
@property (retain, nonatomic) NSMutableArray *ccas; // ivar: _ccas
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityTxCompletions *completions; // ivar: _completions
@property (nonatomic) BOOL hasCcaValue;
@property (readonly, nonatomic) BOOL hasCompletions;
@property (readonly, nonatomic) BOOL hasHashID;
@property (nonatomic) BOOL hasIbssCCA;
@property (nonatomic) BOOL hasInterferenceCCA;
@property (nonatomic) BOOL hasNfValue;
@property (nonatomic) BOOL hasObssCCA;
@property (nonatomic) BOOL hasOfdmDesense;
@property (nonatomic) BOOL hasQbssCCA;
@property (nonatomic) BOOL hasQbssSTACount;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) BOOL hasRssiValue;
@property (nonatomic) BOOL hasRssiValue0;
@property (nonatomic) BOOL hasRssiValue1;
@property (nonatomic) BOOL hasSnrValue;
@property (retain, nonatomic) NSString *hashID; // ivar: _hashID
@property (nonatomic) unsigned int ibssCCA; // ivar: _ibssCCA
@property (nonatomic) unsigned int interferenceCCA; // ivar: _interferenceCCA
@property (nonatomic) int nfValue; // ivar: _nfValue
@property (nonatomic) unsigned int obssCCA; // ivar: _obssCCA
@property (nonatomic) unsigned int ofdmDesense; // ivar: _ofdmDesense
@property (retain, nonatomic) NSMutableArray *packets; // ivar: _packets
@property (nonatomic) unsigned int qbssCCA; // ivar: _qbssCCA
@property (nonatomic) unsigned int qbssSTACount; // ivar: _qbssSTACount
@property (nonatomic) int role; // ivar: _role
@property (nonatomic) int rssiValue; // ivar: _rssiValue
@property (nonatomic) int rssiValue0; // ivar: _rssiValue0
@property (nonatomic) int rssiValue1; // ivar: _rssiValue1
@property (retain, nonatomic) NSMutableArray *rssis; // ivar: _rssis
@property (nonatomic) int snrValue; // ivar: _snrValue
@property (retain, nonatomic) NSMutableArray *snrs; // ivar: _snrs
@property (retain, nonatomic) NSMutableArray *txLatencyBEs; // ivar: _txLatencyBEs
@property (retain, nonatomic) NSMutableArray *txLatencyBKs; // ivar: _txLatencyBKs
@property (retain, nonatomic) NSMutableArray *txLatencyVIs; // ivar: _txLatencyVIs
@property (retain, nonatomic) NSMutableArray *txLatencyVOs; // ivar: _txLatencyVOs


+(Class)ccaType;
+(Class)rssiType;
+(Class)snrType;
+(Class)txLatencyBEType;
+(Class)txLatencyBKType;
+(Class)txLatencyVIType;
+(Class)txLatencyVOType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)acCompletionsAtIndex:(NSUInteger)arg0 ;
-(id)bytesAtIndex:(NSUInteger)arg0 ;
-(id)ccaAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)packetsAtIndex:(NSUInteger)arg0 ;
-(id)roleAsString:(int)arg0 ;
-(id)rssiAtIndex:(NSUInteger)arg0 ;
-(id)snrAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyBEAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyBKAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyVIAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyVOAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRole:(id)arg0 ;
-(void)addAcCompletions:(id)arg0 ;
-(void)addBytes:(id)arg0 ;
-(void)addCca:(id)arg0 ;
-(void)addPackets:(id)arg0 ;
-(void)addRssi:(id)arg0 ;
-(void)addSnr:(id)arg0 ;
-(void)addTxLatencyBE:(id)arg0 ;
-(void)addTxLatencyBK:(id)arg0 ;
-(void)addTxLatencyVI:(id)arg0 ;
-(void)addTxLatencyVO:(id)arg0 ;
-(void)clearAcCompletions;
-(void)clearBytes;
-(void)clearCcas;
-(void)clearPackets;
-(void)clearRssis;
-(void)clearSnrs;
-(void)clearTxLatencyBEs;
-(void)clearTxLatencyBKs;
-(void)clearTxLatencyVIs;
-(void)clearTxLatencyVOs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif