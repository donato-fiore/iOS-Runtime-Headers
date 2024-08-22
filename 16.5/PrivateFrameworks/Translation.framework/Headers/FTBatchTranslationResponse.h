// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTBATCHTRANSLATIONRESPONSE_H
#define FTBATCHTRANSLATIONRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTBatchTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BatchTranslationResponse _root;
}


@property (readonly, nonatomic) NSString *paragraph_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_string;
@property (readonly, nonatomic) NSArray *span;
@property (readonly, nonatomic) NSArray *translated_sentences;
@property (readonly, nonatomic) NSString *translated_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BatchTranslationResponse *)arg1 verify:(BOOL)arg2 ;
-(id)span_objectAtIndex:(NSUInteger)arg0 ;
-(id)translated_sentences_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::BatchTranslationResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)span_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)translated_sentences_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif