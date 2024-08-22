// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRNEURALTEXTDETECTORV3_H
#define CRNEURALTEXTDETECTORV3_H



#import "CRNeuralTextDetector.h"
#import "CRTextDetectorModelV3.h"

@interface CRNeuralTextDetectorV3 : CRNeuralTextDetector

@property (retain) CRTextDetectorModelV3 *model; // ivar: _model


+(struct CGSize )scaledImageSizeForConfiguration:(id)arg0 imageSize:(struct CGSize )arg1 ;
+(struct CGSize )scaledImageSizeForMaxSize:(struct CGSize )arg0 minSize:(struct CGSize )arg1 inputLengthLimit:(CGFloat)arg2 imageSize:(struct CGSize )arg3 scale:(*CGFloat)arg4 ;
+(struct unique_ptr<CRImageBuffer, std::default_delete<CRImageBuffer>> )createImageMap:(id)arg0 targetSize:(struct CGSize )arg1 ;
+(void)aggregateRegionMap:(id)arg0 affinityMap:(id)arg1 scriptMap:(id)arg2 linkMap:(id)arg3 targetSize:(struct CGSize )arg4 outputRegionMap:(struct vImage_Buffer *)arg5 outputAffinityMap:(struct vImage_Buffer *)arg6 outputScriptMap:(*void)arg7 outputLinkMap:(struct vImage_Buffer *)arg8 outputOrigin:(struct CGPoint )arg9 ;
+(void)calculateTargetOutputSize:(struct CGSize *)arg0 adjustedInputScale:(*CGFloat)arg1 paddedSize:(struct CGSize *)arg2 imageSize:(struct CGSize )arg3 maximumSize:(struct CGSize )arg4 minimumSize:(struct CGSize )arg5 inputLengthLimit:(CGFloat)arg6 ;
-(BOOL)preheatWithError:(*id)arg0 ;
-(id)detectInImage:(id)arg0 error:(*id)arg1 ;
-(id)enumerateTilesForImage:(id)arg0 guidedByScoreMapFullTile:(*void)arg1 block:(id)arg2 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)processRegionMap:(struct vImage_Buffer *)arg0 affinityMap:(struct vImage_Buffer *)arg1 linkMap:(struct vImage_Buffer *)arg2 adjustedSize:(struct CGSize )arg3 regionMapFullTile:(struct vImage_Buffer *)arg4 affinityMapFullTile:(struct vImage_Buffer *)arg5 linkMapFullTile:(struct vImage_Buffer *)arg6 adjustedFullTileSize:(struct CGSize )arg7 targetSize:(struct CGSize )arg8 targetSizeFullTile:(struct CGSize )arg9 intermediateResults:(*id)arg10 withScaleIds:(*void)arg11 sourceImageSize:(struct CGSize )arg12 tileRects:(id)arg13 ;
-(struct CGSize )smallestImageSizeForTextWithRelativeHeight:(CGFloat)arg0 originalImageSize:(struct CGSize )arg1 ;


@end


#endif