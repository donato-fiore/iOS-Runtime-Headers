// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMASKLAYOUT_H
#define TSDMASKLAYOUT_H



#import "TSDLayout.h"
#import "TSDInfoGeometry.h"
#import "TSDPathSource.h"
#import "TSDImageLayout.h"

@interface TSDMaskLayout : TSDLayout {
    ? mMaskInvalidFlags;
    *CGPath mCachedPath;
    *CGPath mCachedPathNoScale;
    CGRect mCachedTightPathBounds;
    CGRect mCachedTightPathBoundsNoScale;
    CGFloat mOriginalPathScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    BOOL mScalingInMaskMode;
}


@property (readonly, nonatomic) TSDImageLayout *imageLayout;
@property (nonatomic) CGFloat pathScale; // ivar: mPathScale


-(BOOL)shouldBeIncludedInParentFrameForCulling;
-(id)computeInfoGeometryFromPureLayoutGeometry:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(id)infoGeometry;
-(id)initWithInfo:(id)arg0 ;
-(id)maskInfo;
-(id)pathSource;
-(struct CGPath *)p_cachedPath;
-(struct CGPath *)p_cachedPathNoScale;
-(struct CGPath *)path;
-(struct CGRect )p_cachedTightPathBounds;
-(struct CGRect )p_cachedTightPathBoundsNoScale;
-(struct CGRect )pathBounds;
-(void)dealloc;
-(void)invalidate;
-(void)invalidatePath;
-(void)p_calculateCachedPathIfNecessary;
-(void)p_calculateTightPathBoundsIfNecessary;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg0 ;


@end


#endif