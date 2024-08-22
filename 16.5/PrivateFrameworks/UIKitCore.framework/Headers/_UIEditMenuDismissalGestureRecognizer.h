// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEDITMENUDISMISSALGESTURERECOGNIZER_H
#define _UIEDITMENUDISMISSALGESTURERECOGNIZER_H

@class NSString;
@protocol _UIScrollEventRespondable, _UIEditMenuDismissalGestureRecognizerDelegate;


#import "UIGestureRecognizer.h"

@interface _UIEditMenuDismissalGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<_UIEditMenuDismissalGestureRecognizerDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (readonly) Class superclass;


+(BOOL)_supportsTouchContinuation;
+(BOOL)canHandleEventForPassthrough:(id)arg0 ;
-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_scrollingChangedWithEvent:(id)arg0 ;
-(void)_transformChangedWithEvent:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif