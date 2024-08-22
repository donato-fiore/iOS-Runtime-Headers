// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDANGLEGRADIENT_H
#define TSDANGLEGRADIENT_H

@protocol TSDMixing;


#import "TSDGradient.h"

@interface TSDAngleGradient : TSDGradient <TSDMixing>



@property (nonatomic) CGFloat gradientAngle; // ivar: mAngle
@property (readonly, nonatomic) CGFloat gradientAngleInDegrees;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)p_bestGradientLengthForRect:(struct CGRect )arg0 atAngle:(CGFloat)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithGradientStops:(id)arg0 type:(NSUInteger)arg1 opacity:(CGFloat)arg2 angle:(CGFloat)arg3 ;
-(id)initWithStartColor:(id)arg0 endColor:(id)arg1 type:(NSUInteger)arg2 angle:(CGFloat)arg3 ;
-(id)insertStopAtFraction:(CGFloat)arg0 ;
-(id)insertStopAtFraction:(CGFloat)arg0 withColor:(id)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)removeStopAtIndex:(NSUInteger)arg0 ;
-(struct CGAffineTransform )p_shadingTransformForBounds:(struct CGRect )arg0 ;
-(struct CGPoint )endPointForPath:(id)arg0 andBounds:(struct CGRect )arg1 ;
-(struct CGPoint )startPointForPath:(id)arg0 andBounds:(struct CGRect )arg1 ;
-(void)evenlyDistributeStops;
-(void)insertGradientStop:(id)arg0 ;
-(void)moveStopAtIndex:(NSUInteger)arg0 toFraction:(CGFloat)arg1 ;
-(void)p_paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 isPDF:(BOOL)arg3 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 atAngle:(CGFloat)arg2 ;
-(void)removeStop:(id)arg0 ;
-(void)reverseStopOrder;
-(void)setColorOfStopAtIndex:(NSUInteger)arg0 toColor:(id)arg1 ;
-(void)setFirstColor:(id)arg0 ;
-(void)setGradientStops:(id)arg0 ;
-(void)setGradientType:(NSUInteger)arg0 ;
-(void)setInflectionOfStopAtIndex:(NSUInteger)arg0 toInflection:(CGFloat)arg1 ;
-(void)setLastColor:(id)arg0 ;
-(void)swapStopAtIndex:(NSUInteger)arg0 withStopAtIndex:(NSUInteger)arg1 ;


@end


#endif