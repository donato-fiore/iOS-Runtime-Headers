// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVSERVERAUTHENTICATEREQUEST_H
#define SSVSERVERAUTHENTICATEREQUEST_H

@class NSString;
@protocol SSXPCCoding, OS_xpc_object;


#import "SSRequest.h"
#import "SSAuthenticationContext.h"

@interface SSVServerAuthenticateRequest : SSRequest <SSXPCCoding>



@property (copy, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedDialog; // ivar: _dialog
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithEncodedDialog:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithAuthenticateResponse:(id)arg0 ;


@end


#endif