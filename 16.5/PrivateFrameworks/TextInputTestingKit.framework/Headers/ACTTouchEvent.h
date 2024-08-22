// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTTOUCHEVENT_H
#define ACTTOUCHEVENT_H

@class TIKeyboardTouchEvent;


#import "ACTUserAction.h"

@interface ACTTouchEvent : ACTUserAction

@property (readonly, nonatomic) TIKeyboardTouchEvent *touchEvent; // ivar: _touchEvent


-(id)description;
-(id)initWithTouchEvent:(id)arg0 ;
-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif