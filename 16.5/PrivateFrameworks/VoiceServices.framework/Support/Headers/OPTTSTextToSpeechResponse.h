// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OPTTSTEXTTOSPEECHRESPONSE_H
#define OPTTSTEXTTOSPEECHRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "OPTTSAudioDescription.h"
#import "OPTTSTextToSpeechMeta.h"

@interface OPTTSTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechResponse _root;
}


@property (readonly, nonatomic) NSData *audio;
@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) OPTTSAudioDescription *decoder_description;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) OPTTSTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) OPTTSAudioDescription *playback_description;
@property (readonly, nonatomic) int sample_rate;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)audio:(id)arg0 ;


@end


#endif