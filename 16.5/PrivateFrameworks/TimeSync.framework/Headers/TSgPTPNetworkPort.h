// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSGPTPNETWORKPORT_H
#define TSGPTPNETWORKPORT_H

@class NSPointerArray, NSString;
@protocol TSXgPTPNetworkPortClient;


#import "TSgPTPPort.h"
#import "TSXgPTPNetworkPort.h"

@interface TSgPTPNetworkPort : TSgPTPPort <TSXgPTPNetworkPortClient>

 {
    TSXgPTPNetworkPort *_implXPC;
    NSPointerArray *_clients;
    os_unfair_lock_s _clientLock;
}


@property (readonly, nonatomic, getter=isASCapable) BOOL asCapable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *destinationAddressString;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (readonly, nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (readonly, nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (readonly, nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (readonly, nonatomic) BOOL hasRemoteFrequencyStabilityLower;
@property (readonly, nonatomic) BOOL hasRemoteFrequencyStabilityUpper;
@property (readonly, nonatomic) BOOL hasRemoteFrequencyToleranceLower;
@property (readonly, nonatomic) BOOL hasRemoteFrequencyToleranceUpper;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) char localAnnounceLogMeanInterval;
@property (readonly, nonatomic) int localFrequencyStabilityLower;
@property (readonly, nonatomic) int localFrequencyStabilityUpper;
@property (readonly, nonatomic) int localFrequencyToleranceLower;
@property (readonly, nonatomic) int localFrequencyToleranceUpper;
@property (readonly, nonatomic) unsigned char localLinkType;
@property (readonly, nonatomic) unsigned char localOscillatorType;
@property (readonly, nonatomic) char localSyncLogMeanInterval;
@property (readonly, nonatomic) unsigned char localTimestampingMode;
@property (readonly, nonatomic) unsigned int maximumPropagationDelay;
@property (readonly, nonatomic) unsigned int maximumRawDelay;
@property (readonly, nonatomic) unsigned int minimumPropagationDelay;
@property (readonly, nonatomic) unsigned int minimumRawDelay;
@property (nonatomic) NSUInteger overridenReceiveClockIdentity;
@property (nonatomic) BOOL overridenReceiveMatching;
@property (nonatomic) unsigned short overridenReceivePortNumber;
@property (readonly, nonatomic) unsigned int propagationDelay;
@property (readonly, nonatomic) unsigned int propagationDelayLimit;
@property (readonly, nonatomic) char remoteAnnounceLogMeanInterval;
@property (readonly, nonatomic) NSUInteger remoteClockIdentity;
@property (readonly, nonatomic) int remoteFrequencyStabilityLower;
@property (readonly, nonatomic) int remoteFrequencyStabilityUpper;
@property (readonly, nonatomic) int remoteFrequencyToleranceLower;
@property (readonly, nonatomic) int remoteFrequencyToleranceUpper;
@property (readonly, nonatomic) BOOL remoteIsSameDevice;
@property (readonly, nonatomic) unsigned char remoteLinkType;
@property (readonly, nonatomic) unsigned char remoteOscillatorType;
@property (readonly, nonatomic) unsigned short remotePortNumber;
@property (readonly, nonatomic) char remoteSyncLogMeanInterval;
@property (readonly, nonatomic) unsigned char remoteTimestampingMode;
@property (readonly, copy, nonatomic) NSString *sourceAddressString;
@property (readonly) Class superclass;


+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
+(id)keyPathsForValuesAffectingAsCapable;
+(id)keyPathsForValuesAffectingDestinationAddressString;
+(id)keyPathsForValuesAffectingEnabled;
+(id)keyPathsForValuesAffectingHasLocalFrequencyStabilityLower;
+(id)keyPathsForValuesAffectingHasLocalFrequencyStabilityUpper;
+(id)keyPathsForValuesAffectingHasLocalFrequencyToleranceLower;
+(id)keyPathsForValuesAffectingHasLocalFrequencyToleranceUpper;
+(id)keyPathsForValuesAffectingHasRemoteFrequencyStabilityLower;
+(id)keyPathsForValuesAffectingHasRemoteFrequencyStabilityUpper;
+(id)keyPathsForValuesAffectingHasRemoteFrequencyToleranceLower;
+(id)keyPathsForValuesAffectingHasRemoteFrequencyToleranceUpper;
+(id)keyPathsForValuesAffectingInterfaceName;
+(id)keyPathsForValuesAffectingLocalAnnounceLogMeanInterval;
+(id)keyPathsForValuesAffectingLocalFrequencyStabilityLower;
+(id)keyPathsForValuesAffectingLocalFrequencyStabilityUpper;
+(id)keyPathsForValuesAffectingLocalFrequencyToleranceLower;
+(id)keyPathsForValuesAffectingLocalFrequencyToleranceUpper;
+(id)keyPathsForValuesAffectingLocalLinkType;
+(id)keyPathsForValuesAffectingLocalOscillatorType;
+(id)keyPathsForValuesAffectingLocalSyncLogMeanInterval;
+(id)keyPathsForValuesAffectingLocalTimestampingMode;
+(id)keyPathsForValuesAffectingMaximumPropagationDelay;
+(id)keyPathsForValuesAffectingMaximumRawDelay;
+(id)keyPathsForValuesAffectingMinimumPropagationDelay;
+(id)keyPathsForValuesAffectingMinimumRawDelay;
+(id)keyPathsForValuesAffectingOverridenReceiveClockIdentity;
+(id)keyPathsForValuesAffectingOverridenReceiveMatching;
+(id)keyPathsForValuesAffectingOverridenReceivePortNumber;
+(id)keyPathsForValuesAffectingPropagationDelay;
+(id)keyPathsForValuesAffectingPropagationDelayLimit;
+(id)keyPathsForValuesAffectingRemoteAnnounceLogMeanInterval;
+(id)keyPathsForValuesAffectingRemoteClockIdentity;
+(id)keyPathsForValuesAffectingRemoteFrequencyStabilityLower;
+(id)keyPathsForValuesAffectingRemoteFrequencyStabilityUpper;
+(id)keyPathsForValuesAffectingRemoteFrequencyToleranceLower;
+(id)keyPathsForValuesAffectingRemoteFrequencyToleranceUpper;
+(id)keyPathsForValuesAffectingRemoteIsSameDevice;
+(id)keyPathsForValuesAffectingRemoteLinkType;
+(id)keyPathsForValuesAffectingRemoteOscillatorType;
+(id)keyPathsForValuesAffectingRemotePortNumber;
+(id)keyPathsForValuesAffectingRemoteSyncLogMeanInterval;
+(id)keyPathsForValuesAffectingRemoteTimestampingMode;
+(id)keyPathsForValuesAffectingSourceAddressString;
-(BOOL)asCapable;
-(BOOL)deregisterAsyncCallbackError:(*id)arg0 ;
-(BOOL)disablePortError:(*id)arg0 ;
-(BOOL)enablePortError:(*id)arg0 ;
-(BOOL)getCurrentPortInfo:(struct ? *)arg0 error:(*id)arg1 ;
-(BOOL)overrideReceiveMatchingWithRemoteClockIdentity:(NSUInteger)arg0 remotePortNumber:(unsigned short)arg1 error:(*id)arg2 ;
-(BOOL)registerAsyncCallbackError:(*id)arg0 ;
-(BOOL)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)arg0 syncMessageInterval:(char)arg1 announceMessageInterval:(char)arg2 error:(*id)arg3 ;
-(BOOL)restoreReceiveMatchingError:(*id)arg0 ;
-(id)initWithImplXPC:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)didAnnounceTimeoutForPort:(id)arg0 ;
-(void)didChangeASCapable:(BOOL)arg0 forPort:(id)arg1 ;
-(void)didChangeAdministrativeEnable:(BOOL)arg0 forPort:(id)arg1 ;
-(void)didSyncTimeoutForPort:(id)arg0 ;
-(void)didSyncTimeoutWithMean:(NSInteger)arg0 median:(NSInteger)arg1 standardDeviation:(NSUInteger)arg2 minimum:(NSInteger)arg3 maximum:(NSInteger)arg4 numberOfSamples:(unsigned int)arg5 forPort:(id)arg6 ;
-(void)didTerminateServiceForPort:(id)arg0 ;
-(void)didTimeoutOnMACLookupForPort:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)updateWithXPCStatistics:(id)arg0 ;


@end


#endif