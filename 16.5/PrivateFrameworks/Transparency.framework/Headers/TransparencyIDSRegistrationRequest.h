// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYIDSREGISTRATIONREQUEST_H
#define TRANSPARENCYIDSREGISTRATIONREQUEST_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TransparencyIDSRegistrationRequest : NSObject <NSSecureCoding>



@property BOOL dontWaitForKeySigning; // ivar: _dontWaitForKeySigning
@property CGFloat initialTimeout; // ivar: _initialTimeout
@property (retain) NSDictionary *requests; // ivar: _requests


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignatureRequests:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif