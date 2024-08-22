// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTKEYWORDANALYZERNDAPI_H
#define VTKEYWORDANALYZERNDAPI_H


#import <Foundation/Foundation.h>

#import "VTNovDetector.h"

@interface VTKeywordAnalyzerNDAPI : NSObject {
    VTNovDetector *_novDetector;
    NSUInteger _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    NSUInteger _lastSampleFed;
    NSUInteger _sampleFedWrapAroundOffset;
}


@property (nonatomic) unsigned int activePhId; // ivar: _activePhId


-(float)getLoggingThreshold;
-(float)getRejectLoggingThreshold;
-(float)getThreshold;
-(id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)arg0 phId:(NSUInteger)arg1 ;
-(id)getAnalyzedResults;
-(id)getAnalyzedResultsFromFloatAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)getAnalyzedResultsFromInt16AudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)getBestAnalyzedResults;
-(id)getBestAnalyzedResultsFromFloatAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)getBestAnalyzedResultsFromInt16AudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)getSuperVectorWithEndPoint:(NSUInteger)arg0 ;
-(id)initWithConfigPath:(id)arg0 resourcePath:(id)arg1 ;
-(void)_processAudioFloatBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)_processAudioInt16Buffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(NSUInteger)arg0 ;
-(void)analyzeWavData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)analyzeWavFloatData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)reset;
-(void)resetBest;


@end


#endif