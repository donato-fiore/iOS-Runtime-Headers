// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRFEATURESEQUENCERECOGNITIONINFO_H
#define CRFEATURESEQUENCERECOGNITIONINFO_H

@class NSString;
@protocol CRTextRecognizerFeatureInfo, CRTextRecognizerDecodingTransientResult;

#import <Foundation/Foundation.h>

#import "CRTextFeature.h"

@interface CRFeatureSequenceRecognitionInfo : NSObject <CRTextRecognizerFeatureInfo>



@property CGRect bounds; // ivar: _bounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGSize featureImageSize; // ivar: _featureImageSize
@property (readonly) NSUInteger hash;
@property NSInteger orientationAdjustment; // ivar: _orientationAdjustment
@property CGFloat orientationConfidence; // ivar: _orientationConfidence
@property (retain) NSString *orientationOutputResult; // ivar: _orientationOutputResult
@property CGRect rotatedROI; // ivar: _rotatedROI
@property float scale; // ivar: _scale
@property (retain) NSString *sequenceScript; // ivar: _sequenceScript
@property (retain) NSString *sequenceScriptOutputResult; // ivar: _sequenceScriptOutputResult
@property (readonly) Class superclass;
@property (retain) CRTextFeature *textFeature; // ivar: _textFeature
@property (retain) NSObject<CRTextRecognizerDecodingTransientResult> *transientDecodingResult; // ivar: _transientDecodingResult


+(id)infoForFeature:(id)arg0 scale:(float)arg1 bounds:(struct CGRect )arg2 featureImageSize:(struct CGSize )arg3 rotatedROI:(struct CGRect )arg4 ;


@end


#endif