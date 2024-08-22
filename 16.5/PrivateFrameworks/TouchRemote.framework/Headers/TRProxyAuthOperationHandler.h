// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRPROXYAUTHOPERATIONHANDLER_H
#define TRPROXYAUTHOPERATIONHANDLER_H

@class NSString;
@protocol TROperationHandler;

#import <Foundation/Foundation.h>


@interface TRProxyAuthOperationHandler : NSObject <TROperationHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *proxyAuthHandler; // ivar: _proxyAuthHandler
@property (copy, nonatomic) id *proxyAuthHandlerWithError; // ivar: _proxyAuthHandlerWithError
@property (readonly) Class superclass;


-(id)initWithProxyAuthHandler:(id)arg0 ;
-(id)initWithProxyAuthHandlerWithError:(id)arg0 ;
-(void)_handleProxyAuthenticationRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_handleProxyDeviceRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif