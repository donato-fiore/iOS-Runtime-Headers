// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDSTYLEDREP_H
#define TSDSTYLEDREP_H

@class NSString, CALayer;
@protocol TSDTilingLayerDelegate;


#import "TSDRep.h"
#import "TSDMutableReflection.h"
#import "TSDShadow.h"
#import "TSDReflection.h"

@interface TSDStyledRep : TSDRep <TSDTilingLayerDelegate>

 {
    CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
    BOOL mIsUpdatingReflectionOpacity;
    TSDMutableReflection *mDynamicReflection;
    BOOL mIsUpdatingShadow;
    TSDShadow *mDynamicShadow;
    ? mFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, nonatomic) TSDReflection *reflection;
@property (readonly, nonatomic) CALayer *reflectionLayer; // ivar: mReflectionLayer
@property (readonly, nonatomic) TSDShadow *shadow;
@property (readonly, nonatomic) CALayer *shadowLayer; // ivar: mShadowLayer
@property (readonly) Class superclass;


-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg0 ;
-(BOOL)isInvisible;
-(BOOL)shouldHideSelectionHighlightDueToRectangularPath;
-(BOOL)shouldShowReflection;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowShadow;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)additionalLayersUnderLayer;
-(id)pathSourceForSelectionHighlightBehavior;
-(id)styledInfo;
-(id)styledLayout;
-(id)textureForContext:(id)arg0 ;
-(struct CGImage *)newShadowImageWithSize:(struct CGSize )arg0 shadow:(id)arg1 drawSelector:(SEL)arg2 unflipped:(BOOL)arg3 ;
-(struct CGImage *)newShadowImageWithSize:(struct CGSize )arg0 unflipped:(BOOL)arg1 withChildren:(BOOL)arg2 ;
-(struct CGImage *)p_newReflectionImageWithSize:(struct CGSize )arg0 applyOpacity:(BOOL)arg1 viewScale:(CGFloat)arg2 withBlock:(id)arg3 ;
-(struct CGRect )clipRect;
-(struct CGRect )clipRectWithoutEffects;
-(struct CGRect )p_clipRectInRootForTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )p_rectWithEffectsAppliedToRect:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )rectWithEffectsAppliedToRect:(struct CGRect )arg0 ;
-(void)createReflectionLayer;
-(void)dealloc;
-(void)didUpdateEffectLayersForLayer:(id)arg0 ;
-(void)didUpdateLayer:(id)arg0 ;
-(void)disposeReflectionLayer;
-(void)drawGradientWithAlphaOverReflection:(struct CGContext *)arg0 applyingOpacity:(BOOL)arg1 reflectionSize:(struct CGSize )arg2 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 ;
-(void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffectsOrChildren:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext *)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawReflectionInContext:(struct CGContext *)arg0 drawChildren:(BOOL)arg1 ;
-(void)drawReflectionInContext:(struct CGContext *)arg0 withTransparencyLayer:(BOOL)arg1 applyingOpacity:(BOOL)arg2 shouldClipGradient:(BOOL)arg3 withBlock:(id)arg4 ;
-(void)drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg0 withTransparencyLayer:(BOOL)arg1 applyingOpacity:(BOOL)arg2 drawChildren:(BOOL)arg3 ;
-(void)drawShadowInContext:(struct CGContext *)arg0 withChildren:(BOOL)arg1 withDrawableOpacity:(BOOL)arg2 ;
-(void)invalidateShadowLayer;
-(void)p_drawReflectionInContext:(struct CGContext *)arg0 ;
-(void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg0 withTransparencyLayer:(BOOL)arg1 applyingOpacity:(BOOL)arg2 shouldClipGradient:(BOOL)arg3 withBlock:(id)arg4 ;
-(void)positionShadowLayer:(id)arg0 forShadow:(id)arg1 withNaturalBounds:(struct CGRect )arg2 ;
-(void)processChangedProperty:(int)arg0 ;
-(void)setNeedsDisplay;
-(void)viewScaleDidChange;
-(void)willUpdateEffectLayersForLayer:(id)arg0 ;
-(void)willUpdateLayer:(id)arg0 ;


@end


#endif