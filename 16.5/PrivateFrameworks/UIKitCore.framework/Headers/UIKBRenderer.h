// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERER_H
#define UIKBRENDERER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIImage.h"

@interface UIKBRenderer : NSObject {
    *CGContext _cachingContext;
    id *_cachingContextCompletion;
    NSInteger _forceColorFormat;
    UIColor *_singleColor;
    int _colorCount;
}


@property (nonatomic) CGRect _layerPaddedFrame; // ivar: __layerPaddedFrame
@property (nonatomic) CGFloat _layerRoundRectRadius; // ivar: __layerRoundRectRadius
@property (readonly, nonatomic) NSInteger assetIdiom; // ivar: _assetIdiom
@property (retain, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (nonatomic) BOOL colorDetectMode; // ivar: _colorDetectMode
@property (readonly, nonatomic) NSInteger contentColorFormat; // ivar: _contentColorFormat
@property (readonly, nonatomic) *CGContext context; // ivar: _ctx
@property (readonly, nonatomic) NSData *contextData;
@property (nonatomic) BOOL disableInternalCaching; // ivar: _disableInternalCaching
@property (readonly, nonatomic) BOOL opaque; // ivar: _opaque
@property (readonly, nonatomic) NSInteger renderFlags; // ivar: _renderFlags
@property (readonly, nonatomic) UIImage *renderedImage; // ivar: _renderedImage
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) UIColor *singleColor;
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(id)rendererWithContext:(struct CGContext *)arg0 withSize:(struct CGSize )arg1 withScale:(CGFloat)arg2 opaque:(BOOL)arg3 renderFlags:(NSInteger)arg4 assetIdiom:(NSInteger)arg5 ;
+(struct CGContext *)imageContextWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 colorFormat:(NSInteger)arg2 opaque:(BOOL)arg3 invert:(BOOL)arg4 ;
+(void)clearInternalCaches;
-(BOOL)_drawKeyString:(id)arg0 inRect:(struct CGRect )arg1 withStyle:(id)arg2 ;
-(BOOL)_drawSingleSymbol:(id)arg0 inRect:(struct CGRect )arg1 withStyle:(id)arg2 ;
-(BOOL)loadCachedImageForHashString:(id)arg0 ;
-(BOOL)renderKeyPathContents:(id)arg0 withTraits:(id)arg1 ;
-(NSInteger)symbolImageRenderingModeForIdiom:(NSInteger)arg0 ;
-(NSUInteger)renderKeyImageContents:(id)arg0 withTraits:(id)arg1 status:(NSUInteger)arg2 ;
-(NSUInteger)renderKeyStringContents:(id)arg0 withTraits:(id)arg1 status:(NSUInteger)arg2 ;
-(id)defaultPathForRenderGeometry:(id)arg0 ;
-(id)description;
-(id)initWithContext:(struct CGContext *)arg0 withSize:(struct CGSize )arg1 withScale:(CGFloat)arg2 opaque:(BOOL)arg3 renderFlags:(NSInteger)arg4 assetIdiom:(NSInteger)arg5 ;
-(id)pathForConcaveCornerWithGeometry:(id)arg0 ;
-(id)pathForFlickGeometry:(id)arg0 ;
-(id)pathForFlickPopupGeometries:(id)arg0 ;
-(id)pathForFlickWidth:(CGFloat)arg0 height:(CGFloat)arg1 handleLength:(CGFloat)arg2 keyMiddle:(struct CGPoint )arg3 angle:(CGFloat)arg4 radius:(CGFloat)arg5 ;
-(id)pathForRenderGeometry:(id)arg0 ;
-(id)pathForSplitGeometry:(id)arg0 ;
-(id)symbolImageConfigForKey:(id)arg0 traitCollection:(id)arg1 ;
-(id)watchPathForRenderGeometry:(id)arg0 ;
-(struct CGPath *)_deleteGlyphPaths;
-(struct CGPath *)_thickShiftGlyphPath;
-(struct CGPath *)_thinShiftGlyphPath;
-(void)_addDetectedColor:(struct CGColor *)arg0 ;
-(void)_completeCacheImageWithTraitsIfNecessary:(id)arg0 ;
-(void)_drawKeyImage:(id)arg0 inRect:(struct CGRect )arg1 withStyle:(id)arg2 force1xImages:(BOOL)arg3 flipHorizontally:(BOOL)arg4 ;
-(void)_drawLinearGradient:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)_renderVariantsFromKeyContents:(id)arg0 withTraits:(id)arg1 ;
-(void)addPathForFlickGeometry:(id)arg0 ;
-(void)addPathForFlickPopupGeometries:(id)arg0 ;
-(void)addPathForRenderGeometry:(id)arg0 ;
-(void)addPathForSplitGeometry:(id)arg0 ;
-(void)addPathForTraits:(id)arg0 displayRect:(struct CGRect *)arg1 ;
-(void)addRoundRect:(struct CGRect )arg0 radius:(CGFloat)arg1 corners:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)detectColorsForEffect:(id)arg0 ;
-(void)detectColorsForGradient:(id)arg0 ;
-(void)detectColorsForNamedColor:(id)arg0 ;
-(void)drawPath:(struct CGPath *)arg0 weight:(CGFloat)arg1 transform:(struct CGAffineTransform )arg2 color:(struct CGColor *)arg3 fill:(BOOL)arg4 ;
-(void)drawShiftPath:(BOOL)arg0 weight:(CGFloat)arg1 transform:(struct CGAffineTransform )arg2 color:(struct CGColor *)arg3 ;
-(void)ensureContext;
-(void)forceColorFormat:(NSInteger)arg0 ;
-(void)renderBackgroundTraits:(id)arg0 ;
-(void)renderBackgroundTraits:(id)arg0 allowCaching:(BOOL)arg1 ;
-(void)renderDivotEffect:(id)arg0 withTraits:(id)arg1 ;
-(void)renderEdgeEffect:(id)arg0 withTraits:(id)arg1 ;
-(void)renderKeyContents:(id)arg0 withTraits:(id)arg1 ;
-(void)renderNullEffect:(id)arg0 withTraits:(id)arg1 ;
-(void)renderShadowEffect:(id)arg0 withTraits:(id)arg1 ;


@end


#endif