// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVGRAPHICSIMAGERENDERER_H
#define TVGRAPHICSIMAGERENDERER_H


#import <Foundation/Foundation.h>


@interface TVGraphicsImageRenderer : NSObject



+(id)decodedImage:(id)arg0 opaque:(BOOL)arg1 ;
+(id)formatWithCGImage:(struct CGImage *)arg0 ;
+(id)formatWithUIImage:(id)arg0 ;
+(id)imageWithSize:(struct CGSize )arg0 alpha:(BOOL)arg1 actions:(id)arg2 ;
+(id)imageWithSize:(struct CGSize )arg0 alpha:(BOOL)arg1 cgContextActions:(id)arg2 ;
+(id)imageWithSize:(struct CGSize )arg0 format:(id)arg1 actions:(id)arg2 ;
+(id)imageWithSize:(struct CGSize )arg0 format:(id)arg1 cgContextActions:(id)arg2 ;
+(id)preferredFormat;


@end


#endif