// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSECUREKEYDELIVERYREQUESTOPERATION_H
#define ICSECUREKEYDELIVERYREQUESTOPERATION_H



#import "ICAsyncOperation.h"
#import "ICSecureKeyDeliveryRequest.h"

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation

@property (copy, nonatomic) ICSecureKeyDeliveryRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)arg0 ;
-(id)_createPodcastLicenseProtocolRequestBodyUsingPlaybackContextData:(id)arg0 ;
-(id)_createSimplifiedProtocolRequestBodyUsingPlaybackContextData:(id)arg0 ;
-(void)_createServerPlaybackContextWithCompletion:(id)arg0 ;
-(void)execute;


@end


#endif