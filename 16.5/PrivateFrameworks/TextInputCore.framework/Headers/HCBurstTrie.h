// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HCBURSTTRIE_H
#define HCBURSTTRIE_H


#import <Foundation/Foundation.h>


@interface HCBurstTrie : NSObject

@property (nonatomic) *_CFBurstTrie burstTrie; // ivar: _burstTrie
@property (readonly, nonatomic) NSUInteger keysAdded; // ivar: _keysAdded


+(id)burstTrieFromFile:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 ;
-(NSUInteger)count;
-(id)init;
-(id)payloadForKey:(id)arg0 ;
-(void)_createUnderlyingBurstTrie;
-(void)dealloc;


@end


#endif