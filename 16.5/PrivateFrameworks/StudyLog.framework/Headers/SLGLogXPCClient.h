// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLGLOGXPCCLIENT_H
#define SLGLOGXPCCLIENT_H

@class NSXPCConnection, NSString;
@protocol SLGLogClientProtocol, SLGLogClient, OS_dispatch_queue, SLGLogClientProtocolDelegate;

#import <Foundation/Foundation.h>


@interface SLGLogXPCClient : NSObject <SLGLogClientProtocol, SLGLogClient>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SLGLogClientProtocolDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_connectWithCompletion:(id)arg0 ;
-(void)_handshake;
-(void)dealloc;
-(void)didReceiveInitialLogMessageFromDomain:(id)arg0 ;
// -(void)queryServer:(id)arg0 errorHandler:(unk)arg1  ;
-(void)serverDidReset;


@end


#endif