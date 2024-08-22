// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFIDPSEPILOGUE_H
#define WIFIANALYTICSAWDWIFIDPSEPILOGUE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences.h"
#import "WiFiAnalyticsAWDWAPeerDiscoveryInfo.h"
#import "WiFiAnalyticsAWDWAQuickDpsStats.h"
#import "WiFiAnalyticsAWDWASymptomsDnsStats.h"

@interface WiFiAnalyticsAWDWiFiDPSEpilogue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *accessPointInfos; // ivar: _accessPointInfos
@property (nonatomic) int action; // ivar: _action
@property (nonatomic) unsigned int actionIntVal; // ivar: _actionIntVal
@property (nonatomic) int afterRecommendedAction; // ivar: _afterRecommendedAction
@property (retain, nonatomic) NSMutableArray *associationChanges; // ivar: _associationChanges
@property (nonatomic) int beforeAction; // ivar: _beforeAction
@property (retain, nonatomic) WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences *changes; // ivar: _changes
@property (retain, nonatomic) WiFiAnalyticsAWDWAPeerDiscoveryInfo *discoveredPeerInfo; // ivar: _discoveredPeerInfo
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasActionIntVal;
@property (nonatomic) BOOL hasAfterRecommendedAction;
@property (nonatomic) BOOL hasBeforeAction;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL hasDiscoveredPeerInfo;
@property (nonatomic) BOOL hasIsAssociatedAtStudyEnd;
@property (readonly, nonatomic) BOOL hasQDpsStats;
@property (nonatomic) BOOL hasStudyType;
@property (readonly, nonatomic) BOOL hasSymptomsDnsStats;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isAssociatedAtStudyEnd; // ivar: _isAssociatedAtStudyEnd
@property (retain, nonatomic) WiFiAnalyticsAWDWAQuickDpsStats *qDpsStats; // ivar: _qDpsStats
@property (nonatomic) int studyType; // ivar: _studyType
@property (retain, nonatomic) WiFiAnalyticsAWDWASymptomsDnsStats *symptomsDnsStats; // ivar: _symptomsDnsStats
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)accessPointInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accessPointInfoAtIndex:(NSUInteger)arg0 ;
-(id)actionAsString:(int)arg0 ;
-(id)afterRecommendedActionAsString:(int)arg0 ;
-(id)associationChangesAtIndex:(NSUInteger)arg0 ;
-(id)beforeActionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)studyTypeAsString:(int)arg0 ;
-(int)StringAsAction:(id)arg0 ;
-(int)StringAsAfterRecommendedAction:(id)arg0 ;
-(int)StringAsBeforeAction:(id)arg0 ;
-(int)StringAsStudyType:(id)arg0 ;
-(void)addAccessPointInfo:(id)arg0 ;
-(void)addAssociationChanges:(id)arg0 ;
-(void)clearAccessPointInfos;
-(void)clearAssociationChanges;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif