// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPASSTHROUGHSCROLLGESTURERECOGNIZER_H
#define _UIPASSTHROUGHSCROLLGESTURERECOGNIZER_H

@class NSString;
@protocol _UIScrollEventRespondable, _UIPassthroughGestureDelegate;


#import "UIGestureRecognizer.h"

@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

 {
    CGPoint _startPoint;
    CGFloat _startTime;
    CGVector _accumulatedScrollEventDelta;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIPassthroughGestureDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL endForPrimaryButtonDown; // ivar: _endForPrimaryButtonDown
@property (nonatomic) BOOL endForSecondaryButtonDown; // ivar: _endForSecondaryButtonDown
@property (readonly, nonatomic) NSUInteger endReason; // ivar: _endReason
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_supportsTouchContinuation;
+(BOOL)canHandleEventForPassthrough:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(id)_window;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_beginAtLocation:(struct CGPoint )arg0 ;
-(void)_endWithReason:(NSUInteger)arg0 ;
-(void)_scrollingChangedWithEvent:(id)arg0 ;
-(void)_transformChangedWithEvent:(id)arg0 ;
-(void)reset;
-(void)setView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif