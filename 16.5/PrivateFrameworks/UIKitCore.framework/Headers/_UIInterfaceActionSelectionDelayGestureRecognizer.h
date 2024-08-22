// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINTERFACEACTIONSELECTIONDELAYGESTURERECOGNIZER_H
#define _UIINTERFACEACTIONSELECTIONDELAYGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"

@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) UIDelayedAction *delayedAction; // ivar: _delayedAction


-(void)_timerSatisfied;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif