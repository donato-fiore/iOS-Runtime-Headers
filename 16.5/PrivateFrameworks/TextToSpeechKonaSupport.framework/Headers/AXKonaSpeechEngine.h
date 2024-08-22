// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXKONASPEECHENGINE_H
#define AXKONASPEECHENGINE_H

@class AVAudioConverter, NSRegularExpression, NSDictionary, NSCondition, NSArray, AVAudioFormat, NSMutableArray, NLTokenizer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXKonaMarker.h"
#import "AXKonaParameters.h"
#import "AXKonaVoice.h"

@interface AXKonaSpeechEngine : NSObject {
    os_unfair_lock_s _bufferLock;
    short _pSampleBuffer;
}


@property (retain, nonatomic) AVAudioConverter *bufferConverter; // ivar: _bufferConverter
@property (retain, nonatomic) NSRegularExpression *commandRegex; // ivar: _commandRegex
@property (retain, nonatomic) NSDictionary *configurationMap; // ivar: _configurationMap
@property (retain, nonatomic) NSCondition *consumedBuffers; // ivar: _consumedBuffers
@property (nonatomic) *void currentDictionary; // ivar: _currentDictionary
@property (nonatomic) unsigned int currentFrameCount; // ivar: _currentFrameCount
@property (retain, nonatomic) AXKonaMarker *currentMarker; // ivar: _currentMarker
@property (retain, nonatomic) AXKonaParameters *currentParameters; // ivar: _currentParameters
@property (retain, nonatomic) NSArray *currentSpeechSegments; // ivar: _currentSpeechSegments
@property (retain, nonatomic) AXKonaVoice *currentVoice; // ivar: _currentVoice
@property (retain, nonatomic) AVAudioFormat *engineFormat; // ivar: _engineFormat
@property (nonatomic) float lastSampVal; // ivar: _lastSampVal
@property (retain, nonatomic) AVAudioFormat *outputFormat; // ivar: _outputFormat
@property (retain, nonatomic) AXKonaParameters *parameters;
@property (retain, nonatomic) NSCondition *producedBuffers; // ivar: _producedBuffers
@property (retain, nonatomic) NSMutableArray *queuedBuffers; // ivar: _queuedBuffers
@property (nonatomic) NSUInteger synthState; // ivar: _synthState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synthesizerSyncQueue; // ivar: _synthesizerSyncQueue
@property (retain, nonatomic) NLTokenizer *tokenizer; // ivar: _tokenizer
@property (nonatomic) *void wrappedInstance; // ivar: _wrappedInstance


+(id)allVoices;
-(BOOL)_initializeWrappedEngineForVoice:(id)arg0 ;
-(BOOL)_loadDictionaryAtPath:(id)arg0 type:(NSInteger)arg1 handle:(*void)arg2 ;
-(NSInteger)eciCallback:(NSInteger)arg0 iParam:(NSInteger)arg1 instanceData:(*void)arg2 ;
-(id)_konaCrashPatterns;
-(id)_preprocessTextForIrregularities:(id)arg0 ;
-(id)_segmentsForText:(id)arg0 ;
-(id)initWithVoice:(id)arg0 ;
-(id)nextBuffer;
-(void)_cancelSynthesis;
-(void)_enqueueBuffer:(id)arg0 ;
-(void)_initializeConfigurationMap;
-(void)_loadDictionaryForVoice:(id)arg0 ;
-(void)cancelSynthesis;
-(void)dealloc;
-(void)setVoice:(id)arg0 ;
-(void)synthesizeText:(id)arg0 ;


@end


#endif