// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSENGINEPANGESTURERECOGNIZER_H
#define _UIFOCUSENGINEPANGESTURERECOGNIZER_H

@protocol _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusEnginePanGestureTouchObserver;


#import "UIPanGestureRecognizer.h"

@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer

@property (weak, nonatomic) NSObject<_UIFocusEnginePanGestureRecognizerDelegate> *delegate;
@property (weak, nonatomic) NSObject<_UIFocusEnginePanGestureTouchObserver> *touchObserver; // ivar: _touchObserver


-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif