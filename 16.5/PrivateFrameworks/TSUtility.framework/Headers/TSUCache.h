// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUCACHE_H
#define TSUCACHE_H

@class NSString, NSMutableDictionary;


#import "TSUFlushableObject.h"

@interface TSUCache : TSUFlushableObject {
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}




-(BOOL)hasFlushableContent;
-(NSUInteger)count;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)p_objectForKey:(id)arg0 ;
-(id)p_objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(void)dealloc;
-(void)p_addEntriesFromDictionary:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)unload;


@end


#endif