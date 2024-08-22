// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISURLCACHE_H
#define ISURLCACHE_H

@class NSURLCache, NSString;

#import <Foundation/Foundation.h>

#import "ISURLCacheConfiguration.h"

@interface ISURLCache : NSObject {
    NSURLCache *_cache;
    ISURLCacheConfiguration *_configuration;
}


@property (readonly, nonatomic) NSUInteger currentDiskUsage;
@property (readonly, nonatomic) NSUInteger currentMemoryUsage;
@property (readonly, nonatomic) NSUInteger diskCapacity;
@property (readonly, nonatomic) NSUInteger memoryCapacity;
@property (readonly) NSString *persistentIdentifier;


+(id)cacheDirectoryPath;
-(id)cachedResponseForRequest:(id)arg0 ;
-(id)init;
-(id)initWithCacheConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)purgeMemoryCache;
-(void)reloadWithCacheConfiguration:(id)arg0 ;
-(void)removeAllCachedResponses;
-(void)removeCachedResponseForRequest:(id)arg0 ;
-(void)saveMemoryCacheToDisk;
-(void)storeCachedResponse:(id)arg0 forRequest:(id)arg1 ;


@end


#endif