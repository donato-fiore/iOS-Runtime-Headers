// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTABSTRACTLINEELEMENTSRENDERER_H
#define TSCHCHARTABSTRACTLINEELEMENTSRENDERER_H



#import "TSCHRenderer.h"

@interface TSCHChartAbstractLineElementsRenderer : TSCHRenderer



-(BOOL)useBlendModeCopyForTransparencyLayer;
-(id)p_findChartRootLayoutItem:(id)arg0 ;
-(id)symbolTransformsForRenderingElements;
-(int)chunkPlane;
-(struct CGAffineTransform )p_adjustTransformForAADefeatInContext:(struct CGContext *)arg0 inTransform:(struct CGAffineTransform )arg1 forSeriesShape:(struct CGPath *)arg2 inBodyBounds:(struct CGRect )arg3 ;
-(void)p_clipOutSymbolsInContext:(struct CGContext *)arg0 withTransformArray:(struct CGAffineTransform *)arg1 withCount:(NSUInteger)arg2 forSeries:(id)arg3 ;
-(void)p_finishContextAfterRendering:(struct CGContext *)arg0 modelCache:(id)arg1 didEnableTransparencyLayer:(BOOL)arg2 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)p_renderLabelsIntoContext:(struct CGContext *)arg0 seriesIndex:(NSUInteger)arg1 model:(id)arg2 modelCache:(id)arg3 bodyLayoutItem:(id)arg4 groupIndexSet:(id)arg5 ;
-(void)p_setupContextForRendering:(struct CGContext *)arg0 layerRect:(struct CGRect )arg1 modelCache:(id)arg2 shadow:(id)arg3 outDidEnableTransparencyLayer:(*BOOL)arg4 ;


@end


#endif