// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSHORTTERMCACHE_H
#define VSSHORTTERMCACHE_H

@class NSCache, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VSShortTermCache : NSObject

@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (retain, nonatomic) NSMutableDictionary *cacheTimer; // ivar: _cacheTimer


+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 timeToLive:(CGFloat)arg2 ;
-(void)timeToLiveTimerFired:(id)arg0 ;


@end


#endif