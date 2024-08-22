// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFICLOUDSYNCENGINECORE_H
#define WIFICLOUDSYNCENGINECORE_H

@class NSThread, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WiFiCloudSyncEngineCore : NSObject

@property *unk callback; // ivar: callback
@property NSObject<OS_dispatch_queue> *clientQueue; // ivar: clientQueue
@property NSThread *clientThread; // ivar: clientThread
@property *void context; // ivar: context
@property BOOL iCloudSyncingEnabled; // ivar: iCloudSyncingEnabled
@property BOOL isKVSEncrypted; // ivar: isKVSEncrypted
@property NSUbiquitousKeyValueStore *keyValueStore; // ivar: keyValueStore


-(id)initWithEncryptedKVS:(BOOL)arg0 ;
-(id)readCompleteKVStore;
-(void)addToKVStore:(id)arg0 synchronize:(BOOL)arg1 ;
-(void)clearKVS;
-(void)dealloc;
-(void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg0 ;
-(void)enableIcloudSyncing:(BOOL)arg0 ForBundleId:(id)arg1 ;
-(void)printCompleteKVStore;
-(void)pruneKVSStore;
-(void)queryKeychainSyncState;
-(void)readStoreValueForKey:(id)arg0 ;
-(void)registerCallback:(*unk)arg0 context:(*void)arg1 ;
-(void)registerCallback:(*unk)arg0 queue:(id)arg1 context:(*void)arg2 ;
-(void)relayCloudCleanUpEvent;
-(void)relayCloudEvent:(id)arg0 ;
-(void)relayKeychainSyncState:(id)arg0 ;
-(void)relayMergeNetworks:(id)arg0 ;
-(void)relayPruneKVSStore:(id)arg0 ;
-(void)relayReadStoreValueAction:(id)arg0 ;
-(void)removeFromKVStore:(id)arg0 ;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg0 ;
-(void)synchronizeAndCallMergeNetworks;
-(void)synchronizeKVS;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg0 ;
-(void)unSubscribeKVStoreNotfications;


@end


#endif