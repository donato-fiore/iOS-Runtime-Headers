// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTSPEECHTRANSLATIONMTRESPONSE_H
#define FTSPEECHTRANSLATIONMTRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTTranslationLocalePair.h"

@interface FTSpeechTranslationMtResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationMtResponse _root;
}


@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) BOOL is_final;
@property (readonly, nonatomic) NSArray *n_best_translated_phrases;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) FTTranslationLocalePair *translation_locale_pair;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationMtResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationMtResponse *)arg1 verify:(BOOL)arg2 ;
-(id)n_best_translated_phrases_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)n_best_translated_phrases_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif