// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCONTENTKEYNONCEREQUEST_H
#define ICCONTENTKEYNONCEREQUEST_H

@class NSNumber, NSURL;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICContentKeyNonceResponse.h"

@interface ICContentKeyNonceRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    NSNumber *_adamID;
    NSNumber *_accountDSID;
    NSURL *_keyServerURL;
    ICContentKeyNonceResponse *_response;
}




-(id)initWithStoreRequestContext:(id)arg0 adamID:(id)arg1 accountDSID:(id)arg2 keyServerURL:(id)arg3 ;
-(void)execute;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif