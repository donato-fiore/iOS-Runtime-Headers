// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDLINKQUALITYMEASUREMENTS_H
#define WIFIANALYTICSAWDLINKQUALITYMEASUREMENTS_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDLinkQualityMeasurements : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger aPTxDataStall; // ivar: _aPTxDataStall
@property (nonatomic) NSUInteger accessPointOUI; // ivar: _accessPointOUI
@property (nonatomic) NSUInteger availWLANDurMS; // ivar: _availWLANDurMS
@property (nonatomic) NSUInteger availWLANRxDurMS; // ivar: _availWLANRxDurMS
@property (nonatomic) NSUInteger availWLANTxDurMS; // ivar: _availWLANTxDurMS
@property (nonatomic) NSUInteger avgTxLatencyMS; // ivar: _avgTxLatencyMS
@property (nonatomic) NSUInteger bTAntennaDurMS; // ivar: _bTAntennaDurMS
@property (nonatomic) NSUInteger baselineThroughput; // ivar: _baselineThroughput
@property (nonatomic) NSUInteger cCA; // ivar: _cCA
@property (nonatomic) NSUInteger concurrentIntDurMS; // ivar: _concurrentIntDurMS
@property (nonatomic) NSUInteger delayedThroughput; // ivar: _delayedThroughput
@property (nonatomic) NSUInteger expectedThroughput; // ivar: _expectedThroughput
@property (nonatomic) BOOL hasAPTxDataStall;
@property (nonatomic) BOOL hasAccessPointOUI;
@property (nonatomic) BOOL hasAvailWLANDurMS;
@property (nonatomic) BOOL hasAvailWLANRxDurMS;
@property (nonatomic) BOOL hasAvailWLANTxDurMS;
@property (nonatomic) BOOL hasAvgTxLatencyMS;
@property (nonatomic) BOOL hasBTAntennaDurMS;
@property (nonatomic) BOOL hasBaselineThroughput;
@property (nonatomic) BOOL hasCCA;
@property (nonatomic) BOOL hasConcurrentIntDurMS;
@property (nonatomic) BOOL hasDelayedThroughput;
@property (nonatomic) BOOL hasExpectedThroughput;
@property (nonatomic) BOOL hasHighRxDataPERFalse;
@property (nonatomic) BOOL hasHighRxDataPERTrue;
@property (nonatomic) BOOL hasHighRxDecryptErrsFalse;
@property (nonatomic) BOOL hasHighRxDecryptErrsTrue;
@property (nonatomic) BOOL hasHighRxDupsFalse;
@property (nonatomic) BOOL hasHighRxDupsTrue;
@property (nonatomic) BOOL hasHighRxFCSErrsFalse;
@property (nonatomic) BOOL hasHighRxFCSErrsTrue;
@property (nonatomic) BOOL hasHighRxOverflowsFalse;
@property (nonatomic) BOOL hasHighRxOverflowsTrue;
@property (nonatomic) BOOL hasHighRxPhyPERFalse;
@property (nonatomic) BOOL hasHighRxPhyPERTrue;
@property (nonatomic) BOOL hasHighRxReplaysFalse;
@property (nonatomic) BOOL hasHighRxReplaysTrue;
@property (nonatomic) BOOL hasHighRxRetriesFalse;
@property (nonatomic) BOOL hasHighRxRetriesTrue;
@property (nonatomic) BOOL hasHighTxLatencyFalse;
@property (nonatomic) BOOL hasHighTxLatencyTrue;
@property (nonatomic) BOOL hasHighTxPerFalse;
@property (nonatomic) BOOL hasHighTxPerTrue;
@property (nonatomic) BOOL hasHighTxRetriesFalse;
@property (nonatomic) BOOL hasHighTxRetriesTrue;
@property (nonatomic) BOOL hasInfraDutyCycle;
@property (nonatomic) BOOL hasInputThroughput;
@property (nonatomic) BOOL hasIs2GBand;
@property (nonatomic) BOOL hasIsFGTraffic;
@property (nonatomic) BOOL hasLTECoexDurationMS;
@property (nonatomic) BOOL hasLastScanReason;
@property (nonatomic) BOOL hasLowAvailWLANDurFalse;
@property (nonatomic) BOOL hasLowAvailWLANDurTrue;
@property (nonatomic) BOOL hasLowAvailWLANRxDurFalse;
@property (nonatomic) BOOL hasLowAvailWLANRxDurTrue;
@property (nonatomic) BOOL hasLowAvailWLANTxDurFalse;
@property (nonatomic) BOOL hasLowAvailWLANTxDurTrue;
@property (nonatomic) BOOL hasLowTxAMPDUDensityFalse;
@property (nonatomic) BOOL hasLowTxAMPDUDensityTrue;
@property (nonatomic) BOOL hasLowTxPhyRateFalse;
@property (nonatomic) BOOL hasLowTxPhyRateTrue;
@property (nonatomic) BOOL hasMaxQueueFullDurMS;
@property (nonatomic) BOOL hasMeasurementDurMS;
@property (nonatomic) BOOL hasOffChanDurMS;
@property (nonatomic) BOOL hasOutputThroughput;
@property (nonatomic) BOOL hasPhyRxActivityDurMS;
@property (nonatomic) BOOL hasPhyTxActivityDurMS;
@property (nonatomic) BOOL hasRC1CoexDurationMS;
@property (nonatomic) BOOL hasRC2CoexDurationMS;
@property (nonatomic) BOOL hasRSSI;
@property (nonatomic) BOOL hasRxAmpduTxBaMismatch;
@property (nonatomic) BOOL hasRxCRSErrs;
@property (nonatomic) BOOL hasRxDecryErrs;
@property (nonatomic) BOOL hasRxDupErrs;
@property (nonatomic) BOOL hasRxFCSErrs;
@property (nonatomic) BOOL hasRxFrames;
@property (nonatomic) BOOL hasRxGoodPlcps;
@property (nonatomic) BOOL hasRxLowFrameCountFalse;
@property (nonatomic) BOOL hasRxLowFrameCountTrue;
@property (nonatomic) BOOL hasRxOvflErrs;
@property (nonatomic) BOOL hasRxPLCPErrs;
@property (nonatomic) BOOL hasRxPhyRate;
@property (nonatomic) BOOL hasRxReplayErrs;
@property (nonatomic) BOOL hasRxRetries;
@property (nonatomic) BOOL hasRxThroughput;
@property (nonatomic) BOOL hasSNR;
@property (nonatomic) BOOL hasSymptomsFails;
@property (nonatomic) BOOL hasTVPMActiveDurationMS;
@property (nonatomic) BOOL hasTestThroughput;
@property (nonatomic) BOOL hasTimeSinceLastRecovery;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTxAMPDUDensity;
@property (nonatomic) BOOL hasTxCompBytes;
@property (nonatomic) BOOL hasTxCompPkts;
@property (nonatomic) BOOL hasTxDelayBytes;
@property (nonatomic) BOOL hasTxExpectedAMPDUDensity;
@property (nonatomic) BOOL hasTxFails;
@property (nonatomic) BOOL hasTxFrames;
@property (nonatomic) BOOL hasTxLowFrameCountFalse;
@property (nonatomic) BOOL hasTxLowFrameCountTrue;
@property (nonatomic) BOOL hasTxOutputBelowExpectedFalse;
@property (nonatomic) BOOL hasTxOutputBelowExpectedTrue;
@property (nonatomic) BOOL hasTxOutputBelowInputFalse;
@property (nonatomic) BOOL hasTxOutputBelowInputTrue;
@property (nonatomic) BOOL hasTxPhyRate;
@property (nonatomic) BOOL hasTxQueueFullFalse;
@property (nonatomic) BOOL hasTxQueueFullTrue;
@property (nonatomic) BOOL hasTxRetries;
@property (nonatomic) BOOL hasTxSubBytes;
@property (nonatomic) BOOL hasTxSubPkts;
@property (nonatomic) NSUInteger highRxDataPERFalse; // ivar: _highRxDataPERFalse
@property (nonatomic) NSUInteger highRxDataPERTrue; // ivar: _highRxDataPERTrue
@property (nonatomic) NSUInteger highRxDecryptErrsFalse; // ivar: _highRxDecryptErrsFalse
@property (nonatomic) NSUInteger highRxDecryptErrsTrue; // ivar: _highRxDecryptErrsTrue
@property (nonatomic) NSUInteger highRxDupsFalse; // ivar: _highRxDupsFalse
@property (nonatomic) NSUInteger highRxDupsTrue; // ivar: _highRxDupsTrue
@property (nonatomic) NSUInteger highRxFCSErrsFalse; // ivar: _highRxFCSErrsFalse
@property (nonatomic) NSUInteger highRxFCSErrsTrue; // ivar: _highRxFCSErrsTrue
@property (nonatomic) NSUInteger highRxOverflowsFalse; // ivar: _highRxOverflowsFalse
@property (nonatomic) NSUInteger highRxOverflowsTrue; // ivar: _highRxOverflowsTrue
@property (nonatomic) NSUInteger highRxPhyPERFalse; // ivar: _highRxPhyPERFalse
@property (nonatomic) NSUInteger highRxPhyPERTrue; // ivar: _highRxPhyPERTrue
@property (nonatomic) NSUInteger highRxReplaysFalse; // ivar: _highRxReplaysFalse
@property (nonatomic) NSUInteger highRxReplaysTrue; // ivar: _highRxReplaysTrue
@property (nonatomic) NSUInteger highRxRetriesFalse; // ivar: _highRxRetriesFalse
@property (nonatomic) NSUInteger highRxRetriesTrue; // ivar: _highRxRetriesTrue
@property (nonatomic) NSUInteger highTxLatencyFalse; // ivar: _highTxLatencyFalse
@property (nonatomic) NSUInteger highTxLatencyTrue; // ivar: _highTxLatencyTrue
@property (nonatomic) NSUInteger highTxPerFalse; // ivar: _highTxPerFalse
@property (nonatomic) NSUInteger highTxPerTrue; // ivar: _highTxPerTrue
@property (nonatomic) NSUInteger highTxRetriesFalse; // ivar: _highTxRetriesFalse
@property (nonatomic) NSUInteger highTxRetriesTrue; // ivar: _highTxRetriesTrue
@property (nonatomic) NSUInteger infraDutyCycle; // ivar: _infraDutyCycle
@property (nonatomic) NSUInteger inputThroughput; // ivar: _inputThroughput
@property (nonatomic) NSUInteger is2GBand; // ivar: _is2GBand
@property (nonatomic) NSUInteger isFGTraffic; // ivar: _isFGTraffic
@property (nonatomic) NSUInteger lTECoexDurationMS; // ivar: _lTECoexDurationMS
@property (nonatomic) NSUInteger lastScanReason; // ivar: _lastScanReason
@property (nonatomic) NSUInteger lowAvailWLANDurFalse; // ivar: _lowAvailWLANDurFalse
@property (nonatomic) NSUInteger lowAvailWLANDurTrue; // ivar: _lowAvailWLANDurTrue
@property (nonatomic) NSUInteger lowAvailWLANRxDurFalse; // ivar: _lowAvailWLANRxDurFalse
@property (nonatomic) NSUInteger lowAvailWLANRxDurTrue; // ivar: _lowAvailWLANRxDurTrue
@property (nonatomic) NSUInteger lowAvailWLANTxDurFalse; // ivar: _lowAvailWLANTxDurFalse
@property (nonatomic) NSUInteger lowAvailWLANTxDurTrue; // ivar: _lowAvailWLANTxDurTrue
@property (nonatomic) NSUInteger lowTxAMPDUDensityFalse; // ivar: _lowTxAMPDUDensityFalse
@property (nonatomic) NSUInteger lowTxAMPDUDensityTrue; // ivar: _lowTxAMPDUDensityTrue
@property (nonatomic) NSUInteger lowTxPhyRateFalse; // ivar: _lowTxPhyRateFalse
@property (nonatomic) NSUInteger lowTxPhyRateTrue; // ivar: _lowTxPhyRateTrue
@property (nonatomic) NSUInteger maxQueueFullDurMS; // ivar: _maxQueueFullDurMS
@property (nonatomic) NSUInteger measurementDurMS; // ivar: _measurementDurMS
@property (nonatomic) NSUInteger offChanDurMS; // ivar: _offChanDurMS
@property (nonatomic) NSUInteger outputThroughput; // ivar: _outputThroughput
@property (nonatomic) NSUInteger phyRxActivityDurMS; // ivar: _phyRxActivityDurMS
@property (nonatomic) NSUInteger phyTxActivityDurMS; // ivar: _phyTxActivityDurMS
@property (nonatomic) NSUInteger rC1CoexDurationMS; // ivar: _rC1CoexDurationMS
@property (nonatomic) NSUInteger rC2CoexDurationMS; // ivar: _rC2CoexDurationMS
@property (nonatomic) NSInteger rSSI; // ivar: _rSSI
@property (nonatomic) NSUInteger rxAmpduTxBaMismatch; // ivar: _rxAmpduTxBaMismatch
@property (nonatomic) NSUInteger rxCRSErrs; // ivar: _rxCRSErrs
@property (nonatomic) NSUInteger rxDecryErrs; // ivar: _rxDecryErrs
@property (nonatomic) NSUInteger rxDupErrs; // ivar: _rxDupErrs
@property (nonatomic) NSUInteger rxFCSErrs; // ivar: _rxFCSErrs
@property (nonatomic) NSUInteger rxFrames; // ivar: _rxFrames
@property (nonatomic) NSUInteger rxGoodPlcps; // ivar: _rxGoodPlcps
@property (nonatomic) NSUInteger rxLowFrameCountFalse; // ivar: _rxLowFrameCountFalse
@property (nonatomic) NSUInteger rxLowFrameCountTrue; // ivar: _rxLowFrameCountTrue
@property (nonatomic) NSUInteger rxOvflErrs; // ivar: _rxOvflErrs
@property (nonatomic) NSUInteger rxPLCPErrs; // ivar: _rxPLCPErrs
@property (nonatomic) NSUInteger rxPhyRate; // ivar: _rxPhyRate
@property (nonatomic) NSUInteger rxReplayErrs; // ivar: _rxReplayErrs
@property (nonatomic) NSUInteger rxRetries; // ivar: _rxRetries
@property (nonatomic) NSUInteger rxThroughput; // ivar: _rxThroughput
@property (nonatomic) NSUInteger sNR; // ivar: _sNR
@property (nonatomic) NSUInteger symptomsFails; // ivar: _symptomsFails
@property (nonatomic) NSUInteger tVPMActiveDurationMS; // ivar: _tVPMActiveDurationMS
@property (nonatomic) NSUInteger testThroughput; // ivar: _testThroughput
@property (nonatomic) NSUInteger timeSinceLastRecovery; // ivar: _timeSinceLastRecovery
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger txAMPDUDensity; // ivar: _txAMPDUDensity
@property (nonatomic) NSUInteger txCompBytes; // ivar: _txCompBytes
@property (nonatomic) NSUInteger txCompPkts; // ivar: _txCompPkts
@property (nonatomic) NSUInteger txDelayBytes; // ivar: _txDelayBytes
@property (nonatomic) NSUInteger txExpectedAMPDUDensity; // ivar: _txExpectedAMPDUDensity
@property (nonatomic) NSUInteger txFails; // ivar: _txFails
@property (nonatomic) NSUInteger txFrames; // ivar: _txFrames
@property (nonatomic) NSUInteger txLowFrameCountFalse; // ivar: _txLowFrameCountFalse
@property (nonatomic) NSUInteger txLowFrameCountTrue; // ivar: _txLowFrameCountTrue
@property (nonatomic) NSUInteger txOutputBelowExpectedFalse; // ivar: _txOutputBelowExpectedFalse
@property (nonatomic) NSUInteger txOutputBelowExpectedTrue; // ivar: _txOutputBelowExpectedTrue
@property (nonatomic) NSUInteger txOutputBelowInputFalse; // ivar: _txOutputBelowInputFalse
@property (nonatomic) NSUInteger txOutputBelowInputTrue; // ivar: _txOutputBelowInputTrue
@property (nonatomic) NSUInteger txPhyRate; // ivar: _txPhyRate
@property (nonatomic) NSUInteger txQueueFullFalse; // ivar: _txQueueFullFalse
@property (nonatomic) NSUInteger txQueueFullTrue; // ivar: _txQueueFullTrue
@property (nonatomic) NSUInteger txRetries; // ivar: _txRetries
@property (nonatomic) NSUInteger txSubBytes; // ivar: _txSubBytes
@property (nonatomic) NSUInteger txSubPkts; // ivar: _txSubPkts


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