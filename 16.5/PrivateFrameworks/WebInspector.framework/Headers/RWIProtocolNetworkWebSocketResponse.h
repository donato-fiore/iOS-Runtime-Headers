// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLNETWORKWEBSOCKETRESPONSE_H
#define RWIPROTOCOLNETWORKWEBSOCKETRESPONSE_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolNetworkHeaders.h"

@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *statusText;


-(id)initWithStatus:(int)arg0 statusText:(id)arg1 headers:(id)arg2 ;


@end


#endif