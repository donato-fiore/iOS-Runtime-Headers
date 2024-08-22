// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DDICTIONARYOFSET_H
#define TSCH3DDICTIONARYOFSET_H

@class NSMutableDictionary;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface TSCH3DDictionaryOfSet : NSObject <NSFastEnumeration>

 {
    NSMutableDictionary *_sets;
}




+(id)dictionary;
+(id)dictionaryWithMutableDictionaryClass:(Class)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allKeys;
-(id)description;
-(id)init;
-(id)initWithMutableDictionaryClass:(Class)arg0 ;
-(id)objectsForKey:(id)arg0 ;
-(void)addObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif