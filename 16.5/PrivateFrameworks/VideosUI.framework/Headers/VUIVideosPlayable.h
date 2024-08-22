// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIVIDEOSPLAYABLE_H
#define VUIVIDEOSPLAYABLE_H

@class NSDictionary, NSString, NSURL, NSNumber, NSArray, NSDate;

#import <Foundation/Foundation.h>

#import "VUIExtrasInfo.h"
#import "VUIContentMetadata.h"
#import "VUIRouterDataSource.h"

@interface VUIVideosPlayable : NSObject {
    NSDictionary *_videosPlayableDict;
}


@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSString *bookmarkID;
@property (readonly, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSString *cowatchingProhibitedReason;
@property (readonly, nonatomic) BOOL disableScrubbing;
@property (readonly, nonatomic) NSURL *downloadURL;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *externalServiceID;
@property (readonly, nonatomic) VUIExtrasInfo *extrasInfo;
@property (readonly, nonatomic) NSDictionary *fpsAdditionalServerParams;
@property (readonly, nonatomic) NSURL *fpsCertificateURL;
@property (readonly, nonatomic) NSURL *fpsKeyServerURL;
@property (readonly, nonatomic) NSURL *fpsNonceURL;
@property (readonly, nonatomic) NSNumber *frequencyOfAgeConfirmation;
@property (readonly, nonatomic) NSString *groupActivityDay;
@property (retain, nonatomic) NSURL *hlsURL;
@property (readonly, nonatomic) BOOL isAmbientVideo;
@property (readonly, nonatomic) BOOL isCowatchingProhibited;
@property (readonly, nonatomic) BOOL isEligibleForMultiview;
@property (readonly, nonatomic) BOOL isFamilySharingContent;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) BOOL isRental;
@property (readonly, nonatomic) BOOL isSubscription;
@property (readonly, nonatomic) BOOL isiTunesPurchaseOrRental;
@property (readonly, nonatomic) NSArray *knownAudioVariantIDs;
@property (readonly, nonatomic) BOOL limitPlayback;
@property (readonly, nonatomic) NSString *liveStreamServiceID;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSNumber *mainContentRelativeResumeTime;
@property (readonly, nonatomic) NSDate *mainContentRelativeResumeTimeTimestamp;
@property (readonly, nonatomic) NSDictionary *mediaMetrics;
@property (readonly, nonatomic) NSString *mediaType;
@property (retain, nonatomic) VUIContentMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSUInteger playableType;
@property (readonly, nonatomic) NSArray *playbackModes;
@property (readonly, nonatomic) NSURL *playbackURL;
@property (readonly, nonatomic) BOOL playsFromStartOfLiveStream;
@property (readonly, nonatomic) NSURL *previewArtwork; // ivar: _previewArtwork
@property (readonly, nonatomic) NSString *referenceID;
@property (readonly, nonatomic) NSNumber *rentalID;
@property (readonly, nonatomic) NSNumber *repeatLoopCount;
@property (readonly, nonatomic) NSNumber *requiredAgeForPlayback;
@property (readonly, nonatomic) NSNumber *resumeTime;
@property (readonly, nonatomic) NSDate *resumeTimeTimestamp;
@property (readonly, nonatomic) NSString *rtcServiceIdentifier;
@property (readonly, nonatomic) NSURL *scrubVideoURL;
@property (readonly, nonatomic) NSString *seasonCanonicalID;
@property (readonly, nonatomic) BOOL sendLocationToPlaybackKeyServerWhenOptedIn;
@property (readonly, nonatomic) BOOL sendMescalHeaderToPlaybackKeyServer;
@property (readonly, nonatomic, getter=isSharedPurchase) BOOL sharedPurchase;
@property (readonly, nonatomic) NSString *sharedWatchId;
@property (readonly, nonatomic) NSURL *sharedWatchUrl;
@property (readonly, nonatomic) NSString *showCanonicalID;
@property (readonly, nonatomic) NSUInteger sourceRef;
@property (readonly, nonatomic, getter=supportsStartOver) BOOL supportsStartOver;
@property (readonly, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, nonatomic) VUIRouterDataSource *upsellRouterDataSource;
@property (readonly, nonatomic) BOOL useSharedPlayableForCowatching;
@property (readonly, nonatomic) NSString *utsEntityType;
@property (retain, nonatomic) NSDictionary *vpafMetrics;


+(id)_sharedPlayableAllowList;
+(id)videosPlayableFromSerializedData:(id)arg0 ;
+(id)videosPlayableFromSerializedSharedData:(id)arg0 ;
+(id)videosPlayablesFromDictionaries:(id)arg0 andMetadataDictionary:(id)arg1 ;
-(BOOL)mostRecentResumeTime:(*id)arg0 mostRecentTimestamp:(*id)arg1 ;
-(id)initWithDictionary:(id)arg0 andMetadataDictionary:(id)arg1 ;
-(id)serializedData;
-(id)serializedSharedData;


@end


#endif