// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXGPTPLOCALCLOCKPORT_H
#define TSXGPTPLOCALCLOCKPORT_H



#import "TSXgPTPPort.h"

@interface TSXgPTPLocalClockPort : TSXgPTPPort

@property (nonatomic) BOOL hasLocalFrequencyStabilityLower; // ivar: _hasLocalFrequencyStabilityLower
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper; // ivar: _hasLocalFrequencyStabilityUpper
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower; // ivar: _hasLocalFrequencyToleranceLower
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper; // ivar: _hasLocalFrequencyToleranceUpper
@property (nonatomic) int localFrequencyStabilityLower; // ivar: _localFrequencyStabilityLower
@property (nonatomic) int localFrequencyStabilityUpper; // ivar: _localFrequencyStabilityUpper
@property (nonatomic) int localFrequencyToleranceLower; // ivar: _localFrequencyToleranceLower
@property (nonatomic) int localFrequencyToleranceUpper; // ivar: _localFrequencyToleranceUpper
@property (nonatomic) unsigned char localOscillatorType; // ivar: _localOscillatorType


-(void)_updateFromProperties:(id)arg0 ;


@end


#endif