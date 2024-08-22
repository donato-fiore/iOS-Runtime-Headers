// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDELEGATIONPLAYINFOREQUEST_H
#define ICDELEGATIONPLAYINFOREQUEST_H

@class NSData, NSString, NSMutableDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICDelegationPlayInfoRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSData *playerAnisetteMID; // ivar: _playerAnisetteMID
@property (copy, nonatomic) NSString *playerDeviceGUID; // ivar: _playerDeviceGUID
@property (copy, nonatomic) NSString *playerUserAgent; // ivar: _playerUserAgent
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;
@property (copy, nonatomic) NSArray *tokenRequests; // ivar: _tokenRequests


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif