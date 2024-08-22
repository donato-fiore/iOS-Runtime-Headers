// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMKERNELSAMPLERXAMPDU_H
#define WIFIUSAGELQMKERNELSAMPLERXAMPDU_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleRxAmpdu : WiFiUsageLQMSample

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger rxAddBaReq; // ivar: _rxAddBaReq
@property (nonatomic) NSUInteger rxAmpdu; // ivar: _rxAmpdu
@property (nonatomic) NSUInteger rxAmpduAll; // ivar: _rxAmpduAll
@property (nonatomic) NSUInteger rxBarOverRxAmpdu; // ivar: _rxBarOverRxAmpdu
@property (nonatomic) NSUInteger rxDelBa; // ivar: _rxDelBa
@property (nonatomic) NSUInteger rxDup; // ivar: _rxDup
@property (nonatomic) NSUInteger rxHoles; // ivar: _rxHoles
@property (nonatomic) NSUInteger rxMpduDensity; // ivar: _rxMpduDensity
@property (nonatomic) NSUInteger rxOos; // ivar: _rxOos
@property (nonatomic) NSUInteger rxOow; // ivar: _rxOow
@property (nonatomic) NSUInteger rxQueuedOverRxAmpdu; // ivar: _rxQueuedOverRxAmpdu
@property (nonatomic) NSUInteger rxStuck; // ivar: _rxStuck
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger txAddBaResp; // ivar: _txAddBaResp
@property (nonatomic) NSUInteger txDelBa; // ivar: _txDelBa


+(id)featureFromFieldName:(id)arg0 ;
+(id)sampleWithStruct:(struct apple80211_rx_ampdu_lqmct_stats *)arg0 WithReferenceDate:(id)arg1 AsNsec:(NSUInteger)arg2 ;
-(id)initWithStruct:(struct apple80211_rx_ampdu_lqmct_stats *)arg0 WithReferenceDate:(id)arg1 AsNsec:(NSUInteger)arg2 ;


@end


#endif