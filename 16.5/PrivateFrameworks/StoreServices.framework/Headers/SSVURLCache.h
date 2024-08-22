// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVURLCACHE_H
#define SSVURLCACHE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSVURLCacheConfiguration.h"

@interface SSVURLCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    *__CFURLStorageSession _cacheStorageSession;
    SSVURLCacheConfiguration *_configuration;
    *_CFURLCache _urlCache;
}




-(id)cachedConnectionResponseForRequestProperties:(id)arg0 ;
-(id)cachedConnectionResponseForRequestProperties:(id)arg0 cachedResponse:(*id)arg1 ;
-(id)cachedResponseForRequest:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)configureRequest:(id)arg0 ;
-(void)dealloc;
-(void)loadMemoryCacheFromDisk;
-(void)removeAllCachedResponses;
-(void)saveMemoryCacheToDisk;
-(void)storeCachedResponse:(id)arg0 forRequest:(id)arg1 ;
-(void)storeConnectionResponse:(id)arg0 forRequestProperties:(id)arg1 ;
-(void)storeConnectionResponse:(id)arg0 forRequestProperties:(id)arg1 userInfo:(id)arg2 ;


@end


#endif