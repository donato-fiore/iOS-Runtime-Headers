// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDIMAGEREP_H
#define TSDIMAGEREP_H

@class NSMutableArray, TSUBezierPath, NSString, TSPData;
@protocol CALayerDelegate, TSDImageDrawingDataSource, TSDMagicMoveMatching, OS_dispatch_semaphore, TSDRepTrackerDelegate;


#import "TSDMediaRep.h"
#import "TSDLayoutGeometry.h"
#import "TSDImageDrawingHelper.h"
#import "TSDImageInfo.h"
#import "TSDImageLayout.h"
#import "TSDMaskInfo.h"
#import "TSDMaskLayout.h"

@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDImageDrawingDataSource, TSDMagicMoveMatching>

 {
    TSDLayoutGeometry *_lastImageGeometryInRoot;
    TSDLayoutGeometry *_lastMaskGeometryInRoot;
    CGAffineTransform _lastLayoutToImageTransform;
    CGRect _frameInUnscaledCanvasRelativeToSuper;
    BOOL _frameInUnscaledCanvasIsValid;
    TSDImageDrawingHelper *_drawingHelper;
    NSMutableArray *_updateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *_updateFromLayoutBlocksLock;
    TSUBezierPath *_cachedRemoveBackgroundIAPath;
    BOOL _backgroundRemovalUnavailable;
    id<TSDRepTrackerDelegate> *_repTrackerDelegate;
    BOOL _userInitiatedBackgroundRemovalOperationIsRunning;
    BOOL _autoBackgroundRemovalOperationIsRunning;
}


@property (readonly, nonatomic) BOOL backgroundRemovalOperationIsRunning;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) TSPData *imageDataForRendering;
@property (readonly, nonatomic) TSDImageInfo *imageInfo;
@property (readonly, nonatomic) TSDImageLayout *imageLayout;
@property (readonly, nonatomic) TSDMaskInfo *maskInfo;
@property (readonly, nonatomic) TSDMaskLayout *maskLayout;
@property (readonly) Class superclass;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
-(BOOL)canDrawInParallel;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg0 ;
-(BOOL)imageDrawingHelperImageHasAlpha:(id)arg0 ;
-(BOOL)p_drawsInOneStep;
-(BOOL)p_shouldUseSourceImageForDescription:(id)arg0 clipBounds:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 image:(struct CGImage *)arg3 ;
-(BOOL)shouldShowCheckerboard;
-(id)downloadProgressPlaceholderImage;
-(id)imageDrawingHelperAdjustedImageData:(id)arg0 ;
-(id)imageDrawingHelperImageData:(id)arg0 ;
-(id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg0 ;
-(id)imageDrawingHelperThumbnailImageData:(id)arg0 ;
-(id)imageOfStroke:(struct CGRect *)arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)layoutsForChildReps;
-(id)p_validatedBitmapImageProvider;
-(id)p_validatedImageProvider;
-(id)textureForDescription:(id)arg0 ;
-(struct CGAffineTransform )imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg0 ;
-(struct CGRect )clipRect;
-(struct CGRect )frameInUnscaledCanvas;
-(struct CGRect )imageDrawingHelperImageRect:(id)arg0 ;
-(void)dealloc;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 keepingChildrenPassingTest:(id)arg6 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(CGFloat)arg3 withMask:(BOOL)arg4 withIAMask:(BOOL)arg5 forLayer:(BOOL)arg6 forShadow:(BOOL)arg7 forHitTest:(BOOL)arg8 ;
-(void)setTextureAttributes:(id)arg0 textureBounds:(struct CGRect )arg1 ;
-(void)willBeRemoved;


@end


#endif