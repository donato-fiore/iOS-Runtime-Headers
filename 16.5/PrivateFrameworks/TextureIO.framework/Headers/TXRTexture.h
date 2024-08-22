// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TXRTEXTURE_H
#define TXRTEXTURE_H

@class NSArray;
@protocol NSCopying, TXRBufferAllocator;

#import <Foundation/Foundation.h>


@interface TXRTexture : NSObject <NSCopying>

 {
    id<TXRBufferAllocator> *_bufferAllocator;
    ? _dimensions;
}


@property (readonly, nonatomic) NSUInteger alphaInfo; // ivar: _alphaInfo
@property (readonly, nonatomic) BOOL cubemap; // ivar: _cubemap
@property ? dimensions;
@property (readonly, nonatomic) NSArray *mipmapLevels; // ivar: _mipmapLevels
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat


-(BOOL)exportToURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithPixelFormat:(NSUInteger)arg0 options:(id)arg1 bufferAllocator:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 bufferAllocator:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithData:(id)arg0 bufferAllocator:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithDataSourceProvider:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 pixelFormat:(NSUInteger)arg1 alphaInfo:(NSUInteger)arg2 mipmapLevelCount:(NSUInteger)arg3 arrayLength:(BOOL)arg4 cubemap:(id)arg5 bufferAllocator;
-(void)generateMipmapsForRange:(struct _NSRange )arg0 filter:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)reformat:(NSUInteger)arg0 gammaDegamma:(BOOL)arg1 bufferAllocator:(id)arg2 error:(*id)arg3 ;


@end


#endif