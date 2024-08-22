// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMUSERSAMPLE_H
#define WIFIUSAGELQMUSERSAMPLE_H

@class NSString, NSDate;


#import "WiFiUsageLQMSample.h"
#import "WiFiUsageInterfaceCapabilities.h"
#import "WiFiUsageNetworkDetails.h"

@interface WiFiUsageLQMUserSample : WiFiUsageLQMSample

@property (nonatomic) NSUInteger beaconPer; // ivar: _beaconPer
@property (retain, nonatomic) WiFiUsageInterfaceCapabilities *capabilities; // ivar: _capabilities
@property (nonatomic) NSUInteger chanQualScore; // ivar: _chanQualScore
@property (nonatomic) NSUInteger decodingAttempts; // ivar: _decodingAttempts
@property (nonatomic) NSInteger diff_rssi_core0; // ivar: _diff_rssi_core0
@property (nonatomic) NSInteger diff_rssi_core1; // ivar: _diff_rssi_core1
@property (nonatomic) NSUInteger driverRoamRecommended; // ivar: _driverRoamRecommended
@property (nonatomic) NSUInteger driverTDrecommended; // ivar: _driverTDrecommended
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (retain, nonatomic) NSString *fgApp; // ivar: _fgApp
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) NSUInteger interference; // ivar: _interference
@property (nonatomic) BOOL isAnyAppInFG; // ivar: _isAnyAppInFG
@property (nonatomic) BOOL isFTactive; // ivar: _isFTactive
@property (nonatomic) BOOL isTimeSensitiveAppRunning; // ivar: _isTimeSensitiveAppRunning
@property (nonatomic) NSUInteger linkTheoreticalMaxRate; // ivar: _linkTheoreticalMaxRate
@property (retain, nonatomic) NSString *motionState; // ivar: _motionState
@property (retain, nonatomic) WiFiUsageNetworkDetails *networkDetails; // ivar: _networkDetails
@property (nonatomic) NSInteger noise; // ivar: _noise
@property (nonatomic) NSUInteger otherCca; // ivar: _otherCca
@property (nonatomic) NSUInteger perCoreRssiInUse; // ivar: _perCoreRssiInUse
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (nonatomic) NSInteger rssi_core0; // ivar: _rssi_core0
@property (nonatomic) NSInteger rssi_core1; // ivar: _rssi_core1
@property (nonatomic) NSUInteger rxBadPlcpOverDecodingAttemptsPercentage; // ivar: _rxBadPlcpOverDecodingAttemptsPercentage
@property (nonatomic) NSUInteger rxBytesOverRxFrames; // ivar: _rxBytesOverRxFrames
@property (nonatomic) NSUInteger rxBytesOverRxL3Packets; // ivar: _rxBytesOverRxL3Packets
@property (nonatomic) NSUInteger rxCrsGlitchOverDecodingAttemptsPercentage; // ivar: _rxCrsGlitchOverDecodingAttemptsPercentage
@property (nonatomic) NSUInteger rxFrames; // ivar: _rxFrames
@property (nonatomic) NSUInteger rxL3Packets; // ivar: _rxL3Packets
@property (nonatomic) NSUInteger rxLatencyScore; // ivar: _rxLatencyScore
@property (nonatomic) NSUInteger rxLossScore; // ivar: _rxLossScore
@property (nonatomic) NSUInteger rxRateOverDeviceTheoreticalMaxPercentage; // ivar: _rxRateOverDeviceTheoreticalMaxPercentage
@property (nonatomic) NSUInteger rxRateOverLinkTheoreticalMaxPercentage; // ivar: _rxRateOverLinkTheoreticalMaxPercentage
@property (nonatomic) NSUInteger rxRetriesOverRxFrames; // ivar: _rxRetriesOverRxFrames
@property (nonatomic) NSUInteger rxStartOverDecodingAttemptsPercentage; // ivar: _rxStartOverDecodingAttemptsPercentage
@property (nonatomic) NSUInteger selfCca; // ivar: _selfCca
@property (nonatomic) NSInteger snr; // ivar: _snr
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger totalReportedCca; // ivar: _totalReportedCca
@property (nonatomic) NSUInteger trafficState; // ivar: _trafficState
@property (nonatomic) NSUInteger txBytesOverTxFrames; // ivar: _txBytesOverTxFrames
@property (nonatomic) NSUInteger txBytesOverTxL3Packets; // ivar: _txBytesOverTxL3Packets
@property (nonatomic) NSUInteger txFailsOverTxFrames; // ivar: _txFailsOverTxFrames
@property (nonatomic) NSUInteger txFrames; // ivar: _txFrames
@property (nonatomic) NSUInteger txL3Packets; // ivar: _txL3Packets
@property (nonatomic) NSUInteger txLatencyP95; // ivar: _txLatencyP95
@property (nonatomic) NSUInteger txLatencyScore; // ivar: _txLatencyScore
@property (nonatomic) NSUInteger txLossScore; // ivar: _txLossScore
@property (nonatomic) NSUInteger txMpduDensity; // ivar: _txMpduDensity
@property (nonatomic) NSUInteger txRTS; // ivar: _txRTS
@property (nonatomic) NSUInteger txRTSFailOvertxRTS; // ivar: _txRTSFailOvertxRTS
@property (nonatomic) NSUInteger txRateOverDeviceTheoreticalMaxPercentage; // ivar: _txRateOverDeviceTheoreticalMaxPercentage
@property (nonatomic) NSUInteger txRateOverLinkTheoreticalMaxPercentage; // ivar: _txRateOverLinkTheoreticalMaxPercentage
@property (nonatomic) NSUInteger txRetriesOverTxFrames; // ivar: _txRetriesOverTxFrames


+(id)allLQMProperties;
+(id)featureFromFieldName:(id)arg0 ;
-(NSUInteger)rxRate;
-(NSUInteger)txRate;
-(id)description;
-(id)initWithInterfaceName:(id)arg0 ;
-(void)populateWithMotionState:(id)arg0 andAppState:(struct ? )arg1 ;
-(void)populateWithRssi:(NSInteger)arg0 noise:(NSInteger)arg1 snr:(NSInteger)arg2 selfCca:(NSUInteger)arg3 otherCca:(NSUInteger)arg4 interference:(NSUInteger)arg5 totalReportedCca:(NSUInteger)arg6 beaconPer:(NSUInteger)arg7 rxCrsGlitch:(NSUInteger)arg8 rxBadPLCP:(NSUInteger)arg9 rxStart:(NSUInteger)arg10 sampleDuration:(NSUInteger)arg11 ;
-(void)populateWithRssi:(NSInteger)arg0 rssi0:(NSInteger)arg1 rssi1:(NSInteger)arg2 rssiMode:(NSUInteger)arg3 noise:(NSInteger)arg4 snr:(NSInteger)arg5 selfCca:(NSUInteger)arg6 otherCca:(NSUInteger)arg7 interference:(NSUInteger)arg8 totalReportedCca:(NSUInteger)arg9 beaconPer:(NSUInteger)arg10 rxCrsGlitch:(NSUInteger)arg11 rxBadPLCP:(NSUInteger)arg12 rxStart:(NSUInteger)arg13 rxBphyCrsGlitch:(NSUInteger)arg14 rxBphyBadPLCP:(NSUInteger)arg15 sampleDuration:(NSUInteger)arg16 ;
-(void)populateWithTxFrames:(NSUInteger)arg0 RxFrames:(NSUInteger)arg1 TxFails:(NSUInteger)arg2 TxRetries:(NSUInteger)arg3 RxRetries:(NSUInteger)arg4 TxRate:(NSUInteger)arg5 RxRate:(NSUInteger)arg6 txRTS:(NSUInteger)arg7 txRTSFail:(NSUInteger)arg8 txMpdu:(NSUInteger)arg9 txAMPDU:(NSUInteger)arg10 ;
-(void)updateWithChQualScore:(NSUInteger)arg0 txLatencyScore:(NSUInteger)arg1 rxLatencyScore:(NSUInteger)arg2 txLossScore:(NSUInteger)arg3 rxLossScore:(NSUInteger)arg4 txLatencyP95:(NSUInteger)arg5 linkRecommendationFlags:(NSUInteger)arg6 rtTrafficStatus:(NSUInteger)arg7 ;
-(void)updateWithInterfaceCapabilities:(id)arg0 AndNetworkDetails:(id)arg1 ;
-(void)updateWithTxBytes:(NSUInteger)arg0 RxBytes:(NSUInteger)arg1 TxL3Packets:(NSUInteger)arg2 RxL3Packets:(NSUInteger)arg3 ;


@end


#endif