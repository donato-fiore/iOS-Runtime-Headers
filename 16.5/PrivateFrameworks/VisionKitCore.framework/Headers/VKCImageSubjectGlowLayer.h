// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCIMAGESUBJECTGLOWLAYER_H
#define VKCIMAGESUBJECTGLOWLAYER_H

@class CALayer;



@interface VKCImageSubjectGlowLayer : CALayer

@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) CALayer *glowLayer; // ivar: _glowLayer


-(id)animationGroupWithDuration:(CGFloat)arg0 beginTime:(CGFloat)arg1 animations:(id)arg2 ;
-(id)animationWithKeyPath:(id)arg0 beginTime:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(id)init;
-(id)shapeLayerLineWidth:(CGFloat)arg0 opacity:(CGFloat)arg1 path:(struct CGPath *)arg2 ;
-(id)thickGlowParametersWithViewScale:(CGFloat)arg0 ;
-(id)thinGlowParametersWithScreenScale:(CGFloat)arg0 viewScale:(CGFloat)arg1 ;
-(void)beginAnimationWithViewScale:(CGFloat)arg0 screenScale:(CGFloat)arg1 path:(id)arg2 ;
-(void)configureAnimationWithViewScale:(CGFloat)arg0 screenScale:(CGFloat)arg1 path:(id)arg2 ;
-(void)hideGlow:(BOOL)arg0 ;
-(void)renderGlowParameters:(id)arg0 path:(struct CGPath *)arg1 pathLength:(CGFloat)arg2 duration:(CGFloat)arg3 maxStrokeLengthFraction:(id)arg4 ;
-(void)stopAnimationAnimated:(BOOL)arg0 ;


@end


#endif