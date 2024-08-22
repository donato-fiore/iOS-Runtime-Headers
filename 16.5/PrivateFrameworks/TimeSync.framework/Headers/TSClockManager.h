// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCLOCKMANAGER_H
#define TSCLOCKMANAGER_H

@class NSPointerArray;

#import <Foundation/Foundation.h>

#import "TSXClockManager.h"
#import "TSClock.h"

@interface TSClockManager : NSObject {
    TSXClockManager *_implXPC;
    mach_timebase_info _timebaseInfo;
    NSPointerArray *_clients;
    os_unfair_lock_s _clientLock;
}


@property (readonly, nonatomic) TSClock *timeSyncClock; // ivar: _timeSyncClock
@property (readonly, nonatomic) NSUInteger timeSyncTimeClockIdentifier;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly, nonatomic) TSClock *translationClock; // ivar: _translationClock
@property (readonly, nonatomic) NSUInteger translationClockIdentifier;


+(id)clockManager;
+(id)diagnosticDescriptionForClockIdentifier:(NSUInteger)arg0 withIndent:(id)arg1 ;
+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfo;
+(id)diagnosticInfoForClockIdentifier:(NSUInteger)arg0 ;
+(id)frameworkClassNameForDaemonClassName:(id)arg0 ;
+(id)keyPathsForValuesAffectingTimeSyncTimeClockIdentifier;
+(id)keyPathsForValuesAffectingTimeSyncTimeIsMachAbsoluteTime;
+(id)keyPathsForValuesAffectingTranslationClockIdentifier;
+(id)sharedClockManager;
+(id)sharedClockManagerSyncWithTimeout:(NSUInteger)arg0 ;
+(id)timeSyncAudioClockDeviceUIDForClockIdentifier:(NSUInteger)arg0 ;
+(void)initialize;
+(void)notifyWhenClockManagerIsAvailable:(id)arg0 ;
+(void)notifyWhenClockManagerIsUnavailable:(id)arg0 ;
+(void)swiftClockManagerIsAvailable:(id)arg0 ;
-(BOOL)addMappingFromClockID:(NSUInteger)arg0 toCoreAudioClockDomain:(*unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)addTSNCaptureServicesWithError:(*id)arg0 ;
-(BOOL)addgPTPServicesWithError:(*id)arg0 ;
-(BOOL)getConnectionForClockWithClockIdentifier:(NSUInteger)arg0 daemonClockClassName:(*id)arg1 endpoint:(*id)arg2 ;
-(BOOL)getConnectionForPortWithClockIdentifier:(NSUInteger)arg0 portNumber:(unsigned short)arg1 daemonPortClassName:(*id)arg2 endpoint:(*id)arg3 ;
-(BOOL)nextAvailableDynamicClockID:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)releaseDynamicClockID:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeTSNCaptureServicesWithError:(*id)arg0 ;
-(BOOL)removeUserFilteredClockWithIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removegPTPServicesWithError:(*id)arg0 ;
-(NSUInteger)addUserFilteredClockWithMachInterval:(NSUInteger)arg0 domainInterval:(NSUInteger)arg1 usingFilterShift:(unsigned char)arg2 isAdaptive:(BOOL)arg3 error:(*id)arg4 ;
-(NSUInteger)machAbsoluteNanosecondsToTicks:(NSUInteger)arg0 ;
-(NSUInteger)machAbsoluteTicksToNanoseconds:(NSUInteger)arg0 ;
-(NSUInteger)machAbsoluteToNanoseconds:(NSUInteger)arg0 ;
-(NSUInteger)nanosecondsToMachAbsolute:(NSUInteger)arg0 ;
-(id)_impl;
-(id)availableClockIdentifiers;
-(id)clockWithClockIdentifier:(NSUInteger)arg0 ;
-(id)init;
-(void)addClient:(id)arg0 ;
-(void)interruptedClockManager;
-(void)removeClient:(id)arg0 ;


@end


#endif