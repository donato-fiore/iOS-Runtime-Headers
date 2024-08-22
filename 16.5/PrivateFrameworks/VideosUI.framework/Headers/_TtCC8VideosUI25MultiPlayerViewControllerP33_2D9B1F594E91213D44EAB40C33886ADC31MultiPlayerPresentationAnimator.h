// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC8VIDEOSUI25MULTIPLAYERVIEWCONTROLLERP33_2D9B1F594E91213D44EAB40C33886ADC31MULTIPLAYERPRESENTATIONANIMATOR_H
#define _TTCC8VIDEOSUI25MULTIPLAYERVIEWCONTROLLERP33_2D9B1F594E91213D44EAB40C33886ADC31MULTIPLAYERPRESENTATIONANIMATOR_H

@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface _TtCC8VideosUI25MultiPlayerViewControllerP33_2D9B1F594E91213D44EAB40C33886ADC31MultiPlayerPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    ? cancellables;
    ? $__lazy_storage_$_menuGesture;
}




-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(void)animateTransition:(id)arg0 ;
-(void)menuPressed:(id)arg0 ;


@end


#endif