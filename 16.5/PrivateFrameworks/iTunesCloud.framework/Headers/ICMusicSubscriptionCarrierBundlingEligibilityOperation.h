// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICSUBSCRIPTIONCARRIERBUNDLINGELIGIBILITYOPERATION_H
#define ICMUSICSUBSCRIPTIONCARRIERBUNDLINGELIGIBILITYOPERATION_H

@class NSString;


#import "ICAsyncOperation.h"
#import "ICStoreRequestContext.h"

@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation : ICAsyncOperation {
    NSString *_cellularProviderName;
    NSString *_mobileSubscriberCountryCode;
    NSString *_mobileSubscriberNetworkCode;
    NSString *_phoneNumber;
    NSString *_IMEI;
}


@property (nonatomic, getter=isDeepLink) BOOL deepLink; // ivar: _deepLink
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)_newDefaultRequestBodyDictionary;
-(id)_newDefaultRequestBodyDictionaryWithResponseCode:(NSInteger)arg0 error:(id)arg1 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)_finishEnrichmentWithBodyDictionary:(id)arg0 completionHandler:(id)arg1 ;
-(void)_sendEnrichmentRequestWithURL:(id)arg0 preflightResponse:(id)arg1 completionHandler:(id)arg2 ;
-(void)_sendPreflightRequestWithCompletionHandler:(id)arg0 ;
-(void)_sendSilentSMSRequestWithMessage:(id)arg0 number:(id)arg1 preflightResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)execute;


@end


#endif