// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPPEERTRACKINGREQUEST_H
#define WPPEERTRACKINGREQUEST_H

@class NSDictionary, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WPPeerTrackingRequest : NSObject <NSSecureCoding>



@property unsigned char clientType; // ivar: _clientType
@property (retain) NSDictionary *peerTrackingDictionary; // ivar: _peerTrackingDictionary
@property (retain) NSUUID *peerUUID; // ivar: _peerUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif