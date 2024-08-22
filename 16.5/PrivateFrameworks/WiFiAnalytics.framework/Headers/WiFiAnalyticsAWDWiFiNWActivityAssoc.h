// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYASSOC_H
#define WIFIANALYTICSAWDWIFINWACTIVITYASSOC_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityAssoc : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int assocDoneFailed; // ivar: _assocDoneFailed
@property (nonatomic) unsigned int assocDoneSuccess; // ivar: _assocDoneSuccess
@property (nonatomic) unsigned int assocFailed; // ivar: _assocFailed
@property (nonatomic) unsigned int assocReady; // ivar: _assocReady
@property (nonatomic) unsigned int assocSuccess; // ivar: _assocSuccess
@property (nonatomic) unsigned int authFailed; // ivar: _authFailed
@property (nonatomic) unsigned int authSuccess; // ivar: _authSuccess
@property (nonatomic) unsigned int bssDisallowEvent; // ivar: _bssDisallowEvent
@property (nonatomic) unsigned int bssidChanged; // ivar: _bssidChanged
@property (nonatomic) unsigned int chanSwitchEvent; // ivar: _chanSwitchEvent
@property (nonatomic) unsigned int crashTracerTrig; // ivar: _crashTracerTrig
@property (nonatomic) unsigned int deauthReceived; // ivar: _deauthReceived
@property (nonatomic) unsigned int decryptError; // ivar: _decryptError
@property (nonatomic) unsigned int disassocReceived; // ivar: _disassocReceived
@property (nonatomic) unsigned int dpsSymptom; // ivar: _dpsSymptom
@property (nonatomic) unsigned int escoTrafficInd; // ivar: _escoTrafficInd
@property (nonatomic) BOOL hasAssocDoneFailed;
@property (nonatomic) BOOL hasAssocDoneSuccess;
@property (nonatomic) BOOL hasAssocFailed;
@property (nonatomic) BOOL hasAssocReady;
@property (nonatomic) BOOL hasAssocSuccess;
@property (nonatomic) BOOL hasAuthFailed;
@property (nonatomic) BOOL hasAuthSuccess;
@property (nonatomic) BOOL hasBssDisallowEvent;
@property (nonatomic) BOOL hasBssidChanged;
@property (nonatomic) BOOL hasChanSwitchEvent;
@property (nonatomic) BOOL hasCrashTracerTrig;
@property (nonatomic) BOOL hasDeauthReceived;
@property (nonatomic) BOOL hasDecryptError;
@property (nonatomic) BOOL hasDisassocReceived;
@property (nonatomic) BOOL hasDpsSymptom;
@property (nonatomic) BOOL hasEscoTrafficInd;
@property (nonatomic) BOOL hasHomeChanQualChanged;
@property (nonatomic) BOOL hasLinkChanged;
@property (nonatomic) BOOL hasMacAddrChanged;
@property (nonatomic) BOOL hasPruned;
@property (nonatomic) BOOL hasRc1Stats;
@property (nonatomic) BOOL hasRc2Stats;
@property (nonatomic) BOOL hasReassocFailed;
@property (nonatomic) BOOL hasReassocSuccess;
@property (nonatomic) BOOL hasRoamFailed;
@property (nonatomic) BOOL hasRoamPrep;
@property (nonatomic) BOOL hasRoamScanEnd;
@property (nonatomic) BOOL hasRoamScanStart;
@property (nonatomic) BOOL hasRoamSuccess;
@property (nonatomic) BOOL hasRssiChanged;
@property (nonatomic) BOOL hasScanDone;
@property (nonatomic) BOOL hasScanInternalDone;
@property (nonatomic) BOOL hasScanResults;
@property (nonatomic) BOOL hasScanSummary;
@property (nonatomic) BOOL hasSlowWiFiSymptom;
@property (nonatomic) BOOL hasSsidChanged;
@property (nonatomic) BOOL hasSupplicant;
@property (nonatomic) unsigned int homeChanQualChanged; // ivar: _homeChanQualChanged
@property (nonatomic) unsigned int linkChanged; // ivar: _linkChanged
@property (nonatomic) unsigned int macAddrChanged; // ivar: _macAddrChanged
@property (nonatomic) unsigned int pruned; // ivar: _pruned
@property (nonatomic) unsigned int rc1Stats; // ivar: _rc1Stats
@property (nonatomic) unsigned int rc2Stats; // ivar: _rc2Stats
@property (nonatomic) unsigned int reassocFailed; // ivar: _reassocFailed
@property (nonatomic) unsigned int reassocSuccess; // ivar: _reassocSuccess
@property (nonatomic) unsigned int roamFailed; // ivar: _roamFailed
@property (nonatomic) unsigned int roamPrep; // ivar: _roamPrep
@property (nonatomic) unsigned int roamScanEnd; // ivar: _roamScanEnd
@property (nonatomic) unsigned int roamScanStart; // ivar: _roamScanStart
@property (nonatomic) unsigned int roamSuccess; // ivar: _roamSuccess
@property (nonatomic) unsigned int rssiChanged; // ivar: _rssiChanged
@property (nonatomic) unsigned int scanDone; // ivar: _scanDone
@property (nonatomic) unsigned int scanInternalDone; // ivar: _scanInternalDone
@property (nonatomic) unsigned int scanResults; // ivar: _scanResults
@property (nonatomic) unsigned int scanSummary; // ivar: _scanSummary
@property (nonatomic) unsigned int slowWiFiSymptom; // ivar: _slowWiFiSymptom
@property (nonatomic) unsigned int ssidChanged; // ivar: _ssidChanged
@property (nonatomic) unsigned int supplicant; // ivar: _supplicant


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