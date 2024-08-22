// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRRECOGNIZERCONFIGURATION_H
#define CRRECOGNIZERCONFIGURATION_H

@protocol CRTextFeaturesFiltering, CRTextFeatureOrdering, MTLDevice;

#import <Foundation/Foundation.h>


@interface CRRecognizerConfiguration : NSObject

@property (readonly) CGFloat angleThresholdForRotatedCrops; // ivar: _angleThresholdForRotatedCrops
@property (retain) NSObject<CRTextFeaturesFiltering> *cachedTextFeatureFilter; // ivar: _cachedTextFeatureFilter
@property (retain) NSObject<CRTextFeatureOrdering> *cachedTextFeatureOrder; // ivar: _cachedTextFeatureOrder
@property (readonly) BOOL cpuOnly; // ivar: _cpuOnly
@property (readonly) BOOL falsePositiveFilteringDisabled; // ivar: _falsePositiveFilteringDisabled
@property (readonly) NSObject<MTLDevice> *metalDevice; // ivar: _metalDevice
@property (readonly) NSInteger numTopStringCandidates; // ivar: _numTopStringCandidates
@property BOOL optimizeGroupsForStability; // ivar: _optimizeGroupsForStability
@property (readonly) NSUInteger revision; // ivar: _revision
@property (readonly) BOOL scriptDetectionDisabled; // ivar: _scriptDetectionDisabled
@property (readonly) BOOL skipRecognition; // ivar: _skipRecognition
@property (readonly) NSObject<CRTextFeaturesFiltering> *textFeatureFilter;
@property (readonly) NSObject<CRTextFeatureOrdering> *textFeatureOrder;


+(id)languageSetFromInputLanguages:(id)arg0 supportedLanguages:(id)arg1 ;
+(id)supportedLanguagesForVersion:(NSInteger)arg0 ;
-(id)initV1DefaultConfigWithOptions:(id)arg0 ;
-(id)initV2DefaultConfigWithOptions:(id)arg0 ;
-(id)initV3DefaultConfigWithOptions:(id)arg0 ;
-(id)initWithImageReaderOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif