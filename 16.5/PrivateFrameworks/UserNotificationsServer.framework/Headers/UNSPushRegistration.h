// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSPUSHREGISTRATION_H
#define UNSPUSHREGISTRATION_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UNSPushRegistration : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *environment; // ivar: _environment
@property (readonly, copy, nonatomic) NSData *token; // ivar: _token
@property (readonly, copy, nonatomic) NSString *tokenIdentifier; // ivar: _tokenIdentifier


+(id)pushRegistrationWithEnvironment:(id)arg0 tokenIdentifier:(id)arg1 token:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 tokenIdentifier:(id)arg1 token:(id)arg2 ;


@end


#endif