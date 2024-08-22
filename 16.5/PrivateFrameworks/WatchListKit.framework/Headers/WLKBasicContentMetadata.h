// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKBASICCONTENTMETADATA_H
#define WLKBASICCONTENTMETADATA_H

@class NSString, NSArray, NSNumber, NSDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "WLKVideo.h"
#import "WLKContentRating.h"
#import "WLKArtworkVariantListing.h"

@interface WLKBasicContentMetadata : NSObject {
    NSString *_contentTypeString;
}


@property (readonly, nonatomic, getter=isAppleOriginal) BOOL appleOriginal; // ivar: _appleOriginal
@property (readonly, nonatomic) WLKVideo *backgroundVideo; // ivar: _backgroundVideo
@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, copy, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) NSNumber *commonSenseRecommendedAge; // ivar: _commonSenseRecommendedAge
@property (readonly, nonatomic) WLKContentRating *contentRating; // ivar: _contentRating
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSString *descriptiveText; // ivar: _descriptiveText
@property (readonly, copy, nonatomic) NSArray *genres; // ivar: _genres
@property (readonly, nonatomic) WLKArtworkVariantListing *images; // ivar: _images
@property (readonly, nonatomic) BOOL isEvod; // ivar: _isEvod
@property (readonly, copy, nonatomic) NSDictionary *rolesSummary; // ivar: _rolesSummary
@property (readonly, copy, nonatomic) NSString *shortTitle; // ivar: _shortTitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSArray *trailers; // ivar: _trailers
@property (readonly, copy, nonatomic) NSURL *tvAppDeeplinkURL; // ivar: _tvAppDeeplinkURL


+(Class)_classForContentType:(NSUInteger)arg0 ;
+(NSUInteger)contentTypeForString:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif