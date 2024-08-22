// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIHOSTEDWINDOWANIMATIONCONTROLLER_H
#define _UIHOSTEDWINDOWANIMATIONCONTROLLER_H

@class UIWindowAnimationController;



@interface _UIHostedWindowAnimationController : UIWindowAnimationController

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (copy, nonatomic) id *transitionActions; // ivar: _transitionActions


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif