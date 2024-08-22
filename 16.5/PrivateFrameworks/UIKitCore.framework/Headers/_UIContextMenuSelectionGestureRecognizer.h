// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUSELECTIONGESTURERECOGNIZER_H
#define _UICONTEXTMENUSELECTIONGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"

@interface _UIContextMenuSelectionGestureRecognizer : UIGestureRecognizer

@property (nonatomic) CGVector allowableMovement; // ivar: _allowableMovement
@property (nonatomic) CGPoint originalLocation; // ivar: _originalLocation


+(BOOL)_supportsTouchContinuation;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)init;
-(void)_cancelOrFail;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif