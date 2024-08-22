// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMTELEMETRYCONTROLLER_H
#define STMTELEMETRYCONTROLLER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STMTelemetryController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(void)getTelemetry:(id)arg0 ;
-(void)retrieveTelemetryWithCompletionHandler:(id)arg0 ;
-(void)stopService;


@end


#endif