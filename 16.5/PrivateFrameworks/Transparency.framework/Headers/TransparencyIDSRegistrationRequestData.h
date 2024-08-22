// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYIDSREGISTRATIONREQUESTDATA_H
#define TRANSPARENCYIDSREGISTRATIONREQUESTDATA_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TransparencyIDSRegistrationRequestData : NSObject <NSSecureCoding>



@property (retain) NSString *application; // ivar: _application
@property (retain) NSData *pushToken; // ivar: _pushToken
@property (retain) NSData *tbsKTIDSRegistrationData; // ivar: _tbsKTIDSRegistrationData


+(BOOL)supportsSecureCoding;
-(id)initWithApplication:(id)arg0 registrationData:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif