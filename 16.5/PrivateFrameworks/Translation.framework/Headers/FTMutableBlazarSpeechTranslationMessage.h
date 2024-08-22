// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEBLAZARSPEECHTRANSLATIONMESSAGE_H
#define FTMUTABLEBLAZARSPEECHTRANSLATIONMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTBlazarSpeechTranslationMessage.h"
#import "FTAudioLimitExceeded.h"
#import "FTAudioPacket.h"
#import "FTClientSetupInfo.h"
#import "FTFinalBlazarResponse.h"
#import "FTFinishAudio.h"
#import "FTLanguageDetected.h"
#import "FTRecognitionCandidate.h"
#import "FTRecognitionProgress.h"
#import "FTRequestStatsResponse.h"
#import "FTResetServerEndpointer.h"
#import "FTServerEndpointFeatures.h"
#import "FTSetEndpointerState.h"
#import "FTSpeechTranslationAudioPacket.h"
#import "FTSpeechTranslationFinalRecognitionResponse.h"
#import "FTSpeechTranslationMtResponse.h"
#import "FTSpeechTranslationPartialRecognitionResponse.h"
#import "FTSpeechTranslationServerEndpointFeatures.h"
#import "FTSpeechTranslationTextToSpeechResponse.h"
#import "FTStartSpeechTranslationLoggingRequest.h"
#import "FTStartSpeechTranslationRequest.h"

@interface FTMutableBlazarSpeechTranslationMessage : FTBlazarSpeechTranslationMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (copy, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (copy, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (copy, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (copy, nonatomic) FTSpeechTranslationAudioPacket *session_messageAsFTSpeechTranslationAudioPacket;
@property (copy, nonatomic) FTSpeechTranslationFinalRecognitionResponse *session_messageAsFTSpeechTranslationFinalRecognitionResponse;
@property (copy, nonatomic) FTSpeechTranslationMtResponse *session_messageAsFTSpeechTranslationMtResponse;
@property (copy, nonatomic) FTSpeechTranslationPartialRecognitionResponse *session_messageAsFTSpeechTranslationPartialRecognitionResponse;
@property (copy, nonatomic) FTSpeechTranslationServerEndpointFeatures *session_messageAsFTSpeechTranslationServerEndpointFeatures;
@property (copy, nonatomic) FTSpeechTranslationTextToSpeechResponse *session_messageAsFTSpeechTranslationTextToSpeechResponse;
@property (copy, nonatomic) FTStartSpeechTranslationLoggingRequest *session_messageAsFTStartSpeechTranslationLoggingRequest;
@property (copy, nonatomic) FTStartSpeechTranslationRequest *session_messageAsFTStartSpeechTranslationRequest;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif