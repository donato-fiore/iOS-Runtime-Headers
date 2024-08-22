// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVSERVERAUTHENTICATERESPONSE_H
#define SSVSERVERAUTHENTICATERESPONSE_H

@class NSNumber, NSString, NSURL;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding>



@property (copy, nonatomic) NSNumber *authenticatedAccountIdentifier; // ivar: _authenticatedAccountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger performedButtonIndex; // ivar: _performedButtonIndex
@property (copy, nonatomic) NSURL *redirectURL; // ivar: _redirectURL
@property (nonatomic) NSInteger selectedButtonIndex; // ivar: _selectedButtonIndex
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif