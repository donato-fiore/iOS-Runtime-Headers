// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCSCALLCENTER_H
#define TCSCALLCENTER_H

@class NSXPCConnection, NSString;
@protocol TCSClientXPC, TCSCallCenterDelegate;

#import <Foundation/Foundation.h>

#import "TCSCall.h"

@interface TCSCallCenter : NSObject <TCSClientXPC>

 {
    NSXPCConnection *_connection;
    TCSCall *_call;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TCSCallCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasValidConnection;
-(id)_callPassingPredicate:(id)arg0 ;
-(id)activeCall;
-(id)currentCall;
-(id)endingCall;
-(id)init;
-(id)ringingCall;
-(void)applicationWillEnterForeground;
-(void)callConnected:(id)arg0 ;
-(void)callStatusChanged:(id)arg0 ;
-(void)disconnectCall:(id)arg0 ;
-(void)invalidate;
-(void)logEntryForCallWithUniqueProxyIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)queryIsTinCannable:(id)arg0 ;
-(void)remoteUplinkMuteChanged:(id)arg0 ;
-(void)sessionViewControllerViewDidAppear;
-(void)setUplinkMuted:(BOOL)arg0 for:(id)arg1 completion:(id)arg2 ;
-(void)synchronouslyFetchCall;


@end


#endif