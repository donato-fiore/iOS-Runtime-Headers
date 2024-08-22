// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUIMAGE_H
#define TSUIMAGE_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface TSUImage : NSObject {
    *CGImage mCachedSliceableImage;
    *__CFDictionary mImageSlices;
    NSInteger mImageSliceCacheLock;
    id *mCachedSystemImage;
    NSInteger mCachedImageLock;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic) NSInteger imageOrientation;
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) CGSize size;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 ;
+(id)imageWithContentsOfFile:(id)arg0 ;
+(id)imageWithData:(id)arg0 ;
+(id)imageWithSize:(struct CGSize )arg0 drawnUsingBlock:(id)arg1 ;
+(id)imageWithUIImage:(id)arg0 ;
+(id)noisePatternWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 factor:(CGFloat)arg2 ;
-(BOOL)isEmpty;
-(id)JPEGRepresentationWithCompressionQuality:(CGFloat)arg0 ;
-(id)PNGRepresentation;
-(id)TIFFRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imagePartsWithLeftCapWidth:(CGFloat)arg0 rightCapWidth:(CGFloat)arg1 topCapHeight:(CGFloat)arg2 bottomCapHeight:(CGFloat)arg3 ;
-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithImageSourceRef:(struct CGImageSource *)arg0 ;
-(id)initWithUIImage:(id)arg0 ;
-(id)stretchedImageOfSize:(struct CGSize )arg0 leftCapWidth:(CGFloat)arg1 rightCapWidth:(CGFloat)arg2 topCapHeight:(CGFloat)arg3 bottomCapHeight:(CGFloat)arg4 ;
-(struct CGImage *)CGImageForContentsScale:(CGFloat)arg0 ;
-(struct CGImage *)CGImageForSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)drawInRect:(struct CGRect )arg0 ;
-(void)drawInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 stretchingCenterWidthBy:(CGFloat)arg2 ;


@end


#endif