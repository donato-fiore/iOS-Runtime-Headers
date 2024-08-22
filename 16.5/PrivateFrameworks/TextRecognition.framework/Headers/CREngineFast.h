// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRENGINEFAST_H
#define CRENGINEFAST_H

@class NSString, NSDictionary;
@protocol CREngine;

#import <Foundation/Foundation.h>

#import "CRLanguageCorrection.h"
#import "CRPerformanceStatistics.h"

@interface CREngineFast : NSObject <CREngine>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CRLanguageCorrection *languageCorrection; // ivar: _languageCorrection
@property (retain) CRPerformanceStatistics *languageCorrectionStats; // ivar: _languageCorrectionStats
@property (retain) NSDictionary *options; // ivar: _options
@property NSUInteger revision; // ivar: _revision
@property BOOL shouldCancel; // ivar: _shouldCancel
@property (readonly) Class superclass;
@property (retain) CRPerformanceStatistics *textRecognitionStats; // ivar: _textRecognitionStats


+(BOOL)preheatModelsForOptions:(id)arg0 revision:(NSInteger)arg1 error:(*id)arg2 ;
+(id)supportedLanguagesForRevision:(NSInteger)arg0 error:(*id)arg1 ;
+(struct CGSize )detectorImageSizeForOptions:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(BOOL)lmValidateProbability:(id)arg0 options:(id)arg1 ;
-(BOOL)noLMValidateProbability:(id)arg0 options:(id)arg1 ;
-(BOOL)validateProbability:(id)arg0 validRangeMin:(CGFloat)arg1 validRangeMax:(CGFloat)arg2 options:(id)arg3 ;
-(NSUInteger)subfeatureOutputType;
-(float)highConfidenceThreshold;
-(float)mediumConfidenceThreshold;
-(id)applyLanguageCorrectionToResults:(id)arg0 image:(id)arg1 latticeResults:(*id)arg2 progressHandler:(id)arg3 ;
-(id)filterResultsForTextFeatures:(id)arg0 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
// -(id)textResultsInImage:(id)arg0 options:(id)arg1 withProgressHandler:(id)arg2 error:(unk)arg3  ;
-(id)thresholdsForTextFeature:(id)arg0 ;
-(struct CGSize )smallestImageSizeForTextWithRelativeHeight:(CGFloat)arg0 originalImageSize:(struct CGSize )arg1 ;
-(void)cancel;


@end


#endif