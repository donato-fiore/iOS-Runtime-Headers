// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDSYMPTOMSNETWORKANALYTICSRRCCONNECTEDPERIOD_H
#define AWDSYMPTOMSNETWORKANALYTICSRRCCONNECTEDPERIOD_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDSymptomsNetworkAnalyticsRRCConnectedPeriod : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *activeNameDuringPeriods; // ivar: _activeNameDuringPeriods
@property (nonatomic) unsigned int anyListener; // ivar: _anyListener
@property (nonatomic) unsigned int backgroundListeners; // ivar: _backgroundListeners
@property (nonatomic) NSUInteger bytesIn; // ivar: _bytesIn
@property (nonatomic) NSUInteger bytesOut; // ivar: _bytesOut
@property (nonatomic) unsigned int countLQMTransitions; // ivar: _countLQMTransitions
@property (nonatomic) NSUInteger egressDlThroughputBps; // ivar: _egressDlThroughputBps
@property (nonatomic) unsigned int egressLQM; // ivar: _egressLQM
@property (nonatomic) NSUInteger egressUlThroughputBps; // ivar: _egressUlThroughputBps
@property (nonatomic) BOOL hasAnyListener;
@property (nonatomic) BOOL hasBackgroundListeners;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasCountLQMTransitions;
@property (nonatomic) BOOL hasEgressDlThroughputBps;
@property (nonatomic) BOOL hasEgressLQM;
@property (nonatomic) BOOL hasEgressUlThroughputBps;
@property (nonatomic) BOOL hasIngressDlThroughputBps;
@property (nonatomic) BOOL hasIngressLQM;
@property (nonatomic) BOOL hasIngressUlThroughputBps;
@property (nonatomic) BOOL hasLastDisconnectedSecs;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) BOOL hasPeriodDurationTCEnabledUsecs;
@property (nonatomic) BOOL hasPeriodDurationUsecs;
@property (nonatomic) BOOL hasPeriodType;
@property (nonatomic) BOOL hasTcCountFlowDispositionBURST;
@property (nonatomic) BOOL hasTcCountFlowDispositionDefault;
@property (nonatomic) BOOL hasTcCountFlowDispositionDrop;
@property (nonatomic) BOOL hasTcCountFlowDispositionFGFacetime;
@property (nonatomic) BOOL hasTcCountFlowDispositionFGIMSG;
@property (nonatomic) BOOL hasTcCountFlowDispositionKNOWNOTHER;
@property (nonatomic) BOOL hasTcCountFlowDispositionLARGE;
@property (nonatomic) BOOL hasTcCountFlowDispositionLARGEDL;
@property (nonatomic) BOOL hasTcCountFlowDispositionLARGEUL;
@property (nonatomic) BOOL hasTcCountFlowDispositionMail;
@property (nonatomic) BOOL hasTcCountFlowDispositionMaps;
@property (nonatomic) BOOL hasTcCountFlowDispositionMediaserverd;
@property (nonatomic) BOOL hasTcCountFlowDispositionMusic;
@property (nonatomic) BOOL hasTcCountFlowDispositionNSURLSessiond;
@property (nonatomic) BOOL hasTcCountFlowDispositionNews;
@property (nonatomic) BOOL hasTcCountFlowDispositionPUSH;
@property (nonatomic) BOOL hasTcCountFlowDispositionPodcasts;
@property (nonatomic) BOOL hasTcCountFlowDispositionRTCReportingd;
@property (nonatomic) BOOL hasTcCountFlowDispositionSIRI;
@property (nonatomic) BOOL hasTcCountFlowDispositionSafari;
@property (nonatomic) BOOL hasTcCountFlowDispositionStocks;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCAV;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCBK;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCBKSYS;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCCTL;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCOAM;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCRD;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCRV;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCVI;
@property (nonatomic) BOOL hasTcCountFlowDispositionTCVO;
@property (nonatomic) BOOL hasTcCountFlowDispositionUNKNOWNOTHER;
@property (nonatomic) BOOL hasTcCountFlowDispositionUndefined;
@property (nonatomic) BOOL hasTcCountFlowDispositionWeather;
@property (nonatomic) BOOL hasTcCountFlowDispositionWebkit;
@property (nonatomic) BOOL hasTcDampeningSuppressed;
@property (nonatomic) BOOL hasTcUpdates;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUniqueActiveAppCount;
@property (nonatomic) NSUInteger ingressDlThroughputBps; // ivar: _ingressDlThroughputBps
@property (nonatomic) unsigned int ingressLQM; // ivar: _ingressLQM
@property (nonatomic) NSUInteger ingressUlThroughputBps; // ivar: _ingressUlThroughputBps
@property (nonatomic) NSUInteger lastDisconnectedSecs; // ivar: _lastDisconnectedSecs
@property (nonatomic) NSUInteger packetsIn; // ivar: _packetsIn
@property (nonatomic) NSUInteger packetsOut; // ivar: _packetsOut
@property (nonatomic) NSUInteger periodDurationTCEnabledUsecs; // ivar: _periodDurationTCEnabledUsecs
@property (nonatomic) NSUInteger periodDurationUsecs; // ivar: _periodDurationUsecs
@property (nonatomic) int periodType; // ivar: _periodType
@property (nonatomic) unsigned int tcCountFlowDispositionBURST; // ivar: _tcCountFlowDispositionBURST
@property (nonatomic) unsigned int tcCountFlowDispositionDefault; // ivar: _tcCountFlowDispositionDefault
@property (nonatomic) unsigned int tcCountFlowDispositionDrop; // ivar: _tcCountFlowDispositionDrop
@property (nonatomic) unsigned int tcCountFlowDispositionFGFacetime; // ivar: _tcCountFlowDispositionFGFacetime
@property (nonatomic) unsigned int tcCountFlowDispositionFGIMSG; // ivar: _tcCountFlowDispositionFGIMSG
@property (nonatomic) unsigned int tcCountFlowDispositionKNOWNOTHER; // ivar: _tcCountFlowDispositionKNOWNOTHER
@property (nonatomic) unsigned int tcCountFlowDispositionLARGE; // ivar: _tcCountFlowDispositionLARGE
@property (nonatomic) unsigned int tcCountFlowDispositionLARGEDL; // ivar: _tcCountFlowDispositionLARGEDL
@property (nonatomic) unsigned int tcCountFlowDispositionLARGEUL; // ivar: _tcCountFlowDispositionLARGEUL
@property (nonatomic) unsigned int tcCountFlowDispositionMail; // ivar: _tcCountFlowDispositionMail
@property (nonatomic) unsigned int tcCountFlowDispositionMaps; // ivar: _tcCountFlowDispositionMaps
@property (nonatomic) unsigned int tcCountFlowDispositionMediaserverd; // ivar: _tcCountFlowDispositionMediaserverd
@property (nonatomic) unsigned int tcCountFlowDispositionMusic; // ivar: _tcCountFlowDispositionMusic
@property (nonatomic) unsigned int tcCountFlowDispositionNSURLSessiond; // ivar: _tcCountFlowDispositionNSURLSessiond
@property (nonatomic) unsigned int tcCountFlowDispositionNews; // ivar: _tcCountFlowDispositionNews
@property (nonatomic) unsigned int tcCountFlowDispositionPUSH; // ivar: _tcCountFlowDispositionPUSH
@property (nonatomic) unsigned int tcCountFlowDispositionPodcasts; // ivar: _tcCountFlowDispositionPodcasts
@property (nonatomic) unsigned int tcCountFlowDispositionRTCReportingd; // ivar: _tcCountFlowDispositionRTCReportingd
@property (nonatomic) unsigned int tcCountFlowDispositionSIRI; // ivar: _tcCountFlowDispositionSIRI
@property (nonatomic) unsigned int tcCountFlowDispositionSafari; // ivar: _tcCountFlowDispositionSafari
@property (nonatomic) unsigned int tcCountFlowDispositionStocks; // ivar: _tcCountFlowDispositionStocks
@property (nonatomic) unsigned int tcCountFlowDispositionTCAV; // ivar: _tcCountFlowDispositionTCAV
@property (nonatomic) unsigned int tcCountFlowDispositionTCBK; // ivar: _tcCountFlowDispositionTCBK
@property (nonatomic) unsigned int tcCountFlowDispositionTCBKSYS; // ivar: _tcCountFlowDispositionTCBKSYS
@property (nonatomic) unsigned int tcCountFlowDispositionTCCTL; // ivar: _tcCountFlowDispositionTCCTL
@property (nonatomic) unsigned int tcCountFlowDispositionTCOAM; // ivar: _tcCountFlowDispositionTCOAM
@property (nonatomic) unsigned int tcCountFlowDispositionTCRD; // ivar: _tcCountFlowDispositionTCRD
@property (nonatomic) unsigned int tcCountFlowDispositionTCRV; // ivar: _tcCountFlowDispositionTCRV
@property (nonatomic) unsigned int tcCountFlowDispositionTCVI; // ivar: _tcCountFlowDispositionTCVI
@property (nonatomic) unsigned int tcCountFlowDispositionTCVO; // ivar: _tcCountFlowDispositionTCVO
@property (nonatomic) unsigned int tcCountFlowDispositionUNKNOWNOTHER; // ivar: _tcCountFlowDispositionUNKNOWNOTHER
@property (nonatomic) unsigned int tcCountFlowDispositionUndefined; // ivar: _tcCountFlowDispositionUndefined
@property (nonatomic) unsigned int tcCountFlowDispositionWeather; // ivar: _tcCountFlowDispositionWeather
@property (nonatomic) unsigned int tcCountFlowDispositionWebkit; // ivar: _tcCountFlowDispositionWebkit
@property (nonatomic) unsigned int tcDampeningSuppressed; // ivar: _tcDampeningSuppressed
@property (nonatomic) unsigned int tcUpdates; // ivar: _tcUpdates
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger uniqueActiveAppCount; // ivar: _uniqueActiveAppCount


+(Class)activeNameDuringPeriodType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeNameDuringPeriodAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)periodTypeAsString:(int)arg0 ;
-(int)StringAsPeriodType:(id)arg0 ;
-(void)addActiveNameDuringPeriod:(id)arg0 ;
-(void)clearActiveNameDuringPeriods;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif