// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTPHRASEDETECTOR_H
#define VTPHRASEDETECTOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "VTKeywordAnalyzerNDAPI.h"
#import "VTSyncKeywordAnalyzerQuasar.h"

@interface VTPhraseDetector : NSObject

@property (nonatomic) BOOL isSecondChance; // ivar: _isSecondChance
@property (nonatomic) NSUInteger nearMissCandidateDetectedSamples; // ivar: _nearMissCandidateDetectedSamples
@property (nonatomic) NSUInteger nearMissDelayTimeout; // ivar: _nearMissDelayTimeout
@property (retain, nonatomic) NSMutableArray *phraseDetectorInfos; // ivar: _phraseDetectorInfos
@property (retain, nonatomic) NSMutableArray *phraseResult; // ivar: _phraseResult
@property (retain, nonatomic) VTKeywordAnalyzerNDAPI *syncKeywordAnalyzerNDAPI; // ivar: _syncKeywordAnalyzerNDAPI
@property (retain, nonatomic) VTSyncKeywordAnalyzerQuasar *syncKeywordAnalyzerQuasar; // ivar: _syncKeywordAnalyzerQuasar


-(BOOL)_isSecondChanceCandidateWithScore:(float)arg0 effectiveThreshold:(float)arg1 secondChanceThreshold:(float)arg2 ;
-(id)_getResultWithPhId:(NSUInteger)arg0 phraseDetectorInfo:(id)arg1 ndapiResult:(id)arg2 quasarResult:(id)arg3 forceMaximized:(BOOL)arg4 ;
-(id)_phraseDetectorResultFromNDAPIResults:(id)arg0 quasarResult:(id)arg1 forceMaximized:(BOOL)arg2 ;
-(id)_resultCopyWithKeywordDetectorDecision:(NSUInteger)arg0 bestPhId:(NSUInteger)arg1 phraseResult:(id)arg2 ;
-(id)getAnalyzedResultFromFloatAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)getAnalyzedResultFromFlushedAudio;
-(id)getAnalyzedResultFromInt16AudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)init;
-(id)phraseDetectorInfoFromPhId:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)setConfig:(id)arg0 ;
-(void)setRunAsSecondChance:(BOOL)arg0 ;


@end


#endif