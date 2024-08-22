// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAITEM_H
#define VUIMEDIAITEM_H

@class NSNumber, NSDate, NSURL, MPMediaItem, NSString;
@protocol VUIMediaEntityIdentifier;


#import "VUIMediaEntity.h"
#import "VUIMediaItemCredits.h"

@interface VUIMediaItem : VUIMediaEntity

@property (readonly, nonatomic) BOOL allowsManualDownloadRenewal;
@property (readonly, copy, nonatomic) NSNumber *assetType;
@property (readonly, copy, nonatomic) NSDate *availabilityEndDate;
@property (copy, nonatomic) NSNumber *bookmark;
@property (readonly, copy, nonatomic) VUIMediaItemCredits *credits;
@property (readonly, copy, nonatomic) NSDate *downloadExpirationDate;
@property (readonly, copy, nonatomic) NSNumber *duration;
@property (readonly, copy, nonatomic) NSNumber *episodeIndexInSeries;
@property (readonly, copy, nonatomic) NSNumber *episodeNumber;
@property (readonly, copy, nonatomic) NSURL *extrasURL;
@property (readonly, copy, nonatomic) NSNumber *fractionalEpisodeNumber;
@property (copy, nonatomic) NSNumber *hasBeenPlayed;
@property (readonly, copy, nonatomic) NSNumber *isPlayable; // ivar: _isPlayable
@property (readonly, nonatomic) MPMediaItem *mediaPlayerMediaItem;
@property (copy, nonatomic) NSNumber *playCount;
@property (readonly, copy, nonatomic) NSString *previewFrameImageIdentifier;
@property (readonly, nonatomic) BOOL renewsOfflineKeysAutomatically;
@property (readonly, copy, nonatomic) NSDate *rentalExpirationDate;
@property (readonly, copy, nonatomic) NSNumber *rentalPlaybackDuration;
@property (readonly, copy, nonatomic) NSString *seasonCanonicalID; // ivar: _seasonCanonicalID
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property (readonly, copy, nonatomic) NSString *seasonTitle;
@property (readonly, copy, nonatomic) NSString *showCanonicalID; // ivar: _showCanonicalID
@property (readonly, copy, nonatomic) NSString *studio;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)_mediaItemWithMPMediaItem:(id)arg0 ;
+(id)keyPathsForValuesAffectingPlayedState;
-(id)creationDate;
-(id)description;
-(id)lastPlayedDate;
-(id)modifiedDate;


@end


#endif