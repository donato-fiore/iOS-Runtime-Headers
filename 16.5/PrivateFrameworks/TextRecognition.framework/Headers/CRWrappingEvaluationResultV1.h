// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRWRAPPINGEVALUATIONRESULTV1_H
#define CRWRAPPINGEVALUATIONRESULTV1_H

@class NSString;
@protocol CRWrappingEvaluationResult;

#import <Foundation/Foundation.h>

#import "CRLineWrapperV1Configuration.h"
#import "CRLineWrappingContext.h"
#import "CRTextFeature.h"

@interface CRWrappingEvaluationResultV1 : NSObject <CRWrappingEvaluationResult>

 {
    vector<unsigned int, std::allocator<unsigned int>> _cachedFeatureTokens;
}


@property float angleDiff; // ivar: _angleDiff
@property BOOL bothBeginWithDigits; // ivar: _bothBeginWithDigits
@property CGFloat cachedEOSLMScore; // ivar: _cachedEOSLMScore
@property ? cachedFeatureTokens;
@property CGFloat cachedLMScore; // ivar: _cachedLMScore
@property BOOL centerAligned; // ivar: _centerAligned
@property (retain) CRLineWrapperV1Configuration *configuration; // ivar: _configuration
@property (weak) CRLineWrappingContext *context; // ivar: _context
@property BOOL contextNoText; // ivar: _contextNoText
@property BOOL continuesToNewColumn; // ivar: _continuesToNewColumn
@property (readonly) BOOL contributesToVerticalSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat eosLMScore;
@property BOOL eosLMScoreSet; // ivar: _eosLMScoreSet
@property (readonly) BOOL excessiveVerticalDistance;
@property BOOL f1EndsWithDD; // ivar: _f1EndsWithDD
@property BOOL f2BeginsWithDD; // ivar: _f2BeginsWithDD
@property BOOL f2FullyDD; // ivar: _f2FullyDD
@property BOOL f2StartOfSentence; // ivar: _f2StartOfSentence
@property (retain) CRTextFeature *featureInTest; // ivar: _featureInTest
@property BOOL featureInTestNoText; // ivar: _featureInTestNoText
@property CGSize featureInTestSize; // ivar: _featureInTestSize
@property ? featureTokens;
@property BOOL featureTokensSet; // ivar: _featureTokensSet
@property (readonly) NSUInteger hash;
@property float horizontalOverlap; // ivar: _horizontalOverlap
@property (readonly) CGSize imageSize; // ivar: _imageSize
@property (readonly) BOOL isHyphenatedPrefixOfWord; // ivar: _isHyphenatedPrefixOfWord
@property BOOL isOversegmented; // ivar: _isOversegmented
@property CGSize lastFeatureSize; // ivar: _lastFeatureSize
@property BOOL leftAligned; // ivar: _leftAligned
@property float leftDistance; // ivar: _leftDistance
@property (readonly) CGFloat lmScore;
@property BOOL lmScoreSet; // ivar: _lmScoreSet
@property BOOL matchingLocales; // ivar: _matchingLocales
@property float midDistance; // ivar: _midDistance
@property BOOL midSentencePunctuated; // ivar: _midSentencePunctuated
@property BOOL multilineDD; // ivar: _multilineDD
@property float newParagraphIndentDistanceRatio; // ivar: _newParagraphIndentDistanceRatio
@property BOOL oversegmentedListItem; // ivar: _oversegmentedListItem
@property (retain) NSString *paragraphText; // ivar: _paragraphText
@property float rightDistance; // ivar: _rightDistance
@property (retain) NSString *sentencePuncStringToCheck; // ivar: _sentencePuncStringToCheck
@property (readonly) BOOL similarAngles;
@property (readonly) BOOL similarHeights;
@property (readonly) Class superclass;
@property (readonly) NSInteger textBasedEvaluation;
@property (readonly) NSInteger textContentWrappingScore;
@property float textHeightRatio; // ivar: _textHeightRatio
@property float textWidthRatio; // ivar: _textWidthRatio
@property (readonly) NSInteger tokenCountDiff;
@property float topDistanceLeft; // ivar: _topDistanceLeft
@property float topDistanceRight; // ivar: _topDistanceRight
@property float topDistanceRightToBottomLeft; // ivar: _topDistanceRightToBottomLeft
@property float verticalOverlap; // ivar: _verticalOverlap
@property CGFloat verticalSpacing; // ivar: _verticalSpacing
@property (readonly) CGFloat verticalSpacingToHeightRatio;
@property (readonly) CGFloat widthGrowth;
@property (readonly) NSInteger wordCountWrappingScore;
@property float xSpace; // ivar: _xSpace
@property float ySpace; // ivar: _ySpace


-(NSInteger)_tokenCountForString:(id)arg0 ;
-(NSInteger)caseWrappingScoreUsingCustomConfiguration:(BOOL)arg0 ;
-(NSInteger)punctuationWrappingScoreUsingCustomConfiguration:(BOOL)arg0 ;
-(id)_spaceSeparatedTokens:(id)arg0 ;
-(id)initWithTextFeature:(id)arg0 context:(id)arg1 imageSize:(struct CGSize )arg2 configuration:(id)arg3 ;
-(id)initWithTextFeature:(id)arg0 context:(id)arg1 imageSize:(struct CGSize )arg2 configuration:(id)arg3 skipTextComputation:(BOOL)arg4 ;
-(id)resultByMerging:(id)arg0 ;
-(void)_computeDDPropertiesWithContext:(id)arg0 ;
-(void)_computeGeometricPropertiesWithImageSize:(struct CGSize )arg0 ;
-(void)_computeIsHyphenatedPrefixOfWord:(id)arg0 ;
-(void)_computeLMScoreComputingEOS:(BOOL)arg0 ;
-(void)_computeNoTextWithContext:(id)arg0 ;


@end


#endif