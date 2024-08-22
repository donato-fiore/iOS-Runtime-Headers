// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLATTENTIONAWARENESSEFFECTPROCESSOR_H
#define TLATTENTIONAWARENESSEFFECTPROCESSOR_H

@class NSString, AVAudioSession, AVAudioPCMBuffer, AVAudioEngine, AVAudioInputNode, AVAudioUnitEQ, AVAudioUnitReverb;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TLAttentionAwarenessEffectProcessor : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    AVAudioSession *_audioSession;
    AVAudioPCMBuffer *_destinationPCMBuffer;
    AVAudioEngine *_engine;
    AVAudioInputNode *_inputNode;
    *AudioBufferList _inputNodeInputBufferList;
    AVAudioUnitEQ *_lowPassFilter;
    AVAudioUnitReverb *_reverb;
    ? _effectParameters;
    NSObject<OS_dispatch_source> *_effectMixFadingTimer;
}


@property (nonatomic) ? effectParameters;


-(BOOL)start;
-(float)_currentEffectMix;
-(float)_sanitizeEffectMix:(float)arg0 ;
-(id)initWithProcessingFormat:(id)arg0 framesPerRender:(unsigned int)arg1 audioSession:(id)arg2 effectParameters:(struct ? )arg3 ;
-(struct AudioBufferList *)render:(struct AudioBufferList *)arg0 numberOfFrames:(unsigned int)arg1 ;
-(void)_applyEffectMix:(float)arg0 ;
-(void)_applyEffectParameters:(struct ? )arg0 includingEffectMix:(BOOL)arg1 ;
-(void)_assertNotRunningOnAccessQueue;
-(void)_assertRunningOnAccessQueue;
-(void)dealloc;
-(void)stop;


@end


#endif