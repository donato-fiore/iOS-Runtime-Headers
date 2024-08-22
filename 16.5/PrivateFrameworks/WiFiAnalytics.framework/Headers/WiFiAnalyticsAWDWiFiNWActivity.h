// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITY_H
#define WIFIANALYTICSAWDWIFINWACTIVITY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats.h"
#import "WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats.h"
#import "WiFiAnalyticsAWDWiFiNWActivityControllerStats.h"
#import "WiFiAnalyticsAWDLinkQualityMeasurements.h"

@interface WiFiAnalyticsAWDWiFiNWActivity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *activities; // ivar: _activities
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats *apIfStats; // ivar: _apIfStats
@property (retain, nonatomic) NSString *apProfile; // ivar: _apProfile
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats *awdlIfStats; // ivar: _awdlIfStats
@property (retain, nonatomic) NSMutableArray *btleConnections; // ivar: _btleConnections
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityControllerStats *controllerStats; // ivar: _controllerStats
@property (readonly, nonatomic) BOOL hasApIfStats;
@property (readonly, nonatomic) BOOL hasApProfile;
@property (readonly, nonatomic) BOOL hasAwdlIfStats;
@property (readonly, nonatomic) BOOL hasControllerStats;
@property (readonly, nonatomic) BOOL hasLinkQualSample;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *interfaceStats; // ivar: _interfaceStats
@property (retain, nonatomic) WiFiAnalyticsAWDLinkQualityMeasurements *linkQualSample; // ivar: _linkQualSample
@property (retain, nonatomic) NSMutableArray *peerStats; // ivar: _peerStats
@property (retain, nonatomic) NSMutableArray *scores; // ivar: _scores
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)btleConnectionType;
+(Class)scoreType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activitiesAtIndex:(NSUInteger)arg0 ;
-(id)btleConnectionAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)interfaceStatsAtIndex:(NSUInteger)arg0 ;
-(id)peerStatsAtIndex:(NSUInteger)arg0 ;
-(id)scoreAtIndex:(NSUInteger)arg0 ;
-(void)addActivities:(id)arg0 ;
-(void)addBtleConnection:(id)arg0 ;
-(void)addInterfaceStats:(id)arg0 ;
-(void)addPeerStats:(id)arg0 ;
-(void)addScore:(id)arg0 ;
-(void)clearActivities;
-(void)clearBtleConnections;
-(void)clearInterfaceStats;
-(void)clearPeerStats;
-(void)clearScores;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif