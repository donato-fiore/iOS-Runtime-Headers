// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSTATUSPUBLISHREQUEST_H
#define SKSTATUSPUBLISHREQUEST_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKStatusPayload.h"

@interface SKStatusPublishRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (nonatomic) BOOL isScheduledRequest; // ivar: _isScheduledRequest
@property (nonatomic) BOOL isSecondaryDeviceRepublish; // ivar: _isSecondaryDeviceRepublish
@property (readonly, copy, nonatomic) SKStatusPayload *statusPayload; // ivar: _statusPayload
@property (retain, nonatomic) NSString *statusUniqueIdentifier; // ivar: _statusUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatusPayload:(id)arg0 ;
-(id)initWithStatusPayload:(id)arg0 isScheduledRequest:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif