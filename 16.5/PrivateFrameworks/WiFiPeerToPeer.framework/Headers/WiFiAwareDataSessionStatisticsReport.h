// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIAWAREDATASESSIONSTATISTICSREPORT_H
#define WIFIAWAREDATASESSIONSTATISTICSREPORT_H

@class NSNumber, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WiFiMACAddress.h"

@interface WiFiAwareDataSessionStatisticsReport : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSNumber *channelSequenceMismatchOn2GCount; // ivar: _channelSequenceMismatchOn2GCount
@property (copy, nonatomic) NSNumber *channelSequenceMismatchOn5GCount; // ivar: _channelSequenceMismatchOn5GCount
@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSNumber *csaCount; // ivar: _csaCount
@property (copy, nonatomic) NSNumber *dfsChannelsCount; // ivar: _dfsChannelsCount
@property (copy, nonatomic) NSNumber *infraAssocCount; // ivar: _infraAssocCount
@property (copy, nonatomic) NSNumber *infraDisassocCount; // ivar: _infraDisassocCount
@property (nonatomic) BOOL infraRelayOperationStatus; // ivar: _infraRelayOperationStatus
@property (copy, nonatomic) NSNumber *infraRelayRequestersCount; // ivar: _infraRelayRequestersCount
@property (copy, nonatomic) NSNumber *infraScanCount; // ivar: _infraScanCount
@property (readonly, nonatomic) NSNumber *infrastructureChannel; // ivar: _infrastructureChannel
@property (copy, nonatomic) NSNumber *packetsHOFOn2GCount; // ivar: _packetsHOFOn2GCount
@property (copy, nonatomic) NSNumber *packetsNAVOn2GCount; // ivar: _packetsNAVOn2GCount
@property (copy, nonatomic) NSNumber *packetsOn2GCount; // ivar: _packetsOn2GCount
@property (copy, nonatomic) NSNumber *packetsOn5GCount; // ivar: _packetsOn5GCount
@property (copy, nonatomic) NSNumber *packetsOverridenOn5GCount; // ivar: _packetsOverridenOn5GCount
@property (readonly, nonatomic) WiFiMACAddress *peerAddress; // ivar: _peerAddress
@property (copy, nonatomic) NSNumber *preferred2GChannelsCount; // ivar: _preferred2GChannelsCount
@property (copy, nonatomic) NSNumber *preferred5GChannelsCount; // ivar: _preferred5GChannelsCount
@property (copy, nonatomic) NSNumber *quietIECount; // ivar: _quietIECount
@property (copy, nonatomic) NSArray *rxFWDelayHistogram; // ivar: _rxFWDelayHistogram
@property (copy, nonatomic) NSArray *rxIPCDelayHistogram; // ivar: _rxIPCDelayHistogram
@property (copy, nonatomic) NSArray *rxRSSIHistogram; // ivar: _rxRSSIHistogram
@property (copy, nonatomic) NSArray *txCCAHistogram; // ivar: _txCCAHistogram
@property (copy, nonatomic) NSNumber *txChipModeErrorCount; // ivar: _txChipModeErrorCount
@property (copy, nonatomic) NSArray *txConsecutiveErrorsHistogram; // ivar: _txConsecutiveErrorsHistogram
@property (copy, nonatomic) NSNumber *txDroppedCount; // ivar: _txDroppedCount
@property (copy, nonatomic) NSNumber *txErrorCount; // ivar: _txErrorCount
@property (copy, nonatomic) NSNumber *txExpiredCount; // ivar: _txExpiredCount
@property (copy, nonatomic) NSNumber *txFailedCount; // ivar: _txFailedCount
@property (copy, nonatomic) NSNumber *txFirmwareFreePacketCount; // ivar: _txFirmwareFreePacketCount
@property (copy, nonatomic) NSNumber *txForceLifetimeExpiredCount; // ivar: _txForceLifetimeExpiredCount
@property (copy, nonatomic) NSNumber *txIOErrorCount; // ivar: _txIOErrorCount
@property (copy, nonatomic) NSNumber *txInternalErrorCount; // ivar: _txInternalErrorCount
@property (copy, nonatomic) NSNumber *txMaxRetriesCount; // ivar: _txMaxRetriesCount
@property (copy, nonatomic) NSNumber *txMemoryErrorCount; // ivar: _txMemoryErrorCount
@property (copy, nonatomic) NSNumber *txNoACKCount; // ivar: _txNoACKCount
@property (copy, nonatomic) NSNumber *txNoRemotePeerCount; // ivar: _txNoRemotePeerCount
@property (copy, nonatomic) NSNumber *txNoResourcesCount; // ivar: _txNoResourcesCount
@property (copy, nonatomic) NSArray *txPacketExpiryHistogram; // ivar: _txPacketExpiryHistogram


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPeerAddress:(id)arg0 infrastructureChannel:(id)arg1 txCCAHistogram:(id)arg2 rxRSSIHistogram:(id)arg3 preferred2GChannelsCount:(id)arg4 preferred5GChannelsCount:(id)arg5 dfsChannelsCount:(id)arg6 csaCount:(id)arg7 quietIECount:(id)arg8 txErrorCount:(id)arg9 packetsOn2GCount:(id)arg10 packetsNAVOn2GCount:(id)arg11 packetsHOFOn2GCount:(id)arg12 packetsOn5GCount:(id)arg13 packetsOverridenOn5GCount:(id)arg14 infraRelayOperationStatus:(BOOL)arg15 infraRelayRequestersCount:(id)arg16 txExpiredCount:(id)arg17 txNoACKCount:(id)arg18 txFailedCount:(id)arg19 txNoResourcesCount:(id)arg20 txIOErrorCount:(id)arg21 txMemoryErrorCount:(id)arg22 txChipModeErrorCount:(id)arg23 txNoRemotePeerCount:(id)arg24 txInternalErrorCount:(id)arg25 txDroppedCount:(id)arg26 txFirmwareFreePacketCount:(id)arg27 txMaxRetriesCount:(id)arg28 txForceLifetimeExpiredCount:(id)arg29 channelSequenceMismatchOn5GCount:(id)arg30 channelSequenceMismatchOn2GCount:(id)arg31 infraScanCount:(id)arg32 infraAssocCount:(id)arg33 infraDisassocCount:(id)arg34 countryCode:(id)arg35 txConsecutiveErrorsHistogram:(id)arg36 rxFWDelayHistogram:(id)arg37 rxIPCDelayHistogram:(id)arg38 txPacketExpiryHistogram:(id)arg39 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif