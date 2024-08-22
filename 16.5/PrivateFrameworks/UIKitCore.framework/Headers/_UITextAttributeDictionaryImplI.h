// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTATTRIBUTEDICTIONARYIMPLI_H
#define _UITEXTATTRIBUTEDICTIONARYIMPLI_H

@class NSMutableDictionary, NSMutableSet;
@protocol _UITextAttributeDefaults;



@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {
    id<_UITextAttributeDefaults> *_fallback;
    NSMutableDictionary *_storage;
    NSMutableSet *_ignoring;
}




+(BOOL)_isMutable;
+(Class)_ignoringClass;
+(Class)_storageClass;
-(BOOL)ignoresFallbackForKey:(id)arg0 ;
-(BOOL)isEqualToDictionary:(id)arg0 ;
-(BOOL)isNSDictionary__;
-(BOOL)usesFallbackForKey:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)_fullDictionary;
-(id)_initWithDictionary:(id)arg0 copyItems:(BOOL)arg1 fallback:(id)arg2 ;
-(id)_initWithStorage:(id)arg0 fallback:(id)arg1 ignoring:(id)arg2 ;
-(id)_keysIfThereIsFallback;
-(id)allKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fallback;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg0 fallback:(id)arg1 ;
-(id)initWithFallback:(id)arg0 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)sparseDictionary;
-(void)_removeFallbackFromStorage;


@end


#endif