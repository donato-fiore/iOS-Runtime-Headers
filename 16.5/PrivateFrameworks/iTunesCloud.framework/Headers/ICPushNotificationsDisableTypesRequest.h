// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPUSHNOTIFICATIONSDISABLETYPESREQUEST_H
#define ICPUSHNOTIFICATIONSDISABLETYPESREQUEST_H

@class NSString;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICPushNotificationsResponse.h"

@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_notificationType;
    ICPushNotificationsResponse *_response;
}




-(id)initWithRequestContext:(id)arg0 notificationType:(id)arg1 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif