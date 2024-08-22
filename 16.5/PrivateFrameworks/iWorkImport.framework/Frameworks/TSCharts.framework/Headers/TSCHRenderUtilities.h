// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHRENDERUTILITIES_H
#define TSCHRENDERUTILITIES_H


#import <Foundation/Foundation.h>


@interface TSCHRenderUtilities : NSObject



+(?)newImageFromFills:(?)arg0 size:(?)arg1 spaceBetween:(?)arg2 scale:(?)arg3 borderColoroutFillRects;
+(BOOL)centerPointForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 frame:(struct CGRect )arg2 point:(struct CGPoint *)arg3 ;
+(BOOL)centerPointForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 frame:(struct CGRect )arg2 point:(struct CGPoint *)arg3 nullsUseIntercept:(BOOL)arg4 ;
+(BOOL)strokeEnabledForRenderingForAxis:(id)arg0 chart:(id)arg1 ;
+(CGFloat)subSelectionKnobRadius;
+(id)lightenFillOrStroke:(id)arg0 byPercent:(CGFloat)arg1 ;
+(id)p_fillToRenderWithFill:(id)arg0 inContext:(struct CGContext *)arg1 ;
+(id)printCGPath:(struct CGPath *)arg0 ;
+(struct ? )barElementsRendererValueRangeForModelCache:(id)arg0 groupIndex:(NSUInteger)arg1 ;
+(struct CGAffineTransform )spokeTransformWithUnitCircleOffsetAngleInDegrees:(CGFloat)arg0 chartBodySize:(struct CGSize )arg1 chartInfo:(id)arg2 ;
+(struct CGColor *)newLightenedColor:(struct CGColor *)arg0 byPercent:(CGFloat)arg1 ;
+(struct CGColor *)subSelectionKnobFillColor;
+(struct CGColor *)subSelectionKnobStrokeColor;
+(struct CGLayer *)newCGLayerForUserSpaceRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 outUserSpaceLayerBounds:(struct CGRect *)arg2 ;
+(struct CGPath *)newClipPathForSymbol:(int)arg0 at:(struct CGPoint )arg1 width:(CGFloat)arg2 stroke:(id)arg3 ;
+(struct CGPath *)newPolarAxisShapePathWithRect:(struct CGRect )arg0 unitSpaceValue:(CGFloat)arg1 numberOfValues:(NSUInteger)arg2 elliptical:(BOOL)arg3 rotation:(CGFloat)arg4 ;
+(struct CGPath *)newRegularPolygonPathWithEdges:(NSUInteger)arg0 origin:(struct CGPoint )arg1 size:(struct CGSize )arg2 rotation:(CGFloat)arg3 ;
+(struct CGPath *)newStrokedPathFromPath:(struct CGPath *)arg0 stroke:(id)arg1 cap:(int)arg2 ;
+(struct CGPath *)newUnitPathForSymbol:(int)arg0 symbolSize:(CGFloat)arg1 stroke:(id)arg2 ;
+(struct CGPath *)p_newCirclePath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
+(struct CGPath *)p_newCrossPath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
+(struct CGPath *)p_newDiamondPath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
+(struct CGPath *)p_newPathForSymbol:(int)arg0 context:(struct CGContext *)arg1 at:(struct CGPoint )arg2 width:(CGFloat)arg3 pathLocation:(NSInteger)arg4 stroke:(id)arg5 ;
+(struct CGPath *)p_newPlusPath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 context:(struct CGContext *)arg4 ;
+(struct CGPath *)p_newSquarePath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 context:(struct CGContext *)arg4 ;
+(struct CGPath *)p_newTrianglePath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
+(struct CGPath *)p_newYieldPath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
+(struct CGPath *)p_regularPolygonOrLinePathWithEdges:(NSUInteger)arg0 sourceRect:(struct CGRect )arg1 ;
+(struct CGPoint )outerEndOfSpokeWithUnitCircleOffsetAngleInDegrees:(CGFloat)arg0 chartBodySize:(struct CGSize )arg1 chartInfo:(id)arg2 ;
+(struct CGRect )integralFillRenderingRectFromElementRect:(struct CGRect )arg0 ;
+(struct CGRect )labelRectFromClipRect:(struct CGRect )arg0 elementSize:(struct CGSize )arg1 ;
+(struct CGRect )scaleRect:(struct CGRect )arg0 toFit:(struct CGRect )arg1 ;
+(struct CGSize )maxSizeWithCount:(NSUInteger)arg0 initialSize:(struct CGSize )arg1 sizeGeneratorBlock:(id)arg2 ;
+(void)addTextSubselectionHalosToArray:(id)arg0 rect:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 ;
+(void)addTextSubselectionKnobsToArray:(id)arg0 rect:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 ;
+(void)debugRenderLayoutRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 withColor:(id)arg2 alpha:(CGFloat)arg3 fillRect:(BOOL)arg4 ;
+(void)drawFill:(id)arg0 inContext:(struct CGContext *)arg1 frame:(struct CGRect )arg2 ;
+(void)drawFill:(id)arg0 inContext:(struct CGContext *)arg1 path:(struct CGPath *)arg2 ;
+(void)drawImageFill:(id)arg0 inContext:(struct CGContext *)arg1 path:(struct CGPath *)arg2 withinBounds:(struct CGRect )arg3 ;
+(void)drawSymbol:(int)arg0 inContext:(struct CGContext *)arg1 at:(struct CGPoint )arg2 width:(CGFloat)arg3 fill:(id)arg4 stroke:(id)arg5 ;
+(void)updateStackRectsDictionary:(id)arg0 withElementRect:(struct CGRect )arg1 groupIndex:(NSUInteger)arg2 barModelCache:(id)arg3 ;


@end


#endif