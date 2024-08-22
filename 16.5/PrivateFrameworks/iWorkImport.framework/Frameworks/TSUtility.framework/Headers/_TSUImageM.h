// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TSUIMAGEM_H
#define _TSUIMAGEM_H



#import "TSUImage.h"

@interface _TSUImageM : TSUImage



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)init;
+(id)initWithCGImage:(struct CGImage *)arg0 ;
+(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 ;
+(id)initWithContentsOfFile:(id)arg0 ;
+(id)initWithData:(id)arg0 ;
+(id)initWithImageSourceRef:(struct CGImageSource *)arg0 ;
+(id)initWithUIImage:(id)arg0 ;


@end


#endif