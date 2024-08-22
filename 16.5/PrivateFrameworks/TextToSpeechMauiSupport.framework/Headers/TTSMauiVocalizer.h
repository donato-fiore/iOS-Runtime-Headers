// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSMAUIVOCALIZER_H
#define TTSMAUIVOCALIZER_H

@class TTSVocalizer;



@interface TTSMauiVocalizer : TTSVocalizer {
    _VE_HSAFE _veInstance;
    _VE_HSAFE _ttsVocalizerHSpeech;
    *_VE_HSAFE _ttsVocalizerHSpeechPtr;
    char * _ttsVocalizerCurrentLanguageName;
    char * _ttsVocalizerDefaultVoiceName;
}




-(BOOL)readyForSynthesis;
-(CGFloat)_ttsMauiVocalizerGetSampleRateFromEnum:(int)arg0 ;
-(CGFloat)_ttsVocalizerGetSampleRate;
-(id)_ttsVocalizerCreateInstanceWithDesiredVoiceName:(*char *)arg0 desiredFootprint:(NSInteger)arg1 languageCode:(struct __CFString *)arg2 voiceType:(NSInteger)arg3 ;
-(id)_ttsVocalizerProcessText:(struct __CFString *)arg0 callback:(*void)arg1 context:(*void)arg2 ;
-(id)_ttsVocalizerSetParameters:(float)arg0 pitch:(float)arg1 volume:(float)arg2 footprintID:(NSInteger)arg3 ;
-(id)initWithLanguage:(id)arg0 defaultLanguage:(id)arg1 reinitIfNecessary:(BOOL)arg2 forceReinit:(BOOL)arg3 voiceType:(NSInteger)arg4 gender:(NSInteger)arg5 footprint:(NSInteger)arg6 voiceName:(id)arg7 voiceIdentifier:(id)arg8 error:(*id)arg9 ;
-(unsigned int)_ttsVocalizerGetActiveLanguage:(struct _VE_HSAFE )arg0 language:(*char *)arg1 ;
-(unsigned int)_ttsVocalizerReallyLoadResource:(char *)arg0 rules:(struct __CFData *)arg1 resource:(struct _VE_HSAFE *)arg2 supportsAccurateWordCallbacks:(unsigned char)arg3 resourceIdentifier:(id)arg4 ;
-(void)_ttsVocalizerDestroy;
-(void)_ttsVocalizerDestroyInstance;


@end


#endif