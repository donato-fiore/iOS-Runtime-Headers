// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSPEECHSYNTHESIZER_H
#define VSSPEECHSYNTHESIZER_H

@class NSString, NSUUID, AFAudioPowerUpdater, NSMutableDictionary, AFAudioPowerXPCProvider, SiriTTSDaemonSession;
@protocol VSSpeechConnectionDelegate, AFAudioPowerProviding, OS_dispatch_queue, VSSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>

#import "VSSpeechConnection.h"

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate, AFAudioPowerProviding>

 {
    NSString *_clientBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    VSSpeechConnection *_xpcConnection;
    NSString *_identifier;
    ? _synthesizerFlags;
}


@property (copy, nonatomic) NSUUID *accessoryID; // ivar: _accessoryID
@property (retain, nonatomic) AFAudioPowerUpdater *audioPowerUpdater; // ivar: _audioPowerUpdater
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPowerUpdaterQueue; // ivar: _audioPowerUpdaterQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSSpeechSynthesizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *durationRequests; // ivar: _durationRequests
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPlayingPreview; // ivar: _isPlayingPreview
@property (nonatomic) BOOL keepActive;
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) float pitch; // ivar: _pitch
@property (retain, nonatomic) AFAudioPowerXPCProvider *previewAudioPowerXPCProvider; // ivar: _previewAudioPowerXPCProvider
@property (retain, nonatomic) SiriTTSDaemonSession *proxySession; // ivar: _proxySession
@property (nonatomic) float rate; // ivar: _rate
@property (retain, nonatomic) NSMutableDictionary *stsRequestMapping; // ivar: _stsRequestMapping
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *voice; // ivar: _voice
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)playVoicePreviewForLanguageCode:(id)arg0 voiceName:(id)arg1 previewType:(NSInteger)arg2 completion:(id)arg3 ;
+(id)characterClassCountForUtterance:(id)arg0 language:(id)arg1 ;
+(id)errorWithReason:(id)arg0 ;
+(id)sharedInstance;
+(id)validateAudioCachingRequest:(id)arg0 ;
+(id)validateAudioRequest:(id)arg0 ;
+(id)validatePrewarmRequest:(id)arg0 ;
+(id)validateRequest:(id)arg0 ;
+(void)stopPlayingVoicePreview;
-(BOOL)STS_isSpeaking;
-(BOOL)continueSpeakingWithError:(*id)arg0 ;
-(BOOL)getAveragePower:(*float)arg0 andPeakPower:(*float)arg1 ;
-(BOOL)isSpeaking;
-(BOOL)isSystemSpeaking;
-(BOOL)pauseSpeakingAtNextBoundary:(NSInteger)arg0 synchronously:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)queryPhaticCapability:(id)arg0 ;
-(BOOL)stopSpeakingAtNextBoundary:(NSInteger)arg0 synchronously:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)stopSpeakingPresynthesizedAudioSynchronously:(BOOL)arg0 error:(*id)arg1 ;
-(CGFloat)STS_estimateDurationOfRequest:(id)arg0 ;
-(CGFloat)estimateDurationOfRequest:(id)arg0 ;
-(float)maximumRate;
-(float)minimumRate;
-(id)STS_prewarmRequest:(id)arg0 ;
-(id)STS_signalInlineStreaming:(id)arg0 ;
-(id)STS_startSpeakingAudioRequest:(id)arg0 ;
-(id)STS_startSpeakingRequest:(id)arg0 ;
-(id)STS_startSynthesizingRequest:(id)arg0 ;
-(id)_continueSpeakingRequest;
-(id)_pauseSpeakingRequestAtNextBoundary:(NSInteger)arg0 synchronously:(BOOL)arg1 ;
-(id)_stopSpeakingPresynthesizedAudioRequest:(id)arg0 synchronously:(BOOL)arg1 ;
-(id)_stopSpeakingRequest:(id)arg0 atNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2 ;
-(id)availableFootprintsForVoice:(id)arg0 languageCode:(id)arg1 ;
-(id)availableLanguageCodes;
-(id)availableVoicesForLanguageCode:(id)arg0 ;
-(id)cachePresynthesizedAudioRequest:(id)arg0 ;
-(id)errorFromSTSError:(id)arg0 ;
-(id)init;
-(id)initForInputFeedback;
-(id)initWithAccessoryID:(id)arg0 ;
-(id)prewarmIfNeededWithRequest:(id)arg0 ;
-(id)speechString;
-(id)startSpeakingPresynthesizedAudioRequest:(id)arg0 ;
-(id)startSpeakingRequest:(id)arg0 ;
-(id)startSynthesizingRequest:(id)arg0 ;
-(void)STS_cancelAudioRequest:(id)arg0 ;
-(void)STS_cancelRequest:(id)arg0 ;
-(void)STS_downloadedVoicesMatching:(id)arg0 reply:(id)arg1 ;
-(void)STS_estimateDurationOfRequest:(id)arg0 completion:(id)arg1 ;
-(void)STS_forwardStreamObject:(id)arg0 ;
-(void)STS_getSynthesisVoiceMatching:(id)arg0 reply:(id)arg1 ;
-(void)STS_queryPhaticCapabilityWithRequest:(id)arg0 reply:(id)arg1 ;
-(void)STS_subscribeVoices:(id)arg0 ;
-(void)STS_subscribedVoices:(id)arg0 ;
-(void)STS_subscribedVoicesWithClientID:(id)arg0 reply:(id)arg1 ;
-(void)STS_textToPhonemesWithRequest:(id)arg0 phonemeSystem:(NSInteger)arg1 completion:(id)arg2 ;
-(void)beginAudioPowerUpdateWithReply:(id)arg0 ;
-(void)cancelAudioRequest:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
-(void)cleanUnusedAssets:(id)arg0 ;
-(void)connection:(id)arg0 invalidatedWithError:(id)arg1 ;
-(void)connection:(id)arg0 presynthesizedAudioRequest:(id)arg1 didStopAtEnd:(BOOL)arg2 error:(id)arg3 ;
-(void)connection:(id)arg0 presynthesizedAudioRequest:(id)arg1 successWithInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg0 presynthesizedAudioRequestDidStart:(id)arg1 ;
-(void)connection:(id)arg0 previewRequestDidStartPlaying:(id)arg1 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 didGenerateAudioChunk:(id)arg2 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 didStopAtEnd:(BOOL)arg2 phonemesSpoken:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 successWithInstrumentMetrics:(id)arg2 ;
-(void)connection:(id)arg0 speechRequest:(id)arg1 willSpeakMark:(NSInteger)arg2 inRange:(struct _NSRange )arg3 ;
-(void)connection:(id)arg0 speechRequestDidContinue:(id)arg1 ;
-(void)connection:(id)arg0 speechRequestDidPause:(id)arg1 ;
-(void)connection:(id)arg0 speechRequestDidStart:(id)arg1 ;
-(void)connection:(id)arg0 synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)didEndAccessPower;
-(void)endAudioPowerUpdate;
-(void)estimateDurationOfRequest:(id)arg0 completion:(id)arg1 ;
-(void)forwardStreamObject:(id)arg0 ;
-(void)getAllAutoDownloadedVoiceAssets:(id)arg0 ;
-(void)getAutoDownloadedVoiceAssets:(id)arg0 ;
-(void)getLocalVoiceAssets:(id)arg0 ;
-(void)getLocalVoiceAssetsForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)getLocalVoiceResources:(id)arg0 ;
-(void)getVoiceInfoForLanguageCode:(id)arg0 name:(id)arg1 footprint:(NSInteger)arg2 gender:(NSInteger)arg3 type:(NSInteger)arg4 reply:(id)arg5 ;
-(void)getVoiceInfoForLanguageCode:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 footprint:(NSInteger)arg3 reply:(id)arg4 ;
-(void)getVoiceResourceForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)invokeDaemon:(id)arg0 ;
-(void)killDaemon;
-(void)playVoicePreviewForLanguageCode:(id)arg0 voiceName:(id)arg1 previewType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg0 ;
-(void)stopPlayingVoicePreview;
-(void)textToPhonemesWithRequest:(id)arg0 phonemeSystem:(NSInteger)arg1 completion:(id)arg2 ;
-(void)triggerCellularDownloadedVoiceAssets:(id)arg0 ;
-(void)willBeginAccessPower;


@end


#endif