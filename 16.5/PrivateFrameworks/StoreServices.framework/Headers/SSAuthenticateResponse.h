// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSAUTHENTICATERESPONSE_H
#define SSAUTHENTICATERESPONSE_H

@class NSString, NSError, NSDictionary;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>

#import "SSAccount.h"

@interface SSAuthenticateResponse : NSObject <SSXPCCoding>



@property (nonatomic) NSInteger authenticateResponseType; // ivar: _authenticateResponseType
@property (retain, nonatomic) SSAccount *authenticatedAccount; // ivar: _authenticatedAccount
@property (nonatomic) NSUInteger credentialSource; // ivar: _credentialSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif