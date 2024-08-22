// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGREQUEST_H
#define FTMUTABLETEXTTOSPEECHSTREAMINGSTREAMINGREQUEST_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTTextToSpeechStreamingStreamingRequest.h"
#import "FTStartTextToSpeechStreamingRequest.h"

@interface FTMutableTextToSpeechStreamingStreamingRequest : FTTextToSpeechStreamingStreamingRequest

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;
@property (nonatomic) NSInteger content_type;


+(Class)content_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)content_typeForMutableObject:(id)arg0 ;
+(NSInteger)content_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif