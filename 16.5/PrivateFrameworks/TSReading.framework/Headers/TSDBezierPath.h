// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDBEZIERPATH_H
#define TSDBEZIERPATH_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TSDBezierPath : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger sfr_elementCount;
    NSInteger sfr_elementMax;
    *PATHSEGMENT sfr_head;
    *CGFloat sfr_elementLength;
    CGFloat sfr_totalLength;
    NSInteger sfr_lastSubpathIndex;
    *void sfr_extraSegments;
    CGFloat sfr_lineWidth;
    CGRect sfr_controlPointBounds;
    CGFloat sfr_miterLimit;
    CGFloat sfr_flatness;
    *CGFloat sfr_dashedLinePattern;
    NSUInteger sfr_dashedLineCount;
    CGFloat sfr_dashedLinePhase;
    *void sfr_path;
    NSInteger sfr_extraSegmentCount;
    NSInteger sfr_extraSegmentMax;
    ? sfr_bpFlags;
}


@property (readonly, nonatomic) BOOL containsClosePathElement;
@property (readonly, nonatomic) BOOL isCompound;
@property (readonly, nonatomic) BOOL isEffectivelyClosed;
@property (readonly, nonatomic) BOOL isLineSegment;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) BOOL isSelfIntersecting;


+(BOOL)supportsSecureCoding;
+(CGFloat)defaultFlatness;
+(CGFloat)defaultLineWidth;
+(CGFloat)defaultMiterLimit;
+(CGFloat)flatness;
+(CGFloat)lineWidth;
+(CGFloat)miterLimit;
+(NSUInteger)defaultLineCapStyle;
+(NSUInteger)defaultLineJoinStyle;
+(NSUInteger)defaultWindingRule;
+(NSUInteger)lineCapStyle;
+(NSUInteger)lineJoinStyle;
+(NSUInteger)windingRule;
+(id)appendBezierPaths:(id)arg0 ;
+(id)bezierPath;
+(id)bezierPathWithCGPath:(struct CGPath *)arg0 ;
+(id)bezierPathWithConvexHullOfPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ;
+(id)bezierPathWithOvalInRect:(struct CGRect )arg0 ;
+(id)bezierPathWithRect:(struct CGRect )arg0 ;
+(id)bezierPathWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)bezierPathWithStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 ;
+(id)excludeBezierPaths:(id)arg0 ;
+(id)exteriorOfBezierPath:(id)arg0 ;
+(id)intersectBezierPaths:(id)arg0 ;
+(id)outlineBezierPath:(id)arg0 ;
+(id)outlineBezierPath:(id)arg0 withThreshold:(CGFloat)arg1 ;
+(id)outsideEdgeOfBezierPath:(id)arg0 ;
+(id)p_booleanWithBezierPaths:(id)arg0 operation:(int)arg1 ;
+(id)p_pathToBezier:(struct Path *)arg0 ;
+(id)smoothBezierPath:(id)arg0 withThreshold:(CGFloat)arg1 ;
+(id)subtractBezierPaths:(id)arg0 ;
+(id)tracedPathForImage:(struct CGImage *)arg0 alphaThreshold:(CGFloat)arg1 pointSpacing:(CGFloat)arg2 ;
+(id)tracedPathForInstantAlphaBinaryBitmap:(id)arg0 pointSpacing:(CGFloat)arg1 ;
+(id)uniteBezierPaths:(id)arg0 ;
+(struct CGRect )p_pathToBounds:(struct Path *)arg0 ;
+(struct Path *)p_bezierToPath:(id)arg0 ;
+(void)clipRect:(struct CGRect )arg0 ;
+(void)fillRect:(struct CGRect )arg0 ;
+(void)initialize;
+(void)setDefaultFlatness:(CGFloat)arg0 ;
+(void)setDefaultLineCapStyle:(NSUInteger)arg0 ;
+(void)setDefaultLineJoinStyle:(NSUInteger)arg0 ;
+(void)setDefaultLineWidth:(CGFloat)arg0 ;
+(void)setDefaultMiterLimit:(CGFloat)arg0 ;
+(void)setDefaultWindingRule:(NSUInteger)arg0 ;
+(void)setFlatness:(CGFloat)arg0 ;
+(void)setLineCapStyle:(NSUInteger)arg0 ;
+(void)setLineJoinStyle:(NSUInteger)arg0 ;
+(void)setLineWidth:(CGFloat)arg0 ;
+(void)setMiterLimit:(CGFloat)arg0 ;
+(void)setWindingRule:(NSUInteger)arg0 ;
+(void)strokeLineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
+(void)strokeRect:(struct CGRect )arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)intersectsRect:(struct CGRect )arg0 hasFill:(BOOL)arg1 ;
-(BOOL)isCircular;
-(BOOL)isClockwise;
-(BOOL)isDiamond;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFlat;
-(BOOL)isRectangular;
-(BOOL)isTriangular;
-(BOOL)pointOnPath:(struct CGPoint )arg0 tolerance:(CGFloat)arg1 ;
-(CGFloat)calculateLengthOfElement:(NSInteger)arg0 ;
-(CGFloat)curvatureAt:(CGFloat)arg0 fromElement:(int)arg1 ;
-(CGFloat)distanceToPoint:(struct CGPoint )arg0 elementIndex:(*NSUInteger)arg1 tValue:(*CGFloat)arg2 threshold:(CGFloat)arg3 ;
-(CGFloat)flatness;
-(CGFloat)length;
-(CGFloat)lengthOfElement:(NSInteger)arg0 ;
-(CGFloat)lengthToElement:(NSInteger)arg0 ;
-(CGFloat)lineWidth;
-(CGFloat)miterLimit;
-(CGFloat)yValueFromXValue:(CGFloat)arg0 ;
-(CGFloat)yValueFromXValue:(CGFloat)arg0 elementIndex:(*NSInteger)arg1 parametricValue:(*CGFloat)arg2 ;
-(NSInteger)elementCount;
-(NSInteger)elementPercentage:(*CGFloat)arg0 forOverallPercentage:(CGFloat)arg1 startingElementIndex:(NSInteger)arg2 lengthToStartingElement:(CGFloat)arg3 ;
-(NSInteger)elementPercentage:(*float)arg0 forOverallPercentage:(float)arg1 ;
-(NSUInteger)elementAtIndex:(NSInteger)arg0 ;
-(NSUInteger)elementAtIndex:(NSInteger)arg0 allPoints:(struct CGPoint *)arg1 ;
-(NSUInteger)elementAtIndex:(NSInteger)arg0 associatedPoints:(struct CGPoint *)arg1 ;
-(NSUInteger)lineCapStyle;
-(NSUInteger)lineJoinStyle;
-(NSUInteger)windingRule;
-(char *)cString;
-(float)curvatureAt:(float)arg0 ;
-(float)elementPercentageFromElement:(int)arg0 forOverallPercentage:(float)arg1 ;
-(id)_copyFlattenedPath;
-(id)aliasedPathInContext:(struct CGContext *)arg0 effectiveStrokeWidth:(float)arg1 ;
-(id)aliasedPathWithViewScale:(float)arg0 effectiveStrokeWidth:(float)arg1 ;
-(id)bezierPathByFittingCurve;
-(id)bezierPathByFittingCurve:(id)arg0 ;
-(id)bezierPathByFlatteningPath;
-(id)bezierPathByFlatteningPathWithFlatness:(CGFloat)arg0 ;
-(id)bezierPathByOffsettingPath:(CGFloat)arg0 joinStyle:(NSUInteger)arg1 withThreshold:(CGFloat)arg2 ;
-(id)bezierPathByRemovingRedundantElements;
-(id)bezierPathByReversingPath;
-(id)chisel;
-(id)copyFromSegment:(int)arg0 t:(float)arg1 toSegment:(int)arg2 t:(float)arg3 ;
-(id)copyWithPointsInRange:(struct _NSRange )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCString:(char *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)intersectBezierPath:(id)arg0 ;
-(id)outlineStroke;
-(id)p_aliasedPathInContext:(struct CGContext *)arg0 viewScale:(float)arg1 effectiveStrokeWidth:(float)arg2 ;
-(id)p_beziersFromSegmentIntersections:(id)arg0 ;
-(id)p_copyWithPointsInRange:(struct _NSRange )arg0 countingSubpaths:(*NSUInteger)arg1 ;
-(id)p_elementCountForSubpaths;
-(id)p_pathAsSegments;
-(id)pathBySplittingAtPointOnPath:(struct CGPoint )arg0 ;
-(id)pathByWobblingByUpTo:(CGFloat)arg0 subdivisions:(NSUInteger)arg1 ;
-(id)pathSplitAtSubpathBoundariesWithSoftElementLimit:(NSUInteger)arg0 hardElementLimit:(NSUInteger)arg1 ;
-(id)pressure;
-(id)subtractBezierPath:(id)arg0 ;
-(id)uniteWithBezierPath:(id)arg0 ;
-(struct CGPath *)CGPath;
-(struct CGPoint )currentPoint;
-(struct CGPoint )gradientAt:(CGFloat)arg0 fromElement:(NSInteger)arg1 ;
-(struct CGPoint )gradientAt:(float)arg0 ;
-(struct CGPoint )myGradientAt:(float)arg0 ;
-(struct CGPoint )myGradientAt:(float)arg0 fromElement:(NSInteger)arg1 ;
-(struct CGPoint )nearestAngleOnPathToLine:(struct CGPoint )arg0 ;
-(struct CGPoint )nearestPointOnPathToLine:(struct CGPoint )arg0 ;
-(struct CGPoint )pointAlongPathAtPercentage:(CGFloat)arg0 ;
-(struct CGPoint )pointAt:(CGFloat)arg0 fromElement:(NSInteger)arg1 ;
-(struct CGPoint )rawGradientAt:(float)arg0 fromElement:(NSInteger)arg1 ;
-(struct CGPoint )roundPoint:(struct CGPoint )arg0 inContext:(struct CGContext *)arg1 strokeWidth:(int)arg2 ;
-(struct CGPoint )transformedCoordinate:(struct CGPoint )arg0 withPressure:(id)arg1 ;
-(struct CGPoint )transformedTotalCoordinate:(struct CGPoint )arg0 betweenElement:(NSInteger)arg1 andElement:(NSInteger)arg2 withPressure:(id)arg3 getElement:(*NSInteger)arg4 getPercentage:(*float)arg5 ;
-(struct CGPoint )transformedTotalCoordinate:(struct CGPoint )arg0 inElement:(NSInteger)arg1 withPressure:(id)arg2 ;
-(struct CGRect )_addMitersFromSegments:(id)arg0 toRect:(struct CGRect )arg1 ;
-(struct CGRect )bounds;
-(struct CGRect )boundsIncludingStroke;
-(struct CGRect )boundsIncludingStrokeWidth:(CGFloat)arg0 joinStyle:(NSUInteger)arg1 capStyle:(NSUInteger)arg2 miterLimit:(CGFloat)arg3 needsToExtendJoins:(BOOL)arg4 ;
-(struct CGRect )boundsIncludingTSDStroke:(id)arg0 ;
-(struct CGRect )controlPointBounds;
-(void)_addPathSegment:(NSInteger)arg0 point:(struct CGPoint )arg1 ;
-(void)_appendArcSegmentWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 angle1:(CGFloat)arg2 angle2:(CGFloat)arg3 ;
-(void)_appendToPath:(id)arg0 ;
-(void)_deviceClosePath;
-(void)_deviceCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)_deviceLineToPoint:(struct CGPoint )arg0 ;
-(void)_deviceMoveToPoint:(struct CGPoint )arg0 ;
-(void)_doPath;
-(void)addClip;
-(void)addIntersectionsWithLine:(struct CGPoint )arg0 to:(id)arg1 ;
-(void)addIntersectionsWithPath:(id)arg0 to:(id)arg1 ;
-(void)addIntersectionsWithPath:(id)arg0 to:(id)arg1 allIntersections:(BOOL)arg2 reversed:(BOOL)arg3 ;
-(void)addPathToContext:(struct CGContext *)arg0 ;
-(void)alignBoundsToOrigin;
-(void)appendBezierPath:(id)arg0 ;
-(void)appendBezierPath:(id)arg0 fromSegment:(NSInteger)arg1 t:(CGFloat)arg2 toSegment:(NSInteger)arg3 t:(CGFloat)arg4 withoutMove:(BOOL)arg5 ;
-(void)appendBezierPath:(id)arg0 fromSegment:(NSInteger)arg1 toSegment:(NSInteger)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 radius:(CGFloat)arg2 ;
-(void)appendBezierPathWithArcWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 ;
-(void)appendBezierPathWithArcWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 clockwise:(BOOL)arg4 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect )arg0 startAngle:(CGFloat)arg1 swingAngle:(CGFloat)arg2 angleType:(int)arg3 startNewPath:(BOOL)arg4 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect )arg0 startRadialVector:(struct CGPoint )arg1 endRadialVector:(struct CGPoint )arg2 angleSign:(int)arg3 startNewPath:(BOOL)arg4 ;
-(void)appendBezierPathWithOvalInRect:(struct CGRect )arg0 ;
-(void)appendBezierPathWithPoints:(struct CGPoint *)arg0 count:(NSInteger)arg1 ;
-(void)appendBezierPathWithRect:(struct CGRect )arg0 ;
-(void)calculateLengths;
-(void)clearStroke:(struct CGContext *)arg0 ;
-(void)closePath;
-(void)copyPathAttributesTo:(id)arg0 ;
-(void)curveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fill;
-(void)flattenIntoPath:(id)arg0 flatness:(CGFloat)arg1 ;
-(void)getLineDash:(*CGFloat)arg0 count:(*NSInteger)arg1 phase:(*CGFloat)arg2 ;
-(void)getStartPoint:(struct CGPoint *)arg0 andEndPoint:(struct CGPoint *)arg1 ;
-(void)lineToPoint:(struct CGPoint )arg0 ;
-(void)moveToPoint:(struct CGPoint )arg0 ;
-(void)recursiveSubdivideOntoPath:(id)arg0 into:(id)arg1 ;
-(void)recursiveSubdivideOntoPath:(id)arg0 withScaling:(struct ? )arg1 inElementRange:(struct _NSRange )arg2 into:(id)arg3 ;
-(void)recursiveSubdivideOntoPath:(id)arg0 withScaling:(struct ? )arg1 into:(id)arg2 ;
-(void)relativeCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)relativeLineToPoint:(struct CGPoint )arg0 ;
-(void)relativeMoveToPoint:(struct CGPoint )arg0 ;
-(void)removeAllPoints;
-(void)setAssociatedPoints:(struct CGPoint *)arg0 atIndex:(NSInteger)arg1 ;
-(void)setFlatness:(CGFloat)arg0 ;
-(void)setLineCapStyle:(NSUInteger)arg0 ;
-(void)setLineDash:(*CGFloat)arg0 count:(NSInteger)arg1 phase:(CGFloat)arg2 ;
-(void)setLineJoinStyle:(NSUInteger)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setMiterLimit:(CGFloat)arg0 ;
-(void)setWindingRule:(NSUInteger)arg0 ;
-(void)stroke;
-(void)subdivideBezierWithFlatness:(CGFloat)arg0 startPoint:(struct CGPoint )arg1 controlPoint1:(struct CGPoint )arg2 controlPoint2:(struct CGPoint )arg3 endPoint:(struct CGPoint )arg4 ;
-(void)takeAttributesFromStroke:(id)arg0 ;
-(void)transformUsingAffineTransform:(struct CGAffineTransform )arg0 ;


@end


#endif