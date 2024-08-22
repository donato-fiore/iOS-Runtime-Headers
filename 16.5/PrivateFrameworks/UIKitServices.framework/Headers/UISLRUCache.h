// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISLRUCACHE_H
#define UISLRUCACHE_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface UISLRUCache : NSObject {
    NSMutableOrderedSet *_cache;
    NSUInteger _limit;
}




-(id)evictedObjectForUsedObject:(id)arg0 ;
-(id)initWithLimit:(NSUInteger)arg0 ;


@end


#endif