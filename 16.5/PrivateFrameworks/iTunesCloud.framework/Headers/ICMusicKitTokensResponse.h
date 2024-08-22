// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICKITTOKENSRESPONSE_H
#define ICMUSICKITTOKENSRESPONSE_H

@class NSString, NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICMusicKitTokensResponse : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *developerToken; // ivar: _developerToken
@property (readonly, copy, nonatomic) NSString *userToken; // ivar: _userToken
@property (readonly, copy, nonatomic) NSError *userTokenFetchingError; // ivar: _userTokenFetchingError


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForDebugging:(BOOL)arg0 ;
-(id)_descriptionOfToken:(id)arg0 forDebugging:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeveloperToken:(id)arg0 userToken:(id)arg1 userTokenFetchingError:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif