// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDEBUGALIGNMENTRECTVIEW_H
#define _UIDEBUGALIGNMENTRECTVIEW_H



#import "UIView.h"

@interface _UIDebugAlignmentRectView : UIView {
    CGFloat _baselineOffset;
}




-(BOOL)isOpaque;
-(id)_alignmentDebuggingOverlayCreateIfNecessary:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 baselineOffset:(CGFloat)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif