// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCROLLVIEWDELAYEDTOUCHESBEGANGESTURERECOGNIZER_H
#define UISCROLLVIEWDELAYEDTOUCHESBEGANGESTURERECOGNIZER_H

@class UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient>;


#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_touchDelay;
    CGPoint _startSceneReferenceLocation;
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> *_client;
}




+(BOOL)_shouldDefaultToTouches;
-(BOOL)_shouldMakeTimerForDelayedContentTouches:(id)arg0 ;
-(id)_clientView;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)dealloc;
-(void)sendDelayedTouches;
-(void)sendTouchesShouldBeginForDelayedTouches:(id)arg0 ;
-(void)sendTouchesShouldBeginForTouches:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif