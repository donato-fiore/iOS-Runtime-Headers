// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTTILEDLAYER_H
#define _UITEXTTILEDLAYER_H

@class CALayer, NSMutableArray, NSString, NSArray;
@protocol CALayerDelegate, _UITextTiledLayerDelegate;


#import "UIBezierPath.h"

@interface _UITextTiledLayer : CALayer <CALayerDelegate>

 {
    NSMutableArray *_visibleTiles;
    CGSize _tileSize;
    CALayer *_viewportLayer;
    CGFloat _viewportLayerExtraWidthFactor;
    CGRect _visibleViewportBounds;
    UIBezierPath *_clip;
    ? _tcTiledLayerFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_UITextTiledLayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxPrefetchedTiles; // ivar: _maxPrefetchedTiles
@property (nonatomic) CGFloat maxTileHeight; // ivar: _maxTileHeight
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *tiles;
@property (nonatomic) BOOL usesTiledLayers;


-(id)_prepareNonTiledGhostLayersForVisibleBounds:(struct CGRect )arg0 inBounds:(struct CGRect )arg1 ;
-(id)_prepareTilesForVisibleBounds:(struct CGRect )arg0 inBounds:(struct CGRect )arg1 ;
-(id)_preparedTileForFrame:(struct CGRect )arg0 mask:(id)arg1 opacity:(CGFloat)arg2 deferred:(BOOL)arg3 ;
-(id)init;
-(void)_didSetDelegate;
-(void)_drawInContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 clip:(struct CGPath *)arg2 ;
-(void)_updateTilingViewportWindow:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)layerWillDraw:(id)arg0 ;
-(void)layoutSublayers;
-(void)resumeTiling;
-(void)setContentsFormat:(id)arg0 ;
-(void)setContentsMultiplyColor:(struct CGColor *)arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setDrawsAsynchronously:(BOOL)arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setRasterizationScale:(CGFloat)arg0 ;
-(void)setUnsafeUnretainedDelegate:(id)arg0 ;
-(void)suspendTiling;


@end


#endif