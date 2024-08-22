// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXUSERFILTEREDCLOCK_H
#define TSXUSERFILTEREDCLOCK_H



#import "TSXKernelClock.h"

@interface TSXUserFilteredClock : TSXKernelClock

@property (readonly, nonatomic, getter=isAdaptive) BOOL adaptive;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic) NSUInteger nominalDomainInterval;
@property (readonly, nonatomic) NSUInteger nominalMachInterval;


+(id)clientProtocol;
+(id)serverProtocol;
-(BOOL)addTimestampWithMachAbsolute:(NSUInteger)arg0 andDomainTime:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)resetFilterToNominal:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)resetSyncServiceWithError:(*id)arg0 ;
-(NSUInteger)convertFromDomainIntervalToMachAbsoluteInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 ;
-(id)exportedObject;


@end


#endif