// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMKERNELSAMPLEINFRATXRX_H
#define WIFIUSAGELQMKERNELSAMPLEINFRATXRX_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleInfraTXRX : WiFiUsageLQMSample

@property (nonatomic) NSUInteger decodingAttempts; // ivar: _decodingAttempts
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger rxAnyErrOverDecodingErrors; // ivar: _rxAnyErrOverDecodingErrors
@property (nonatomic) NSUInteger rxBACKOverRxCtrlFrmsPercentage; // ivar: _rxBACKOverRxCtrlFrmsPercentage
@property (nonatomic) NSUInteger rxBadFCSOverDecodingErrors; // ivar: _rxBadFCSOverDecodingErrors
@property (nonatomic) NSUInteger rxBadPlcpOverDecodingAttemptsPercentage; // ivar: _rxBadPlcpOverDecodingAttemptsPercentage
@property (nonatomic) NSUInteger rxBeaconMbss; // ivar: _rxBeaconMbss
@property (nonatomic) NSUInteger rxBeaconObss; // ivar: _rxBeaconObss
@property (nonatomic) NSUInteger rxBeaconOverRxStart; // ivar: _rxBeaconOverRxStart
@property (nonatomic) NSUInteger rxCrsGlitchOverDecodingAttemptsPercentage; // ivar: _rxCrsGlitchOverDecodingAttemptsPercentage
@property (nonatomic) NSUInteger rxDecodingErrorsOverRxStart; // ivar: _rxDecodingErrorsOverRxStart
@property (nonatomic) NSUInteger rxFifo0OvflOverDecodingErrors; // ivar: _rxFifo0OvflOverDecodingErrors
@property (nonatomic) NSUInteger rxFifo1OvflOverDecodingErrors; // ivar: _rxFifo1OvflOverDecodingErrors
@property (nonatomic) NSUInteger rxFrmTooLongOverDecodingErrors; // ivar: _rxFrmTooLongOverDecodingErrors
@property (nonatomic) NSUInteger rxFrmTooShrtOverDecodingErrors; // ivar: _rxFrmTooShrtOverDecodingErrors
@property (nonatomic) NSUInteger rxNoDelimOverDecodingErrors; // ivar: _rxNoDelimOverDecodingErrors
@property (nonatomic) NSUInteger rxResponseTimeoutOverDecodingErrors; // ivar: _rxResponseTimeoutOverDecodingErrors
@property (nonatomic) NSUInteger rxStartOverDecodingAttemptsPercentage; // ivar: _rxStartOverDecodingAttemptsPercentage
@property (nonatomic) NSUInteger rxUcastACKOverRxCtrlFrmsPercentage; // ivar: _rxUcastACKOverRxCtrlFrmsPercentage
@property (nonatomic) NSUInteger rxUcastCTSOverRxCtrlFrmsPercentage; // ivar: _rxUcastCTSOverRxCtrlFrmsPercentage
@property (nonatomic) NSUInteger rxUcastCtrlPercentage; // ivar: _rxUcastCtrlPercentage
@property (nonatomic) NSUInteger rxUcastDataPercentage; // ivar: _rxUcastDataPercentage
@property (nonatomic) NSUInteger rxUcastMgmtPercentage; // ivar: _rxUcastMgmtPercentage
@property (nonatomic) NSUInteger rxUcastOverRxStart; // ivar: _rxUcastOverRxStart
@property (nonatomic) NSUInteger rxUcastRTSOverRxCtrlFrmsPercentage; // ivar: _rxUcastRTSOverRxCtrlFrmsPercentage
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger txACKOverTxCtrlFrmsPercentage; // ivar: _txACKOverTxCtrlFrmsPercentage
@property (nonatomic) NSUInteger txAMPDUOverTxAllFrmPercentage; // ivar: _txAMPDUOverTxAllFrmPercentage
@property (nonatomic) NSUInteger txAllFrm; // ivar: _txAllFrm
@property (nonatomic) NSUInteger txBACKOverTxCtrlFrmsPercentage; // ivar: _txBACKOverTxCtrlFrmsPercentage
@property (nonatomic) NSUInteger txCTSOverTxCtrlFrmsPercentage; // ivar: _txCTSOverTxCtrlFrmsPercentage
@property (nonatomic) NSUInteger txCtrlFrms; // ivar: _txCtrlFrms
@property (nonatomic) NSUInteger txPhyErrorOverTxAllFrmPercentage; // ivar: _txPhyErrorOverTxAllFrmPercentage
@property (nonatomic) NSUInteger txRTSFailOvertxRTS; // ivar: _txRTSFailOvertxRTS
@property (nonatomic) NSUInteger txRTSOverTxCtrlFrmsPercentage; // ivar: _txRTSOverTxCtrlFrmsPercentage
@property (nonatomic) NSUInteger txUcastOverTxAllFrmPercentage; // ivar: _txUcastOverTxAllFrmPercentage


+(id)sampleWithStruct:(struct apple80211_infra_band_tx_rx_stats *)arg0 WithReferenceDate:(id)arg1 AsNsec:(NSUInteger)arg2 ;
-(id)initWithStruct:(struct apple80211_infra_band_tx_rx_stats *)arg0 WithReferenceDate:(id)arg1 AsNsec:(NSUInteger)arg2 ;


@end


#endif