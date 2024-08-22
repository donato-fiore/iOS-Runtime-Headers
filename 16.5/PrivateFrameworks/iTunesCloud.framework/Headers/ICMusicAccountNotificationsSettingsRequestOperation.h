// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICACCOUNTNOTIFICATIONSSETTINGSREQUESTOPERATION_H
#define ICMUSICACCOUNTNOTIFICATIONSSETTINGSREQUESTOPERATION_H

@class NSDictionary;
@protocol OS_dispatch_queue;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICStoreURLRequest.h"
#import "ICMusicAccountNotificationsSettingsResponse.h"

@interface ICMusicAccountNotificationsSettingsRequestOperation : ICRequestOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    ICMusicAccountNotificationsSettingsResponse *_response;
    NSInteger _requestMethod;
    NSDictionary *_bodyDictionary;
}




-(id)initWithRequestContext:(id)arg0 withRequestMethod:(NSInteger)arg1 ;
-(id)initWithRequestContext:(id)arg0 withRequestMethod:(NSInteger)arg1 andBodyDictionary:(id)arg2 ;
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif