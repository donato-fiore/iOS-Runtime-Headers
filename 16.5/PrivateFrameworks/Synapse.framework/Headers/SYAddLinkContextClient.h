// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYADDLINKCONTEXTCLIENT_H
#define SYADDLINKCONTEXTCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SYAddLinkContextClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue; // ivar: __clientQueue
@property (retain, nonatomic) NSXPCConnection *_connection; // ivar: __connection


-(id)init;
-(void)_configureConnectionAndResume;
-(void)_createConnectionIfNeeded;
-(void)_invalidateConnection;
-(void)createConnectionWithEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)userDidRemoveContentItems:(id)arg0 ;
-(void)userEditDidAddContentItems:(id)arg0 ;
-(void)userWillAddLinkWithActivity:(id)arg0 completion:(id)arg1 ;


@end


#endif