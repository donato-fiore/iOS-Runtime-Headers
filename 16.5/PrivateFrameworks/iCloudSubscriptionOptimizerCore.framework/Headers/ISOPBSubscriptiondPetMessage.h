// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISOPBSUBSCRIPTIONDPETMESSAGE_H
#define ISOPBSUBSCRIPTIONDPETMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ISOPBSubscriptionLabelMessage.h"

@interface ISOPBSubscriptiondPetMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger appLaunchCount2wMax; // ivar: _appLaunchCount2wMax
@property (nonatomic) NSInteger appLaunchCount2wMedian; // ivar: _appLaunchCount2wMedian
@property (nonatomic) NSInteger appLaunchCountSameSlot; // ivar: _appLaunchCountSameSlot
@property (nonatomic) NSInteger avgWeeklyScreenTimeSeconds2w; // ivar: _avgWeeklyScreenTimeSeconds2w
@property (nonatomic) BOOL buyLabel; // ivar: _buyLabel
@property (nonatomic) NSInteger cameraAppLaunchCount1w; // ivar: _cameraAppLaunchCount1w
@property (nonatomic) NSInteger cameraLaunchCountSameSlot; // ivar: _cameraLaunchCountSameSlot
@property (nonatomic) NSInteger daemonVersion; // ivar: _daemonVersion
@property (nonatomic) NSInteger dailyScreenTimeSeconds; // ivar: _dailyScreenTimeSeconds
@property (nonatomic) int dayOfWeek; // ivar: _dayOfWeek
@property (retain, nonatomic) NSString *deviceModelName; // ivar: _deviceModelName
@property (nonatomic) NSInteger diskStorageCapacityBytes; // ivar: _diskStorageCapacityBytes
@property (nonatomic) NSInteger dropboxAppLaunchCount1w; // ivar: _dropboxAppLaunchCount1w
@property (nonatomic) NSInteger filesAppLaunchCount1w; // ivar: _filesAppLaunchCount1w
@property (nonatomic) NSInteger filesLaunchCountSameSlot; // ivar: _filesLaunchCountSameSlot
@property (nonatomic) NSInteger googleDriveAppLaunchCount1w; // ivar: _googleDriveAppLaunchCount1w
@property (nonatomic) NSInteger googlePhotoAppLaunchCount1w; // ivar: _googlePhotoAppLaunchCount1w
@property (nonatomic) BOOL hasAppLaunchCount2wMax;
@property (nonatomic) BOOL hasAppLaunchCount2wMedian;
@property (nonatomic) BOOL hasAppLaunchCountSameSlot;
@property (nonatomic) BOOL hasAvgWeeklyScreenTimeSeconds2w;
@property (nonatomic) BOOL hasBuyLabel;
@property (nonatomic) BOOL hasCameraAppLaunchCount1w;
@property (nonatomic) BOOL hasCameraLaunchCountSameSlot;
@property (nonatomic) BOOL hasDaemonVersion;
@property (nonatomic) BOOL hasDailyScreenTimeSeconds;
@property (nonatomic) BOOL hasDayOfWeek;
@property (readonly, nonatomic) BOOL hasDeviceModelName;
@property (nonatomic) BOOL hasDiskStorageCapacityBytes;
@property (nonatomic) BOOL hasDropboxAppLaunchCount1w;
@property (nonatomic) BOOL hasFilesAppLaunchCount1w;
@property (nonatomic) BOOL hasFilesLaunchCountSameSlot;
@property (nonatomic) BOOL hasGoogleDriveAppLaunchCount1w;
@property (nonatomic) BOOL hasGooglePhotoAppLaunchCount1w;
@property (nonatomic) BOOL hasHourOfDay;
@property (readonly, nonatomic) BOOL hasICloudNotificationUsageTypeTop1;
@property (readonly, nonatomic) BOOL hasICloudNotificationUsageTypeTop2;
@property (readonly, nonatomic) BOOL hasICloudNotificationUsageTypeTop3;
@property (nonatomic) BOOL hasIcloudNotificationActionLabel;
@property (nonatomic) BOOL hasIsDoNotDisturbOn;
@property (nonatomic) BOOL hasIsDoNotDisturbOnCount2w;
@property (nonatomic) BOOL hasIsDoNotDisturbOnSameSlot;
@property (nonatomic) BOOL hasIsDrivingModeOn;
@property (nonatomic) BOOL hasIsDrivingModeOnCount2w;
@property (nonatomic) BOOL hasIsDrivingModeOnSameSlot;
@property (nonatomic) BOOL hasIsSleepModeOn;
@property (nonatomic) BOOL hasIsSleepModeOnCount2w;
@property (nonatomic) BOOL hasIsSleepModeOnSameSlot;
@property (readonly, nonatomic) BOOL hasLabelMessage;
@property (nonatomic) BOOL hasLastOpenedAppHour24h;
@property (readonly, nonatomic) BOOL hasLastOpenedAppId24h;
@property (nonatomic) BOOL hasMinsSinceLastCameraAppLaunch1w;
@property (nonatomic) BOOL hasMinsSinceLastFilesAppLaunch1w;
@property (nonatomic) BOOL hasMinsSinceLastPhotosAppLaunch1w;
@property (nonatomic) BOOL hasMinsUntilICloudBuy;
@property (nonatomic) BOOL hasMinsUntilICloudNotificationOpened;
@property (nonatomic) BOOL hasMinsUntilICloudOpenedSubStream;
@property (nonatomic) BOOL hasMlServerScore;
@property (readonly, nonatomic) BOOL hasNotificationUsageTypeTop1;
@property (readonly, nonatomic) BOOL hasNotificationUsageTypeTop2;
@property (readonly, nonatomic) BOOL hasNotificationUsageTypeTop3;
@property (nonatomic) BOOL hasNumNotificationsSameSlot;
@property (nonatomic) BOOL hasNumOpenedNotificationsSameSlot;
@property (readonly, nonatomic) BOOL hasOBSOLETEDayOfWeek;
@property (nonatomic) BOOL hasOBSOLETETrafficType;
@property (nonatomic) BOOL hasOffsetMins;
@property (nonatomic) BOOL hasOpenLabelSubStream;
@property (nonatomic) BOOL hasOpenedICloudNotificationRatio1w;
@property (nonatomic) BOOL hasOpenedICloudNotificationRatio2w;
@property (nonatomic) BOOL hasOpenedNotificationCount2wMax;
@property (nonatomic) BOOL hasOpenedNotificationCount2wMedian;
@property (nonatomic) BOOL hasOpenedNotificationRatio1w;
@property (nonatomic) BOOL hasOpenedNotificationRatio24h;
@property (nonatomic) BOOL hasOsVersionMajorVersion;
@property (nonatomic) BOOL hasOsVersionMinorVersion;
@property (nonatomic) BOOL hasOsVersionPatchVersion;
@property (nonatomic) BOOL hasPhotosAppLaunchCount1w;
@property (nonatomic) BOOL hasPhotosLaunchCount2wMax;
@property (nonatomic) BOOL hasPhotosLaunchCount2wMedian;
@property (nonatomic) BOOL hasPhotosLaunchCountSameSlot;
@property (nonatomic) BOOL hasTimestampMillis;
@property (nonatomic) BOOL hasTotalNotificationCount1w;
@property (nonatomic) BOOL hasTotalNotificationCount2wMax;
@property (nonatomic) BOOL hasTotalNotificationCount2wMedian;
@property (nonatomic) BOOL hasTotalOpenedNotificationCount1w;
@property (nonatomic) BOOL hasTrafficType;
@property (nonatomic) BOOL hasUsedDiskCapacityBytes;
@property (nonatomic) BOOL hasUserTier;
@property (nonatomic) int hourOfDay; // ivar: _hourOfDay
@property (retain, nonatomic) NSString *iCloudNotificationUsageTypeTop1; // ivar: _iCloudNotificationUsageTypeTop1
@property (retain, nonatomic) NSString *iCloudNotificationUsageTypeTop2; // ivar: _iCloudNotificationUsageTypeTop2
@property (retain, nonatomic) NSString *iCloudNotificationUsageTypeTop3; // ivar: _iCloudNotificationUsageTypeTop3
@property (nonatomic) int icloudNotificationActionLabel; // ivar: _icloudNotificationActionLabel
@property (nonatomic) BOOL isDoNotDisturbOn; // ivar: _isDoNotDisturbOn
@property (nonatomic) NSInteger isDoNotDisturbOnCount2w; // ivar: _isDoNotDisturbOnCount2w
@property (nonatomic) BOOL isDoNotDisturbOnSameSlot; // ivar: _isDoNotDisturbOnSameSlot
@property (nonatomic) BOOL isDrivingModeOn; // ivar: _isDrivingModeOn
@property (nonatomic) NSInteger isDrivingModeOnCount2w; // ivar: _isDrivingModeOnCount2w
@property (nonatomic) BOOL isDrivingModeOnSameSlot; // ivar: _isDrivingModeOnSameSlot
@property (nonatomic) BOOL isSleepModeOn; // ivar: _isSleepModeOn
@property (nonatomic) NSInteger isSleepModeOnCount2w; // ivar: _isSleepModeOnCount2w
@property (nonatomic) BOOL isSleepModeOnSameSlot; // ivar: _isSleepModeOnSameSlot
@property (retain, nonatomic) ISOPBSubscriptionLabelMessage *labelMessage; // ivar: _labelMessage
@property (nonatomic) NSInteger lastOpenedAppHour24h; // ivar: _lastOpenedAppHour24h
@property (retain, nonatomic) NSString *lastOpenedAppId24h; // ivar: _lastOpenedAppId24h
@property (nonatomic) NSInteger minsSinceLastCameraAppLaunch1w; // ivar: _minsSinceLastCameraAppLaunch1w
@property (nonatomic) NSInteger minsSinceLastFilesAppLaunch1w; // ivar: _minsSinceLastFilesAppLaunch1w
@property (nonatomic) NSInteger minsSinceLastPhotosAppLaunch1w; // ivar: _minsSinceLastPhotosAppLaunch1w
@property (nonatomic) NSInteger minsUntilICloudBuy; // ivar: _minsUntilICloudBuy
@property (nonatomic) NSInteger minsUntilICloudNotificationOpened; // ivar: _minsUntilICloudNotificationOpened
@property (nonatomic) NSInteger minsUntilICloudOpenedSubStream; // ivar: _minsUntilICloudOpenedSubStream
@property (nonatomic) CGFloat mlServerScore; // ivar: _mlServerScore
@property (retain, nonatomic) NSString *notificationUsageTypeTop1; // ivar: _notificationUsageTypeTop1
@property (retain, nonatomic) NSString *notificationUsageTypeTop2; // ivar: _notificationUsageTypeTop2
@property (retain, nonatomic) NSString *notificationUsageTypeTop3; // ivar: _notificationUsageTypeTop3
@property (nonatomic) NSInteger numNotificationsSameSlot; // ivar: _numNotificationsSameSlot
@property (nonatomic) NSInteger numOpenedNotificationsSameSlot; // ivar: _numOpenedNotificationsSameSlot
@property (retain, nonatomic) NSString *oBSOLETEDayOfWeek; // ivar: _oBSOLETEDayOfWeek
@property (nonatomic) int oBSOLETETrafficType; // ivar: _oBSOLETETrafficType
@property (nonatomic) NSInteger offsetMins; // ivar: _offsetMins
@property (nonatomic) BOOL openLabelSubStream; // ivar: _openLabelSubStream
@property (nonatomic) CGFloat openedICloudNotificationRatio1w; // ivar: _openedICloudNotificationRatio1w
@property (nonatomic) CGFloat openedICloudNotificationRatio2w; // ivar: _openedICloudNotificationRatio2w
@property (nonatomic) NSInteger openedNotificationCount2wMax; // ivar: _openedNotificationCount2wMax
@property (nonatomic) NSInteger openedNotificationCount2wMedian; // ivar: _openedNotificationCount2wMedian
@property (nonatomic) CGFloat openedNotificationRatio1w; // ivar: _openedNotificationRatio1w
@property (nonatomic) CGFloat openedNotificationRatio24h; // ivar: _openedNotificationRatio24h
@property (nonatomic) NSInteger osVersionMajorVersion; // ivar: _osVersionMajorVersion
@property (nonatomic) NSInteger osVersionMinorVersion; // ivar: _osVersionMinorVersion
@property (nonatomic) NSInteger osVersionPatchVersion; // ivar: _osVersionPatchVersion
@property (nonatomic) NSInteger photosAppLaunchCount1w; // ivar: _photosAppLaunchCount1w
@property (nonatomic) NSInteger photosLaunchCount2wMax; // ivar: _photosLaunchCount2wMax
@property (nonatomic) NSInteger photosLaunchCount2wMedian; // ivar: _photosLaunchCount2wMedian
@property (nonatomic) NSInteger photosLaunchCountSameSlot; // ivar: _photosLaunchCountSameSlot
@property (nonatomic) NSInteger timestampMillis; // ivar: _timestampMillis
@property (nonatomic) NSInteger totalNotificationCount1w; // ivar: _totalNotificationCount1w
@property (nonatomic) NSInteger totalNotificationCount2wMax; // ivar: _totalNotificationCount2wMax
@property (nonatomic) NSInteger totalNotificationCount2wMedian; // ivar: _totalNotificationCount2wMedian
@property (nonatomic) NSInteger totalOpenedNotificationCount1w; // ivar: _totalOpenedNotificationCount1w
@property (nonatomic) int trafficType; // ivar: _trafficType
@property (nonatomic) NSInteger usedDiskCapacityBytes; // ivar: _usedDiskCapacityBytes
@property (nonatomic) int userTier; // ivar: _userTier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dayOfWeekAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)icloudNotificationActionLabelAsString:(int)arg0 ;
-(id)oBSOLETETrafficTypeAsString:(int)arg0 ;
-(id)trafficTypeAsString:(int)arg0 ;
-(id)userTierAsString:(int)arg0 ;
-(int)StringAsDayOfWeek:(id)arg0 ;
-(int)StringAsIcloudNotificationActionLabel:(id)arg0 ;
-(int)StringAsOBSOLETETrafficType:(id)arg0 ;
-(int)StringAsTrafficType:(id)arg0 ;
-(int)StringAsUserTier:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif