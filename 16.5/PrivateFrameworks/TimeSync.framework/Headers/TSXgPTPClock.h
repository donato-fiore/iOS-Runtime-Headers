// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXGPTPCLOCK_H
#define TSXGPTPCLOCK_H

@class NSString, NSArray;
@protocol TSXgPTPClockClientProtocol;


#import "TSXKernelClock.h"
#import "TSClock.h"

@interface TSXgPTPClock : TSXKernelClock <TSXgPTPClockClientProtocol>

 {
    ? _timeInfo;
    unsigned int _validIndex;
    TSClock *_translationClock;
    TSClock *_timeSyncClock;
    os_unfair_lock_s _updateLock;
    int _internalLockState;
}


@property (nonatomic) unsigned char clockAccuracy; // ivar: _clockAccuracy
@property (nonatomic) unsigned char clockClass; // ivar: _clockClass
@property (readonly, nonatomic) NSUInteger clockIdentity;
@property (nonatomic) unsigned char clockPriority1; // ivar: _clockPriority1
@property (nonatomic) unsigned char clockPriority2; // ivar: _clockPriority2
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *gptpPath; // ivar: _gptpPath
@property (nonatomic) NSUInteger grandmasterIdentity; // ivar: _grandmasterIdentity
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *ports;
@property (readonly) Class superclass;


+(id)clientProtocol;
+(id)serverProtocol;
-(BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg0 allocatedPortNumber:(*unsigned short)arg1 error:(*id)arg2 ;
-(BOOL)addReverseSyncOnInterfaceNamed:(id)arg0 withDomainNumner:(unsigned char)arg1 syncInterval:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 allocatedPortNumber:(*unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)convertFrom32BitASTime:(*unsigned int)arg0 toMachAbsoluteTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFrom32BitASTime:(*unsigned int)arg0 toTimeSyncTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toMachAbsoluteTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toTimeSyncTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromTimeSyncTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 forGrandmasterIdentity:(*NSUInteger)arg4 portNumber:(*unsigned short)arg5 withError:(*id)arg6 ;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)getTimeSyncTimeRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 timeSyncAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 forGrandmasterIdentity:(*NSUInteger)arg4 portNumber:(*unsigned short)arg5 withError:(*id)arg6 ;
-(BOOL)getTimeSyncTimeRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 timeSyncAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)removeLinkLayerPortFromInterfaceNamed:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeReverseSyncFromInterfaceNamed:(id)arg0 withDomainNumner:(unsigned char)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(BOOL)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)arg0 withDestinationAddress:(char *)arg1 error:(*id)arg2 ;
-(NSUInteger)convertFrom128BitgPTPTimeToMachAbsoluteTime:(struct ? )arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFrom128BitgPTPTimeToTimeSyncTime:(struct ? )arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg0 ;
-(NSUInteger)convertFrom32BitASToTimeSyncTime:(unsigned int)arg0 ;
-(NSUInteger)convertFromDomainIntervalToMachAbsoluteInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainIntervalToTimeSyncTimeInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainTimeToTimeSyncTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFromDomainToTimeSyncTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFromTimeSyncTimeIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncTimeToDomainTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(NSUInteger)convertFromTimeSyncToDomainTime:(NSUInteger)arg0 ;
-(NSUInteger)machAbsoluteFromgPTPTime:(id)arg0 ;
-(NSUInteger)timeSyncTimeFromgPTPTime:(id)arg0 ;
-(id)clockName;
-(id)exportedObject;
-(id)gPTPTimeFromMachAbsoluteTime:(NSUInteger)arg0 ;
-(id)gPTPTimeFromTimeSyncTime:(NSUInteger)arg0 ;
-(id)initWithEndpoint:(id)arg0 clockIdentifier:(NSUInteger)arg1 ;
-(id)portWithPortNumber:(unsigned short)arg0 ;
-(struct ? )convertFromMachAbsoluteTo128BitgPTPTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(struct ? )convertFromTimeSyncTimeTo128BitgPTPTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 ;
-(struct ? )convertFromTimeSyncTimeTo128BitgPTPTime:(NSUInteger)arg0 grandmasterUsed:(*NSUInteger)arg1 portNumber:(*unsigned short)arg2 flags:(*NSUInteger)arg3 ;
-(void)_getInitialSyncInfo;
-(void)beginGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 ;
-(void)changeLocalPortGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 ;
-(void)endGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 ;
-(void)updateGrandmasterIdentity:(NSUInteger)arg0 andgPTPPath:(id)arg1 ;
-(void)updateLockState:(int)arg0 ;
-(void)updateWithSyncInfoValid:(BOOL)arg0 syncFlags:(unsigned char)arg1 timeSyncTime:(NSUInteger)arg2 domainTimeHi:(NSUInteger)arg3 domainTimeLo:(NSUInteger)arg4 cumulativeScaledRate:(NSUInteger)arg5 inverseCumulativeScaledRate:(NSUInteger)arg6 grandmasterID:(NSUInteger)arg7 localPortNumber:(unsigned short)arg8 ;


@end


#endif