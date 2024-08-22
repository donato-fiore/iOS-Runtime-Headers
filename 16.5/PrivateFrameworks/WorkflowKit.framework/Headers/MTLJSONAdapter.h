// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLJSONADAPTER_H
#define MTLJSONADAPTER_H

@class NSMapTable, NSDictionary;
@protocol MTLJSONSerializing;

#import <Foundation/Foundation.h>


@interface MTLJSONAdapter : NSObject

@property (readonly, nonatomic) NSMapTable *JSONAdaptersByModelClass; // ivar: _JSONAdaptersByModelClass
@property (readonly, copy, nonatomic) NSDictionary *JSONKeyPathsByPropertyKey; // ivar: _JSONKeyPathsByPropertyKey
@property (readonly, nonatomic) NSObject<MTLJSONSerializing> *model;
@property (readonly, nonatomic) Class modelClass; // ivar: _modelClass
@property (readonly, copy, nonatomic) NSDictionary *valueTransformersByPropertyKey; // ivar: _valueTransformersByPropertyKey


+(id)JSONArrayFromModels:(id)arg0 ;
+(id)JSONArrayFromModels:(id)arg0 error:(*id)arg1 ;
+(id)JSONDictionaryFromModel:(id)arg0 ;
+(id)JSONDictionaryFromModel:(id)arg0 error:(*id)arg1 ;
+(id)NSURLJSONTransformer;
+(id)NSUUIDJSONTransformer;
+(id)arrayTransformerWithModelClass:(Class)arg0 ;
+(id)dictionaryTransformerWithModelClass:(Class)arg0 ;
+(id)modelOfClass:(Class)arg0 fromJSONDictionary:(id)arg1 error:(*id)arg2 ;
+(id)modelsOfClass:(Class)arg0 fromJSONArray:(id)arg1 error:(*id)arg2 ;
+(id)transformerForModelPropertiesOfClass:(Class)arg0 ;
+(id)transformerForModelPropertiesOfObjCType:(char *)arg0 ;
+(id)valueTransformersForModelClass:(Class)arg0 ;
-(id)JSONAdapterForModelClass:(Class)arg0 error:(*id)arg1 ;
-(id)JSONDictionaryFromModel:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithModelClass:(Class)arg0 ;
-(id)modelFromJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)serializablePropertyKeys:(id)arg0 forModel:(id)arg1 ;


@end


#endif