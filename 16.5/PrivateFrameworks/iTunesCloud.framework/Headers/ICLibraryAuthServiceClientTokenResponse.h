// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLIBRARYAUTHSERVICECLIENTTOKENRESPONSE_H
#define ICLIBRARYAUTHSERVICECLIENTTOKENRESPONSE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICLibraryAuthServiceClientTokenResult.h"

@interface ICLibraryAuthServiceClientTokenResponse : NSObject <NSCopying>



@property (readonly, nonatomic) int resultCode; // ivar: _resultCode
@property (readonly, copy, nonatomic) NSString *serverHostName; // ivar: _serverHostName
@property (readonly, nonatomic) NSInteger serverInstance; // ivar: _serverInstance
@property (nonatomic, getter=isSuccess) BOOL success; // ivar: _success
@property (readonly, copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult; // ivar: _tokenResult


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithResponseDictionary:(id)arg0 ;
-(id)initWithResultCode:(int)arg0 ;


@end


#endif