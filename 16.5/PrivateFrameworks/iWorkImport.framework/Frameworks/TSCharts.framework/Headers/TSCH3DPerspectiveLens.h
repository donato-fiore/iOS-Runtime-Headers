// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DPERSPECTIVELENS_H
#define TSCH3DPERSPECTIVELENS_H



#import "TSCH3DLens.h"

@interface TSCH3DPerspectiveLens : TSCH3DLens

@property (nonatomic) float aspect; // ivar: _aspect
@property (nonatomic) float fov; // ivar: _FOV
@property (readonly, nonatomic) float height;
@property (readonly, nonatomic) float width;


-(id)asFrustumLens;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)frustumRect;
-(id)frustumRectAtDistance:(float)arg0 ;
-(id)init;
-(id)matrixDescription;
-(id)narrowedByNormalizedBounds:(*void)arg0 ;
-(id)shiftedByPercentage:(*void)arg0 ;
-(struct tmat4x4<float> )matrix;
-(void)calculateCullingPlanes:(*void)arg0 ;


@end


#endif