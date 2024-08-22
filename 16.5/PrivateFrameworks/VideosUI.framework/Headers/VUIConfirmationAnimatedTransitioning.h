// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUICONFIRMATIONANIMATEDTRANSITIONING_H
#define VUICONFIRMATIONANIMATEDTRANSITIONING_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, VUIConfirmationAnimatedTransitioningDelegate;

#import <Foundation/Foundation.h>


@interface VUIConfirmationAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIConfirmationAnimatedTransitioningDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(id)initWithPresenting:(BOOL)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;


@end


#endif