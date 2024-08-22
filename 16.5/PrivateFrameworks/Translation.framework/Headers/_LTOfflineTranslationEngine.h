// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTOFFLINETRANSLATIONENGINE_H
#define _LTOFFLINETRANSLATIONENGINE_H

@class NSDictionary, EMTTranslator, NSLocale, NSError, NSArray, NSString, NSURL;
@protocol _LTTranslationEngine, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "_LTSpeechTranslationAssetInfo.h"
#import "_LTMultilingualSpeechRecognizer.h"
#import "_LTOfflineSpeechSynthesizer.h"
#import "_LTLanguageDetectionResult.h"
#import "_LTLocalePair.h"
#import "_LTTextToSpeechCache.h"

@interface _LTOfflineTranslationEngine : NSObject <_LTTranslationEngine>

 {
    _LTSpeechTranslationAssetInfo *_assetInfo;
    _LTMultilingualSpeechRecognizer *_recognizer;
    _LTOfflineSpeechSynthesizer *_synthesizer;
    NSDictionary *_etiquetteSanitizers;
    EMTTranslator *_translator;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_lidWaitGroup;
    NSLocale *_lidBestResult;
    _LTLanguageDetectionResult *_lidResult;
    BOOL _didEndpointSpeech;
    NSError *_earError;
}


@property (retain, nonatomic) NSArray *asrModelURLs; // ivar: _asrModelURLs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _LTLocalePair *localePair; // ivar: _localePair
@property (retain, nonatomic) NSURL *mtModelURL; // ivar: _mtModelURL
@property (readonly) Class superclass;
@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache; // ivar: _ttsCache


-(BOOL)translatesPair:(id)arg0 ;
-(id)_getBestRecognitionResult:(id)arg0 context:(id)arg1 ;
-(id)_handleTranslationResults:(id)arg0 withContext:(id)arg1 ;
-(id)_paragraphResultFromSentences:(id)arg0 ;
-(id)initWithLocalePair:(id)arg0 assetInfo:(id)arg1 ;
-(void)_loadEtiquetteSanitizers;
-(void)_loadRecognizers;
-(void)_loadTranslatorForTask:(id)arg0 ;
-(void)_translate:(id)arg0 withContext:(id)arg1 isFinal:(BOOL)arg2 completion:(id)arg3 ;
// -(void)_translate:(id)arg0 withContext:(id)arg1 toLocale:(id)arg2 paragraphResult:(id)arg3 completion:(unk)arg4  ;
-(void)_translateParagraph:(id)arg0 withContext:(id)arg1 toLocale:(id)arg2 completion:(id)arg3 ;
-(void)_translatePrepare:(id)arg0 ;
-(void)_translateString:(id)arg0 withContext:(id)arg1 toLocale:(id)arg2 withSpans:(id)arg3 completion:(id)arg4 ;
-(void)_waitForLIDWithContext:(id)arg0 completion:(id)arg1 ;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)cancelRecognition;
-(void)cancelSpeechTranslation;
-(void)endAudio;
-(void)endpoint;
-(void)preheatAsynchronously:(BOOL)arg0 withContext:(id)arg1 ;
-(void)setLanguagesRecognized:(id)arg0 ;
-(void)speak:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)startSpeechTranslationWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg0 text:(id)arg1 delegate:(id)arg2 ;
// -(void)translate:(id)arg0 withContext:(id)arg1 paragraphResult:(id)arg2 completion:(unk)arg3  ;
-(void)translateSentence:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;


@end


#endif