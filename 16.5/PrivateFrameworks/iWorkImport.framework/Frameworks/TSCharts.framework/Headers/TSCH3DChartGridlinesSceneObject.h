// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTGRIDLINESSCENEOBJECT_H
#define TSCH3DCHARTGRIDLINESSCENEOBJECT_H



#import "TSCH3DSceneObject.h"
#import "TSCH3DPrefilteredLineRenderer.h"

@interface TSCH3DChartGridlinesSceneObject : TSCH3DSceneObject {
    TSCH3DPrefilteredLineRenderer *_renderer;
}




+(id)partWithAxes:(id)arg0 ;
-(BOOL)p_shouldRenderInFrontForPipeline:(id)arg0 ;
-(id)effects;
-(id)init;
-(struct tmat4x4<float> )p_gridlineTransformForPipeline:(id)arg0 ;
-(void)getBounds:(id)arg0 ;
-(void)p_render:(id)arg0 ;
-(void)postGetBounds:(id)arg0 ;
-(void)postrender:(id)arg0 ;
-(void)primeRenderCaches:(id)arg0 ;
-(void)render:(id)arg0 ;


@end


#endif