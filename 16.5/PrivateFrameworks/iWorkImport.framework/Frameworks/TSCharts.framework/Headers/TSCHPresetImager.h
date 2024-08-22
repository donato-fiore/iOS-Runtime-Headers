// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHPRESETIMAGER_H
#define TSCHPRESETIMAGER_H


#import <Foundation/Foundation.h>


@interface TSCHPresetImager : NSObject



+(id)presetImagerForChartType:(id)arg0 ;
+(void)drawGenericImageIntoContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 preset:(id)arg2 usingRepresentativeSpecificSeriesFillProperties:(id)arg3 outShouldCache:(*BOOL)arg4 ;
-(id)imageWithPreset:(id)arg0 target:(int)arg1 imageSize:(struct CGSize )arg2 imageScale:(CGFloat)arg3 swatchFrame:(struct CGRect )arg4 documentRoot:(id)arg5 shouldCache:(*BOOL)arg6 ;
-(id)initWithChartType:(id)arg0 ;
-(id)p_chartType;
-(id)p_init;
-(id)p_objectFromStyle:(id)arg0 specific:(int)arg1 default:(int)arg2 ;
-(id)p_shadow;
-(id)p_strokeFromStyle:(id)arg0 specific:(int)arg1 default:(int)arg2 ;
-(struct CGContext *)p_newContextOfSize:(struct CGSize )arg0 ;
-(struct CGRect )p_squareRectFromSize:(struct CGSize )arg0 inset:(CGFloat)arg1 ;
-(struct CGSize )p_drawAndOffsetMultiDataSliderIntoContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 ;
-(struct CGSize )p_nativeSize;
-(struct UIEdgeInsets )swatchImageEdgeInsetsForSize:(struct CGSize )arg0 ;
-(void)p_drawShadowedContentIntoContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 preset:(id)arg3 target:(int)arg4 shouldCache:(*BOOL)arg5 ;
-(void)p_drawUnshadowedContentIntoContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 preset:(id)arg3 target:(int)arg4 shouldCache:(*BOOL)arg5 ;
-(void)p_fillPath:(struct CGPath *)arg0 withFill:(id)arg1 inContext:(struct CGContext *)arg2 ;


@end


#endif