// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLNETWORKMETRICS_H
#define RWIPROTOCOLNETWORKMETRICS_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolNetworkHeaders.h"
#import "RWIProtocolSecurityConnection.h"

@interface RWIProtocolNetworkMetrics : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *connectionIdentifier;
@property (nonatomic) BOOL isProxyConnection;
@property (nonatomic) NSInteger priority;
@property (copy, nonatomic) NSString *protocol;
@property (copy, nonatomic) NSString *remoteAddress;
@property (nonatomic) CGFloat requestBodyBytesSent;
@property (nonatomic) CGFloat requestHeaderBytesSent;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property (nonatomic) CGFloat responseBodyBytesReceived;
@property (nonatomic) CGFloat responseBodyDecodedSize;
@property (nonatomic) CGFloat responseHeaderBytesReceived;
@property (retain, nonatomic) RWIProtocolSecurityConnection *securityConnection;




@end


#endif