// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPASSTHROUGHGATEGESTURERECOGNIZER_H
#define _UIPASSTHROUGHGATEGESTURERECOGNIZER_H

@class NSString;
@protocol _UIScrollEventRespondable, _UIPassthroughGestureDelegate;


#import "UIGestureRecognizer.h"

@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIPassthroughGestureDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_supportsTouchContinuation;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_scrollingChangedWithEvent:(id)arg0 ;
-(void)endClosed;
-(void)open;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;


@end


#endif