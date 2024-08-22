// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXKERNELCLOCK_H
#define TSXKERNELCLOCK_H

@class NSPointerArray, NSMutableArray, NSString;
@protocol TSXKernelClockClientProtocol, OS_dispatch_queue;


#import "TSXAnonymousClient.h"
#import "TSClock.h"

@interface TSXKernelClock : TSXAnonymousClient <TSXKernelClockClientProtocol>

 {
    ? _timeInfo;
    unsigned int _validIndex;
    TSClock *_translationClock;
    NSPointerArray *_clients;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    os_unfair_lock_s _updateLock;
    int _internalLockState;
}


@property (readonly, retain, nonatomic) NSMutableArray *clients;
@property (nonatomic) NSUInteger clockIdentifier; // ivar: _clockIdentifier
@property (readonly, copy, nonatomic) NSString *clockName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat hostRateRatio; // ivar: _hostRateRatio
@property (nonatomic) int lockState; // ivar: _lockState
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue; // ivar: _propertyUpdateQueue
@property (readonly) Class superclass;


+(id)clientProtocol;
+(id)clockWithIdentifier:(NSUInteger)arg0 ;
+(id)serverProtocol;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toMachAbsoluteTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toTimeSyncTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromTimeSyncTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)getClockIdentifier:(*NSUInteger)arg0 ;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)getTimeSyncTimeRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 timeSyncAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(NSUInteger)convertFromDomainIntervalToMachAbsoluteInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainIntervalToTimeSyncTimeInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToTimeSyncTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncTimeIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncToDomainTime:(NSUInteger)arg0 ;
-(id)exportedObject;
-(id)initWithEndpoint:(id)arg0 clockIdentifier:(NSUInteger)arg1 ;
-(void)_getInitialSyncInfo;
-(void)addClient:(id)arg0 ;
-(void)changedClockMaster;
-(void)interruptedConnection;
-(void)invalidatedConnection;
-(void)postLockStateChange:(int)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)resetClock;
-(void)updateLockState:(int)arg0 ;
-(void)updateTimeSyncTime:(NSUInteger)arg0 timeSyncInterval:(NSUInteger)arg1 domainTime:(NSUInteger)arg2 domainInterval:(NSUInteger)arg3 ;


@end


#endif