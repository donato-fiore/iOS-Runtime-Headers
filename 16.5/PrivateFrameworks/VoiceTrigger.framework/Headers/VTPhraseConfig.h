// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTPHRASECONFIG_H
#define VTPHRASECONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VTPhraseConfig : NSObject

@property (readonly, nonatomic) float keywordRejectLoggingThreshold; // ivar: _keywordRejectLoggingThreshold
@property (readonly, nonatomic) float loggingThreshold; // ivar: _loggingThreshold
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) float ndapiScaleFactor; // ivar: _ndapiScaleFactor
@property (readonly, nonatomic) float preTriggerSilenceOffset; // ivar: _preTriggerSilenceOffset
@property (readonly, nonatomic) float recognizerScoreOffset; // ivar: _recognizerScoreOffset
@property (readonly, nonatomic) float recognizerScoreScaleFactor; // ivar: _recognizerScoreScaleFactor
@property (readonly, nonatomic) NSString *recognizerToken; // ivar: _recognizerToken
@property (readonly, nonatomic) float remoraTwoShotFeedbackDelay; // ivar: _remoraTwoShotFeedbackDelay
@property (readonly, nonatomic) float secondChanceThreshold; // ivar: _secondChanceThreshold
@property (readonly, nonatomic) float speakerRejectLoggingThreshold; // ivar: _speakerRejectLoggingThreshold
@property (readonly, nonatomic) float threshold; // ivar: _threshold
@property (readonly, nonatomic) float twoShotFeedbackDelay; // ivar: _twoShotFeedbackDelay


-(id)copyWithThreshold:(float)arg0 secondChanceThreshold:(float)arg1 loggingThreshold:(float)arg2 ndapiScaleFactor:(float)arg3 recognizerScoreOffset:(float)arg4 recognizerScoreScaleFactor:(float)arg5 keywordRejectLoggingThreshold:(float)arg6 ;
-(id)initWithName:(id)arg0 threshold:(float)arg1 secondChanceThreshold:(float)arg2 loggingThreshold:(float)arg3 ndapiScaleFactor:(float)arg4 recognizerScoreOffset:(float)arg5 recognizerScoreScaleFactor:(float)arg6 recognizerToken:(id)arg7 twoShotFeedbackDelay:(float)arg8 remoraTwoShotFeedbackDelay:(float)arg9 keywordRejectLoggingThreshold:(float)arg10 speakerRejectLoggingThreshold:(float)arg11 preTriggerSilenceOffset:(float)arg12 ;


@end


#endif