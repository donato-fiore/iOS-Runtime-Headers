// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUINOWPLAYINGCONFIG_H
#define VUINOWPLAYINGCONFIG_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface VUINowPlayingConfig : NSObject

@property (nonatomic) CGFloat alertIdleTimeout; // ivar: _alertIdleTimeout
@property (nonatomic) BOOL allowQOSReportingForiTunesLibraryPlayback; // ivar: _allowQOSReportingForiTunesLibraryPlayback
@property (nonatomic) BOOL convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero; // ivar: _convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero
@property (nonatomic) CGFloat liveSportsStartFromBeginningOffset; // ivar: _liveSportsStartFromBeginningOffset
@property (nonatomic) CGFloat liveStreamOverrunExtension; // ivar: _liveStreamOverrunExtension
@property (nonatomic) CGFloat liveStreamStartAndEndTimeBadMetadataCutoff; // ivar: _liveStreamStartAndEndTimeBadMetadataCutoff
@property (nonatomic) CGFloat liveStreamStartTimeAdjustmentSlopFactor; // ivar: _liveStreamStartTimeAdjustmentSlopFactor
@property (copy, nonatomic) NSArray *mediaCharacteristicsToLocalize; // ivar: _mediaCharacteristicsToLocalize
@property (copy, nonatomic) NSDictionary *mediaLocalizationKeyMapping; // ivar: _mediaLocalizationKeyMapping
@property (copy, nonatomic) NSArray *mediaTypesExcludedFromReporting; // ivar: _mediaTypesExcludedFromReporting
@property (nonatomic) BOOL refetchesUpNextDataForLive; // ivar: _refetchesUpNextDataForLive
@property (nonatomic) BOOL refetchesUpNextDataForVOD; // ivar: _refetchesUpNextDataForVOD
@property (nonatomic) BOOL shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime; // ivar: _shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime
@property (nonatomic) BOOL shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime; // ivar: _shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime
@property (nonatomic) BOOL shouldSendLiveStreamStartAndEndTimesToAVKit; // ivar: _shouldSendLiveStreamStartAndEndTimesToAVKit
@property (nonatomic) BOOL showsLozengeForLivePlayback; // ivar: _showsLozengeForLivePlayback
@property (nonatomic) BOOL showsStillWatchingAlert; // ivar: _showsStillWatchingAlert
@property (nonatomic) BOOL showsUpNextInHUDForLive; // ivar: _showsUpNextInHUDForLive
@property (nonatomic) BOOL showsUpNextInHUDForVOD; // ivar: _showsUpNextInHUDForVOD
@property (nonatomic) CGFloat stillWatchingAlertDuration; // ivar: _stillWatchingAlertDuration


-(id)init;


@end


#endif