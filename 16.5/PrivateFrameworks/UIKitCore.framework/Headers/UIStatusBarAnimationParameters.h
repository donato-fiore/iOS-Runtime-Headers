// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARANIMATIONPARAMETERS_H
#define UISTATUSBARANIMATIONPARAMETERS_H

@class BSAnimationSettings;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface UIStatusBarAnimationParameters : NSObject

@property (retain, nonatomic) NSObject<_UIBasicAnimationFactory> *animationFactory; // ivar: _animationFactory
@property (readonly, nonatomic) BSAnimationSettings *bsAnimationSettings;
@property (nonatomic) NSInteger curve; // ivar: _curve
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL skipFencing; // ivar: _skipFencing
@property (nonatomic) CGFloat startTime; // ivar: _startTime


+(id)fencingAnimation;
// +(void)animateWithParameters:(id)arg0 animations:(id)arg1 completion:(unk)arg2  ;
// +(void)animateWithParameters:(id)arg0 fromCurrentState:(BOOL)arg1 animations:(id)arg2 completion:(unk)arg3  ;
// +(void)animateWithParameters:(id)arg0 fromCurrentState:(BOOL)arg1 frameInterval:(CGFloat)arg2 animations:(id)arg3 completion:(unk)arg4  ;
-(BOOL)shouldAnimate;
-(id)init;
-(id)initWithDefaultParameters;
-(id)initWithEmptyParameters;


@end


#endif