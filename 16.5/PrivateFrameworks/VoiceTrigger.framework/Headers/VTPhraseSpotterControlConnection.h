// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTPHRASESPOTTERCONTROLCONNECTION_H
#define VTPHRASESPOTTERCONTROLCONNECTION_H

@class NSString;
@protocol VTPeerRemoteConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VTPeerRemoteConnection.h"

@interface VTPhraseSpotterControlConnection : NSObject <VTPeerRemoteConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    VTPeerRemoteConnection *_peerConnection;
    BOOL _remotePhraseSpotterEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)notifyRemoteOfDismissal;
-(void)notifyRemoteOfEarlyDetect;
-(void)notifyRemoteOfTriggerEvent;
-(void)remoteConnection:(id)arg0 handleMessageType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)updateRemotePhraseSpotterEnabled:(BOOL)arg0 ;


@end


#endif