// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTTEXTTOSPEECHCACHECONTAINERRPCV2_H
#define FTTEXTTOSPEECHCACHECONTAINERRPCV2_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTTextToSpeechRequest.h"
#import "FTTextToSpeechResponse.h"

@interface FTTextToSpeechCacheContainerRpcV2 : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechCacheContainerRpcV2 _root;
}


@property (readonly, nonatomic) FTTextToSpeechRequest *cached_request;
@property (readonly, nonatomic) FTTextToSpeechResponse *cached_response;
@property (readonly, nonatomic) NSString *original_session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechCacheContainerRpcV2 *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechCacheContainerRpcV2 *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainerRpcV2> )addObjectToBuffer:(*void)arg0 ;


@end


#endif