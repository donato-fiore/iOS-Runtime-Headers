// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIIMAGECGIMAGECONTENT_H
#define _UIIMAGECGIMAGECONTENT_H

@class UIImageContent;



@interface _UIImageCGImageContent : UIImageContent {
    ? _imageRef;
}




-(BOOL)canEmitDrawingCommands;
-(BOOL)hasCGImage;
-(BOOL)isCGImage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)optimizeContentForImageSize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(BOOL)prepareContentForDisplayWithCompletionHandler:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentOptimizedForImageSize:(struct CGSize )arg0 ;
-(id)contentPreparedForDisplay;
-(id)contentWithCGImage:(struct CGImage *)arg0 ;
-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithCGImageSource:(struct CGImageSource *)arg0 scale:(CGFloat)arg1 ;
-(id)renditionApplyingEffect:(id)arg0 ;
-(struct CGImage *)CGImage;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGSize )sizeInPixels;
-(void)_drawWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 effect:(id)arg3 ;
-(void)dealloc;


@end


#endif