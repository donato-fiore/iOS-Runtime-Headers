// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTSYNCKEYWORDANALYZERQUASAR_H
#define VTSYNCKEYWORDANALYZERQUASAR_H

@class _EARSyncSpeechRecognizer, NSDictionary;

#import <Foundation/Foundation.h>


@interface VTSyncKeywordAnalyzerQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    BOOL _requireReset;
    BOOL _preventDuplicatedReset;
    NSDictionary *_phToPhIdMap;
    NSUInteger _numPhrases;
}




+(id)_phToPhIdMapFromTriggerTokensArray:(id)arg0 ;
+(void)dumpEARSpeechRecognitionResults:(id)arg0 ;
-(id)_getAnalyzedResults:(id)arg0 ;
-(id)getAnalyzedResultsFromFloatAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)getAnalyzedResultsFromInt16AudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)getResultsFromFlushedAudio;
-(id)initWithConfigPath:(id)arg0 triggerTokensArray:(id)arg1 preventDuplicatedReset:(BOOL)arg2 memoryLock:(BOOL)arg3 ;
-(void)flushAudio;
-(void)reset;


@end


#endif