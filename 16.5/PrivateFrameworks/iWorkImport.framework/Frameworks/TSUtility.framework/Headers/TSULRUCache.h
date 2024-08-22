// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSULRUCACHE_H
#define TSULRUCACHE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TSUNoCopyDictionary.h"

@interface TSULRUCache : NSObject {
    atomic<unsigned long> _lastUsedCounter;
}


@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) NSArray *allValues;
@property (nonatomic) SEL callback; // ivar: _callback
@property (weak, nonatomic) id *callbackTarget; // ivar: _callbackTarget
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) TSUNoCopyDictionary *data; // ivar: _data
@property (nonatomic) NSUInteger maxSize; // ivar: _maxSize


-(id)description;
-(id)initWithMaxSize:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)clearEvictionCallbackTarget;
-(void)dealloc;
-(void)p_removeOldestObject;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setEvictionCallbackTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif