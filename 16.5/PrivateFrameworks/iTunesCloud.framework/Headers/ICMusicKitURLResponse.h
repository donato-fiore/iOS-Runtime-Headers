// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICKITURLRESPONSE_H
#define ICMUSICKITURLRESPONSE_H

@class NSString, NSError;


#import "ICURLResponse.h"

@interface ICMusicKitURLResponse : ICURLResponse

@property (readonly, copy, nonatomic) NSString *serverCorrelationKey; // ivar: _serverCorrelationKey
@property (readonly, copy, nonatomic) NSString *serverEnvironment; // ivar: _serverEnvironment
@property (readonly, nonatomic) NSError *serverError; // ivar: _serverError


-(id)_parseServerError;
-(id)_parseServerErrorDictionary:(id)arg0 ;
-(id)description;
-(id)initWithURLResponse:(id)arg0 urlRequest:(id)arg1 bodyData:(id)arg2 performanceMetrics:(id)arg3 ;
-(id)initWithURLResponse:(id)arg0 urlRequest:(id)arg1 bodyDataURL:(id)arg2 performanceMetrics:(id)arg3 ;
-(void)_initializeMusicKitURLResponse;


@end


#endif