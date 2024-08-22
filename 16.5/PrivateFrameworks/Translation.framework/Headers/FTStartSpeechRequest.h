// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTSTARTSPEECHREQUEST_H
#define FTSTARTSPEECHREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTStartSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StartSpeechRequest _root;
}


@property (readonly, nonatomic) NSString *application_name;
@property (readonly, nonatomic) NSString *client_endpointer_model_version;
@property (readonly, nonatomic) NSInteger codec;
@property (readonly, nonatomic) NSString *device_os;
@property (readonly, nonatomic) NSString *device_type;
@property (readonly, nonatomic) BOOL disable_auto_punctuation;
@property (readonly, nonatomic) BOOL enable_endpoint_candidate;
@property (readonly, nonatomic) BOOL enable_hybrid_endpoint;
@property (readonly, nonatomic) BOOL enable_server_side_endpoint;
@property (readonly, nonatomic) BOOL enable_utterance_detection;
@property (readonly, nonatomic) NSInteger end_point_mode;
@property (readonly, nonatomic) NSString *experiment_id;
@property (readonly, nonatomic) NSString *fork_id;
@property (readonly, nonatomic) unsigned int initial_recognition_candidate_id;
@property (readonly, nonatomic) NSString *input_origin;
@property (readonly, nonatomic) BOOL is_far_field;
@property (readonly, nonatomic) BOOL keyboard_dictation;
@property (readonly, nonatomic) NSString *keyboard_identifier;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *metadata;
@property (readonly, nonatomic) NSString *mic_type;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSInteger speech_request_source;
@property (readonly, nonatomic) int start_audio_bookmark;
@property (readonly, nonatomic) NSUInteger start_endpointing_at;
@property (readonly, nonatomic) NSUInteger start_recognition_at;
@property (readonly, nonatomic) BOOL store_audio;
@property (readonly, nonatomic) BOOL stream_results;
@property (readonly, nonatomic) BOOL stream_unstable_results;
@property (readonly, nonatomic) BOOL tandem_mode;
@property (readonly, nonatomic) NSString *task_name;
@property (readonly, nonatomic) NSString *udm_host;
@property (readonly, nonatomic) int udm_port;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartSpeechRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartSpeechRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::StartSpeechRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif