// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTBATCHTRANSLATIONCACHECONTAINER_H
#define FTBATCHTRANSLATIONCACHECONTAINER_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTBatchTranslationCacheContainer : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationCacheContainer _root;
}


@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int sentence_count;
@property (readonly, nonatomic) NSArray *spans;
@property (readonly, nonatomic) NSString *translated_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationCacheContainer *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationCacheContainer *)arg1 verify:(BOOL)arg2 ;
-(id)spans_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::BatchTranslationCacheContainer> )addObjectToBuffer:(*void)arg0 ;
-(void)spans_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif