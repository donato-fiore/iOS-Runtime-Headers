// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSKVOMANAGER_H
#define TPSKVOMANAGER_H


#import <Foundation/Foundation.h>


@interface TPSKVOManager : NSObject

@property (nonatomic) *__CFDictionary KVODictionary; // ivar: _KVODictionary
@property (weak, nonatomic) id *observer; // ivar: _observer


-(id)initWithObserver:(id)arg0 ;
-(void)addKVOObject:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeAllKVOObjects;
-(void)removeKVOForObject:(id)arg0 ;
-(void)removeKVOObject:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif