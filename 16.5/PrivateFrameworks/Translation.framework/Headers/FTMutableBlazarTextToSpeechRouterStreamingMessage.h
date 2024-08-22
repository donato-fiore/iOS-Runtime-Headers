// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEBLAZARTEXTTOSPEECHROUTERSTREAMINGMESSAGE_H
#define FTMUTABLEBLAZARTEXTTOSPEECHROUTERSTREAMINGMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTBlazarTextToSpeechRouterStreamingMessage.h"
#import "FTBeginTextToSpeechStreamingResponse.h"
#import "FTFinalTextToSpeechStreamingResponse.h"
#import "FTPartialTextToSpeechStreamingResponse.h"
#import "FTStartTextToSpeechStreamingRequest.h"

@interface FTMutableBlazarTextToSpeechRouterStreamingMessage : FTBlazarTextToSpeechRouterStreamingMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTBeginTextToSpeechStreamingResponse *session_messageAsFTBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTFinalTextToSpeechStreamingResponse *session_messageAsFTFinalTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTPartialTextToSpeechStreamingResponse *session_messageAsFTPartialTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *session_messageAsFTStartTextToSpeechStreamingRequest;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif