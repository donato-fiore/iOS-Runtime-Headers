// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPRESENTDEVICE_H
#define SKPRESENTDEVICE_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKHandle.h"
#import "SKPresencePayload.h"

@interface SKPresentDevice : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *assertionTime; // ivar: _assertionTime
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSString *deviceTokenURI; // ivar: _deviceTokenURI
@property (readonly, nonatomic) SKHandle *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL isSelfDevice; // ivar: _isSelfDevice
@property (readonly, nonatomic) BOOL isSelfHandle; // ivar: _isSelfHandle
@property (readonly, nonatomic) SKPresencePayload *presencePayload; // ivar: _presencePayload


+(BOOL)supportsSecureCoding;
+(id)logger;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 deviceIdentifier:(id)arg1 deviceTokenURI:(id)arg2 payload:(id)arg3 assertionTime:(id)arg4 selfHandle:(BOOL)arg5 selfDevice:(BOOL)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif