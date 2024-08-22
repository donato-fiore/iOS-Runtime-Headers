// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONUNRELIABLEMESSENGERCONFIG_H
#define TUCONVERSATIONUNRELIABLEMESSENGERCONFIG_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationUnreliableMessengerConfig : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger channelStreamMaxQueueSize; // ivar: _channelStreamMaxQueueSize
@property (readonly, nonatomic) NSUInteger channelStreamMaxTries; // ivar: _channelStreamMaxTries
@property (readonly, nonatomic) NSUInteger channelStreamRetryIntervalMillis; // ivar: _channelStreamRetryIntervalMillis
@property (readonly, nonatomic) NSUInteger egressMessagePayloadMaxSizeBytes; // ivar: _egressMessagePayloadMaxSizeBytes
@property (readonly, nonatomic) NSUInteger establishChannelMaxAttempts; // ivar: _establishChannelMaxAttempts
@property (readonly, nonatomic) NSUInteger establishChannelRetryIntervalMillis; // ivar: _establishChannelRetryIntervalMillis
@property (copy, nonatomic) NSData *idsAliasingSalt; // ivar: _idsAliasingSalt


+(BOOL)supportsSecureCoding;
+(id)shared;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationUnreliableMessengerConfig:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEstablishChannelMaxAttempts:(NSUInteger)arg0 establishChannelRetryIntervalMillis:(NSUInteger)arg1 egressMessagePayloadMaxSizeBytes:(NSUInteger)arg2 channelStreamMaxQueueSize:(NSUInteger)arg3 channelStreamMaxTries:(NSUInteger)arg4 channelStreamRetryIntervalMillis:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif