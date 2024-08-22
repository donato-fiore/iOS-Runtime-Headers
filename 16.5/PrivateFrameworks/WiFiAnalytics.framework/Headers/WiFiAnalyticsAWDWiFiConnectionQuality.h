// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFICONNECTIONQUALITY_H
#define WIFIANALYTICSAWDWIFICONNECTIONQUALITY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiConnectionQuality : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *additionalUniqueIDs; // ivar: _additionalUniqueIDs
@property (nonatomic) unsigned int assocReason; // ivar: _assocReason
@property (nonatomic) unsigned int associatedTime; // ivar: _associatedTime
@property (nonatomic) unsigned int band; // ivar: _band
@property (nonatomic) NSUInteger bytesInActive; // ivar: _bytesInActive
@property (nonatomic) NSUInteger bytesInTotal; // ivar: _bytesInTotal
@property (nonatomic) NSUInteger bytesOutActive; // ivar: _bytesOutActive
@property (nonatomic) NSUInteger bytesOutTotal; // ivar: _bytesOutTotal
@property (nonatomic) unsigned int captiveFlag; // ivar: _captiveFlag
@property (nonatomic) int cca; // ivar: _cca
@property (nonatomic) unsigned int channel; // ivar: _channel
@property (nonatomic) unsigned int channelWidth; // ivar: _channelWidth
@property (nonatomic) unsigned int colocatedState; // ivar: _colocatedState
@property (nonatomic) NSUInteger dataStalls; // ivar: _dataStalls
@property (nonatomic) unsigned int disassocReason; // ivar: _disassocReason
@property (nonatomic) NSUInteger failedConnections; // ivar: _failedConnections
@property (nonatomic) NSUInteger faultyStay; // ivar: _faultyStay
@property (nonatomic) BOOL hasAssocReason;
@property (nonatomic) BOOL hasAssociatedTime;
@property (nonatomic) BOOL hasBand;
@property (nonatomic) BOOL hasBytesInActive;
@property (nonatomic) BOOL hasBytesInTotal;
@property (nonatomic) BOOL hasBytesOutActive;
@property (nonatomic) BOOL hasBytesOutTotal;
@property (nonatomic) BOOL hasCaptiveFlag;
@property (nonatomic) BOOL hasCca;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasChannelWidth;
@property (nonatomic) BOOL hasColocatedState;
@property (nonatomic) BOOL hasDataStalls;
@property (nonatomic) BOOL hasDisassocReason;
@property (nonatomic) BOOL hasFailedConnections;
@property (nonatomic) BOOL hasFaultyStay;
@property (nonatomic) BOOL hasHotspot20;
@property (nonatomic) BOOL hasLat;
@property (nonatomic) BOOL hasLon;
@property (nonatomic) BOOL hasLowLQMStay;
@property (nonatomic) BOOL hasLowqStay;
@property (nonatomic) BOOL hasLqmTranCount;
@property (nonatomic) BOOL hasOverAllStay;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) BOOL hasPhyMode;
@property (nonatomic) BOOL hasReTxBytes;
@property (nonatomic) BOOL hasReceivedDupes;
@property (nonatomic) BOOL hasRoundTripTimeAvg;
@property (nonatomic) BOOL hasRoundTripTimeAvgActive;
@property (nonatomic) BOOL hasRoundTripTimeMin;
@property (nonatomic) BOOL hasRoundTripTimeMinActive;
@property (nonatomic) BOOL hasRoundTripTimeVar;
@property (nonatomic) BOOL hasRoundTripTimeVarActive;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasRxOutOfOrderBytes;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) BOOL hasSnr;
@property (nonatomic) BOOL hasSuccessfulConnections;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (nonatomic) BOOL hotspot20; // ivar: _hotspot20
@property (nonatomic) CGFloat lat; // ivar: _lat
@property (nonatomic) CGFloat lon; // ivar: _lon
@property (nonatomic) NSUInteger lowLQMStay; // ivar: _lowLQMStay
@property (nonatomic) NSUInteger lowqStay; // ivar: _lowqStay
@property (nonatomic) NSUInteger lqmTranCount; // ivar: _lqmTranCount
@property (retain, nonatomic) NSMutableArray *otherUniqueIDs; // ivar: _otherUniqueIDs
@property (nonatomic) NSUInteger overAllStay; // ivar: _overAllStay
@property (nonatomic) NSUInteger packetsIn; // ivar: _packetsIn
@property (nonatomic) NSUInteger packetsOut; // ivar: _packetsOut
@property (nonatomic) unsigned int phyMode; // ivar: _phyMode
@property (nonatomic) NSUInteger reTxBytes; // ivar: _reTxBytes
@property (nonatomic) NSUInteger receivedDupes; // ivar: _receivedDupes
@property (nonatomic) float roundTripTimeAvg; // ivar: _roundTripTimeAvg
@property (nonatomic) float roundTripTimeAvgActive; // ivar: _roundTripTimeAvgActive
@property (nonatomic) float roundTripTimeMin; // ivar: _roundTripTimeMin
@property (nonatomic) float roundTripTimeMinActive; // ivar: _roundTripTimeMinActive
@property (nonatomic) float roundTripTimeVar; // ivar: _roundTripTimeVar
@property (nonatomic) float roundTripTimeVarActive; // ivar: _roundTripTimeVarActive
@property (nonatomic) int rssi; // ivar: _rssi
@property (nonatomic) NSUInteger rxOutOfOrderBytes; // ivar: _rxOutOfOrderBytes
@property (nonatomic) unsigned int securityType; // ivar: _securityType
@property (nonatomic) int snr; // ivar: _snr
@property (nonatomic) NSUInteger successfulConnections; // ivar: _successfulConnections
@property (nonatomic) NSUInteger timeOfDay; // ivar: _timeOfDay
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)additionalUniqueIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)otherUniqueIDsAtIndex:(NSUInteger)arg0 ;
-(void)addAdditionalUniqueIDs:(id)arg0 ;
-(void)addOtherUniqueIDs:(id)arg0 ;
-(void)clearAdditionalUniqueIDs;
-(void)clearOtherUniqueIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif