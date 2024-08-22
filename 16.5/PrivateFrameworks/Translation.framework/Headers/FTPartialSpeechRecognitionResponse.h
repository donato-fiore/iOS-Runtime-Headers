// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTPARTIALSPEECHRECOGNITIONRESPONSE_H
#define FTPARTIALSPEECHRECOGNITIONRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTPartialSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *PartialSpeechRecognitionResponse _root;
}


@property (readonly, nonatomic) int audio_duration_ms;
@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) BOOL is_stable_result;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *recognition_text;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PartialSpeechRecognitionResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PartialSpeechRecognitionResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::PartialSpeechRecognitionResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif