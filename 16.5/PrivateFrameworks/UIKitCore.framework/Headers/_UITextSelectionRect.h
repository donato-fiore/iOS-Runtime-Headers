// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTSELECTIONRECT_H
#define _UITEXTSELECTIONRECT_H



#import "UITextSelectionRect.h"

@interface _UITextSelectionRect : UITextSelectionRect {
    CGRect _rect;
}


@property (nonatomic, setter=_setDrawsOwnHighlight:) BOOL _drawsOwnHighlight; // ivar: __drawsOwnHighlight
@property (nonatomic) BOOL containsEnd; // ivar: _containsEnd
@property (nonatomic) BOOL containsStart; // ivar: _containsStart
@property (nonatomic) BOOL isVertical; // ivar: _isVertical
@property (nonatomic) NSInteger writingDirection; // ivar: _writingDirection


+(id)selectionRectWithRect:(struct CGRect )arg0 fromView:(id)arg1 ;
-(id)description;
-(struct CGRect )rect;
-(void)setRect:(struct CGRect )arg0 fromView:(id)arg1 ;


@end


#endif