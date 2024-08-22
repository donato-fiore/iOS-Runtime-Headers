// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSTOREURLRESPONSEHANDLER_H
#define ICSTOREURLRESPONSEHANDLER_H



#import "ICURLResponseHandler.h"

@interface ICStoreURLResponseHandler : ICURLResponseHandler



+(void)_updateDefaultStorefrontIdentifier:(id)arg0 usingIdentityStore:(id)arg1 ;
-(BOOL)_isAuthenticationError:(id)arg0 ;
-(void)_verifyMescalSignatureForResponse:(id)arg0 toRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)processCompletedResponse:(id)arg0 toRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)processInitialResponse:(id)arg0 toRequest:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif