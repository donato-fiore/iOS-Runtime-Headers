// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYIDSREGISTRATIONDATA_H
#define TRANSPARENCYIDSREGISTRATIONDATA_H

@class NSString, NSDate, NSError, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TransparencyIDSRegistrationData : NSObject <NSSecureCoding>



@property (retain) NSString *application; // ivar: _application
@property (retain) NSDate *createdAt; // ivar: _createdAt
@property (retain) NSError *error; // ivar: _error
@property (retain) NSDate *nextRetryAt; // ivar: _nextRetryAt
@property (retain) NSDate *orderedTimestamp; // ivar: _orderedTimestamp
@property (retain) NSData *publicKey; // ivar: _publicKey
@property (retain) NSData *pushToken; // ivar: _pushToken
@property (retain) NSData *signature; // ivar: _signature
@property (retain) NSDate *signedAt; // ivar: _signedAt
@property (retain) NSString *state; // ivar: _state
@property (retain) NSData *tbsKTIDSRegistrationData; // ivar: _tbsKTIDSRegistrationData


+(BOOL)supportsSecureCoding;
-(id)initWithApplication:(id)arg0 registrationData:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif