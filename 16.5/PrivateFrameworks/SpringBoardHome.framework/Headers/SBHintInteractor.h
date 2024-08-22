// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHINTINTERACTOR_H
#define SBHINTINTERACTOR_H

@class NSString, UIInteractionProgress;
@protocol UIInteractionProgressObserver, SBViewControllerInteractiveTransitioning, SBViewControllerContextTransitioning;

#import <Foundation/Foundation.h>


@interface SBHintInteractor : NSObject <UIInteractionProgressObserver, SBViewControllerInteractiveTransitioning>

 {
    id<SBViewControllerContextTransitioning> *_transitionContext;
    ? _hintInterval;
}


@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIInteractionProgress *interactionProgress; // ivar: _interactionProgress
@property (readonly, nonatomic) CGFloat maxHintProgress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(BOOL)supportsRestarting;
-(id)initWithInteractionProgress:(id)arg0 maxHintProgress:(CGFloat)arg1 ;
-(void)_updateInteractionPercentComplete:(CGFloat)arg0 ;
-(void)cancelTransition;
-(void)finishInteractiveTransition;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateTransition:(CGFloat)arg0 ;


@end


#endif