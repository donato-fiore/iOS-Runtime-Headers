// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYIDSREGISTRATIONRESPONSE_H
#define TRANSPARENCYIDSREGISTRATIONRESPONSE_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TransparencyIDSRegistrationResponse : NSObject <NSSecureCoding>



@property (retain) NSDictionary *registrationData; // ivar: _registrationData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif