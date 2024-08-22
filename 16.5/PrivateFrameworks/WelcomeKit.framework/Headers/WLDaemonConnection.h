// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLDAEMONCONNECTION_H
#define WLDAEMONCONNECTION_H

@class NSLock, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface WLDaemonConnection : NSObject {
    NSLock *_daemonLock;
    NSXPCConnection *_daemonConn;
}


@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler


-(id)daemonConnection;
-(id)daemonWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)invalidateDaemonConnection;


@end


#endif