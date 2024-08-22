// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCROLLVIEWPAGINGSWIPEGESTURERECOGNIZER_H
#define UISCROLLVIEWPAGINGSWIPEGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"
#import "UIScrollView.h"

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_swipeFailureDelay;
    CGPoint _startLocation;
    CGPoint _lastLocation;
    CGFloat _lastTime;
    int _directionalFailureCount;
}


@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


+(BOOL)_shouldDefaultToTouches;
-(void)_processNewLocation:(struct CGPoint )arg0 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)dealloc;
-(void)enoughTimeElapsed:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif