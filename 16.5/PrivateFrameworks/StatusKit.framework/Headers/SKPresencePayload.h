// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPRESENCEPAYLOAD_H
#define SKPRESENCEPAYLOAD_H

@class NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKPresencePayload : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *cachedPayloadDictionary; // ivar: _cachedPayloadDictionary
@property (readonly, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (readonly, nonatomic) NSDictionary *payloadDictionary;


+(BOOL)supportsSecureCoding;
+(id)logger;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif