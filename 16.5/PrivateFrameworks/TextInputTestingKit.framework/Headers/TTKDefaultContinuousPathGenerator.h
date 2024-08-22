// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKDEFAULTCONTINUOUSPATHGENERATOR_H
#define TTKDEFAULTCONTINUOUSPATHGENERATOR_H

@class NSString;
@protocol TTKContinuousPathGenerator;

#import <Foundation/Foundation.h>


@interface TTKDefaultContinuousPathGenerator : NSObject <TTKContinuousPathGenerator>

 {
    BOOL _genMidPoint;
    CGFloat _fingerKeyWdithMultiple;
    CGFloat _midPointKeyWidthMultiple;
    CGFloat _midPointDevKeyHeightMultiple;
    CGFloat _betaParam;
    CGFloat _normalKeyWidthMultiple;
    NSString *_touchTimingAlgorithm;
    CGFloat _acceleration;
    *void m_generator;
    *void m_gamma_distribution;
    *void m_normal_distribution;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat force; // ivar: _force
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property CGFloat timeDelta; // ivar: _timeDelta
@property CGFloat velocity; // ivar: _velocity


+(id)pathGeneratorWithAttributes:(id)arg0 ;
-(BOOL)canHandleDoubleLetter;
-(CGFloat)distanceBetween:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
-(CGFloat)dotProduct:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
-(CGFloat)randomNumberFromBetaDistribution;
-(CGFloat)randomNumberFromNormalDistribution;
-(id)boxPoint:(struct CGPoint )arg0 ;
-(id)generateAngularTiming:(id)arg0 ;
-(id)generateEquidistantTiming:(id)arg0 ;
-(id)generateInflections:(id)arg0 ;
-(id)generateKeyCentersFromKeys:(id)arg0 string:(id)arg1 layout:(id)arg2 ;
-(id)generateKeysFromString:(id)arg0 layout:(id)arg1 ;
-(id)generatePathFromInflectionPoints:(id)arg0 segmentTiming:(id)arg1 keys:(id)arg2 string:(id)arg3 layout:(id)arg4 ;
-(id)generatePathFromInflectionPoints:(id)arg0 timestamp:(CGFloat)arg1 duration:(CGFloat)arg2 segmentTiming:(id)arg3 keys:(id)arg4 string:(id)arg5 layout:(id)arg6 ;
-(id)generatePathFromInflectionPoints:(id)arg0 timestamp:(CGFloat)arg1 segmentTiming:(id)arg2 keys:(id)arg3 string:(id)arg4 layout:(id)arg5 ;
-(id)generatePathFromString:(id)arg0 layout:(id)arg1 ;
-(id)generatePathFromString:(id)arg0 timestamp:(CGFloat)arg1 duration:(CGFloat)arg2 layout:(id)arg3 ;
-(id)generatePathFromString:(id)arg0 timestamp:(CGFloat)arg1 layout:(id)arg2 ;
-(id)generateTimingArray:(id)arg0 ;
-(id)init;
-(id)initWithParams:(id)arg0 ;
-(struct CGPoint )addPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )scalarMultiplyPoint:(struct CGPoint )arg0 by:(CGFloat)arg1 ;
-(struct CGPoint )subtractPoint:(struct CGPoint )arg0 byPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )targetDeviatedNormallyFromPoint:(struct CGPoint )arg0 withKeyWidth:(CGFloat)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)setRandomNumberSeed:(unsigned int)arg0 ;


@end


#endif