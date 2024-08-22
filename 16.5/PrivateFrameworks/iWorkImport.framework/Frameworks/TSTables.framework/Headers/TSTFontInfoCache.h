// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTFONTINFOCACHE_H
#define TSTFONTINFOCACHE_H

@class NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSTFontInfoCache : NSObject {
    _opaque_pthread_rwlock_t _rwlock;
    os_unfair_lock_s _resolvedTextStyleLock;
    unordered_map<unsigned long, TSTFontInfoCacheEntry *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSTFontInfoCacheEntry *>>> _cache;
}


@property (retain, nonatomic) NSMapTable *propertyMapToTextStyleMap; // ivar: _propertyMapToTextStyleMap
@property (retain, nonatomic) NSMutableArray *strongReferences; // ivar: _strongReferences


-(id)fontInfoForTextStyle:(id)arg0 ;
-(id)fontInfoForTextStyle:(id)arg0 withString:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)resolvedTextStyleWithPropertyMap:(id)arg0 ;
-(void)dealloc;
-(void)p_didEnterBackground:(id)arg0 ;
-(void)p_didReceiveMemoryWarning:(id)arg0 ;


@end


#endif