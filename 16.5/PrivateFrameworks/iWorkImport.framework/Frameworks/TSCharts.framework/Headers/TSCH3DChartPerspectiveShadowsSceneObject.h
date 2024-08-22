// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTPERSPECTIVESHADOWSSCENEOBJECT_H
#define TSCH3DCHARTPERSPECTIVESHADOWSSCENEOBJECT_H



#import "TSCH3DChartShadowsSceneObject.h"

@interface TSCH3DChartPerspectiveShadowsSceneObject : TSCH3DChartShadowsSceneObject



+(id)blurParametersArray;
-(id)createCamera;
-(id)createShadowsRenderer;
-(void)updateCoordsAndTexcoords:(*void)arg0 camera:(id)arg1 quad:(id)arg2 texcoords:(id)arg3 ;
-(void)updateShadowPlane:(id)arg0 texcoords:(id)arg1 scene:(id)arg2 blurslack:(float)arg3 angle:(float)arg4 quality:(float)arg5 planePadding:(struct box<glm::detail::tvec3<float>> )arg6 ;


@end


#endif