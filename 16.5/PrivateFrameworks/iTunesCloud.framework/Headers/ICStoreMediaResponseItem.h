// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSTOREMEDIARESPONSEITEM_H
#define ICSTOREMEDIARESPONSEITEM_H

@class NSDictionary, NSURL, NSDate, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICURLBag.h"
#import "ICStoreHLSAssetInfo.h"
#import "ICStoreFinanceItemMetadata.h"

@interface ICStoreMediaResponseItem : NSObject <NSCopying>

 {
    NSDictionary *_itemResponseDictionary;
    ICURLBag *_urlBag;
}


@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSDate *assetExpirationDate; // ivar: _assetExpirationDate
@property (readonly, copy, nonatomic) NSURL *cancelDownloadURL;
@property (readonly, copy, nonatomic) NSString *downloadIdentifier;
@property (readonly, copy, nonatomic) NSArray *fileAssets;
@property (readonly, copy, nonatomic) ICStoreHLSAssetInfo *hlsAsset;
@property (readonly, nonatomic) BOOL isPurchasedRedownload;
@property (readonly, copy, nonatomic) ICStoreFinanceItemMetadata *metadata;
@property (readonly, copy, nonatomic) NSDate *purchaseDate;
@property (readonly, copy, nonatomic) NSString *redownloadParameters;
@property (readonly, nonatomic) NSInteger storeAdamID;
@property (readonly, nonatomic) id *suzeLeaseID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)downloadableAsset;
-(id)downloadableAssetMatchingFlavorType:(NSInteger)arg0 ;
-(id)initWithItemResponseDictionary:(id)arg0 urlBag:(id)arg1 ;


@end


#endif