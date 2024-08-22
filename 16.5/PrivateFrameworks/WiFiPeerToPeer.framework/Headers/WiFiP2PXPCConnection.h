// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIP2PXPCCONNECTION_H
#define WIFIP2PXPCCONNECTION_H

@class NSXPCConnection, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, WiFiP2PXPCConnectionDelegate;

#import <Foundation/Foundation.h>


@interface WiFiP2PXPCConnection : NSObject {
    NSUInteger _endpointType;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _retryTimeout;
    NSXPCConnection *_connection;
    id *_remoteObject;
    int _notifyToken;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSMutableArray *_queuedRequests;
}


@property (weak) NSObject<WiFiP2PXPCConnectionDelegate> *delegate; // ivar: _delegate


+(BOOL)directRequestOnEndpointType:(NSUInteger)arg0 error:(*id)arg1 requesting:(id)arg2 ;
+(BOOL)supportsWiFiP2P;
+(NSInteger)defaultRetryTimeout;
+(char *)wifiPeerToPeerAvailableNotification;
+(id)convertError:(NSInteger)arg0 ;
+(id)directQueryOnEndpointType:(NSUInteger)arg0 error:(*id)arg1 querying:(id)arg2 ;
+(id)directQueryOnEndpointType:(NSUInteger)arg0 exportedObject:(id)arg1 withExportedInterface:(id)arg2 error:(*id)arg3 querying:(id)arg4 ;
+(id)endpointForEndpointType:(NSUInteger)arg0 ;
+(id)frameworkBundle;
+(id)localization;
+(id)wifiPeerToPeerWorkloop;
-(id)initWithEndpointType:(NSUInteger)arg0 queue:(id)arg1 retryTimeout:(NSInteger)arg2 ;
-(void)attemptConnection;
-(void)cleanUpRemovingNotifyToken:(BOOL)arg0 ;
-(void)dealloc;
-(void)handleConnectionInvalidated;
-(void)handleError:(NSInteger)arg0 ;
-(void)invalidate;
-(void)reconnectOnAvailableNotification;
-(void)start;
-(void)stop;
-(void)withRemoteObjectProxy:(id)arg0 ;
// -(void)withRemoteObjectProxy:(id)arg0 clientCompletionHandler:(unk)arg1  ;
// -(void)withRemoteObjectProxy:(id)arg0 clientErrorHandler:(unk)arg1  ;


@end


#endif