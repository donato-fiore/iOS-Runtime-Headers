// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRDEVICESETUPSERVER_H
#define TRDEVICESETUPSERVER_H

@class NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol TRTransferServerDelegate, OS_dispatch_semaphore, TRDeviceSetupServerDelegate;

#import <Foundation/Foundation.h>

#import "TRTransferServer.h"

@interface TRDeviceSetupServer : NSObject <TRTransferServerDelegate>

 {
    TRTransferServer *_transferServer;
    NSData *_dataToSend;
    NSObject<OS_dispatch_semaphore> *_dataToSendSemaphore;
    BOOL _cancelledSetupInProgress;
    int _notifyToken;
    BOOL _notifyTokenIsValid;
    BOOL _setupInProgress;
    BOOL _started;
}


@property (retain, nonatomic) NSMutableArray *accountsToAuthenticate; // ivar: _accountsToAuthenticate
@property (retain, nonatomic) NSMutableDictionary *cachedAuthInfo; // ivar: _cachedAuthInfo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TRDeviceSetupServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
// -(BOOL)_sendAction:(id)arg0 sendDataHandler:(id)arg1 shouldSendNilOnFailure:(unk)arg2 error:(BOOL)arg3  ;
-(id)init;
-(void)_authenticateAccount:(NSUInteger)arg0 withAuthInfo:(id)arg1 completion:(id)arg2 ;
-(void)_authenticateWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_cancelTransferConnection;
-(void)_cancelWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_connectWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_finishSetupWithError:(id)arg0 replyHandler:(id)arg1 ;
-(void)_finishWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_requestAuthenticationForAccount:(NSUInteger)arg0 replyHandler:(id)arg1 ;
-(void)_requestAuthenticationForNextAccountWithReplyHandler:(id)arg0 ;
-(void)_requestAuthenticationFromPeripheralForAccount:(NSUInteger)arg0 lastAttemptAction:(id)arg1 lastAttemptError:(id)arg2 replyHandler:(id)arg3 ;
-(void)_requestGeneralSetupWithReplyHandler:(id)arg0 ;
-(void)_setUpWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)cancelActiveSetup;
-(void)dealloc;
-(void)server:(id)arg0 didFailToReceiveData:(id)arg1 ;
-(void)server:(id)arg0 didReceiveData:(id)arg1 replyHandler:(id)arg2 ;
-(void)serverWillReceiveData:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif