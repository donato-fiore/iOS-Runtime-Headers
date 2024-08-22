// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICSUBSCRIPTIONSTATUSCACHE_H
#define ICMUSICSUBSCRIPTIONSTATUSCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICMusicSubscriptionStatusCacheKey.h"

@interface ICMusicSubscriptionStatusCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    BOOL _isPhoneNumberAccessRestricted;
    ICMusicSubscriptionStatusCacheKey *_baseCacheKey;
    NSMutableDictionary *_cachedSubscriptionStatusResponses;
}




+(id)sharedCache;
-(id)_init;
-(id)_statusChangeUserInfoForUserIdentity:(id)arg0 oldStatus:(id)arg1 newStatus:(id)arg2 ;
-(void)_getCacheKeyForRequestContext:(id)arg0 completion:(id)arg1 ;
-(void)_handleActiveAccountDidChangeNotification:(id)arg0 ;
-(void)_handlePhoneNumberDidChangeNotification:(id)arg0 ;
-(void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg0 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg0 ;
-(void)_loadPersistedCacheWithCompletion:(id)arg0 ;
-(void)_persistCachePostingGlobalNotification:(BOOL)arg0 ;
-(void)_postLocalChangeNotificationWithUserInfo:(id)arg0 ;
-(void)dealloc;
-(void)getCachedSubscriptionStatusResponseForRequestContext:(id)arg0 completion:(id)arg1 ;
-(void)setCachedSubscriptionStatusResponse:(id)arg0 forRequestContext:(id)arg1 completion:(id)arg2 ;
-(void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(id)arg0 ;
-(void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)arg0 completion:(id)arg1 ;
-(void)updateBaseCacheKey;


@end


#endif