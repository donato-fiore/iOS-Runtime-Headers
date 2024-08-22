// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RWIRELAYCONNECTIONTOAPPLICATION_H
#define _RWIRELAYCONNECTIONTOAPPLICATION_H

@class NSString;
@protocol OS_xpc_object, _RWIRelayConnectionToApplicationDelegate;

#import <Foundation/Foundation.h>


@interface _RWIRelayConnectionToApplication : NSObject

@property (readonly, nonatomic) BOOL available;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<_RWIRelayConnectionToApplicationDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *tag; // ivar: _tag


-(id)_deserializeMessage:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)_handleEvent:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)sendMessage:(id)arg0 userInfo:(id)arg1 ;


@end


#endif