// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVNAVIGATIONZOOMANIMATOR_H
#define _TVNAVIGATIONZOOMANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface _TVNavigationZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_beginZoomAnimationFromViewController:(id)arg0 toViewController:(id)arg1 containerView:(id)arg2 completion:(id)arg3 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif