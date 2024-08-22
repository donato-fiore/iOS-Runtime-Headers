// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICSUBSCRIPTIONLEASEPLAYBACKREQUEST_H
#define ICMUSICSUBSCRIPTIONLEASEPLAYBACKREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICMusicSubscriptionLeasePlaybackRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSString *assetSourceStorefrontID; // ivar: _assetSourceStorefrontID
@property (copy, nonatomic) NSString *cloudUniversalLibraryID; // ivar: _cloudUniversalLibraryID
@property (nonatomic, getter=isFollowUp) BOOL followUp; // ivar: _followUp
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (nonatomic) BOOL shouldPreventLeaseAcquisition; // ivar: _shouldPreventLeaseAcquisition
@property (nonatomic) BOOL shouldRequireLeaseAcquisition; // ivar: _shouldRequireLeaseAcquisition
@property (nonatomic) NSUInteger storeCloudID; // ivar: _storeCloudID
@property (nonatomic) NSInteger storePurchasedAdamID; // ivar: _storePurchasedAdamID
@property (nonatomic) NSInteger storeSubscriptionAdamID; // ivar: _storeSubscriptionAdamID
@property (nonatomic, getter=isTriggeredByLeasePrevention) BOOL triggeredByLeasePrevention; // ivar: _triggeredByLeasePrevention


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;


@end


#endif