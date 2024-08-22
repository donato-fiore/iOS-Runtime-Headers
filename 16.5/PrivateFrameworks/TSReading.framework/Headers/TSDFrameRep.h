// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDFRAMEREP_H
#define TSDFRAMEREP_H

@class NSArray, CALayer;

#import <Foundation/Foundation.h>

#import "TSDFrame.h"
#import "TSDBitmapImageProvider.h"

@interface TSDFrameRep : NSObject {
    TSDFrame *mFrame;
    NSArray *mImages;
    NSArray *mMasks;
    TSDBitmapImageProvider *mAdornment;
    CALayer *mMaskLayer;
    BOOL mShouldEnableBlendMode;
}




-(id)applyToCALayer:(id)arg0 withRepLayer:(id)arg1 maskLayer:(id)arg2 viewScale:(CGFloat)arg3 ;
-(id)frame;
-(id)initWithTSDFrame:(id)arg0 ;
-(id)p_createRepeatingLayerWithImage:(struct CGImage *)arg0 vertical:(BOOL)arg1 screenScale:(CGFloat)arg2 ;
-(struct CGImage *)p_newFrameForMask:(BOOL)arg0 size:(struct CGSize )arg1 forCALayer:(BOOL)arg2 viewScale:(CGFloat)arg3 ;
-(struct CGImage *)p_newRenderedFrameForMask:(BOOL)arg0 size:(struct CGSize )arg1 forCALayer:(BOOL)arg2 viewScale:(CGFloat)arg3 ;
-(void)applyMaskForRectWithCoverage:(struct CGRect )arg0 toContext:(struct CGContext *)arg1 ;
-(void)blendMaskBeforeRenderingImageInContext:(struct CGContext *)arg0 ;
-(void)dealloc;
-(void)frameRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 withTotalScale:(CGFloat)arg2 ;
-(void)p_addEdgeLayerForIndex:(unsigned int)arg0 toLayer:(id)arg1 maskLayer:(id)arg2 ;
-(void)p_addUnreplicatedLayerForIndex:(unsigned int)arg0 toLayer:(id)arg1 maskLayer:(id)arg2 ;
-(void)p_adjustRepeatingLayer:(id)arg0 withImageRect:(struct CGRect )arg1 start:(CGFloat)arg2 end:(CGFloat)arg3 vertical:(BOOL)arg4 ;
-(void)p_drawFrameIntoRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 withImages:(id)arg2 atViewScale:(CGFloat)arg3 isMask:(BOOL)arg4 ;
-(void)p_drawTiles:(id)arg0 inContext:(struct CGContext *)arg1 rect:(struct CGRect )arg2 start:(CGFloat)arg3 end:(CGFloat)arg4 vertical:(BOOL)arg5 ;
-(void)p_setRepeatingLayerWithIndex:(unsigned int)arg0 sublayers:(id)arg1 maskLayers:(id)arg2 toRect:(struct CGRect )arg3 start:(CGFloat)arg4 end:(CGFloat)arg5 ;
-(void)p_setUnreplicatedLayerWithIndex:(unsigned int)arg0 sublayers:(id)arg1 maskLayers:(id)arg2 toRect:(struct CGRect )arg3 ;
-(void)updateCALayer:(id)arg0 toRect:(struct CGRect )arg1 withRepLayer:(id)arg2 maskLayer:(id)arg3 viewScale:(CGFloat)arg4 maskLayerTransform:(struct CGAffineTransform )arg5 ;


@end


#endif