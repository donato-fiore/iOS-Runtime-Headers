// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYAWDLINTERFACESTATS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYAWDLINTERFACESTATS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int afCount; // ivar: _afCount
@property (retain, nonatomic) NSMutableArray *awdlStates; // ivar: _awdlStates
@property (retain, nonatomic) NSMutableArray *bytes; // ivar: _bytes
@property (retain, nonatomic) NSMutableArray *enableStates; // ivar: _enableStates
@property (nonatomic) unsigned int enabled; // ivar: _enabled
@property (nonatomic) BOOL hasAfCount;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL hasPeerCount;
@property (nonatomic) BOOL hasPeersAdded;
@property (nonatomic) BOOL hasPeersRemoved;
@property (readonly, nonatomic) BOOL hasRole;
@property (nonatomic) BOOL hasRtPeerCount;
@property (retain, nonatomic) NSMutableArray *npeers; // ivar: _npeers
@property (retain, nonatomic) NSMutableArray *nrtpeers; // ivar: _nrtpeers
@property (retain, nonatomic) NSMutableArray *packets; // ivar: _packets
@property (nonatomic) unsigned int peerCount; // ivar: _peerCount
@property (nonatomic) unsigned int peersAdded; // ivar: _peersAdded
@property (nonatomic) unsigned int peersRemoved; // ivar: _peersRemoved
@property (retain, nonatomic) NSString *role; // ivar: _role
@property (nonatomic) unsigned int rtPeerCount; // ivar: _rtPeerCount
@property (retain, nonatomic) NSMutableArray *txLatencyBEs; // ivar: _txLatencyBEs
@property (retain, nonatomic) NSMutableArray *txLatencyBKs; // ivar: _txLatencyBKs
@property (retain, nonatomic) NSMutableArray *txLatencyVIs; // ivar: _txLatencyVIs
@property (retain, nonatomic) NSMutableArray *txLatencyVOs; // ivar: _txLatencyVOs


+(Class)awdlStateType;
+(Class)enableStateType;
+(Class)txLatencyBEType;
+(Class)txLatencyBKType;
+(Class)txLatencyVIType;
+(Class)txLatencyVOType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)awdlStateAtIndex:(NSUInteger)arg0 ;
-(id)bytesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)enableStateAtIndex:(NSUInteger)arg0 ;
-(id)npeersAtIndex:(NSUInteger)arg0 ;
-(id)nrtpeersAtIndex:(NSUInteger)arg0 ;
-(id)packetsAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyBEAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyBKAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyVIAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyVOAtIndex:(NSUInteger)arg0 ;
-(void)addAwdlState:(id)arg0 ;
-(void)addBytes:(id)arg0 ;
-(void)addEnableState:(id)arg0 ;
-(void)addNpeers:(id)arg0 ;
-(void)addNrtpeers:(id)arg0 ;
-(void)addPackets:(id)arg0 ;
-(void)addTxLatencyBE:(id)arg0 ;
-(void)addTxLatencyBK:(id)arg0 ;
-(void)addTxLatencyVI:(id)arg0 ;
-(void)addTxLatencyVO:(id)arg0 ;
-(void)clearAwdlStates;
-(void)clearBytes;
-(void)clearEnableStates;
-(void)clearNpeers;
-(void)clearNrtpeers;
-(void)clearPackets;
-(void)clearTxLatencyBEs;
-(void)clearTxLatencyBKs;
-(void)clearTxLatencyVIs;
-(void)clearTxLatencyVOs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif