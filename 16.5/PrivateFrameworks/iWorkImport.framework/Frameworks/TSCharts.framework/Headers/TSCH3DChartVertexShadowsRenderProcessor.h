// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTVERTEXSHADOWSRENDERPROCESSOR_H
#define TSCH3DCHARTVERTEXSHADOWSRENDERPROCESSOR_H

@class NSArray;


#import "TSCH3DRetargetRenderProcessor.h"

@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor {
    NSArray *_shadowsEffects;
}




-(NSInteger)attribute:(id)arg0 resource:(id)arg1 specs:(struct AttributeSpecs *)arg2 ;
-(NSInteger)texture:(id)arg0 resource:(id)arg1 attributes:(*void)arg2 ;
-(id)init;
-(id)p_effects;
-(void)submit:(id)arg0 ;


@end


#endif