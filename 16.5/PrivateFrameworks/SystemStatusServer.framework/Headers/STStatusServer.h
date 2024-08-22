// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTATUSSERVER_H
#define STSTATUSSERVER_H

@class BSMutableIntegerMap, NSMapTable, NSMutableDictionary, NSString, BSIntegerSet;
@protocol BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle, OS_dispatch_queue, STStatusServerDelegate;

#import <Foundation/Foundation.h>

#import "STStatusDomainDataChangeLog.h"
#import "STStatusDomainXPCClientListener.h"
#import "STStatusDomainPublisherXPCClientListener.h"

@interface STStatusServer : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle>

 {
    BSMutableIntegerMap *_clientsByDomain;
    BSMutableIntegerMap *_publisherClientsByDomain;
    NSMapTable *_changeLogKeysByPublisherClient;
    STStatusDomainDataChangeLog *_dataChangeLog;
    STStatusDomainXPCClientListener *_xpcClientListener;
    STStatusDomainPublisherXPCClientListener *_publisherXPCClientListener;
    NSMutableDictionary *_dataTransformersByDomain;
    NSMutableDictionary *_clientDataTransformerProvidersByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<STStatusServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSIntegerSet *publishedDomains;
@property (readonly) Class superclass;


-(id)dataForDomain:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)publishedDataForDomain:(NSUInteger)arg0 ;
-(id)publishedVolatileDataForDomain:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addClientDataTransformerProvider:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)addDataTransformer:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)modifyClientDataTransformerProvider:(id)arg0 forDomain:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)modifyDataTransformer:(id)arg0 forDomain:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)publishData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 withChangeContext:(id)arg3 completion:(id)arg4 ;
-(void)publishVolatileData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 withChangeContext:(id)arg3 completion:(id)arg4 ;
-(void)registerClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)registerPublisherClient:(id)arg0 forDomain:(NSUInteger)arg1 fallbackData:(id)arg2 ;
-(void)removeClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)removeClientDataTransformerProvider:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)removeDataTransformer:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)removePublisherClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)reportUserInteraction:(id)arg0 forClient:(id)arg1 domain:(NSUInteger)arg2 ;
// -(void)updateDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 usingDiffProvider:(id)arg2 completion:(unk)arg3  ;
// -(void)updateVolatileDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 usingDiffProvider:(id)arg2 completion:(unk)arg3  ;


@end


#endif