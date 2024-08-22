// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLIBRARYAUTHSERVICEBULKCLIENTTOKENREQUEST_H
#define ICLIBRARYAUTHSERVICEBULKCLIENTTOKENREQUEST_H

@class NSSet;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICLibraryAuthServiceBulkClientTokenResponse.h"

@interface ICLibraryAuthServiceBulkClientTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceBulkClientTokenResponse *_response;
    NSSet *_accountDSIDs;
}




-(id)initWithStoreRequestContext:(id)arg0 accountDSIDs:(id)arg1 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif