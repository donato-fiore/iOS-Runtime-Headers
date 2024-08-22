// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS18WEATHERMAPURLCACHE_H
#define _TTC11WEATHERMAPS18WEATHERMAPURLCACHE_H

@class NSURLCache;



@interface _TtC11WeatherMaps18WeatherMapURLCache : NSURLCache



-(?)getCachedResponseForDataTaskcompletionHandler;
-(id)cachedResponseForRequest:(id)arg0 ;
-(id)init;
-(id)initWithMemoryCapacity:(NSInteger)arg0 diskCapacity:(NSInteger)arg1 directoryURL:(id)arg2 ;
-(id)initWithMemoryCapacity:(NSInteger)arg0 diskCapacity:(NSInteger)arg1 diskPath:(id)arg2 ;
-(void)storeCachedResponse:(id)arg0 forDataTask:(id)arg1 ;
-(void)storeCachedResponse:(id)arg0 forRequest:(id)arg1 ;


@end


#endif