// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHYSICALINTERFACESAMPLER_H
#define PHYSICALINTERFACESAMPLER_H

@class NSMutableArray;


#import "FlowHistorian.h"

@interface PhysicalInterfaceSampler : FlowHistorian {
    NSUInteger _lastSampledRxIfTypeBytes;
    NSUInteger _lastSampledTxIfTypeBytes;
    CGFloat _lastSampleTimeIntervalSinceReferenceDate;
    CGFloat _minPhysicalInterfaceRxUsageForSustainedHighThroughput;
    CGFloat _minInitialInterfaceRxUsageForSustainedHighThroughput;
    CGFloat _minPhysicalInterfaceTxUsageForSustainedHighThroughput;
    CGFloat _minInitialInterfaceTxUsageForSustainedHighThroughput;
    CGFloat _minConservativePhysicalInterfaceDurationForSustainedHighThroughput;
    CGFloat _minResponsivePhysicalInterfaceDurationForSustainedHighThroughput;
    CGFloat _defaultMinPhysicalInterfaceRxUsageForSustainedHighThroughput;
    CGFloat _defaultMinInitialInterfaceRxUsageForSustainedHighThroughput;
    CGFloat _defaultMinPhysicalInterfaceTxUsageForSustainedHighThroughput;
    CGFloat _defaultMinInitialInterfaceTxUsageForSustainedHighThroughput;
    CGFloat _defaultMinConservativePhysicalInterfaceDurationForSustainedHighThroughput;
    CGFloat _defaultMinResponsivePhysicalInterfaceDurationForSustainedHighThroughput;
    BOOL _hasSustainedResponsiveHighInterfaceThroughput;
    BOOL _hasSustainedConservativeHighInterfaceThroughput;
    BOOL _hasSustainedHighInterfaceRxThroughput;
    BOOL _hasSustainedHighInterfaceTxThroughput;
    NSMutableArray *_thresholdChangeHistory;
    NSInteger _ifType;
}


@property (readonly, nonatomic) BOOL hasSustainedConservativeHighInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceRxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceTxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedResponsiveHighInterfaceThroughput;
@property (nonatomic) NSInteger ifType;
@property (retain, nonatomic) NSMutableArray *interfaceSamples; // ivar: _interfaceSamples
@property (nonatomic) CGFloat lastInterfaceTrafficTimestamp; // ivar: _lastInterfaceTrafficTimestamp
@property (readonly, nonatomic) BOOL pendingInterfaceSampleIsIdle;
@property (nonatomic) NSUInteger totalRxIfTypeBytes; // ivar: _totalRxIfTypeBytes
@property (nonatomic) NSUInteger totalTxIfTypeBytes; // ivar: _totalTxIfTypeBytes


+(id)sharedInstanceForInterfaceType:(NSInteger)arg0 ;
-(BOOL)updateAssesmentHelper:(CGFloat)arg0 ;
-(id)getState:(BOOL)arg0 ;
-(id)init;
-(int)setConfiguration:(id)arg0 ;
-(void)ensureNonZeroPhysicalInterfaceThroughputParameters;
-(void)restoreDefaults;
-(void)updateAssesments;
-(void)updateInterfaceSamplesWithTime:(CGFloat)arg0 bumpSamples:(BOOL)arg1 ;


@end


#endif