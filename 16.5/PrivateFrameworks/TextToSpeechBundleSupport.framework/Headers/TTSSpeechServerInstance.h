// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSPEECHSERVERINSTANCE_H
#define TTSSPEECHSERVERINSTANCE_H

@class TTSVoiceResourceAsset, NSLock, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ServerSpeechContext.h"
#import "TTSSpeechServer.h"
#import "TTSVocalizer.h"
#import "TTSTimer.h"

@interface TTSSpeechServerInstance : NSObject

@property (nonatomic) BOOL didTerminateThread; // ivar: _didTerminateThread
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mobileAssetWorkQueue; // ivar: _mobileAssetWorkQueue
@property (nonatomic) BOOL newVoiceInstalled; // ivar: _newVoiceInstalled
@property (retain) TTSVoiceResourceAsset *queuedSiriVoiceResourceToLoad; // ivar: _queuedSiriVoiceResourceToLoad
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // ivar: _serviceQueue
@property (nonatomic) BOOL shouldTerminateThread; // ivar: _shouldTerminateThread
@property (nonatomic) BOOL speechActive; // ivar: _speechActive
@property (retain, nonatomic) ServerSpeechContext *speechActiveContext; // ivar: _speechActiveContext
@property (nonatomic) *__CFRunLoopSource speechActivitySignal; // ivar: _speechActivitySignal
@property (retain, nonatomic) NSLock *speechLock; // ivar: _speechLock
@property (retain, nonatomic) NSMutableArray *speechRequestQueue; // ivar: _speechRequestQueue
@property (nonatomic) TTSSpeechServer *speechService; // ivar: _speechService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speechTerminationQueue; // ivar: _speechTerminationQueue
@property (nonatomic) unsigned char speechThreadActive; // ivar: _speechThreadActive
@property (nonatomic) BOOL speechThreadPriorityIsHigh; // ivar: _speechThreadPriorityIsHigh
@property (nonatomic) *__CFRunLoop speechThreadRunLoop; // ivar: _speechThreadRunLoop
@property (nonatomic) NSUInteger synthesizerId; // ivar: _synthesizerId
@property (copy, nonatomic) id *unitTestMarkerProcessingCallback; // ivar: _unitTestMarkerProcessingCallback
@property (retain, nonatomic) TTSVocalizer *vocalizer; // ivar: _vocalizer
@property (retain, nonatomic) TTSTimer *wordCallbackTimer; // ivar: _wordCallbackTimer


-(BOOL)_defaultVoiceIsFallback;
-(BOOL)_footprintOrVoiceNameHasChanged:(id)arg0 ;
-(BOOL)_languageCodeHasChanged:(id)arg0 oldLanguage:(id)arg1 ;
-(BOOL)_voiceTypeHasChanged:(id)arg0 ;
-(CGFloat)_computeMarkerDelayForByteOffset:(unsigned int)arg0 andContext:(id)arg1 ;
-(id)_loadOnDiskData:(id)arg0 ;
-(id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)arg0 playback:(struct __TTSPlayback *)arg1 inContext:(*void)arg2 ;
-(id)_ttSSpeechServerCopyVoiceInfoForLanguage:(id)arg0 voiceType:(NSInteger)arg1 queryingMobileAssets:(BOOL)arg2 ;
-(id)_unzipFile:(id)arg0 withPassword:(id)arg1 ;
-(id)init;
-(struct __CFArray *)loadedVoiceResources;
-(unsigned char)_activeRequestShouldContinue:(id)arg0 ;
-(unsigned char)_activeRequestShouldPauseImmediately:(id)arg0 ;
-(unsigned char)_activeRequestShouldStopAtAnyMark:(id)arg0 ;
-(unsigned char)_activeRequestShouldStopImmediately:(id)arg0 ;
-(unsigned char)_needsParameterChange:(id)arg0 lock:(unsigned char)arg1 rate:(*float)arg2 pitch:(*float)arg3 volume:(*float)arg4 footprint:(*NSInteger)arg5 voiceType:(*NSInteger)arg6 ;
-(unsigned char)_setActiveRequestActionForMark:(NSInteger)arg0 clientRequest:(id)arg1 markType:(NSInteger)arg2 ;
-(unsigned char)_shouldContinueSpeechGivenMark:(id)arg0 markType:(NSInteger)arg1 blockIfPaused:(unsigned char)arg2 ;
-(void)_appendSpeechRequestAndStart:(id)arg0 ;
-(void)_cleanupAfterRequest:(id)arg0 ;
-(void)_handleSpeechThread;
-(void)_initializeSpeech:(id)arg0 ;
-(void)_initializeSpeechEngine:(id)arg0 ;
-(void)_loadVoiceResource:(id)arg0 voiceResource:(id)arg1 onDiskData:(id)arg2 ;
-(void)_processCurrentRequest:(id)arg0 ;
-(void)_setParameters:(id)arg0 rate:(float)arg1 pitch:(float)arg2 volume:(float)arg3 footprint:(NSInteger)arg4 ;
-(void)_speechThreadSignal;
-(void)_startSpeechThread;
-(void)_terminateThread;
-(void)_uninitializeSpeech:(id)arg0 ;
-(void)continueSpeechRequest:(id)arg0 ;
-(void)dealloc;
-(void)getSpeechIsActiveForRequest:(id)arg0 reply:(id)arg1 ;
-(void)pauseSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)processGenericMarkerWithByteOffset:(unsigned int)arg0 name:(id)arg1 context:(id)arg2 ;
-(void)processPhonemeMarkerWithByteOffset:(unsigned int)arg0 phoneme:(id)arg1 alphabet:(NSInteger)arg2 context:(id)arg3 ;
-(void)processWordMarkerWithByteOffset:(unsigned int)arg0 markerPosition:(unsigned int)arg1 markerLength:(unsigned int)arg2 context:(id)arg3 secondPass:(BOOL)arg4 ;
-(void)startSpeechRequest:(id)arg0 ;
-(void)stopSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)terminateSpeechThread;


@end


#endif