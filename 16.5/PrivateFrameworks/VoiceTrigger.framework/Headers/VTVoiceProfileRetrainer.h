// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTVOICEPROFILERETRAINER_H
#define VTVOICEPROFILERETRAINER_H

@class NSString;
@protocol VTTextDependentSpeakerRecognizerDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "VTAnalyzerNDAPI.h"
#import "VTTextDependentSpeakerRecognizer.h"

@interface VTVoiceProfileRetrainer : NSObject <VTTextDependentSpeakerRecognizerDelegate>

 {
    CGFloat _retrainThresholdTrigger;
    CGFloat _retrainExplicitUttThresholdSAT;
    CGFloat _retrainExplicitUttThresholdTDSR;
    CGFloat _retrainThresholdSAT;
    CGFloat _retrainThresholdTDSR;
    CGFloat _retrainTDSRScore;
    NSUInteger _numRetentionUtterances;
}


@property (retain, nonatomic) VTAnalyzerNDAPI *analyzer; // ivar: _analyzer
@property (retain, nonatomic) NSString *configPath; // ivar: _configPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) NSUInteger modelType; // ivar: _modelType
@property (retain, nonatomic) NSString *resourcePath; // ivar: _resourcePath
@property (retain, nonatomic) VTTextDependentSpeakerRecognizer *satRetrainingTdSr; // ivar: _satRetrainingTdSr
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *satRetrainingTdSrSemaphore; // ivar: _satRetrainingTdSrSemaphore
@property (readonly) Class superclass;


-(BOOL)_updatePruningCookie:(id)arg0 ;
-(BOOL)pruneVoiceProfileIfNecessary;
-(CGFloat)_computeSamplingMSEForUtts:(id)arg0 withBeforeScores:(id)arg1 ;
-(NSUInteger)_deleteUtterances:(id)arg0 ;
-(id)_analyzeEnrollmentUtts:(id)arg0 thresholdTrigger:(CGFloat)arg1 thresholdSAT:(CGFloat)arg2 thresholdTDSR:(CGFloat)arg3 isUpdatingModel:(BOOL)arg4 extraUtts:(*id)arg5 discardUtts:(*id)arg6 psrTimeout:(*BOOL)arg7 ;
-(id)_getLastPruningCookie;
-(id)initWithAnalyzer:(id)arg0 languageCode:(id)arg1 modelType:(NSUInteger)arg2 configPath:(id)arg3 resourcePath:(id)arg4 ;
-(void)dealloc;
-(void)retrainSATModelWithCompletion:(id)arg0 ;
-(void)textDependentSpeakerRecognizer:(id)arg0 failedWithError:(id)arg1 ;
-(void)textDependentSpeakerRecognizer:(id)arg0 hasSatScore:(float)arg1 ;


@end


#endif