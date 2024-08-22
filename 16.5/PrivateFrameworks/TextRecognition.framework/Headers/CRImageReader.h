// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRIMAGEREADER_H
#define CRIMAGEREADER_H

@class NSArray, NSDictionary;
@protocol CREngine;

#import <Foundation/Foundation.h>


@interface CRImageReader : NSObject {
    NSArray *_outputObjectTypes;
}


@property (retain, nonatomic) NSObject<CREngine> *engine; // ivar: _engine
@property (copy) NSArray *outputObjectTypes;
@property BOOL shouldCancel; // ivar: _shouldCancel
@property (retain, nonatomic) NSDictionary *userOptions; // ivar: _userOptions


+(BOOL)languageIsChinese:(id)arg0 ;
+(BOOL)languageIsCyrillic:(id)arg0 ;
+(BOOL)languageIsJapanese:(id)arg0 ;
+(BOOL)languageIsKorean:(id)arg0 ;
+(BOOL)languageIsLatin:(id)arg0 ;
+(BOOL)preheatModelsForOptions:(id)arg0 revision:(NSInteger)arg1 error:(*id)arg2 ;
+(Class)_engineClassFromOptions:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)_typeForFeature:(id)arg0 enginePreferredRegionType:(NSUInteger)arg1 ;
+(NSUInteger)defaultRevisionNumber;
+(id)_engineFromOptions:(id)arg0 error:(*id)arg1 ;
+(id)defaultOptions;
+(id)descriptionForErrorCode:(NSInteger)arg0 ;
+(id)errorWithErrorCode:(NSInteger)arg0 ;
+(id)languageSetFromOptionsDictionary:(id)arg0 ;
+(id)prioritizationForOptions:(id)arg0 ;
+(id)supportedLanguagesForOptions:(id)arg0 revision:(NSInteger)arg1 error:(*id)arg2 ;
+(struct CGSize )detectorImageSizeForOptions:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(BOOL)purgeCaches:(id)arg0 ;
-(id)_lineRegionFromTextFeature:(id)arg0 imageSize:(struct CGSize )arg1 titleFeature:(id)arg2 title:(*id)arg3 ;
-(id)_lineRegionsFromTextFeatures:(id)arg0 imageSize:(struct CGSize )arg1 titleFeature:(id)arg2 title:(*id)arg3 ;
-(id)_regionsFromTextFeatures:(id)arg0 imageSize:(struct CGSize )arg1 titleFeature:(id)arg2 title:(*id)arg3 ;
-(id)confidenceThresholdProvider;
-(id)detectorInferenceStats;
-(id)detectorStats;
-(id)documentOutputRegionForImage:(id)arg0 options:(id)arg1 roi:(struct CGRect )arg2 error:(*id)arg3 withProgressHandler:(id)arg4 ;
-(id)documentOutputRegionForImage:(id)arg0 roi:(struct CGRect )arg1 error:(*id)arg2 withProgressHandler:(id)arg3 ;
-(id)documentOutputRegionForTextFeatures:(id)arg0 image:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)lineWrappingStats;
-(id)orientationCorrectionStats;
-(id)postProcStats;
-(id)recognizeDetectedBlocks:(id)arg0 inImage:(id)arg1 error:(*id)arg2 withProgressHandler:(id)arg3 ;
-(id)recognizerDecodingStats;
-(id)recognizerInferenceStats;
-(id)recognizerStats;
-(id)resultsForCRImage:(id)arg0 roi:(struct CGRect )arg1 options:(id)arg2 error:(*id)arg3 withProgressHandler:(id)arg4 ;
-(id)resultsForPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)resultsForPixelBuffer:(struct __CVBuffer *)arg0 roi:(struct CGRect )arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)resultsForPixelBuffer:(struct __CVBuffer *)arg0 roi:(struct CGRect )arg1 options:(id)arg2 error:(*id)arg3 withProgressHandler:(id)arg4 ;
-(id)textDetectorResultsForImage:(id)arg0 error:(*id)arg1 ;
-(id)textGroupingStats;
-(id)textRecognizerResultsForTextFeatures:(id)arg0 forImageAtURL:(id)arg1 options:(id)arg2 ;
-(id)textRecognizerResultsForTextFeatures:(id)arg0 inImage:(id)arg1 options:(id)arg2 ;
-(id)textResultsForImage:(id)arg0 options:(id)arg1 ;
-(id)textResultsForImage:(id)arg0 options:(id)arg1 withProgressHandler:(id)arg2 ;
-(id)textResultsForImage:(id)arg0 roi:(struct CGRect )arg1 options:(id)arg2 error:(*id)arg3 withProgressHandler:(id)arg4 ;
-(id)textResultsForImageAtURL:(id)arg0 options:(id)arg1 ;
-(struct CGSize )smallestImageSizeForTextWithRelativeHeight:(CGFloat)arg0 originalImageSize:(struct CGSize )arg1 ;
-(void)cancel;


@end


#endif