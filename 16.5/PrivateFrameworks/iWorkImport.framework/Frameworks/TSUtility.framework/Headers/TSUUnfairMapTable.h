// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUUNFAIRMAPTABLE_H
#define TSUUNFAIRMAPTABLE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TSUUnfairMapTable : NSObject

@property (readonly) NSUInteger count;
@property (retain, nonatomic) NSMapTable *mapTable; // ivar: _mapTable
@property (nonatomic) os_unfair_lock_s unfairLock; // ivar: _unfairLock


+(id)mapTableWithKeyOptions:(NSUInteger)arg0 valueOptions:(NSUInteger)arg1 ;
-(id)initWithKeyOptions:(NSUInteger)arg0 valueOptions:(NSUInteger)arg1 capacity:(NSUInteger)arg2 ;
-(id)objectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif