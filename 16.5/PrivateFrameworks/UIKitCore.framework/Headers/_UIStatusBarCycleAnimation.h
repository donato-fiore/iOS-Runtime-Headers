// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARCYCLEANIMATION_H
#define _UISTATUSBARCYCLEANIMATION_H

@class NSMutableArray, NSString, NSArray;
@protocol CAAnimationDelegate, _UIStatusBarPersistentAnimation;

#import <Foundation/Foundation.h>

#import "_UIStatusBarCycleLayerAnimation.h"

@interface _UIStatusBarCycleAnimation : NSObject <CAAnimationDelegate, _UIStatusBarPersistentAnimation>



@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *layerAnimations; // ivar: _layerAnimations
@property (readonly, nonatomic) _UIStatusBarCycleLayerAnimation *mainLayerAnimation;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSArray *stoppingLayerAnimations; // ivar: _stoppingLayerAnimations
@property (nonatomic) BOOL stopsAfterReversing; // ivar: _stopsAfterReversing
@property (readonly) Class superclass;
@property (nonatomic) BOOL visible; // ivar: _visible


-(id)initWithLayerAnimations:(id)arg0 ;
-(void)_sendCompletionsWithFinished:(BOOL)arg0 ;
-(void)_startAnimations;
-(void)_stopAnimations;
-(void)_stopStoppingAnimations;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)pausePersistentAnimation;
-(void)resumePersistentAnimation;
-(void)start;
-(void)stopWithCompletionHandler:(id)arg0 ;


@end


#endif