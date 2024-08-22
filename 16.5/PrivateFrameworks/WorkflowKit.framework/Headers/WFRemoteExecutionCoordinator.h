// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONCOORDINATOR_H
#define WFREMOTEEXECUTIONCOORDINATOR_H

@class NSMutableArray, NSMapTable, NSString, IDSService;
@protocol WFRemoteExecutionSessionDelegate, IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFRemoteExecutionCoordinator : NSObject <WFRemoteExecutionSessionDelegate, IDSServiceDelegate>



@property (retain, nonatomic) NSMutableArray *activeSessions; // ivar: _activeSessions
@property (readonly, nonatomic) BOOL allowRunRequests; // ivar: _allowRunRequests
@property (retain, nonatomic) NSMapTable *completionsForSessions; // ivar: _completionsForSessions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *pairedDeviceModelIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;


+(id)sharedCoordinator;
-(BOOL)hasPairedDevice;
-(BOOL)messageCameFromPairedDevice:(id)arg0 ;
-(BOOL)sendStopRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldDropMessageDueToStaleness:(id)arg0 ;
-(id)defaultIDSOptions;
-(id)initAndAllowRunRequests:(BOOL)arg0 ;
-(id)pairedDevice;
-(id)sessionFromRequestIdentifier:(id)arg0 ;
-(id)sessionsOfClass:(Class)arg0 ;
-(id)unknownRequestError;
-(id)unknownRequestMessageWithIdentifier:(id)arg0 ;
-(void)cancelAllSessions;
-(void)cancelPendingFileTransfers;
-(void)cancelRequest:(id)arg0 ;
-(void)cancelSessions:(id)arg0 ;
-(void)finishSessionWithRequest:(id)arg0 ;
-(void)handleAceCommandResponse:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleAlertRequest:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleAlertRequestResponse:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleAskWhenRunRequest:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleAskWhenRunRequestResponse:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleDialogRequest:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleDialogRequestResponse:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleIncomingAceCommand:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleRunRequest:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleRunRequestResponse:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleStopRequest:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handleUnknownRequestMessage:(id)arg0 ;
-(void)mapSelectorsForIncomingProtobuf;
-(void)sendAceCommandDictionary:(id)arg0 completion:(id)arg1 ;
-(void)sendAlertRequest:(id)arg0 completion:(id)arg1 ;
-(void)sendAskWhenRunRequest:(id)arg0 completion:(id)arg1 ;
-(void)sendDialogRequest:(id)arg0 completion:(id)arg1 ;
-(void)sendFileAtURL:(id)arg0 transferIdentifier:(id)arg1 requestIdentifier:(id)arg2 error:(*id)arg3 ;
-(void)sendRunRequest:(id)arg0 userInterface:(id)arg1 parameterInputProvider:(id)arg2 completionHandler:(id)arg3 ;
-(void)sendRunRequestResponse:(id)arg0 completion:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)sessionDidFinish:(id)arg0 ;


@end


#endif