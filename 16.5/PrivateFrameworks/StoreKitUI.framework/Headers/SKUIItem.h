// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIITEM_H
#define SKUIITEM_H

@class NSString, UIImage, NSMutableDictionary, NSArray, NSURL;
@protocol SKUICacheCoding, SSMetricsEventFieldProvider, SKUIArtworkProviding;

#import <Foundation/Foundation.h>

#import "SKUIItemOffer.h"
#import "SKUIStoreIdentifier.h"

@interface SKUIItem : NSObject <SKUICacheCoding, SSMetricsEventFieldProvider>

 {
    NSString *_editorialBage;
    NSString *_feedUrlString;
}


@property (readonly, nonatomic) NSString *_downloadKind;
@property (readonly, nonatomic) _NSRange ageBandRange; // ivar: _ageBandRange
@property (readonly, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) UIImage *artworkImage;
@property (readonly, nonatomic) NSObject<SKUIArtworkProviding> *artworksProvider; // ivar: _artworksProvider
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleID
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, nonatomic) NSString *categoryName; // ivar: _categoryName
@property (readonly, nonatomic) NSArray *childItemIdentifiers;
@property (readonly, nonatomic) NSString *collectionName; // ivar: _collectionName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceFamilies; // ivar: _deviceFamilies
@property (readonly, nonatomic) NSString *editorialBadge; // ivar: _editorialBadge
@property (readonly, nonatomic) BOOL gameControllerSupported; // ivar: _gameControllerSupported
@property (readonly, nonatomic) BOOL hasInAppPurchases; // ivar: _hasInAppPurchases
@property (readonly, nonatomic) BOOL hasMessagesExtension; // ivar: _hasMessagesExtension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHiddenFromSpringBoard; // ivar: _isHiddenFromSpringBoard
@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSInteger itemKind; // ivar: _itemKind
@property (readonly, nonatomic) NSString *itemKindString; // ivar: _itemKindString
@property (readonly, nonatomic) NSURL *largestArtworkURL;
@property (readonly, nonatomic) NSArray *loadedChildItems;
@property (readonly, nonatomic, getter=isNewsstandApp) BOOL newsstandApp; // ivar: _newsstandApp
@property (readonly, nonatomic) NSObject<SKUIArtworkProviding> *newsstandArtworks; // ivar: _newsstandArtworks
@property (readonly, nonatomic) NSInteger newsstandBindingEdge; // ivar: _newsstandBindingEdge
@property (readonly, nonatomic) NSInteger newsstandBindingType; // ivar: _newsstandBindingType
@property (readonly, nonatomic) NSInteger numberOfChildItems; // ivar: _numberOfChildItems
@property (readonly, nonatomic) NSInteger numberOfUserRatings; // ivar: _numberOfUserRatings
@property (readonly, nonatomic) NSInteger parentalControlsRank; // ivar: _parentalControlsRank
@property (readonly, nonatomic, getter=hasPrerenderedArtwork) BOOL prerenderedArtwork; // ivar: _prerenderedArtwork
@property (readonly, nonatomic) SKUIItemOffer *primaryItemOffer; // ivar: _itemOffer
@property (readonly, nonatomic) NSString *productPageURLString; // ivar: _productPageURLString
@property (readonly, nonatomic) NSArray *requiredCapabilities; // ivar: _requiredCapabilities
@property (readonly, nonatomic) BOOL requiresGameController; // ivar: _requiresGameController
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) float userRating; // ivar: _userRating
@property (readonly, nonatomic) NSInteger versionIdentifier; // ivar: _versionIdentifier
@property (readonly, nonatomic) NSString *versionString; // ivar: _versionString
@property (readonly, nonatomic) NSArray *videos; // ivar: _videos


-(BOOL)isEqual:(id)arg0 ;
-(id)artworkURLForSize:(NSInteger)arg0 ;
-(id)childItemForIdentifier:(id)arg0 ;
-(id)initContainerItemWithItem:(id)arg0 ;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithLookupDictionary:(id)arg0 ;
-(id)lookupDictionary;
-(id)valueForMetricsField:(id)arg0 ;
-(void)addItemOfferParameterWithName:(id)arg0 value:(id)arg1 ;


@end


#endif