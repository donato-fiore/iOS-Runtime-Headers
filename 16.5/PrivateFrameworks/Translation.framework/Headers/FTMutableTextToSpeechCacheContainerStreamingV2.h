// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHCACHECONTAINERSTREAMINGV2_H
#define FTMUTABLETEXTTOSPEECHCACHECONTAINERSTREAMINGV2_H

@class NSArray, NSString;


#import "FTTextToSpeechCacheContainerStreamingV2.h"
#import "FTBeginTextToSpeechStreamingResponse.h"
#import "FTFinalTextToSpeechStreamingResponse.h"
#import "FTStartTextToSpeechStreamingRequest.h"

@interface FTMutableTextToSpeechCacheContainerStreamingV2 : FTTextToSpeechCacheContainerStreamingV2

@property (copy, nonatomic) FTBeginTextToSpeechStreamingResponse *cached_begin_response;
@property (copy, nonatomic) FTFinalTextToSpeechStreamingResponse *cached_final_response;
@property (copy, nonatomic) NSArray *cached_partial_response;
@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *cached_request;
@property (copy, nonatomic) NSString *original_session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif