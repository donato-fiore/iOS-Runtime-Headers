// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXANONYMOUSCLIENT_H
#define TSXANONYMOUSCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface TSXAnonymousClient : NSObject {
    BOOL _invalidated;
}


@property (readonly) NSXPCConnection *serverConnection; // ivar: _serverConnection


+(id)clientProtocol;
+(id)serverProtocol;
-(id)exportedObject;
-(id)initWithEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)interruptedConnection;
-(void)invalidatedConnection;


@end


#endif