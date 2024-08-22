// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTSTARTSPEECHTRANSLATIONREQUEST_H
#define FTSTARTSPEECHTRANSLATIONREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTStartSpeechRequest.h"
#import "FTTranslationRequest.h"

@interface FTStartSpeechTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StartSpeechTranslationRequest _root;
}


@property (readonly, nonatomic) NSString *app_id;
@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSInteger opt_in_status;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) BOOL restricted_mode;
@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) BOOL streaming_mode;
@property (readonly, nonatomic) NSArray *text_to_speech_requests;
@property (readonly, nonatomic) NSArray *translation_locale_pairs;
@property (readonly, nonatomic) FTTranslationRequest *translation_request;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartSpeechTranslationRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartSpeechTranslationRequest *)arg1 verify:(BOOL)arg2 ;
-(id)text_to_speech_requests_objectAtIndex:(NSUInteger)arg0 ;
-(id)translation_locale_pairs_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::StartSpeechTranslationRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)text_to_speech_requests_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)translation_locale_pairs_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif