// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSIMPLEBLURSHADOWSRENDERER_H
#define TSCH3DSIMPLEBLURSHADOWSRENDERER_H

@class NSArray;
@protocol TSCH3DShadowsRenderer;

#import <Foundation/Foundation.h>

#import "TSCH3DFBOResource.h"

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>

 {
    TSCH3DFBOResource *_shadowsFBOResource;
    TSCH3DFBOResource *_blurFBOResource;
    tvec2<int> _shadowsSize;
    NSArray *_blurParametersArray;
}




-(float)blurSlackForQuality:(float)arg0 ;
-(id)initWithBlurParametersArray:(id)arg0 ;
-(id)shadowsFBOForContext:(id)arg0 ;
-(void)blurParametersFromQuality:(float)arg0 shadowSize:(*NSInteger)arg1 numPasses:(*NSInteger)arg2 kernelScale:(*float)arg3 ;
-(void)invalidate;
-(void)protectShadowForQuality:(float)arg0 pipeline:(id)arg1 renderBlock:(id)arg2 ;
-(void)unprotectShadowInSession:(id)arg0 ;


@end


#endif