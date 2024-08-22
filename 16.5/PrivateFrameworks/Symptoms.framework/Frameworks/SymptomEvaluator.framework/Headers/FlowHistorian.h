// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWHISTORIAN_H
#define FLOWHISTORIAN_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface FlowHistorian : NSObject {
    ? _lastSampledCounts;
    ? _currentCounts;
    CGFloat _lastInterfaceTrafficTimestamp;
    CGFloat _lastSampleTimeIntervalSinceReferenceDate;
}


@property (readonly, nonatomic) NSUInteger currentOpenedAppleStackFlows;
@property (readonly, nonatomic) NSUInteger currentOpenedFlows;
@property (readonly, nonatomic) NSUInteger currentOpenedNonAppleStackFlows;
@property (readonly, nonatomic) NSUInteger currentOpenedSISFlows;
@property (retain, nonatomic) NSMutableArray *historySamples; // ivar: _historySamples
@property (readonly, nonatomic) CGFloat lastTrafficTimestamp; // ivar: _lastTrafficTimestamp
@property (retain, nonatomic) NSString *logPrefix; // ivar: _logPrefix
@property (nonatomic) unsigned int maxHistorySamples; // ivar: _maxHistorySamples
@property (readonly, nonatomic) BOOL pendingHistorySampleIsIdle; // ivar: _pendingHistorySampleIsIdle
@property (readonly, nonatomic) NSUInteger totalClosedAppleStackFlows;
@property (readonly, nonatomic) NSUInteger totalClosedFlows;
@property (readonly, nonatomic) NSUInteger totalClosedNonAppleStackFlows;
@property (readonly, nonatomic) NSUInteger totalClosedRNFFlows;
@property (readonly, nonatomic) NSUInteger totalClosedSISFlows;
@property (readonly, nonatomic) NSUInteger totalOpenedAppleStackFlows;
@property (readonly, nonatomic) NSUInteger totalOpenedFlows;
@property (readonly, nonatomic) NSUInteger totalOpenedNonAppleStackFlows;
@property (readonly, nonatomic) NSUInteger totalOpenedRNFFlows;
@property (readonly, nonatomic) NSUInteger totalOpenedSISFlows;
@property (readonly, nonatomic) NSUInteger totalRxAppleStackBytes; // ivar: _totalRxAppleStackBytes
@property (readonly, nonatomic) NSUInteger totalRxBytes;
@property (readonly, nonatomic) NSUInteger totalRxNonAppleStackBytes; // ivar: _totalRxNonAppleStackBytes
@property (readonly, nonatomic) NSUInteger totalRxRNFBytes; // ivar: _totalRxRNFBytes
@property (readonly, nonatomic) NSUInteger totalRxSISBytes; // ivar: _totalRxSISBytes
@property (readonly, nonatomic) NSUInteger totalTxAppleStackBytes; // ivar: _totalTxAppleStackBytes
@property (readonly, nonatomic) NSUInteger totalTxBytes;
@property (readonly, nonatomic) NSUInteger totalTxNonAppleStackBytes; // ivar: _totalTxNonAppleStackBytes
@property (readonly, nonatomic) NSUInteger totalTxRNFBytes; // ivar: _totalTxRNFBytes
@property (readonly, nonatomic) NSUInteger totalTxSISBytes; // ivar: _totalTxSISBytes


-(BOOL)pendingInterfaceSampleIsIdle;
-(CGFloat)lastInterfaceTrafficTimestamp;
-(NSUInteger)lastSampledRxBytes;
-(NSUInteger)lastSampledTxBytes;
-(id)description;
-(id)getState:(BOOL)arg0 ;
-(id)init;
-(void)applyDeltaRx:(NSUInteger)arg0 deltaTx:(NSUInteger)arg1 snapshot:(id)arg2 ;
-(void)updateSamplesWithTime:(CGFloat)arg0 bumpSamples:(BOOL)arg1 ;


@end


#endif