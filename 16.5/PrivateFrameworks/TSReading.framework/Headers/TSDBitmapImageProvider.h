// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDBITMAPIMAGEPROVIDER_H
#define TSDBITMAPIMAGEPROVIDER_H

@protocol OS_dispatch_semaphore;


#import "TSDImageProvider.h"

@interface TSDBitmapImageProvider : TSDImageProvider {
    *CGImageSource mImageSource;
    *CGImage mImage;
    NSUInteger mImageGamut;
    CGSize mNaturalSize;
    NSInteger mOrientation;
    BOOL mIsOpaque;
    BOOL mIsValid;
    NSUInteger mDPI;
    NSObject<OS_dispatch_semaphore> *mImageLock;
    NSInteger mCheckIfValidToken;
    *CGImage mHalfSizeImage;
    *CGImage mQuarterSizeImage;
}




+(id)TSUImageForImageData:(id)arg0 ;
+(id)p_cacheStringForData:(id)arg0 ;
+(struct CGImage *)CGImageForImageData:(id)arg0 ;
+(struct CGImage *)temporaryCGImageForImageData:(id)arg0 ;
+(struct CGImageSource *)p_newImageSourceFromCacheForData:(id)arg0 withFilenameSuffix:(id)arg1 ;
+(struct CGImageSource *)p_newImageSourceFromFilePath:(id)arg0 ;
+(struct CGImageSource *)temporaryCGImageSourceForImageData:(id)arg0 ;
+(struct CGSize )naturalSizeForImageData:(id)arg0 ;
+(void)clearCacheForData:(id)arg0 ;
+(void)initialize;
-(?)p_loadOrCreateResampledImageWithScaleandCGImage;
-(BOOL)hasFlushableContent;
-(BOOL)isOpaque;
-(BOOL)isValid;
-(NSInteger)orientation;
-(NSUInteger)imageDPI;
-(NSUInteger)imageGamut;
-(struct CGImage *)CGImageForNaturalSize;
-(struct CGImage *)CGImageForSize:(struct CGSize )arg0 inContext:(struct CGContext *)arg1 orLayer:(id)arg2 ;
-(struct CGImage *)CGImageForSize:(struct CGSize )arg0 lowQuality:(BOOL)arg1 ;
-(struct CGImage *)p_newImageFromSource:(struct CGImageSource *)arg0 ;
-(struct CGImage *)p_resampledImageOfSizeType:(int)arg0 ;
-(struct CGImageSource *)CGImageSource;
-(struct CGImageSource *)p_newCGImageSource;
-(struct CGImageSource *)p_newCGImageSourceForTemporaryUse;
-(struct CGImageSource *)p_newImageOfSize:(struct CGSize )arg0 andWriteToCacheWithSuffix:(id)arg1 ;
-(struct CGSize )dpiAdjustedFillSize;
-(struct CGSize )dpiAdjustedNaturalSize;
-(struct CGSize )naturalSize;
-(void)dealloc;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)flush;
-(void)i_commonInit;
-(void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource *)arg0 andImage:(struct CGImage *)arg1 ;
-(void)p_loadFullSizedImageIfNecessary;
-(void)p_loadImageMetadata;
-(void)p_loadSourceRefIfNecessary;


@end


#endif