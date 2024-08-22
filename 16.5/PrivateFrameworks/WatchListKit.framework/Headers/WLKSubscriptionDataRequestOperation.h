// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKSUBSCRIPTIONDATAREQUESTOPERATION_H
#define WLKSUBSCRIPTIONDATAREQUESTOPERATION_H

@class NSDictionary;


#import "WLKNetworkRequestOperation.h"

@interface WLKSubscriptionDataRequestOperation : WLKNetworkRequestOperation

@property (readonly, nonatomic) NSDictionary *response; // ivar: _response


+(id)_requestURL:(*id)arg0 ;
-(id)init;
-(void)prepareURLRequest:(id)arg0 ;
-(void)processResponse;


@end


#endif