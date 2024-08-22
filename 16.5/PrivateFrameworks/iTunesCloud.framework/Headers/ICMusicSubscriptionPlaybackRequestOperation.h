// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICSUBSCRIPTIONPLAYBACKREQUESTOPERATION_H
#define ICMUSICSUBSCRIPTIONPLAYBACKREQUESTOPERATION_H

@class NSString;
@protocol OS_dispatch_queue;


#import "ICAsyncOperation.h"
#import "ICStoreURLRequest.h"
#import "ICStoreRequestContext.h"

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
}


@property (copy, nonatomic) NSString *assetSourceStorefrontID; // ivar: _assetSourceStorefrontID
@property (copy, nonatomic) NSString *cloudUniversalLibraryID; // ivar: _cloudUniversalLibraryID
@property (nonatomic, getter=isDelegatedPlayback) BOOL delegatedPlayback; // ivar: _delegatedPlayback
@property (nonatomic, getter=isFollowUp) BOOL followUp; // ivar: _followUp
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) NSUInteger storeCloudID; // ivar: _storeCloudID
@property (nonatomic) NSInteger storePurchasedAdamID; // ivar: _storePurchasedAdamID
@property (nonatomic) NSInteger storeSubscriptionAdamID; // ivar: _storeSubscriptionAdamID
@property (copy, nonatomic) id *willBeginExecutionHandler; // ivar: _willBeginExecutionHandler


-(id)init;
-(void)cancel;
-(void)start;


@end


#endif