// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICRADIOSTATIONMETADATA_H
#define ICRADIOSTATIONMETADATA_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "ICStoreArtworkInfo.h"
#import "ICRadioStationProviderResource.h"

@interface ICRadioStationMetadata : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, nonatomic) BOOL allowsItemLiking;
@property (readonly, nonatomic) BOOL allowsSharing;
@property (readonly, copy, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (readonly, copy, nonatomic) NSString *attributionLabel;
@property (readonly, nonatomic, getter=containsVideo) BOOL containsVideo;
@property (readonly, copy, nonatomic) NSString *coreSeedName;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *playbackAuthorizationToken;
@property (readonly, copy, nonatomic) ICRadioStationProviderResource *providerResource;
@property (readonly, copy, nonatomic) NSString *stationHash;
@property (readonly, nonatomic) NSInteger stationID;
@property (readonly, copy, nonatomic) NSString *stationStringID;
@property (readonly, nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired;
@property (readonly, nonatomic) NSInteger subtype;
@property (readonly, nonatomic) NSInteger type;


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif