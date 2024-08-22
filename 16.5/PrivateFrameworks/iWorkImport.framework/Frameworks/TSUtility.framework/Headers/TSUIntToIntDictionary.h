// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUINTTOINTDICTIONARY_H
#define TSUINTTOINTDICTIONARY_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying>

 {
    *__CFDictionary mDictionary;
}




+(id)dictionary;
-(BOOL)containsKey:(NSInteger)arg0 ;
-(BOOL)intIsPresentForKey:(NSInteger)arg0 outValue:(*NSInteger)arg1 ;
-(NSInteger)intForKey:(NSInteger)arg0 ;
-(NSUInteger)count;
-(id)allKeys;
-(id)allValues;
-(id)arrayOfBoxedKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct __CFDictionary *)p_cfDictionary;
-(void)addIntToIntDictionary:(id)arg0 ;
-(void)applyFromIntToIntDictionary:(id)arg0 ;
-(void)dealloc;
-(void)enumerateKeysAndValuesUsingBlock:(id)arg0 ;
-(void)incrementValueBy:(NSInteger)arg0 forKey:(NSInteger)arg1 ;
-(void)incrementValueForKey:(NSInteger)arg0 ;
-(void)removeAllInts;
-(void)removeIntForKey:(NSInteger)arg0 ;
-(void)setInt:(NSInteger)arg0 forKey:(NSInteger)arg1 ;


@end


#endif