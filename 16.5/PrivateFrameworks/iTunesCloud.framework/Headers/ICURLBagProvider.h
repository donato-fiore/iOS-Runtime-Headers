// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICURLBAGPROVIDER_H
#define ICURLBAGPROVIDER_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICURLBagProvider : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
    NSMutableSet *_cacheKeysScheduledForRefresh;
    NSMutableDictionary *_bagChangeNotificationReceivedForRequestContext;
}


@property (nonatomic) BOOL useAMSBag; // ivar: _useAMSBag
@property (nonatomic) BOOL useRawPayload; // ivar: _useRawPayload


+(id)sharedBagProvider;
-(id)_amsProcessInfoFromRequestContext:(id)arg0 ;
-(id)_cacheFilePath;
-(id)_dictionaryFromBagPayloadDictionaryAddingKnownMissingKeys:(id)arg0 ;
-(id)_getCacheKeyForRequestContext:(id)arg0 ;
-(id)_knownMissingBagValuesDictionary;
-(id)init;
-(void)_fetchBagForRequestContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_handleAMSBagChangedNotification:(id)arg0 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg0 ;
-(void)_loadCache;
-(void)_saveCache;
-(void)dealloc;
-(void)getBagAndURLMetricsForRequestContext:(id)arg0 forceRefetch:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)getBagForRequestContext:(id)arg0 forceRefetch:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)getBagForRequestContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)invalidateCache;


@end


#endif