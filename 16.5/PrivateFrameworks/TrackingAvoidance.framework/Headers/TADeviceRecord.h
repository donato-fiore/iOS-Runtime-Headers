// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TADEVICERECORD_H
#define TADEVICERECORD_H

@class NSMutableDictionary, NSDate;
@protocol NSSecureCoding, TAStoreRequestProtocol;

#import <Foundation/Foundation.h>

#import "TADeviceRecordSettings.h"

@interface TADeviceRecord : NSObject <NSSecureCoding>



@property (weak, nonatomic) NSObject<TAStoreRequestProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *deviceRecord; // ivar: _deviceRecord
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDToAddress; // ivar: _deviceUUIDToAddress
@property (retain, nonatomic) NSDate *lastPurgeDate; // ivar: _lastPurgeDate
@property (retain, nonatomic) NSDate *lastScanAttemptDate; // ivar: _lastScanAttemptDate
@property (retain, nonatomic) TADeviceRecordSettings *settings; // ivar: _settings


+(BOOL)_isKnownDevice:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_convertTANotificationStateToTANotificationInternalState:(NSUInteger)arg0 ;
+(id)notificationInternalStateToString:(NSUInteger)arg0 ;
-(BOOL)hasStagedImmediateDetections:(id)arg0 ;
-(BOOL)hasSurfacedNotificationFor:(id)arg0 ;
-(BOOL)isAISFetchSuccessful:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKnownDevice:(id)arg0 ;
-(NSUInteger)getAISFetchState:(id)arg0 ;
-(NSUInteger)getDeviceNotificationState:(id)arg0 ;
-(NSUInteger)getDeviceOwnershipType:(id)arg0 ;
-(NSUInteger)getDeviceType:(id)arg0 ;
-(NSUInteger)getNumOfAISFetch:(id)arg0 ;
-(NSUInteger)getNumStagedDetections:(id)arg0 ;
-(id)_determineFirstObservationDateWithTASuspiciousDevice:(id)arg0 ;
-(id)_determineHELEKeepInStagingUntil:(id)arg0 ;
-(id)_determineKeepInStagingUntil:(id)arg0 ;
-(id)_getDeviceRecord:(id)arg0 ;
-(id)_getDeviceRecordWithUUID:(id)arg0 ;
-(id)createTAOutgoingRequestWithExpiringTASingleDeviceRecord:(id)arg0 withCurrentDate:(id)arg1 ;
-(id)description;
-(id)descriptionDictionary;
-(id)getAccessoryInfo:(id)arg0 ;
-(id)getDetectionResultsToPush;
-(id)getDeviceUUID:(id)arg0 ;
-(id)getDeviceUUIDMapping;
-(id)getFirstStagedDetectionDate:(id)arg0 ;
-(id)getLatestAdvertisement:(id)arg0 ;
-(id)getLatestBeepOnMoveDate:(id)arg0 ;
-(id)getUnknownBeacon:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)_beepOnMoveForceAlertIfEligableForDeviceRecord:(id)arg0 andAdvertisment:(id)arg1 ;
-(void)_clearStagedDetectionsForDevice:(id)arg0 ;
-(void)_createRecordIfNecessaryWithAdvertisement:(id)arg0 withDate:(id)arg1 ;
-(void)_didSurfaceNotificationFor:(id)arg0 ;
-(void)_performNotificationStateTransitionActionsForDevice:(id)arg0 from:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)_processAISFetchSuccess:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)_processPlaySoundSuccess:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)_setDevice:(id)arg0 withExternalState:(NSUInteger)arg1 withDate:(id)arg2 ;
-(void)_setDevice:(id)arg0 withInternalState:(NSUInteger)arg1 withDate:(id)arg2 ;
-(void)_setDevice:(id)arg0 withType:(NSUInteger)arg1 withDate:(id)arg2 ;
-(void)_updateAISStateOnNotificationStateChange:(id)arg0 from:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)_updateAdvertisement:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)_updateKeepInStagingUntil:(id)arg0 ;
-(void)checkForScanRequestsWithClock:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceStagedDetectionsToSurfaceImmediatelyWithAdvertisement:(id)arg0 withReason:(NSUInteger)arg1 ;
-(void)forceUpdateAISFetchState:(id)arg0 state:(NSUInteger)arg1 ;
-(void)ingestTAEvent:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)logDeviceRecord;
-(void)mergeWithAnotherDeviceRecord:(id)arg0 ;
-(void)processBackgroundDetection:(id)arg0 ;
-(void)processSurfacedAlerts:(id)arg0 ;
-(void)purgeWithClock:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)removeDevice:(id)arg0 ;
-(void)requestAISFetchIfNeeded:(id)arg0 ;
-(void)stageDetectionResults:(id)arg0 ;
-(void)stageDevice:(id)arg0 withCurrentDate:(id)arg1 ;
-(void)updateDeviceRecordOnSessionChange:(id)arg0 WithCurrentDate:(id)arg1 ;


@end


#endif