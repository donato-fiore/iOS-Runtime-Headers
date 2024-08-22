// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSSPROPERTYMAP_H
#define TSSPROPERTYMAP_H

@class NSString;
@protocol NSCopying, TSSPropertySource;

#import <Foundation/Foundation.h>


@interface TSSPropertyMap : NSObject <NSCopying, TSSPropertySource>

 {
    *TSSPropertyStore mStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)propertyMap;
+(id)propertyMapWithPropertiesAndValues:(int)arg0 ;
+(id)propertyMapWithPropertyMap:(id)arg0 ;
-(BOOL)containsAnyPropertyInProperties:(id)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)definesProperty:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(NSUInteger)count;
-(float)floatValueForProperty:(int)arg0 ;
-(id)allKeys;
-(id)allProperties;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diff:(id)arg0 ;
-(id)diffOnlyDifferences:(id)arg0 ;
-(id)diffPropertyNames:(id)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithFirstKey:(int)arg0 andArgumentList:(char *)arg1 ;
-(id)initWithPropertiesAndValues:(int)arg0 ;
-(id)initWithPropertyMap:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(id)propertyMapByAddingValuesFromPropertyMap:(id)arg0 ;
-(id)propertyMapByRemovingValuesForProperties:(id)arg0 ;
-(id)propertyMapByRemovingValuesFromPropertyMap:(id)arg0 ;
-(id)propertyMapWithProperties:(id)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(void)addValuesFromPropertyMap:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePropertiesAndObjectsUsingBlock:(id)arg0 ;
-(void)filterWithProperties:(id)arg0 ;
-(void)minusPropertyMap:(id)arg0 ;
-(void)pSetArrayOfFloats:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)pSetArrayOfObjects:(id)arg0 forProperty:(int)arg1 ;
-(void)p_getAllKeys:(*int)arg0 ;
-(void)removeAllPropertyValues;
-(void)removeValueForProperty:(int)arg0 ;
-(void)removeValuesForProperties:(id)arg0 ;
-(void)removeValuesFromPropertyMap:(id)arg0 ;
-(void)setBoolValue:(BOOL)arg0 forProperty:(int)arg1 ;
-(void)setBoxedObject:(id)arg0 forProperty:(int)arg1 ;
-(void)setCGFloatValue:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)setDoubleValue:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)setFloatValue:(float)arg0 forProperty:(int)arg1 ;
-(void)setIntValue:(int)arg0 forProperty:(int)arg1 ;
-(void)setObject:(id)arg0 forProperty:(int)arg1 ;


@end


#endif