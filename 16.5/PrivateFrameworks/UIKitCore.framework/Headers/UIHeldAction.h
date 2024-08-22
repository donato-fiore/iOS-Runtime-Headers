// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIHELDACTION_H
#define UIHELDACTION_H

@class NSDate;


#import "UIDelayedAction.h"

@interface UIHeldAction : UIDelayedAction {
    BOOL _holding;
    NSDate *_holdBegan;
    CGFloat _baseDelay;
    CGFloat _timeBalance;
}




-(BOOL)isHolding;
-(void)cancel;
-(void)hold;
-(void)resume;
-(void)touchWithDelay:(CGFloat)arg0 ;
-(void)unschedule;


@end


#endif