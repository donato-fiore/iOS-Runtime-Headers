// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSDOWNLOADHANDLER_H
#define SSDOWNLOADHANDLER_H

@class NSArray;
@protocol SSDownloadHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSDownloadHandler : NSObject {
    SSXPCConnection *_controlConnection;
    id<SSDownloadHandlerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_downloadPhasesToIgnore;
    NSInteger _handlerID;
    SSXPCConnection *_observerConnection;
    BOOL _sessionsNeedPowerAssertion;
    BOOL _sessionsShouldBlockOtherDownloads;
}


@property NSObject<SSDownloadHandlerDelegate> *delegate;
@property (copy) NSArray *downloadPhasesToIgnore;
@property (readonly) NSInteger handlerIdentifier;
@property BOOL sessionsNeedPowerAssertion;
@property BOOL sessionsShouldBlockOtherDownloads;


-(BOOL)_sendAuthenticationSessionWithMessage:(id)arg0 ;
-(BOOL)_sendSessionCancelWithMessage:(id)arg0 ;
-(BOOL)_sendSessionHandleWithMessage:(id)arg0 ;
-(BOOL)_sendSessionPauseWithMessage:(id)arg0 ;
-(id)_controlConnection;
-(id)_newSessionWithMessage:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_connectToDaemon;
-(void)_handleMessage:(id)arg0 fromServerConnection:(id)arg1 ;
-(void)_sendDisconnectMessage;
-(void)_setValue:(id)arg0 forProperty:(char *)arg1 ;
-(void)dealloc;
-(void)resetDisavowedSessions;


@end


#endif