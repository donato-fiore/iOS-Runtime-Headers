// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPFONTHEIGHTCACHE_H
#define TSWPFONTHEIGHTCACHE_H


#import <Foundation/Foundation.h>


@interface TSWPFontHeightCache : NSObject {
    list<unsigned long, std::allocator<unsigned long>> _fontHashList;
    map<unsigned long, TSWPFontHeightCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontHeightCacheEntry>>> _fontHashToInfoMap;
    unsigned int _cacheSize;
    unsigned int _maxCacheSize;
    _opaque_pthread_rwlock_t _lock;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedCache;
-(BOOL)p_findEntryForFont:(struct __CTFont *)arg0 outHeightInfo:(struct ? *)arg1 collision:(*BOOL)arg2 ;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(struct ? )fontHeightInfoForFont:(struct __CTFont *)arg0 ;
-(void)dealloc;
-(void)p_addEntryForFont:(struct __CTFont *)arg0 heightInfo:(struct ? *)arg1 ;
-(void)release;


@end


#endif