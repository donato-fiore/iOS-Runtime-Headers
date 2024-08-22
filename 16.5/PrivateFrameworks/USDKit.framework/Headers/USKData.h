// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USKDATA_H
#define USKDATA_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "USKNode.h"
#import "USKScene.h"
#import "USKProperty.h"

@interface USKData : NSObject {
    VtValue _value;
    USKNode *_nodeOwner;
    USKScene *_sceneOwner;
    USKProperty *_propertyOwner;
}


@property (readonly, nonatomic) NSUInteger arraySize; // ivar: _arraySize
@property (readonly, retain, nonatomic) NSData *dataNoCopy;
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(BOOL)boolValue;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSUInteger)double2Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)double3Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)double4Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)double4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)doubleArray:(*CGFloat)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)float2Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)float3Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)float4Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)float4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)floatArray:(*float)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)intArray:(*int)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)quatfArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)uintArray:(*unsigned int)arg0 maxCount:(NSUInteger)arg1 ;
-(float)floatValue;
-(id)double2Value;
-(id)double3Value;
-(id)double4Value;
-(id)float2Value;
-(id)float3Value;
-(id)float4Value;
-(id)initWithBool:(BOOL)arg0 ;
-(id)initWithDouble2;
-(id)initWithDouble2Array:(*NSUInteger)arg0 count;
-(id)initWithDouble3;
-(id)initWithDouble3Array:(*NSUInteger)arg0 count;
-(id)initWithDouble4;
-(id)initWithDouble4Array:(*NSUInteger)arg0 count;
-(id)initWithDouble4x4:(struct ? )arg0 ;
-(id)initWithDouble4x4Array:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)initWithDouble:(CGFloat)arg0 ;
-(id)initWithDoubleArray:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(id)initWithFloat2;
-(id)initWithFloat2Array:(*NSUInteger)arg0 count;
-(id)initWithFloat3;
-(id)initWithFloat3Array:(*NSUInteger)arg0 count;
-(id)initWithFloat4;
-(id)initWithFloat4Array:(*NSUInteger)arg0 count;
-(id)initWithFloat:(float)arg0 ;
-(id)initWithFloatArray:(*float)arg0 count:(NSUInteger)arg1 ;
-(id)initWithInt:(int)arg0 ;
-(id)initWithIntArray:(*int)arg0 count:(NSUInteger)arg1 ;
-(id)initWithObjectPath:(id)arg0 ;
-(id)initWithQuatf:(struct ? )arg0 ;
-(id)initWithQuatfArray:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)initWithResourcePath:(id)arg0 ;
-(id)initWithResourcePathArray:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithStringArray:(id)arg0 ;
-(id)initWithTimeCode:(id)arg0 ;
-(id)initWithToken:(id)arg0 ;
-(id)initWithTokenArray:(id)arg0 ;
-(id)initWithUInt:(unsigned int)arg0 ;
-(id)initWithUIntArray:(*unsigned int)arg0 count:(NSUInteger)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithVtValue:(struct VtValue )arg0 typeName:(struct TfToken )arg1 ;
-(id)initWithVtValue:(struct VtValue )arg0 typeName:(struct TfToken )arg1 withNodeOwner:(id)arg2 ;
-(id)initWithVtValue:(struct VtValue )arg0 typeName:(struct TfToken )arg1 withPropertyOwner:(id)arg2 ;
-(id)initWithVtValue:(struct VtValue )arg0 typeName:(struct TfToken )arg1 withSceneOwner:(id)arg2 ;
-(id)objectPathValue;
-(id)pathArray;
-(id)resourcePath;
-(id)resourcePathArray;
-(id)stringArray;
-(id)stringValue;
-(id)timeCodeValue;
-(id)tokenArray;
-(id)tokenValue;
-(id)urlValue;
-(int)intValue;
-(struct ? )double4x4Value;
-(struct ? )float4x4Value;
-(struct ? )quatfValue;
-(struct VtValue )value;
-(unsigned int)uintValue;
-(void)setBoolValue:(BOOL)arg0 ;
-(void)setDouble2Array:(*NSUInteger)arg0 count;
-(void)setDouble2Value;
-(void)setDouble3Array:(*NSUInteger)arg0 count;
-(void)setDouble3Value;
-(void)setDouble4Array:(*NSUInteger)arg0 count;
-(void)setDouble4Value;
-(void)setDouble4x4Array:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setDouble4x4Value:(struct ? )arg0 ;
-(void)setDoubleArray:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(void)setDoubleValue:(CGFloat)arg0 ;
-(void)setFloat2Array:(*NSUInteger)arg0 count;
-(void)setFloat2Value;
-(void)setFloat3Array:(*NSUInteger)arg0 count;
-(void)setFloat3Value;
-(void)setFloat4Array:(*NSUInteger)arg0 count;
-(void)setFloat4Value;
-(void)setFloatArray:(*float)arg0 count:(NSUInteger)arg1 ;
-(void)setFloatValue:(float)arg0 ;
-(void)setIntArray:(*int)arg0 count:(NSUInteger)arg1 ;
-(void)setIntValue:(int)arg0 ;
-(void)setObjectPathValue:(id)arg0 ;
-(void)setQuatfArray:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setQuatfValue:(struct ? )arg0 ;
-(void)setResourcePath:(id)arg0 ;
-(void)setResourcePathArray:(id)arg0 ;
-(void)setStringArray:(id)arg0 ;
-(void)setStringValue:(id)arg0 ;
-(void)setTimeCodeValue:(id)arg0 ;
-(void)setTokenArray:(id)arg0 ;
-(void)setTokenValue:(id)arg0 ;
-(void)setUIntArray:(*unsigned int)arg0 count:(NSUInteger)arg1 ;
-(void)setUIntValue:(unsigned int)arg0 ;
-(void)setURLValue:(id)arg0 ;
-(void)setValue:(struct VtValue )arg0 ;


@end


#endif