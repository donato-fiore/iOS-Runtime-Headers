// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFBITMAPCONTEXT_H
#define WFBITMAPCONTEXT_H


#import <Foundation/Foundation.h>


@interface WFBitmapContext : NSObject

@property (readonly, nonatomic) *CGContext CGContext; // ivar: _CGContext
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(id)contextWithDeviceScreenScaleAndSize:(struct CGSize )arg0 ;
+(id)contextWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(id)contextWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 flipped:(BOOL)arg2 ;
+(id)currentContextWithScale:(CGFloat)arg0 ;
-(id)image;
-(id)imageWithOrientation:(unsigned int)arg0 ;
-(id)initWithCGContext:(struct CGContext *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 opaque:(BOOL)arg1 scale:(CGFloat)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 opaque:(BOOL)arg1 scale:(CGFloat)arg2 colorspace:(struct CGColorSpace *)arg3 ;
-(id)initWithSize:(struct CGSize )arg0 opaque:(BOOL)arg1 scale:(CGFloat)arg2 colorspace:(struct CGColorSpace *)arg3 flipped:(BOOL)arg4 ;
-(void)becomeCurrent;
-(void)dealloc;
-(void)resignCurrent;


@end


#endif