// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TXRPARSERIMAGEIO_H
#define TXRPARSERIMAGEIO_H

@class NSString;
@protocol TXRParser;

#import <Foundation/Foundation.h>

#import "TXRImageInfo.h"
#import "TXRTextureInfo.h"

@interface TXRParserImageIO : NSObject <TXRParser>

 {
    TXRImageInfo *_imageInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TXRTextureInfo *textureInfo; // ivar: _textureInfo


+(BOOL)exportImage:(id)arg0 url:(id)arg1 uttype:(struct __CFString *)arg2 colorSpace:(struct CGColorSpace *)arg3 orientation:(unsigned char)arg4 error:(*id)arg5 ;
+(BOOL)exportTexture:(id)arg0 url:(id)arg1 error:(*id)arg2 ;
+(BOOL)handlesData:(id)arg0 ;
+(id)decodeCGImage:(struct CGImage *)arg0 desiredPixelFormat:(NSUInteger)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(id)decodeCGImageNonIndexed:(struct CGImage *)arg0 desiredPixelFormat:(NSUInteger)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(int)determineColorSpaceClass:(struct CGImage *)arg0 displayGamut:(NSUInteger)arg1 options:(id)arg2 ;
+(struct CGImage *)newCGImageFromImage:(id)arg0 colorSpace:(struct CGColorSpace *)arg1 error:(*id)arg2 ;
-(BOOL)parseData:(id)arg0 bufferAllocator:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)parsedImageAtLevel:(NSUInteger)arg0 element:(NSUInteger)arg1 face:(NSUInteger)arg2 ;


@end


#endif