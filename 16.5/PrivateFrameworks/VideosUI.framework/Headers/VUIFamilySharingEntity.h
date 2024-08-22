// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIFAMILYSHARINGENTITY_H
#define VUIFAMILYSHARINGENTITY_H

@class NSString, VUIContentRating, NSNumber, WLKOfferListing, NSDate;

#import <Foundation/Foundation.h>

#import "VUIFamilySharingRelationships.h"
#import "VUIMediaEntityType.h"

@interface VUIFamilySharingEntity : NSObject

@property (retain, nonatomic) NSString *artworkURL; // ivar: _artworkURL
@property (retain, nonatomic) VUIContentRating *contentRating; // ivar: _contentRating
@property (retain, nonatomic) NSNumber *episodeNumber; // ivar: _episodeNumber
@property (retain, nonatomic) NSString *genreTitle; // ivar: _genreTitle
@property (retain, nonatomic) NSString *iTunesExtrasUrl; // ivar: _iTunesExtrasUrl
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) WLKOfferListing *offerListing; // ivar: _offerListing
@property (retain, nonatomic) WLKOfferListing *personalizedOfferListing; // ivar: _personalizedOfferListing
@property (retain, nonatomic) NSString *previewArtworkURL; // ivar: _previewArtworkURL
@property (retain, nonatomic) VUIFamilySharingRelationships *relationships; // ivar: _relationships
@property (retain, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (retain, nonatomic) NSNumber *seasonNumber; // ivar: _seasonNumber
@property (retain, nonatomic) NSString *showTitle; // ivar: _showTitle
@property (retain, nonatomic) NSString *standardDescription; // ivar: _standardDescription
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) VUIMediaEntityType *type; // ivar: _type




@end


#endif