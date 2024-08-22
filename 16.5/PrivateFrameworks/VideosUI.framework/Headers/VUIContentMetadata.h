// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUICONTENTMETADATA_H
#define VUICONTENTMETADATA_H

@class NSDictionary, NSNumber, NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface VUIContentMetadata : NSObject {
    NSDictionary *_metadataDictionary;
    NSDictionary *_contentTypeMap;
}


@property (readonly, nonatomic) NSNumber *artworkHeight;
@property (readonly, nonatomic) NSString *artworkURLFormat;
@property (readonly, nonatomic) NSNumber *artworkWidth;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSNumber *commonSenseRecommendedAge;
@property (readonly, nonatomic) NSUInteger contentType;
@property (readonly, nonatomic) NSString *contentUnavailabilityText;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *endTime;
@property (readonly, nonatomic) NSNumber *episodeIndexInSeries;
@property (readonly, nonatomic) NSNumber *episodeNumber;
@property (readonly, nonatomic) NSString *formattedReleaseDate;
@property (readonly, nonatomic) NSNumber *fractionalEpisodeNumber;
@property (readonly, nonatomic) NSString *gameStartTime;
@property (readonly, nonatomic) NSString *gameVenue;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSNumber *hasADLocales;
@property (readonly, nonatomic) NSNumber *hasClosedCaptions;
@property (readonly, nonatomic) NSNumber *hasDolbyAtmos;
@property (readonly, nonatomic) NSNumber *hasSDHLocales;
@property (readonly, nonatomic) BOOL isAdultContent;
@property (readonly, nonatomic) BOOL isFederated;
@property (readonly, nonatomic) BOOL isSharedWatchEnabled;
@property (readonly, nonatomic) NSString *leagueName;
@property (readonly, nonatomic) NSString *leagueShortName;
@property (readonly, nonatomic) NSString *liveTextBadge;
@property (readonly, nonatomic) NSString *mediaDescription;
@property (readonly, nonatomic) NSNumber *previewFrameHeight;
@property (readonly, nonatomic) NSString *previewFrameURLFormat;
@property (readonly, nonatomic) NSNumber *previewFrameWidth;
@property (readonly, nonatomic) NSString *ratingAuxiliaryName;
@property (readonly, nonatomic) NSString *ratingDomain;
@property (readonly, nonatomic) NSString *ratingName;
@property (readonly, nonatomic) NSString *ratingSystem;
@property (readonly, nonatomic) NSNumber *ratingValue;
@property (readonly, nonatomic) NSDate *releasedDate;
@property (readonly, nonatomic) NSNumber *rentalDurationInMilliseconds;
@property (readonly, nonatomic) NSDate *rentalExpiration;
@property (readonly, nonatomic) NSNumber *rentalPlaybackDurationInMilliseconds;
@property (readonly, nonatomic) NSString *rentalPurchasedTimestamp;
@property (readonly, nonatomic) NSString *rentalStartedWatchingTimestamp;
@property (readonly, nonatomic) NSArray *roles;
@property (readonly, nonatomic) NSNumber *seasonNumber;
@property (readonly, nonatomic) NSString *seasonTitle;
@property (readonly, nonatomic) NSNumber *showArtworkHeight;
@property (readonly, nonatomic) NSString *showArtworkURLFormat;
@property (readonly, nonatomic) NSNumber *showArtworkWidth;
@property (readonly, nonatomic) NSString *showCanonicalId;
@property (readonly, nonatomic) NSString *showTitle;
@property (readonly, nonatomic) NSString *sportName;
@property (readonly, nonatomic) NSNumber *startTime;
@property (readonly, nonatomic) NSString *studio;
@property (readonly, nonatomic) NSString *timeTextBadge;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSUInteger tomatoFreshness;
@property (readonly, nonatomic) NSNumber *tomatoPercentage;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *venueAddress;
@property (readonly, nonatomic) NSString *venueName;
@property (readonly, nonatomic) NSNumber *videoDynamicRange;
@property (readonly, nonatomic) NSNumber *videoResolutionClass;


-(id)backingDictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 showTitle:(id)arg1 seasonTitle:(id)arg2 seasonNumber:(id)arg3 episodeNumber:(id)arg4 artworkURL:(id)arg5 ;


@end


#endif