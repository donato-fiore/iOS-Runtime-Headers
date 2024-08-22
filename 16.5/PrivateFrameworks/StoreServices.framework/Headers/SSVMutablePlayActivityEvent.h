// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVMUTABLEPLAYACTIVITYEVENT_H
#define SSVMUTABLEPLAYACTIVITYEVENT_H

@class NSString, NSDate, NSTimeZone, NSNumber, NSData;


#import "SSVPlayActivityEvent.h"
#import "SSVPlayActivityEventContainerIDs.h"
#import "SSVPlayActivityEnqueuerProperties.h"
#import "SSVPlayActivityEventItemIDs.h"

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent

@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) SSVPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic) NSUInteger containerType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) NSUInteger displayType;
@property (nonatomic) NSUInteger endReasonType;
@property (copy, nonatomic) SSVPlayActivityEnqueuerProperties *enqueuerProperties;
@property (copy, nonatomic) NSDate *eventDate;
@property (copy, nonatomic) NSTimeZone *eventTimeZone;
@property (nonatomic) NSUInteger eventType;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSString *householdID;
@property (nonatomic, getter=isInternalBuild) BOOL internalBuild;
@property (nonatomic) CGFloat itemDuration;
@property (nonatomic) CGFloat itemEndTime;
@property (copy, nonatomic) SSVPlayActivityEventItemIDs *itemIDs;
@property (nonatomic) CGFloat itemStartTime;
@property (nonatomic) NSUInteger itemType;
@property (nonatomic) NSUInteger lyricsDisplayedCharacterCount;
@property (copy, nonatomic) NSString *lyricsLanguage;
@property (nonatomic) NSUInteger mediaType;
@property (nonatomic, getter=isOffline) BOOL offline;
@property (nonatomic) NSInteger persistentID;
@property (copy, nonatomic) NSString *personalizedContainerID;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (nonatomic) NSUInteger reasonHintType;
@property (copy, nonatomic) NSData *recommendationData;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (nonatomic) NSUInteger sourceType;
@property (nonatomic) NSUInteger storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (copy, nonatomic) NSString *storeID;
@property (nonatomic) NSInteger systemReleaseType;
@property (copy, nonatomic) NSData *timedMetadata;
@property (copy, nonatomic) NSData *trackInfo;
@property (nonatomic) NSInteger version;


-(Class)_mutableCopyClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif