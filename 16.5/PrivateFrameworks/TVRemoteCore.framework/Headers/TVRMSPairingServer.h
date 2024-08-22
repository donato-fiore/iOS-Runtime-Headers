// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMSPAIRINGSERVER_H
#define TVRMSPAIRINGSERVER_H

@class NSString;
@protocol OS_dispatch_queue, TVRMSPairingServerDelegate;

#import <Foundation/Foundation.h>


@interface TVRMSPairingServer : NSObject {
    *__CFDictionary _HTTPServerConnections;
    *_CFHTTPServer _HTTPServer;
    NSObject<OS_dispatch_queue> *_HTTPServerQueue;
    NSString *_expectedPasscodeHash;
    NSString *_successfulPairingGUID;
    NSString *_successfulPairingServiceName;
    NSString *_advertisedDeviceName;
    NSString *_advertisedDeviceModel;
}


@property (weak, nonatomic) NSObject<TVRMSPairingServerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) unsigned short port; // ivar: _port


-(BOOL)startServerWithExpectedPasscodeHash:(id)arg0 advertisedDeviceName:(id)arg1 advertisedDeviceModel:(id)arg2 ;
-(id)_parsedQueryParametersWithQueryString:(id)arg0 ;
-(void)handleHTTPServerConnectionDidFailToReplyToRequest:(struct _CFHTTPServerRequest *)arg0 withResponse:(struct _CFHTTPServerResponse *)arg1 ;
-(void)handleHTTPServerConnectionDidReceiveError:(struct __CFError *)arg0 ;
-(void)handleHTTPServerConnectionDidReceiveRequest:(struct _CFHTTPServerRequest *)arg0 ;
-(void)handleHTTPServerConnectionDidReplyToRequest:(struct _CFHTTPServerRequest *)arg0 withResponse:(struct _CFHTTPServerResponse *)arg1 ;
-(void)handleHTTPServerConnectionInvalidated;
-(void)handleHTTPServerDidCloseConnection:(struct _CFHTTPServerConnection *)arg0 ;
-(void)handleHTTPServerDidOpenConnection:(struct _CFHTTPServerConnection *)arg0 ;
-(void)handleHTTPServerDidReceiveError:(struct __CFError *)arg0 ;
-(void)handleHTTPServerInvalidated;
-(void)stopServer;


@end


#endif