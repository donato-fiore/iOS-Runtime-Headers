// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRTEXTDECODINGUTILS_H
#define CRTEXTDECODINGUTILS_H


#import <Foundation/Foundation.h>


@interface CRTextDecodingUtils : NSObject



+(BOOL)validateProbability:(id)arg0 precisionThreshold:(CGFloat)arg1 withLM:(BOOL)arg2 ;
+(id)characterRangesForTokens:(id)arg0 fromActivation:(id)arg1 falsePositiveFiltering:(BOOL)arg2 usingCharacterTokens:(BOOL)arg3 ;
+(id)tokenDelimiterRangesForTokens:(id)arg0 falsePositiveFiltering:(BOOL)arg1 usingCharacterTokens:(BOOL)arg2 ;
+(id)tokenFilterPredicateFalsePositiveFiltering:(BOOL)arg0 keepWhitespaceToken:(BOOL)arg1 ;
+(id)tokenSequenceStringForTokens:(id)arg0 falsePositiveFiltering:(BOOL)arg1 usingCharacterTokens:(BOOL)arg2 ;
+(id)wordTokensFromCharacterTokens:(id)arg0 ;
+(void)getBoundariesForRanges:(id)arg0 topPoints:(*id)arg1 bottomPoints:(*id)arg2 imageSize:(struct CGSize )arg3 scale:(float)arg4 featureImageSize:(struct CGSize )arg5 rect:(struct CGRect )arg6 rotatedRoi:(struct CGRect )arg7 radians:(float)arg8 model:(id)arg9 configuration:(id)arg10 paddingLeft:(int)arg11 paddingRight:(int)arg12 rangeOffset:(NSInteger)arg13 ;
+(void)getCharacterBoundariesForActivationRanges:(id)arg0 topPoints:(*id)arg1 bottomPoints:(*id)arg2 imageSize:(struct CGSize )arg3 scale:(float)arg4 featureImageSize:(struct CGSize )arg5 rect:(struct CGRect )arg6 rotatedRoi:(struct CGRect )arg7 radians:(float)arg8 model:(id)arg9 configuration:(id)arg10 ;
+(void)getWordBoundariesForWhiteSpaceRanges:(id)arg0 topPoints:(*id)arg1 bottomPoints:(*id)arg2 imageSize:(struct CGSize )arg3 scale:(float)arg4 featureImageSize:(struct CGSize )arg5 rect:(struct CGRect )arg6 rotatedRoi:(struct CGRect )arg7 radians:(float)arg8 model:(id)arg9 configuration:(id)arg10 rangeOffset:(NSInteger)arg11 ;


@end


#endif