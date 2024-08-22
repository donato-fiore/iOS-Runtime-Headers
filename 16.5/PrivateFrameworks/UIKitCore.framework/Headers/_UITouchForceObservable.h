// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITOUCHFORCEOBSERVABLE_H
#define _UITOUCHFORCEOBSERVABLE_H

@class NSObservationSource, NSObservation, CADisplayLink, NSSet, NSString;
@protocol NSObserver;


#import "UIView.h"
#import "_UITouchesObservingGestureRecognizer.h"

@interface _UITouchForceObservable : NSObservationSource <NSObserver>

 {
    UIView *_view;
    NSInteger _observerCount;
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    NSObservation *_touchesObservation;
    CADisplayLink *_continuousEvaluationDisplayLink;
    NSSet *_currentTouches;
    CGFloat _lastObservationTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)arg0 ;
-(CGFloat)_maximumPossibleForceForTouches:(id)arg0 ;
-(CGFloat)_timestampForTouches:(id)arg0 ;
-(CGFloat)_unclampedTouchForceForTouches:(id)arg0 ;
-(id)_touchForceMessageForTouches:(id)arg0 ;
-(id)addObserver:(id)arg0 ;
-(id)init;
-(id)initWithView:(id)arg0 ;
-(void)_cancelContinuousEvaluation;
-(void)_didEndHavingAnyObservers;
-(void)_updateForContinuousEvaluation:(id)arg0 ;
-(void)_willBeginHavingAnyObservers;
-(void)dealloc;
-(void)receiveObservedValue:(id)arg0 ;
-(void)removeObservation:(id)arg0 ;


@end


#endif