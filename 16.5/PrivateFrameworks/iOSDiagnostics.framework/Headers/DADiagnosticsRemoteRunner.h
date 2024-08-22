// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADIAGNOSTICSREMOTERUNNER_H
#define DADIAGNOSTICSREMOTERUNNER_H

@class NSString, NSXPCConnection;
@protocol DARemoteRunnerServerProtocol, DARemoteRunnerClientProtocol, DADiagnosticsRemoteRunnerDelegate;

#import <Foundation/Foundation.h>


@interface DADiagnosticsRemoteRunner : NSObject <DARemoteRunnerServerProtocol, DARemoteRunnerClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<DADiagnosticsRemoteRunnerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<DARemoteRunnerServerProtocol> *remoteRunnerServer; // ivar: _remoteRunnerServer
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)_establishConnection;
-(id)initWithDelegate:(id)arg0 ;
-(void)cancelTestWithID:(id)arg0 completion:(id)arg1 ;
-(void)createRemoteRunnerDeviceWithSerialNumber:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)destroyRemoteRunnerDeviceWithCompletion:(id)arg0 ;
-(void)remoteRunnerDeviceEnded;
-(void)requestAsset:(id)arg0 completion:(id)arg1 ;
-(void)requestUploadAssets:(id)arg0 completion:(id)arg1 ;
-(void)runTestWithID:(id)arg0 name:(id)arg1 description:(id)arg2 parameters:(id)arg3 completion:(id)arg4 ;


@end


#endif