// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDSHAPELAYOUT_H
#define TSDSHAPELAYOUT_H

@class TSUBezierPath, NSArray;


#import "TSDStyledLayout.h"
#import "TSDPathSource.h"
#import "TSDEditableBezierPathSource.h"
#import "TSDInfoGeometry.h"
#import "TSDMutableStroke.h"
#import "TSDStroke.h"
#import "TSDFill.h"
#import "TSDShapeInfo.h"
#import "TSDLineEnd.h"

@interface TSDShapeLayout : TSDStyledLayout {
    ? mShapeInvalidFlags;
    TSUBezierPath *mCachedPath;
    BOOL mCachedPathIsOpen;
    BOOL mCachedPathIsLineSegment;
    ? mCachedPathBoundsStruct;
    ? mCachedPathBoundsWithoutStrokeStruct;
    TSUBezierPath *mCachedClippedPath;
    ? mCachedClippedPathStroked;
    ? mCachedClippedPathRotatedStroked;
    CGAffineTransform mClippedPathRotatedTransform;
    ? mCachedAlignmentFrame;
    ? mCachedAlignmentFrameInRoot;
    CGAffineTransform mCachedAlignmentFrameInRootTransformInRoot;
    CGPoint mHeadPoint;
    CGPoint mTailPoint;
    CGPoint mHeadLineEndPoint;
    CGPoint mTailLineEndPoint;
    CGFloat mHeadLineEndAngle;
    CGFloat mTailLineEndAngle;
    NSInteger mHeadCutSegment;
    NSInteger mTailCutSegment;
    CGFloat mHeadCutT;
    CGFloat mTailCutT;
    TSDPathSource *mShrunkenPathSource;
    TSDPathSource *mOriginalShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDMutableStroke *mDynamicStroke;
    TSDStroke *mInitialStroke;
    TSDFill *mDynamicFill;
    NSArray *mDynamicStrokeOffsetArray;
    BOOL mIsDynamicallyInvisible;
    CGSize mLastParentLimitedSize;
    CGFloat mLastParentLimitedScale;
    BOOL mOkayToSetGeometry;
}


@property (readonly, nonatomic) TSUBezierPath *clippedPathForLineEnds;
@property (readonly, nonatomic) TSDFill *fill;
@property (readonly, nonatomic) CGFloat headLineEndAngle;
@property (readonly, nonatomic) CGPoint headLineEndPoint;
@property (readonly, nonatomic) CGPoint headPoint;
@property (readonly, nonatomic) BOOL isFreehandDrawingSpacerShape;
@property (readonly, nonatomic) BOOL isTailEndOnLeft;
@property (readonly, nonatomic) TSDInfoGeometry *layoutInfoGeometry;
@property (readonly, nonatomic) TSUBezierPath *path;
@property (readonly, nonatomic) CGRect pathBounds;
@property (readonly, nonatomic) CGRect pathBoundsWithoutStroke;
@property (readonly, nonatomic) BOOL pathIsLineSegment;
@property (readonly, nonatomic) BOOL pathIsOpen;
@property (readonly, nonatomic) TSDPathSource *pathSource;
@property (readonly, nonatomic) TSDShapeInfo *shapeInfo;
@property (readonly, nonatomic) TSDLineEnd *strokeHeadLineEnd;
@property (readonly, nonatomic) TSDLineEnd *strokeTailLineEnd;
@property (readonly, nonatomic) CGFloat tailLineEndAngle;
@property (readonly, nonatomic) CGPoint tailLineEndPoint;
@property (readonly, nonatomic) CGPoint tailPoint;
@property (readonly, nonatomic) CGPoint unclippedHeadPoint;
@property (readonly, nonatomic) CGPoint unclippedTailPoint;


-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(BOOL)isInvisible;
-(BOOL)isInvisibleAutosizingShape;
-(BOOL)p_cachedPathIsLineSegment;
-(BOOL)p_cachedPathIsOpen;
-(BOOL)p_isInlineInsideParentContainerDynamicallyChangingAvailableSpace;
-(BOOL)shouldAdjustForStrokeWidthForCollabCursor;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)supportsCalloutAttributes;
-(BOOL)supportsResize;
-(BOOL)supportsRotation;
-(CGFloat)i_scaleFromClampedParentLayout;
-(CGFloat)lineEndScale:(BOOL)arg0 ;
-(CGFloat)scaleForInlineClampingUnrotatedSize:(struct CGSize )arg0 withTransform:(struct CGAffineTransform )arg1 ;
-(id)computeLayoutGeometry;
-(id)editablePathSource;
-(id)i_computeWrapPath;
-(id)i_computeWrapPathClosed:(BOOL)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)p_cachedPath;
-(id)p_createClippedPath;
-(id)p_unitePath:(id)arg0 withLineEndForHead:(BOOL)arg1 stroke:(id)arg2 ;
-(id)reliedOnLayouts;
-(id)smartPathSource;
-(id)stroke;
-(int)wrapType;
-(struct CGAffineTransform )computeLayoutTransform;
-(struct CGPoint )centerForConnecting;
-(struct CGRect )aliasedAlignmentFrameForScale:(CGFloat)arg0 ;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameInRoot;
-(struct CGRect )baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )frameForCullingWithBaseFrame:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )frameForPartitioning;
-(struct CGRect )p_boundsOfLineEndForHead:(BOOL)arg0 transform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )p_cachedClippedPathStroked;
-(struct CGRect )p_cachedPathBounds;
-(struct CGRect )p_cachedPathBoundsWithoutStroke;
-(struct CGRect )p_updatedCachedClipRectIfNeededForRotation:(struct CGAffineTransform )arg0 ;
-(struct CGRect )shapeFrameWithTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )shapeFrameWithTransform:(struct CGAffineTransform )arg0 strokeDrawOptions:(NSUInteger)arg1 ;
-(struct CGSize )minimumSize;
-(void)aliasPathForScale:(CGFloat)arg0 adjustedStroke:(*id)arg1 adjustedPath:(*id)arg2 startDelta:(struct CGPoint *)arg3 endDelta:(struct CGPoint *)arg4 ;
-(void)aliasPathForScale:(CGFloat)arg0 originalStroke:(id)arg1 adjustedStroke:(*id)arg2 adjustedPath:(*id)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateFrame;
-(void)invalidatePath;
-(void)invalidatePathBounds;
-(void)offsetGeometryBy:(struct CGPoint )arg0 ;
-(void)p_invalidateClippedPath;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(void)p_performBlockOkayToSetGeometry:(id)arg0 ;
-(void)p_validateHeadAndTail;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;
-(void)processChangedProperty:(int)arg0 ;
-(void)setGeometry:(id)arg0 ;
-(void)transferLayoutGeometryToInfo:(id)arg0 withAdditionalTransform:(struct CGAffineTransform )arg1 assertIfInDocument:(BOOL)arg2 ;
-(void)validate;


@end


#endif