// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBUILEGIBILITYMETALENGINECONFIGURATION_H
#define _SBUILEGIBILITYMETALENGINECONFIGURATION_H

@class UIImage, MPSUnaryImageKernel, UIScreen, MTKTextureLoader;
@protocol MTLCommandQueue, MTLDevice, SBUILegibilitySettings;

#import <Foundation/Foundation.h>


@interface _SBUILegibilityMetalEngineConfiguration : NSObject {
    UIImage *_blurTemplateImage;
    NSUInteger _pixelFormat;
    *CGColorSpace _outputColorSpace;
    NSInteger _algo;
}


@property (readonly, nonatomic) MPSUnaryImageKernel *blurKernel; // ivar: _blurKernel
@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSUInteger radius; // ivar: _radius
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly, weak, nonatomic) NSObject<SBUILegibilitySettings> *settings; // ivar: _settings
@property (readonly, nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (readonly, nonatomic) CGFloat shadowScale; // ivar: _shadowScale
@property (readonly, nonatomic) MTKTextureLoader *textureLoader; // ivar: _textureLoader


+(id)buildDestinationTextureForDevice:(id)arg0 size:(struct CGSize )arg1 pixelFormat:(NSUInteger)arg2 outOutputBytes:(**void)arg3 outLength:(*NSUInteger)arg4 outBytesPerRow:(*NSUInteger)arg5 ;
-(id)_prepareImageForConvolution:(id)arg0 settings:(id)arg1 ;
-(id)_sourceTextureForImage:(id)arg0 settings:(id)arg1 outMetalOutputTextureSize:(struct CGSize *)arg2 ;
-(id)drawImageForSize:(struct CGSize )arg0 drawBlock:(id)arg1 ;
-(id)drawImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 drawBlock:(id)arg2 ;
-(id)executeBlurForImage:(id)arg0 settings:(id)arg1 ;
-(id)initWithScreen:(id)arg0 settings:(id)arg1 algo:(NSInteger)arg2 ;
-(id)initWithScreen:(id)arg0 settings:(id)arg1 algo:(NSInteger)arg2 pixelFormat:(NSUInteger)arg3 ;
-(struct CGSize )_metalTextureOutputSizeForInputSize:(struct CGSize )arg0 ;
-(void)_configureConvolutionKernel;
-(void)dealloc;


@end


#endif