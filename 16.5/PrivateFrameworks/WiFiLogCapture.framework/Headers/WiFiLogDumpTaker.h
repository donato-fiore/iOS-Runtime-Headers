// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFILOGDUMPTAKER_H
#define WIFILOGDUMPTAKER_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface WiFiLogDumpTaker : NSObject {
    NSObject<OS_dispatch_queue> *event_queue;
    NSObject<OS_xpc_object> *xpc_connection;
}


@property (readonly, nonatomic) BOOL didLastCaptureFallback; // ivar: _didLastCaptureFallback


-(id)XPCConnection:(char *)arg0 ;
-(id)init;
-(void)handleConnection:(id)arg0 ;
-(void)takeWiFiCoreCaptureDumpWithReason:(char *)arg0 callback:(id)arg1 ;
-(void)takeWiFiDiagnosticsDumpWithPath:(char *)arg0 reason:(char *)arg1 callback:(id)arg2 ;
-(void)takeWiFiDiagnosticsDumpWithPath:(char *)arg0 reason:(char *)arg1 shouldTryFallback:(BOOL)arg2 callback:(id)arg3 ;
-(void)takeWiFiDiagnosticsDumpWithPathAndReason:(id)arg0 ;


@end


#endif