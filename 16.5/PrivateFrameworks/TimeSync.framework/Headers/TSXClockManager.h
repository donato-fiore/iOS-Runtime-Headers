// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXCLOCKMANAGER_H
#define TSXCLOCKMANAGER_H

@class NSString;
@protocol TSXClockManagerClientProtocol;


#import "TSXClient.h"
#import "TSClockManager.h"
#import "TSXTranslationClock.h"

@interface TSXClockManager : TSXClient <TSXClockManagerClientProtocol>

 {
    TSClockManager *_clockManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger timeSyncTimeClockIdentifier; // ivar: _timeSyncTimeClockIdentifier
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime; // ivar: _timeSyncTimeIsMachAbsoluteTime
@property (readonly, nonatomic) TSXTranslationClock *translationClock; // ivar: _translationClock
@property (readonly, nonatomic) NSUInteger translationClockIdentifier; // ivar: _translationClockIdentifier


+(id)clientProtocol;
+(id)serverProtocol;
+(id)serviceName;
+(void)_setIsAvailable;
+(void)_setIsUnavailable;
+(void)initialize;
-(BOOL)addMappingFromClockID:(NSUInteger)arg0 toCoreAudioClockDomain:(*unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)addTSNCaptureServicesWithError:(*id)arg0 ;
-(BOOL)addgPTPServicesWithError:(*id)arg0 ;
-(BOOL)getConnectionForClockWithClockIdentifier:(NSUInteger)arg0 daemonClockClassName:(*id)arg1 endpoint:(*id)arg2 ;
-(BOOL)getConnectionForPortWithClockIdentifier:(NSUInteger)arg0 portNumber:(unsigned short)arg1 daemonPortClassName:(*id)arg2 endpoint:(*id)arg3 ;
-(BOOL)getTimeSyncTimeIsMachAbsoluteTime;
-(BOOL)nextAvailableDynamicClockID:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)releaseDynamicClockID:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeTSNCaptureServicesWithError:(*id)arg0 ;
-(BOOL)removeUserFilteredClockWithIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removegPTPServicesWithError:(*id)arg0 ;
-(NSUInteger)addUserFilteredClockWithMachInterval:(NSUInteger)arg0 domainInterval:(NSUInteger)arg1 usingFilterShift:(unsigned char)arg2 isAdaptive:(BOOL)arg3 error:(*id)arg4 ;
-(NSUInteger)getTimeSyncTimeClockIdentifier;
-(NSUInteger)getTranslationClockIdentifier;
-(id)availableClockIdentifiers;
-(id)exportedObject;
-(id)initWithClockManager:(id)arg0 ;
-(void)changedTranslationClockMaster;
-(void)interruptedConnection;
-(void)updateTranslationClockLockState:(int)arg0 ;
-(void)updateTranslationClockState;
-(void)updateTranslationClockTimeSyncTime:(NSUInteger)arg0 timeSyncInterval:(NSUInteger)arg1 domainTime:(NSUInteger)arg2 domainInterval:(NSUInteger)arg3 ;


@end


#endif