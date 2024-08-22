// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTCOMBINEDENGINE_H
#define _LTCOMBINEDENGINE_H

@class NSString;
@protocol _LTSpeechTranslationDelegate, _LTTranslationEngine;

#import <Foundation/Foundation.h>

#import "_LTSpeechTranslationResultsBuffer.h"

@interface _LTCombinedEngine : NSObject <_LTSpeechTranslationDelegate, _LTTranslationEngine>

 {
    id<_LTSpeechTranslationDelegate> *_delegate;
    BOOL _onlineTranslationStarted;
    BOOL _translationEnded;
    BOOL _serverCompleted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _LTSpeechTranslationResultsBuffer *offlineDelegateBuffer; // ivar: _offlineDelegateBuffer
@property (retain, nonatomic) NSObject<_LTTranslationEngine> *offlineEngine; // ivar: _offlineEngine
@property (retain, nonatomic) NSObject<_LTTranslationEngine> *onlineEngine; // ivar: _onlineEngine
@property (readonly) Class superclass;


-(BOOL)translatesPair:(id)arg0 ;
-(id)init;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)cancelSpeechTranslation;
-(void)endAudio;
-(void)endpoint;
-(void)hybridEndpointerFoundEndpoint;
-(void)preheatAsynchronously:(BOOL)arg0 withContext:(id)arg1 ;
-(void)serverEndpointerFeatures:(id)arg0 locale:(id)arg1 ;
-(void)setLanguagesRecognized:(id)arg0 ;
-(void)speak:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)speechRecognitionResult:(id)arg0 ;
-(void)startSpeechTranslationWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg0 text:(id)arg1 delegate:(id)arg2 ;
// -(void)translate:(id)arg0 withContext:(id)arg1 paragraphResult:(id)arg2 completion:(unk)arg3  ;
-(void)translateSentence:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)translationDidFinishWithError:(id)arg0 ;
-(void)translatorDidTranslate:(id)arg0 ;


@end


#endif