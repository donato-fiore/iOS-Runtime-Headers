// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUTABLEPLAYACTIVITYEVENT_H
#define ICMUTABLEPLAYACTIVITYEVENT_H

@class NSArray, NSString, NSDate, NSTimeZone, NSNumber, NSData;


#import "ICPlayActivityEvent.h"
#import "ICPlayActivityEventContainerIDs.h"
#import "ICPlayActivityEnqueuerProperties.h"
#import "ICPlayActivityEventItemIDs.h"
#import "ICPlayActivityAudioQualityProperties.h"

@interface ICMutablePlayActivityEvent : ICPlayActivityEvent

@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (nonatomic) NSUInteger audioQualityPreference;
@property (nonatomic) NSUInteger autoPlayMode;
@property (copy, nonatomic) NSArray *buildFeatures;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) ICPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic) NSUInteger containerType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) NSUInteger displayType;
@property (nonatomic) NSUInteger endReasonType;
@property (copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties;
@property (copy, nonatomic) NSDate *eventDate;
@property (copy, nonatomic) NSTimeZone *eventTimeZone;
@property (nonatomic) NSUInteger eventType;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSString *householdID;
@property (nonatomic, getter=isInternalBuild) BOOL internalBuild;
@property (nonatomic) CGFloat itemDuration;
@property (nonatomic) CGFloat itemEndTime;
@property (copy, nonatomic) ICPlayActivityEventItemIDs *itemIDs;
@property (nonatomic) CGFloat itemStartTime;
@property (nonatomic) NSUInteger itemType;
@property (nonatomic) NSUInteger lyricsDisplayedCharacterCount;
@property (copy, nonatomic) NSString *lyricsLanguage;
@property (nonatomic) NSUInteger mediaType;
@property (nonatomic, getter=isOffline) BOOL offline;
@property (nonatomic) NSInteger persistentID;
@property (copy, nonatomic) NSString *personalizedContainerID;
@property (nonatomic) NSUInteger playbackFormatPreference;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic) ICPlayActivityAudioQualityProperties *providedAudioQuality;
@property (copy, nonatomic) NSString *queueGroupingID;
@property (nonatomic) NSUInteger reasonHintType;
@property (copy, nonatomic) NSData *recommendationData;
@property (nonatomic) NSUInteger repeatPlayMode;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (nonatomic) NSUInteger sharedActivityGroupSizeCurrent;
@property (nonatomic) NSUInteger sharedActivityGroupSizeMax;
@property (nonatomic) NSUInteger shufflePlayMode;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (nonatomic) NSUInteger sourceType;
@property (nonatomic) NSUInteger storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (copy, nonatomic) NSString *storeID;
@property (nonatomic) NSInteger systemReleaseType;
@property (copy, nonatomic) ICPlayActivityAudioQualityProperties *targetedAudioQuality;
@property (copy, nonatomic) NSData *timedMetadata;
@property (copy, nonatomic) NSData *trackInfo;
@property (nonatomic) NSInteger version;
@property (nonatomic) NSUInteger vocalAttenuationAvailability;
@property (nonatomic) CGFloat vocalAttenuationDuration;


-(Class)_mutableCopyClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif