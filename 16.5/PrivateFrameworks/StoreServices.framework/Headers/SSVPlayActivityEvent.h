// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVPLAYACTIVITYEVENT_H
#define SSVPLAYACTIVITYEVENT_H

@class NSString, NSData, NSDate, NSTimeZone, NSNumber;
@protocol NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SSVPlayActivityEventContainerIDs.h"
#import "SSVPlayActivityEnqueuerProperties.h"
#import "SSVPlayActivityEventItemIDs.h"

@interface SSVPlayActivityEvent : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSInteger _persistentID;
}


@property (readonly, nonatomic, getter=isSBEnabled) BOOL SBEnabled; // ivar: _SBEnabled
@property (readonly, copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, copy, nonatomic) NSString *containerID; // ivar: _containerID
@property (readonly, copy, nonatomic) SSVPlayActivityEventContainerIDs *containerIDs; // ivar: _containerIDs
@property (readonly, nonatomic) NSUInteger containerType; // ivar: _containerType
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) NSUInteger displayType; // ivar: _displayType
@property (readonly, nonatomic) NSUInteger endReasonType; // ivar: _endReasonType
@property (readonly, copy, nonatomic) SSVPlayActivityEnqueuerProperties *enqueuerProperties; // ivar: _enqueuerProperties
@property (readonly, copy, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, copy, nonatomic) NSTimeZone *eventTimeZone; // ivar: _eventTimeZone
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, copy, nonatomic) NSString *householdID; // ivar: _householdID
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;
@property (readonly, nonatomic) CGFloat itemDuration; // ivar: _itemDuration
@property (readonly, nonatomic) CGFloat itemEndTime; // ivar: _itemEndTime
@property (readonly, copy, nonatomic) SSVPlayActivityEventItemIDs *itemIDs; // ivar: _itemIDs
@property (readonly, nonatomic) CGFloat itemStartTime; // ivar: _itemStartTime
@property (readonly, nonatomic) NSUInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) NSUInteger lyricsDisplayedCharacterCount; // ivar: _lyricsDisplayedCharacterCount
@property (readonly, copy, nonatomic) NSString *lyricsLanguage; // ivar: _lyricsLanguage
@property (readonly, nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic, getter=isOffline) BOOL offline; // ivar: _offline
@property (readonly, nonatomic) NSInteger persistentID;
@property (readonly, copy, nonatomic) NSString *personalizedContainerID; // ivar: _personalizedContainerID
@property (readonly, copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // ivar: _privateListeningEnabled
@property (readonly, nonatomic) NSUInteger reasonHintType; // ivar: _reasonHintType
@property (readonly, copy, nonatomic) NSData *recommendationData; // ivar: _recommendationData
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // ivar: _requestingBundleIdentifier
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion; // ivar: _requestingBundleVersion
@property (readonly, copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // ivar: _siriInitiated
@property (readonly, nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (readonly, nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (readonly, copy, nonatomic) NSString *storeFrontID; // ivar: _storeFrontID
@property (readonly, copy, nonatomic) NSString *storeID; // ivar: _storeID
@property (readonly, nonatomic) NSInteger systemReleaseType; // ivar: _systemReleaseType
@property (readonly, copy, nonatomic) NSData *timedMetadata; // ivar: _timedMetadata
@property (readonly, copy, nonatomic) NSData *trackInfo; // ivar: _trackInfo
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)_mutableCopyClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif