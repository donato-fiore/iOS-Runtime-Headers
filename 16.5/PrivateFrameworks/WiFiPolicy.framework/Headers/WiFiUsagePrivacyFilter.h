// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGEPRIVACYFILTER_H
#define WIFIUSAGEPRIVACYFILTER_H


#import <Foundation/Foundation.h>


@interface WiFiUsagePrivacyFilter : NSObject



+(BOOL)canPerformActionWithSampleRate:(NSUInteger)arg0 ;
+(BOOL)isInternalInstall;
+(BOOL)isLocallyAdministeredBitSetInBSSData:(id)arg0 ;
+(BOOL)isLocallyAdministeredBitSetInBSSString:(id)arg0 ;
+(NSInteger)getSumAllBands:(struct ? )arg0 ;
+(id)bandAsString:(int)arg0 ;
+(id)describeSampleRate:(NSUInteger)arg0 ;
+(id)getBinEvery10Over100:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinFor:(NSInteger)arg0 In:(id)arg1 WithLowestEdge:(id)arg2 As:(NSUInteger)arg3 ;
+(id)getBinTimeInterval:(CGFloat)arg0 As:(NSUInteger)arg1 ;
+(id)getHumanSecondsFromObject:(id)arg0 ;
+(id)getHumanSecondsFromTimeInterval:(CGFloat)arg0 ;
+(id)getLabelForBandUsageDuration:(struct ? )arg0 overTotalDuration:(CGFloat)arg1 binned:(BOOL)arg2 ;
+(id)getLabelForCoreRssiMode:(NSUInteger)arg0 ;
+(id)getLabelForIntegerByBand:(struct ? )arg0 ;
+(id)getLabelForIntegerByBand:(struct ? )arg0 In:(id)arg1 WithLowestEdge:(id)arg2 As:(NSUInteger)arg3 ;
+(id)getLabelForIntegerByBand:(struct ? )arg0 withCap:(BOOL)arg1 ;
+(id)getLabelForIntegerByBandTransition:(struct ? )arg0 In:(id)arg1 WithLowestEdge:(id)arg2 As:(NSUInteger)arg3 ;
+(id)getLabelForNeighborsByBand:(id)arg0 ;
+(id)getLabelForPercIntegerByBand:(struct ? )arg0 ;
+(id)getLabelForRTCoexType:(NSUInteger)arg0 ;
+(id)getLabelForRssiByBand:(struct ? )arg0 ;
+(id)getLabelForRssiDeltaByBand:(struct ? )arg0 ;
+(id)getLabelForRssiDeltaByBandTransition:(struct ? )arg0 ;
+(id)getLabelForSteeringRequest:(NSUInteger)arg0 ;
+(id)getLabelForTDMode:(int)arg0 ;
+(id)getLabelForTDTrigger:(int)arg0 ;
+(id)getSumArrayCountAllBand:(id)arg0 ;
+(id)localTimestamp:(id)arg0 ;
+(id)macAddressData:(id)arg0 ;
+(id)numberWithByteCount:(NSUInteger)arg0 ;
+(id)numberWithDuration:(CGFloat)arg0 ;
+(id)numberWithDurationMillisecond:(CGFloat)arg0 ;
+(id)numberWithFrameCount:(NSUInteger)arg0 ;
+(id)numberWithInstances:(NSUInteger)arg0 ;
+(id)oui:(id)arg0 ;
+(id)reformatMACAddress:(id)arg0 ;
+(id)sanitizedOUI:(id)arg0 ;
+(id)timePercentage:(CGFloat)arg0 overTotalDuration:(CGFloat)arg1 ;
+(id)toBinString:(id)arg0 ;
+(id)toHEXString:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)twoSigFig:(NSUInteger)arg0 ;
+(int)bandFromFlags:(id)arg0 OrChannel:(id)arg1 ;
+(struct ? )getModeCountersByCandidatesByBand:(id)arg0 ;
+(struct ? )getPercForFloatByBand:(struct ? )arg0 Over:(CGFloat)arg1 ;
+(struct ? )getPercForIntegerByBand:(struct ? )arg0 Over:(NSUInteger)arg1 ;
+(void)initialize;


@end


#endif