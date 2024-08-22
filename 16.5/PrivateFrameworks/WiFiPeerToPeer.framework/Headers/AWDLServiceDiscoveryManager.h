// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDLSERVICEDISCOVERYMANAGER_H
#define AWDLSERVICEDISCOVERYMANAGER_H

@class NSLock, NSXPCConnection, NSMutableArray, NSString;
@protocol AWDLServiceDiscoveryManagerXPCDelegate;

#import <Foundation/Foundation.h>

#import "_AWDLServiceDiscoveryManagerExportedObject.h"

@interface AWDLServiceDiscoveryManager : NSObject <AWDLServiceDiscoveryManagerXPCDelegate>

 {
    NSLock *_lock;
    _AWDLServiceDiscoveryManagerExportedObject *_exportedObject;
    NSXPCConnection *_xpcConnection;
    int _notifyToken;
    BOOL _attemptedReconnect;
    NSMutableArray *_activeTrafficRegistrations;
    NSInteger _suspendCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_requiresConnection;
// -(BOOL)_usingAWDLDiscoveryManagerProxy:(id)arg0 onSuccess:(unk)arg1 error:(id)arg2  ;
-(BOOL)clearTrafficRegistration:(id)arg0 error:(*id)arg1 ;
-(BOOL)queryAirPlayConnectivityWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)resumeAWDLWithError:(*id)arg0 ;
-(BOOL)setTrafficRegistration:(id)arg0 error:(*id)arg1 ;
-(BOOL)suspendAWDLWithError:(*id)arg0 ;
-(id)init;
-(void)_destroyConnection;
-(void)_removeFirstTrafficRegistrationMatching:(id)arg0 ;
-(void)_retryConnection;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)invalidatedActiveTrafficRegistration:(id)arg0 ;


@end


#endif