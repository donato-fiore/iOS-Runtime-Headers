// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPUSHNOTIFICATIONSENABLETYPESREQUEST_H
#define ICPUSHNOTIFICATIONSENABLETYPESREQUEST_H

@class NSString, NSDictionary;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICPushNotificationsResponse.h"

@interface ICPushNotificationsEnableTypesRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_notificationType;
    NSDictionary *_notificationParams;
    ICPushNotificationsResponse *_response;
}




-(id)initWithRequestContext:(id)arg0 notificationType:(id)arg1 notificationParameters:(id)arg2 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif