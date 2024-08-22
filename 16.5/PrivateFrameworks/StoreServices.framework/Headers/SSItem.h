// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSITEM_H
#define SSITEM_H

@class NSArray, NSDictionary, NSString, NSMutableArray, NSNumber, NSDate, NSURL;
@protocol SSURLConnectionRequestDelegate;

#import <Foundation/Foundation.h>

#import "SSURLConnectionRequest.h"
#import "SSItemOffer.h"
#import "SSItemImageCollection.h"

@interface SSItem : NSObject <SSURLConnectionRequestDelegate>

 {
    NSArray *_offers;
    NSDictionary *_properties;
    NSString *_tellAFriendBody;
    NSString *_tellAFriendBodyMIMEType;
    NSMutableArray *_tellAFriendHandlers;
    SSURLConnectionRequest *_tellAFriendRequest;
    NSString *_tellAFriendSubject;
}


@property (readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property (readonly, nonatomic) NSArray *allItemOffers;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) float averageUserRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SSItemOffer *defaultItemOffer;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighDefinition) BOOL highDefinition;
@property (readonly, nonatomic) SSItemImageCollection *imageCollection;
@property (readonly, nonatomic) NSString *itemKind;
@property (readonly, nonatomic) NSString *itemTitle;
@property (readonly, nonatomic) NSInteger numberOfUserRatings;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *thumbnailImages;
@property (readonly, nonatomic) NSURL *viewItemURL;


-(BOOL)isCompilation;
-(NSInteger)numberOfPrintedPages;
-(id)_offers;
-(id)_tellAFriendDictionary;
-(id)artistIdentifier;
-(id)bundleIdentifier;
-(id)bundleVersion;
-(id)buyParameters;
-(id)collectionArtistName;
-(id)collectionIdentifier;
-(id)collectionIndexInCollectionGroup;
-(id)collectionName;
-(id)composerName;
-(id)contentRating;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)genreIdentifier;
-(id)genreName;
-(id)indexInCollection;
-(id)initWithItemDictionary:(id)arg0 ;
-(id)itemOfferForIdentifier:(id)arg0 ;
-(id)longDescription;
-(id)mediaKind;
-(id)networkName;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)playableMedia;
-(id)podcastEpisodeGUID;
-(id)podcastFeedURL;
-(id)preOrderIdentifier;
-(id)priceDisplay;
-(id)rawItemDictionary;
-(id)relatedItemsForRelationType:(id)arg0 ;
-(id)releaseDate;
-(id)releaseDateString;
-(id)seasonNumber;
-(id)sendGiftURL;
-(id)seriesName;
-(id)shortDescription;
-(id)softwareType;
-(id)tellAFriendBody;
-(id)tellAFriendBodyMIMEType;
-(id)tellAFriendBodyURL;
-(id)tellAFriendSubject;
-(id)tweetInitialText;
-(id)tweetURL;
-(id)valueForProperty:(id)arg0 ;
-(id)videoDetails;
-(id)viewReviewsURL;
-(void)_finishTellAFriendLoadWithError:(id)arg0 ;
-(void)dealloc;
-(void)loadTellAFriendMessageWithCompletionHandler:(id)arg0 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)requestDidFinish:(id)arg0 ;
-(void)urlConnectionRequest:(id)arg0 didReceiveResponse:(id)arg1 ;


@end


#endif