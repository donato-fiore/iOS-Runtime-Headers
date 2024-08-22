// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILOGINCREDENTIAL_H
#define TILOGINCREDENTIAL_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TILoginCredential : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSString *site; // ivar: _site
@property (readonly, nonatomic) NSString *username; // ivar: _username


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUsername:(id)arg0 password:(id)arg1 site:(id)arg2 ;


@end


#endif