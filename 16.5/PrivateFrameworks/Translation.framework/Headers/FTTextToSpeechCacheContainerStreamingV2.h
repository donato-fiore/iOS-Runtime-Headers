// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTTEXTTOSPEECHCACHECONTAINERSTREAMINGV2_H
#define FTTEXTTOSPEECHCACHECONTAINERSTREAMINGV2_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTBeginTextToSpeechStreamingResponse.h"
#import "FTFinalTextToSpeechStreamingResponse.h"
#import "FTStartTextToSpeechStreamingRequest.h"

@interface FTTextToSpeechCacheContainerStreamingV2 : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechCacheContainerStreamingV2 _root;
}


@property (readonly, nonatomic) FTBeginTextToSpeechStreamingResponse *cached_begin_response;
@property (readonly, nonatomic) FTFinalTextToSpeechStreamingResponse *cached_final_response;
@property (readonly, nonatomic) NSArray *cached_partial_response;
@property (readonly, nonatomic) FTStartTextToSpeechStreamingRequest *cached_request;
@property (readonly, nonatomic) NSString *original_session_id;


-(id)cached_partial_response_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechCacheContainerStreamingV2 *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechCacheContainerStreamingV2 *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainerStreamingV2> )addObjectToBuffer:(*void)arg0 ;
-(void)cached_partial_response_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif