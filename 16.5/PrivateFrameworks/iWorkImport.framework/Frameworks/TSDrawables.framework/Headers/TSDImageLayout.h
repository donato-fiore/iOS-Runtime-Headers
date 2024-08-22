// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDIMAGELAYOUT_H
#define TSDIMAGELAYOUT_H



#import "TSDMediaLayout.h"
#import "TSDLayoutGeometry.h"
#import "TSDMaskLayout.h"
#import "TSDInfoGeometry.h"
#import "TSDImageAdjustments.h"
#import "TSDImageInfo.h"

@interface TSDImageLayout : TSDMediaLayout {
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    *CGPath mPathToStroke;
    CGAffineTransform mLayoutToImageTransform;
    CGAffineTransform mLayoutToMaskTransform;
    BOOL mMaskIntersectsImage;
    CGSize mLastParentLimitedSize;
    NSUInteger mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    NSInteger mMaskEditMode;
    BOOL mScalingInMaskMode;
    BOOL mInInstantAlphaMode;
    BOOL mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}


@property (readonly, nonatomic) TSDInfoGeometry *currentInfoGeometry;
@property (readonly, nonatomic) BOOL hasMaskingPath;
@property (readonly, nonatomic) CGAffineTransform imageDataToVisualSizeTransform;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometryInRoot;
@property (readonly, nonatomic) TSDImageInfo *imageInfo;
@property (readonly, nonatomic) CGAffineTransform layoutToImageTransform;
@property (readonly, nonatomic) CGAffineTransform layoutToMaskTransform;
@property (readonly, nonatomic) TSDMaskLayout *maskLayout;
@property (readonly, nonatomic) TSDLayoutGeometry *originalImageGeometry;
@property (readonly, nonatomic) *CGPath pathToStroke;


-(BOOL)hasAlpha;
-(BOOL)isDynamicallyChangingImageAdjustments;
-(BOOL)isInvisible;
-(BOOL)supportsRotation;
-(CGFloat)descentForInlineLayout;
-(CGFloat)scaleForInlineClampingUnrotatedSize:(struct CGSize )arg0 withTransform:(struct CGAffineTransform )arg1 ;
-(id)childInfosForChildLayouts;
-(id)computeLayoutGeometry;
-(id)i_computeWrapPath;
-(id)imageAdjustments;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)smartPathSource;
-(struct CGRect )boundsInfluencingExteriorWrap;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(struct CGRect )pathBoundsWithoutStroke;
-(struct CGSize )sizeOfFrameRectIncludingCoverage;
-(void)dealloc;
-(void)dynamicImageAdjustmentsChangeDidBegin;
-(void)dynamicImageAdjustmentsChangeDidEnd;
-(void)dynamicImageAdjustmentsUpdateToValue:(id)arg0 ;
-(void)offsetGeometryBy:(struct CGPoint )arg0 ;
-(void)p_calculateClampModelValuesWithAdditionalTransform:(struct CGAffineTransform )arg0 andPerformBlock:(id)arg1 ;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg0 ;
-(void)transferLayoutGeometryToInfo:(id)arg0 withAdditionalTransform:(struct CGAffineTransform )arg1 assertIfInDocument:(BOOL)arg2 ;
-(void)updateChildrenFromInfo;


@end


#endif