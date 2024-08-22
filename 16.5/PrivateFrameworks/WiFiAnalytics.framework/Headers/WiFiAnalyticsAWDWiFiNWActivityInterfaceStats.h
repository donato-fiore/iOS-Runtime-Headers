// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYINTERFACESTATS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYINTERFACESTATS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiNWActivityAssoc.h"

@interface WiFiAnalyticsAWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAssoc *assoc; // ivar: _assoc
@property (retain, nonatomic) NSMutableArray *awdlModes; // ivar: _awdlModes
@property (retain, nonatomic) NSMutableArray *bytes; // ivar: _bytes
@property (nonatomic) unsigned int consecutivedps; // ivar: _consecutivedps
@property (nonatomic) unsigned int dps; // ivar: _dps
@property (retain, nonatomic) NSMutableArray *enableStates; // ivar: _enableStates
@property (nonatomic) unsigned int enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL hasAssoc;
@property (nonatomic) BOOL hasConsecutivedps;
@property (nonatomic) BOOL hasDps;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasRole;
@property (retain, nonatomic) NSMutableArray *nss; // ivar: _nss
@property (retain, nonatomic) NSMutableArray *packets; // ivar: _packets
@property (retain, nonatomic) NSMutableArray *peers; // ivar: _peers
@property (retain, nonatomic) NSMutableArray *phymodes; // ivar: _phymodes
@property (retain, nonatomic) NSString *role; // ivar: _role


+(Class)awdlModeType;
+(Class)enableStateType;
+(Class)peerType;
+(Class)phymodeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)awdlModeAtIndex:(NSUInteger)arg0 ;
-(id)bytesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)enableStateAtIndex:(NSUInteger)arg0 ;
-(id)nssAtIndex:(NSUInteger)arg0 ;
-(id)packetsAtIndex:(NSUInteger)arg0 ;
-(id)peerAtIndex:(NSUInteger)arg0 ;
-(id)phymodeAtIndex:(NSUInteger)arg0 ;
-(void)addAwdlMode:(id)arg0 ;
-(void)addBytes:(id)arg0 ;
-(void)addEnableState:(id)arg0 ;
-(void)addNss:(id)arg0 ;
-(void)addPackets:(id)arg0 ;
-(void)addPeer:(id)arg0 ;
-(void)addPhymode:(id)arg0 ;
-(void)clearAwdlModes;
-(void)clearBytes;
-(void)clearEnableStates;
-(void)clearNss;
-(void)clearPackets;
-(void)clearPeers;
-(void)clearPhymodes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif