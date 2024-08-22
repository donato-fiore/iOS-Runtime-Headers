// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWASYMPTOMSDNSSTATS_H
#define WIFIANALYTICSAWDWASYMPTOMSDNSSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWASymptomsDnsStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int configType; // ivar: _configType
@property (nonatomic) BOOL dpsNotificationReceivedDuringStudy; // ivar: _dpsNotificationReceivedDuringStudy
@property (nonatomic) BOOL hasConfigType;
@property (nonatomic) BOOL hasDpsNotificationReceivedDuringStudy;
@property (nonatomic) BOOL hasImpactedServersAtStudyEnd;
@property (nonatomic) BOOL hasImpactedServersAtStudyStart;
@property (nonatomic) BOOL hasIsCaptiveServerIPResolved;
@property (nonatomic) BOOL hasIsPingEnqueueFailing;
@property (nonatomic) BOOL hasLanHealthAfterDecision;
@property (nonatomic) BOOL hasLanHealthBeforeDecision;
@property (nonatomic) BOOL hasNetscoreAtStudyEnd;
@property (nonatomic) BOOL hasNetscoreAtStudyStart;
@property (nonatomic) BOOL hasNetscoreHealthAfterDecision;
@property (nonatomic) BOOL hasNetscoreHealthBeforeDecision;
@property (nonatomic) BOOL hasNumIpv4DnsServers;
@property (nonatomic) BOOL hasNumIpv6DnsServers;
@property (nonatomic) BOOL hasNumLocalDnsServers;
@property (nonatomic) BOOL hasNumRemoteDnsServers;
@property (nonatomic) BOOL hasSlowWiFiNotificationReceivedDuringStudy;
@property (nonatomic) BOOL hasStallscoreAtStudyEnd;
@property (nonatomic) BOOL hasStallscoreAtStudyStart;
@property (nonatomic) BOOL hasStallscoreHealthAfterDecision;
@property (nonatomic) BOOL hasStallscoreHealthBeforeDecision;
@property (nonatomic) BOOL hasSuppressedReason;
@property (nonatomic) BOOL hasSymptomsDnsRecommendation;
@property (nonatomic) BOOL hasSymptomsDnsTimeSincePreviousTriggerMinutes;
@property (nonatomic) BOOL hasSymptomsDnsscreenStateOn;
@property (nonatomic) BOOL hasTotalDnsServers;
@property (nonatomic) BOOL hasWanHealthAfterDecision;
@property (nonatomic) BOOL hasWanHealthBeforeDecision;
@property (nonatomic) unsigned int impactedServersAtStudyEnd; // ivar: _impactedServersAtStudyEnd
@property (nonatomic) unsigned int impactedServersAtStudyStart; // ivar: _impactedServersAtStudyStart
@property (nonatomic) BOOL isCaptiveServerIPResolved; // ivar: _isCaptiveServerIPResolved
@property (nonatomic) BOOL isPingEnqueueFailing; // ivar: _isPingEnqueueFailing
@property (nonatomic) unsigned int lanHealthAfterDecision; // ivar: _lanHealthAfterDecision
@property (nonatomic) unsigned int lanHealthBeforeDecision; // ivar: _lanHealthBeforeDecision
@property (nonatomic) unsigned int netscoreAtStudyEnd; // ivar: _netscoreAtStudyEnd
@property (nonatomic) unsigned int netscoreAtStudyStart; // ivar: _netscoreAtStudyStart
@property (nonatomic) unsigned int netscoreHealthAfterDecision; // ivar: _netscoreHealthAfterDecision
@property (nonatomic) unsigned int netscoreHealthBeforeDecision; // ivar: _netscoreHealthBeforeDecision
@property (nonatomic) unsigned int numIpv4DnsServers; // ivar: _numIpv4DnsServers
@property (nonatomic) unsigned int numIpv6DnsServers; // ivar: _numIpv6DnsServers
@property (nonatomic) unsigned int numLocalDnsServers; // ivar: _numLocalDnsServers
@property (nonatomic) unsigned int numRemoteDnsServers; // ivar: _numRemoteDnsServers
@property (nonatomic) BOOL slowWiFiNotificationReceivedDuringStudy; // ivar: _slowWiFiNotificationReceivedDuringStudy
@property (nonatomic) unsigned int stallscoreAtStudyEnd; // ivar: _stallscoreAtStudyEnd
@property (nonatomic) unsigned int stallscoreAtStudyStart; // ivar: _stallscoreAtStudyStart
@property (nonatomic) unsigned int stallscoreHealthAfterDecision; // ivar: _stallscoreHealthAfterDecision
@property (nonatomic) unsigned int stallscoreHealthBeforeDecision; // ivar: _stallscoreHealthBeforeDecision
@property (nonatomic) int suppressedReason; // ivar: _suppressedReason
@property (nonatomic) int symptomsDnsRecommendation; // ivar: _symptomsDnsRecommendation
@property (nonatomic) NSUInteger symptomsDnsTimeSincePreviousTriggerMinutes; // ivar: _symptomsDnsTimeSincePreviousTriggerMinutes
@property (nonatomic) BOOL symptomsDnsscreenStateOn; // ivar: _symptomsDnsscreenStateOn
@property (nonatomic) unsigned int totalDnsServers; // ivar: _totalDnsServers
@property (nonatomic) unsigned int wanHealthAfterDecision; // ivar: _wanHealthAfterDecision
@property (nonatomic) unsigned int wanHealthBeforeDecision; // ivar: _wanHealthBeforeDecision


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)configTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suppressedReasonAsString:(int)arg0 ;
-(id)symptomsDnsRecommendationAsString:(int)arg0 ;
-(int)StringAsConfigType:(id)arg0 ;
-(int)StringAsSuppressedReason:(id)arg0 ;
-(int)StringAsSymptomsDnsRecommendation:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif