// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSULOGARITHMICREGRESSIONMODEL_H
#define TSULOGARITHMICREGRESSIONMODEL_H



#import "TSURegressionModel.h"

@interface TSULogarithmicRegressionModel : TSURegressionModel {
    *CGFloat mCoefficients;
    int mNumCoefficients;
    BOOL mAffine;
    CGFloat mIntercept;
    CGFloat mRSquared;
}




-(CGFloat)coefficientAtIndex:(int)arg0 ;
-(CGFloat)estimateForX:(*CGFloat)arg0 ;
-(CGFloat)rSquared;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg0 ;
-(id)initAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 ;
-(id)initNonAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 desiredIntercept:(CGFloat)arg4 ;
-(id)initWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 makeAffine:(BOOL)arg4 desiredIntercept:(CGFloat)arg5 ;
-(int)numCoefficients;
-(int)regressionType;
-(void)dealloc;


@end


#endif