// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIIMAGECGPDFPAGECONTENT_H
#define _UIIMAGECGPDFPAGECONTENT_H

@class UIImageContent;



@interface _UIImageCGPDFPageContent : UIImageContent {
    *CGPDFPage _pdfPageRef;
}




-(BOOL)canEmitDrawingCommands;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isCGPDFPage;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCGPDFPage:(struct CGPDFPage *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(struct CGPDFPage *)CGPDFPage;
-(struct CGSize )sizeInPixels;
-(void)_drawWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 effect:(id)arg3 ;
-(void)_prepareForDrawingWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)dealloc;


@end


#endif