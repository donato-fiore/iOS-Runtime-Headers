// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIIMAGECGSVGDOCUMENTCONTENT_H
#define _UIIMAGECGSVGDOCUMENTCONTENT_H

@class UIImageContent;



@interface _UIImageCGSVGDocumentContent : UIImageContent {
    *CGSVGDocument _svgDocumentRef;
}




-(BOOL)canEmitDrawingCommands;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isCGSVGDocument;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCGSVGDocument:(struct CGSVGDocument *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(struct CGSVGDocument *)CGSVGDocument;
-(struct CGSize )sizeInPixels;
-(void)_drawWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 effect:(id)arg3 ;
-(void)_prepareForDrawingWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)dealloc;


@end


#endif