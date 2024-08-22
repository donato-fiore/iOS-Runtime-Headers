// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSHTTPSERVER_H
#define SSHTTPSERVER_H

@class NSMutableDictionary, NSMutableArray, NSRunLoop;
@protocol SSHTTPServerRequestHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSHTTPServer : NSObject <SSHTTPServerRequestHandlerDelegate>

 {
    NSMutableDictionary *_definedResponses;
    NSMutableArray *_incomingRequests;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    *__CFSocket _socket;
    NSRunLoop *_runLoop;
}


@property (readonly, nonatomic) BOOL allowsSecure; // ivar: _allowsSecure
@property (nonatomic) int downloadSpeed; // ivar: _downloadSpeed
@property (nonatomic) short port; // ivar: _port
@property (readonly, nonatomic) NSInteger responsesDelivered; // ivar: _responsesDelivered
@property (readonly, nonatomic) int state; // ivar: _state
@property (nonatomic) BOOL verbose; // ivar: _verbose


+(BOOL)_isPortOccupied:(short)arg0 ;
+(id)sharedServer;
-(BOOL)start;
-(id)_ipAddress;
-(id)init;
-(id)responseBlockForPath:(SEL)arg0 ;
-(id)serverLocalhostURL;
-(id)serverURL;
-(void)_handleConnectWithType:(NSUInteger)arg0 handle:(int)arg1 ;
-(void)dealloc;
-(void)requestDidFinish:(id)arg0 ;
-(void)setResponseForPath:(id)arg0 handler:(id)arg1 ;
-(void)stop;


@end


#endif