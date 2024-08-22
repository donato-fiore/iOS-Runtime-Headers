// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEACTIONUSERINTERFACE_H
#define WFREMOTEACTIONUSERINTERFACE_H

@class NSXPCConnection, NSString;
@protocol WFActionRemoteUserInterface;

#import <Foundation/Foundation.h>


@interface WFRemoteActionUserInterface : NSObject <WFActionRemoteUserInterface>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *onInterfaceInterruption; // ivar: _onInterfaceInterruption
@property (readonly, nonatomic) NSObject<WFActionRemoteUserInterface> *remoteUserInterface; // ivar: _remoteUserInterface
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType; // ivar: _userInterfaceType


-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithUserInterfaceType:(id)arg0 listenerEndpoint:(id)arg1 interface:(id)arg2 ;


@end


#endif