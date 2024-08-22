// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEIMAGEDRAWINGCONTEXT_H
#define WFREMOTEIMAGEDRAWINGCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFRemoteImageDrawingContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) NSUInteger bitsPerComponent; // ivar: _bitsPerComponent
@property (readonly, nonatomic) *void buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (readonly, nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property (readonly, nonatomic) BOOL drawAlphaOnly; // ivar: _drawAlphaOnly
@property (readonly, nonatomic) NSUInteger imageCount; // ivar: _imageCount
@property (readonly, nonatomic) NSUInteger numberOfComponents;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGFloat screenScale;
@property (readonly, nonatomic) CGSize singleImageSize; // ivar: _singleImageSize
@property (readonly, nonatomic) NSUInteger sizePerImage;


+(BOOL)supportsSecureCoding;
-(BOOL)allocateSharedBuffer;
-(id)initWithAlphaOnlyImageCount:(NSUInteger)arg0 singleImageSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageCount:(NSUInteger)arg0 singleImageSize:(struct CGSize )arg1 scale:(CGFloat)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(id)initWithImageCount:(NSUInteger)arg0 singleImageSize:(struct CGSize )arg1 scale:(CGFloat)arg2 colorSpace:(struct CGColorSpace *)arg3 buffer:(*void)arg4 bufferSize:(NSUInteger)arg5 drawAlphaOnly:(BOOL)arg6 ;
-(struct CGImage *)imageAtIndex:(NSUInteger)arg0 ;
-(void)accessBitmapContextForImageAtIndex:(NSUInteger)arg0 accessBlock:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif