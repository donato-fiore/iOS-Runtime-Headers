// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKBASICEPISODEMETADATA_H
#define WLKBASICEPISODEMETADATA_H

@class NSString, NSNumber, NSDate;


#import "WLKBasicContentMetadata.h"
#import "WLKPlayable.h"
#import "WLKArtworkVariantListing.h"

@interface WLKBasicEpisodeMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSString *canonicalSeasonID; // ivar: _canonicalSeasonID
@property (readonly, copy, nonatomic) NSString *canonicalShowID; // ivar: _canonicalShowID
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *episodeNumber; // ivar: _episodeNumber
@property (readonly, nonatomic) WLKPlayable *playable; // ivar: _playable
@property (readonly, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly, nonatomic) WLKArtworkVariantListing *seasonImages; // ivar: _seasonImages
@property (readonly, nonatomic) NSNumber *seasonNumber; // ivar: _seasonNumber
@property (readonly, nonatomic) NSString *seasonTitle; // ivar: _seasonTitle
@property (readonly, nonatomic) WLKArtworkVariantListing *showImages; // ivar: _showImages
@property (readonly, copy, nonatomic) NSString *showTitle; // ivar: _showTitle


+(id)episodesWithDictionaries:(id)arg0 context:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 playablesDict:(id)arg2 playablesId:(id)arg3 seasonsDict:(id)arg4 ;


@end


#endif