// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRUIALERTFADEANIMATIONCONTROLLER_H
#define TVRUIALERTFADEANIMATIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, TVRemoteAlertVisualStyleProviding;

#import <Foundation/Foundation.h>


@interface TVRUIAlertFadeAnimationController : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, nonatomic) NSInteger animationType; // ivar: _animationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TVRemoteAlertVisualStyleProviding> *visualStyle; // ivar: _visualStyle


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithAnimationType:(NSInteger)arg0 visualStyle:(id)arg1 ;
-(void)_runDismissalAnimationWithTransition:(id)arg0 ;
-(void)_runPresentationAnimationWithTransition:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif