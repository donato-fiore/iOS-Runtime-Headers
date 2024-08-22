// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAILSPINSYMBOLICATIONCLIENT_H
#define TAILSPINSYMBOLICATIONCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface TailspinSymbolicationClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)symbolicateUUID:(id)arg0 pid:(int)arg1 path:(id)arg2 offsets:(id)arg3 options:(id)arg4 ;
-(void)_initConnection;
-(void)invalidateConnection;


@end


#endif