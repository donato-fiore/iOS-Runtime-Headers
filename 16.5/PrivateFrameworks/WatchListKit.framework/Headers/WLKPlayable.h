// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKPLAYABLE_H
#define WLKPLAYABLE_H

@class NSArray, NSString, NSNumber, NSDate, NSDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "WLKStoreOffer.h"
#import "WLKChannelDetails.h"
#import "WLKComingSoonInfo.h"
#import "WLKBasicContentMetadata.h"
#import "WLKOfferListing.h"
#import "WLKPlayEvent.h"
#import "WLKLocale.h"

@interface WLKPlayable : NSObject

@property (readonly, copy, nonatomic) NSArray *SDHLocales; // ivar: _SDHLocales
@property (readonly, copy, nonatomic) NSArray *adLocales; // ivar: _adLocales
@property (readonly, nonatomic) NSInteger airingType; // ivar: _airingType
@property (readonly, nonatomic, getter=isAppInstalled) BOOL appInstalled; // ivar: _appInstalled
@property (readonly, copy, nonatomic) NSArray *audioTrackFormats; // ivar: _audioTrackFormats
@property (readonly, copy, nonatomic) NSArray *audioTrackLocales; // ivar: _audioTrackLocales
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreBuyOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreRentalOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreSubscriptionOffer;
@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, copy, nonatomic) WLKChannelDetails *channelDetails; // ivar: _channelDetails
@property (readonly, copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, copy, nonatomic) NSArray *closedCaptionLocales; // ivar: _closedCaptionLocales
@property (readonly, copy, nonatomic) WLKComingSoonInfo *comingSoonInfo; // ivar: _comingSoonInfo
@property (readonly, nonatomic) WLKBasicContentMetadata *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (readonly, nonatomic) NSInteger contentSourceType; // ivar: _contentSourceType
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSDate *endAirTime; // ivar: _endAirTime
@property (readonly, nonatomic, getter=isEntitled) BOOL entitled; // ivar: _entitled
@property (readonly, nonatomic, getter=isEntitledAnywhere) BOOL entitledAnywhere; // ivar: _entitledAnywhere
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, copy, nonatomic) NSString *externalServiceID; // ivar: _externalServiceID
@property (readonly, nonatomic, getter=isiTunes) BOOL itunes; // ivar: _itunes
@property (readonly, copy, nonatomic) NSArray *movieClips; // ivar: _movieClips
@property (readonly, copy, nonatomic) WLKOfferListing *offerListing; // ivar: _offerListing
@property (readonly, nonatomic) WLKPlayEvent *playEvent; // ivar: _playEvent
@property (readonly, copy, nonatomic) NSString *playableID; // ivar: _playableID
@property (readonly, copy, nonatomic) WLKLocale *primaryLocale; // ivar: _primaryLocale
@property (readonly, copy, nonatomic) NSDictionary *punchoutUrls; // ivar: _punchoutUrls
@property (readonly, copy, nonatomic) NSDate *startAirTime; // ivar: _startAirTime
@property (readonly, copy, nonatomic) NSArray *storeOffers;
@property (readonly, copy, nonatomic) NSArray *subscriptionOffers; // ivar: _subscriptionOffers
@property (readonly, nonatomic, getter=isSubtitled) BOOL subtitled; // ivar: _subtitled
@property (readonly, copy, nonatomic) NSArray *subtitledLocales; // ivar: _subtitledLocales
@property (readonly, copy, nonatomic) NSURL *tvAppDeeplinkURL; // ivar: _tvAppDeeplinkURL
@property (readonly, copy, nonatomic) NSString *videoColorRange; // ivar: _videoColorRange
@property (readonly, copy, nonatomic) NSString *videoQuality; // ivar: _videoQuality


+(id)playablesWithDictionaries:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_localesArrayForDictionary:(id)arg0 andKey:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)openPunchoutURL;
-(id)playPunchoutURL;


@end


#endif