// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRNEURALRECOGNIZERCONFIGURATION_H
#define CRNEURALRECOGNIZERCONFIGURATION_H

@class NSURL, NSArray, NSString;


#import "CRRecognizerConfiguration.h"
#import "CRConfidenceThresholds.h"
#import "CRTitleParameters.h"

@interface CRNeuralRecognizerConfiguration : CRRecognizerConfiguration

@property (readonly) NSInteger batchSize; // ivar: _batchSize
@property (readonly) int colorSpace; // ivar: _colorSpace
@property (readonly) CRConfidenceThresholds *confidenceThresholds;
@property (readonly) NSURL *customModelURL; // ivar: _customModelURL
@property (readonly) NSArray *customWords; // ivar: _customWords
@property (readonly) BOOL decodeWithLM; // ivar: _decodeWithLM
@property (readonly) BOOL filterWithLM;
@property float highConfidenceThreshold; // ivar: _highConfidenceThreshold
@property (readonly) CGFloat inputHeight; // ivar: _inputHeight
@property (readonly) NSArray *inputWidths; // ivar: _inputWidths
@property (readonly) NSString *locale; // ivar: _locale
@property (readonly) NSInteger maxConcurrentBatches; // ivar: _maxConcurrentBatches
@property float mediumConfidenceThreshold; // ivar: _mediumConfidenceThreshold
@property (readonly) float precisionThreshold; // ivar: _precisionThreshold
@property BOOL rectifyPolygons; // ivar: _rectifyPolygons
@property (readonly) CRTitleParameters *titleParameters; // ivar: _titleParameters


-(BOOL)usesAppleNeuralEngine;
-(NSInteger)bestFitWidthIndexForAspectRatio:(CGFloat)arg0 ;
-(id)initV1DefaultConfigWithOptions:(id)arg0 ;
-(id)initV2DefaultConfigWithOptions:(id)arg0 ;
-(id)initV3DefaultConfigWithOptions:(id)arg0 ;
-(id)initWithLocale:(id)arg0 imageReaderOptions:(id)arg1 error:(*id)arg2 ;
-(id)textFeatureFilter;


@end


#endif