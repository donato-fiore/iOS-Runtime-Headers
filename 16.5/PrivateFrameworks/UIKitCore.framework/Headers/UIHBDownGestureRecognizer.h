// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIHBDOWNGESTURERECOGNIZER_H
#define UIHBDOWNGESTURERECOGNIZER_H

@class NSMutableSet, NSSet;


#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_delayedAction;
    NSMutableSet *_currentlyPressedTypes;
    NSSet *_requiredPressTypes;
}


@property (nonatomic) CGFloat maximumIntervalBetweenPresses; // ivar: _maximumIntervalBetweenPresses


-(BOOL)_allRequiredButtonsDown;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_fail;
-(void)_processPresses:(id)arg0 ;
-(void)_resetGestureRecognizer;
-(void)_succeed;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg0 ;


@end


#endif