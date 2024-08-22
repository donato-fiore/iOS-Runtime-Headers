// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEASRRECOGNITIONMESSAGE_H
#define FTMUTABLEASRRECOGNITIONMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTAsrRecognitionMessage.h"
#import "FTAudioLimitExceeded.h"
#import "FTAudioPacket.h"
#import "FTCheckForSpeechRequest.h"
#import "FTCheckForSpeechResponse.h"
#import "FTClientSetupInfo.h"
#import "FTEndPointCandidate.h"
#import "FTEndPointLikelihood.h"
#import "FTFinalSpeechRecognitionResponse.h"
#import "FTFinishAudio.h"
#import "FTPartialSpeechRecognitionResponse.h"
#import "FTRecognitionCandidate.h"
#import "FTRecognitionProgress.h"
#import "FTRequestStatsResponse.h"
#import "FTResetServerEndpointer.h"
#import "FTServerEndpointFeatures.h"
#import "FTSetAlternateRecognitionSausage.h"
#import "FTSetEndpointerState.h"
#import "FTSetRequestOrigin.h"
#import "FTSetSpeechContext.h"
#import "FTSetSpeechProfile.h"
#import "FTStartSpeechRequest.h"
#import "FTUpdateAudioInfo.h"
#import "FTUpdatedAcousticProfile.h"

@interface FTMutableAsrRecognitionMessage : FTAsrRecognitionMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTCheckForSpeechRequest *session_messageAsFTCheckForSpeechRequest;
@property (copy, nonatomic) FTCheckForSpeechResponse *session_messageAsFTCheckForSpeechResponse;
@property (copy, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (copy, nonatomic) FTEndPointCandidate *session_messageAsFTEndPointCandidate;
@property (copy, nonatomic) FTEndPointLikelihood *session_messageAsFTEndPointLikelihood;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (copy, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (copy, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (copy, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (copy, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (copy, nonatomic) FTStartSpeechRequest *session_messageAsFTStartSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTUpdatedAcousticProfile *session_messageAsFTUpdatedAcousticProfile;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif