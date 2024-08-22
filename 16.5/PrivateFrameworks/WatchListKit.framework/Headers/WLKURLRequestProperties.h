// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKURLREQUESTPROPERTIES_H
#define WLKURLREQUESTPROPERTIES_H

@class NSNumber, NSString, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface WLKURLRequestProperties : NSObject

@property (copy, nonatomic) NSNumber *apiVersion; // ivar: _apiVersion
@property (copy, nonatomic) NSString *caller; // ivar: _caller
@property (copy, nonatomic) NSNumber *clientProtocolVersion; // ivar: _clientProtocolVersion
@property (copy, nonatomic) NSString *endpoint; // ivar: _endpoint
@property (copy, nonatomic) NSDictionary *headers; // ivar: _headers
@property (copy, nonatomic) NSData *httpBody; // ivar: _httpBody
@property (copy, nonatomic) NSString *httpMethod; // ivar: _httpMethod
@property (nonatomic) NSInteger options; // ivar: _options
@property (copy, nonatomic) NSDictionary *queryParameters; // ivar: _queryParameters
@property (copy, nonatomic) NSString *routeName; // ivar: _routeName
@property (copy, nonatomic) NSNumber *timeout; // ivar: _timeout


+(id)requestPropertiesWithEndpoint:(id)arg0 ;
+(id)requestPropertiesWithEndpoint:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 caller:(id)arg3 ;
+(id)requestPropertiesWithEndpoint:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 headers:(id)arg3 caller:(id)arg4 timeout:(id)arg5 apiVersion:(id)arg6 options:(NSInteger)arg7 ;
+(id)requestPropertiesWithEndpoint:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 headers:(id)arg3 caller:(id)arg4 timeout:(id)arg5 options:(NSInteger)arg6 ;
+(id)requestPropertiesWithEndpoint:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 headers:(id)arg3 caller:(id)arg4 timeout:(id)arg5 options:(NSInteger)arg6 clientProtocolVersion:(id)arg7 ;
+(id)requestPropertiesWithEndpoint:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 httpBody:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 apiVersion:(id)arg7 options:(NSInteger)arg8 ;
+(id)requestPropertiesWithEndpoint:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 httpBody:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 apiVersion:(id)arg7 options:(NSInteger)arg8 clientProtocolVersion:(id)arg9 ;
+(id)requestPropertiesWithServerRoute:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 headers:(id)arg3 caller:(id)arg4 timeout:(id)arg5 options:(NSInteger)arg6 ;
+(id)requestPropertiesWithServerRoute:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 httpBody:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(NSInteger)arg7 ;
+(id)requestPropertiesWithServerRoute:(id)arg0 queryParameters:(id)arg1 httpMethod:(id)arg2 httpBody:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(NSInteger)arg7 clientProtocolVersion:(id)arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)URLRequestWithConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)shortDescription;


@end


#endif