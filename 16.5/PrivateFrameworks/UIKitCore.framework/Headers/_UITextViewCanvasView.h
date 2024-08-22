// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTVIEWCANVASVIEW_H
#define _UITEXTVIEWCANVASVIEW_H

@class UITextCanvasView;
@protocol _UITextViewCanvasViewContext;



@interface _UITextViewCanvasView : UITextCanvasView

@property (weak, nonatomic) NSObject<_UITextViewCanvasViewContext> *context;


-(struct _NSRange )_extendedGlyphRangeForRange:(struct _NSRange )arg0 maxGlyphIndex:(NSUInteger)arg1 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;


@end


#endif