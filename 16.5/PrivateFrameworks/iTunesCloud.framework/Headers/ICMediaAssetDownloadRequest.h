// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMEDIAASSETDOWNLOADREQUEST_H
#define ICMEDIAASSETDOWNLOADREQUEST_H

@class NSMutableDictionary, NSError, NSString, NSURL, NSNumber, NSData;
@protocol ICContentKeySessionDelegateProtocol;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICStoreMediaResponseItem.h"
#import "ICURLSession.h"
#import "ICURLRequest.h"
#import "ICURLResponse.h"
#import "ICContentKeySession.h"

@interface ICMediaAssetDownloadRequest : ICRequestOperation <ICContentKeySessionDelegateProtocol>

 {
    ICStoreRequestContext *_requestContext;
    ICStoreMediaResponseItem *_storeMediaResponseItem;
    NSMutableDictionary *_additionalHTTPHeaderFields;
    ICURLSession *_downloadSession;
    ICURLRequest *_request;
    ICURLResponse *_response;
    ICContentKeySession *_contentKeySession;
    NSError *_keyDeliveryError;
}


@property (nonatomic) BOOL allowDownloadOnConstrainedNetworks; // ivar: _allowDownloadOnConstrainedNetworks
@property (nonatomic) BOOL allowsCellularData; // ivar: _allowsCellularData
@property (nonatomic) BOOL allowsCellularFallback; // ivar: _allowsCellularFallback
@property (nonatomic) BOOL allowsProxyCellularData; // ivar: _allowsProxyCellularData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (nonatomic, getter=isDiscretionary) BOOL discretionary; // ivar: _discretionary
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *maximumSampleRate; // ivar: _maximumSampleRate
@property (copy, nonatomic) NSNumber *minimumBitrate; // ivar: _minimumBitrate
@property (nonatomic) BOOL prefersHLSAsset; // ivar: _prefersHLSAsset
@property (nonatomic) BOOL prefersLossless; // ivar: _prefersLossless
@property (nonatomic) BOOL prefersMultichannel; // ivar: _prefersMultichannel
@property (nonatomic) BOOL requiresPower; // ivar: _requiresPower
@property (copy, nonatomic) NSData *resumeData; // ivar: _resumeData
@property (readonly) Class superclass;


-(id)_createAVAssetDownloadOptionsDictionary;
-(id)_mediaKindFromResponseItemMetadata:(id)arg0 ;
-(id)_sessionIdentifier;
-(id)initWithRequestContext:(id)arg0 storeMediaResponseItem:(id)arg1 resumeData:(id)arg2 ;
-(void)cancel;
-(void)contentKeySession:(id)arg0 didFinishProcessingKey:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)execute;
-(void)finishWithError:(id)arg0 ;
-(void)performRequestWithResponseHandler:(id)arg0 ;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;


@end


#endif