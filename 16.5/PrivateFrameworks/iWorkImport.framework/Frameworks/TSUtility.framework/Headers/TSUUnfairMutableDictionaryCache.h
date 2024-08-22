// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUUNFAIRMUTABLEDICTIONARYCACHE_H
#define TSUUNFAIRMUTABLEDICTIONARYCACHE_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface TSUUnfairMutableDictionaryCache : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)p_didEnterBackground:(id)arg0 ;
-(void)p_didReceiveMemoryWarning:(id)arg0 ;
-(void)performSyncWriteWithUnderlyingDictionary:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 andWait:(BOOL)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif