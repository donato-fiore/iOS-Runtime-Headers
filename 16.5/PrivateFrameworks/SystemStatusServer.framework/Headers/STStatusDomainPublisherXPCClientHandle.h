// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTATUSDOMAINPUBLISHERXPCCLIENTHANDLE_H
#define STSTATUSDOMAINPUBLISHERXPCCLIENTHANDLE_H

@class NSXPCConnection, BSMutableIntegerMap, NSSet, NSMutableSet, NSString;
@protocol STStatusDomainPublisherXPCServer, STStatusDomainPublisherClientHandle, STStatusDomainPublisherServerHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherXPCServer, STStatusDomainPublisherClientHandle>

 {
    id<STStatusDomainPublisherServerHandle> *_serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_volatileDataByDomain;
    BSMutableIntegerMap *_fallbackDataByDomain;
    NSSet *_entitledDomains;
    NSMutableSet *_publishingDomains;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithXPCConnection:(id)arg0 serverHandle:(id)arg1 ;
-(void)handleUserInteraction:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)publishData:(id)arg0 forDomain:(NSUInteger)arg1 withChangeContext:(id)arg2 discardingOnExit:(BOOL)arg3 reply:(id)arg4 ;
-(void)publishDiff:(id)arg0 forDomain:(NSUInteger)arg1 withChangeContext:(id)arg2 replacingData:(BOOL)arg3 discardingOnExit:(BOOL)arg4 reply:(id)arg5 ;
-(void)registerToPublishDomain:(NSUInteger)arg0 fallbackData:(id)arg1 ;
-(void)unregisterFromPublishingDomain:(NSUInteger)arg0 ;


@end


#endif