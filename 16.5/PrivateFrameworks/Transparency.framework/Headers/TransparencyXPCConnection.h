// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYXPCCONNECTION_H
#define TRANSPARENCYXPCCONNECTION_H

@class NSXPCConnection, NSXPCInterface, NSString;

#import <Foundation/Foundation.h>


@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (retain) NSXPCInterface *interface; // ivar: _interface
@property (retain) NSString *machName; // ivar: _machName


+(id)cachedConnection:(id)arg0 interface:(Class)arg1 ;
+(id)idsInstance;
+(id)mainInstance;
+(id)transparencySupportInstance;
// +(void)invokeXPCAsynchronousCallWithBlock:(id)arg0 errorHandler:(unk)arg1  ;
// +(void)invokeXPCSynchronousCallWithBlock:(id)arg0 errorHandler:(unk)arg1  ;
// +(void)invokeXPCWithBlock:(id)arg0 synchronous:(unk)arg1 errorHandler:(BOOL)arg2  ;
+(void)setupTestConnection:(id)arg0 forMachName:(id)arg1 ;
-(id)createConnection;
-(id)initWithMachName:(id)arg0 interface:(id)arg1 ;
-(void)dealloc;
-(void)setTestEndpoint:(id)arg0 ;


@end


#endif