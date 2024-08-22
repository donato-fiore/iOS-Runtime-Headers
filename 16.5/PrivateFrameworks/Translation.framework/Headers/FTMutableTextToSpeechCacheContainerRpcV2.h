// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHCACHECONTAINERRPCV2_H
#define FTMUTABLETEXTTOSPEECHCACHECONTAINERRPCV2_H

@class NSString;


#import "FTTextToSpeechCacheContainerRpcV2.h"
#import "FTTextToSpeechRequest.h"
#import "FTTextToSpeechResponse.h"

@interface FTMutableTextToSpeechCacheContainerRpcV2 : FTTextToSpeechCacheContainerRpcV2

@property (copy, nonatomic) FTTextToSpeechRequest *cached_request;
@property (copy, nonatomic) FTTextToSpeechResponse *cached_response;
@property (copy, nonatomic) NSString *original_session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif