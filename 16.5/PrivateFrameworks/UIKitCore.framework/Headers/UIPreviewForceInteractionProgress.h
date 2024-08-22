// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPREVIEWFORCEINTERACTIONPROGRESS_H
#define UIPREVIEWFORCEINTERACTIONPROGRESS_H

@class NSObservation, NSString;
@protocol _UIForceLevelClassifierDelegate;


#import "UIInteractionProgress.h"
#import "_UITouchForceObservable.h"
#import "_UIForceLevelClassifier.h"

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate>

 {
    _UITouchForceObservable *_observable;
    NSInteger _minimumState;
    BOOL _updateMinimumStateWithTargetState;
    _UIForceLevelClassifier *_classifier;
    NSObservation *_classifierObservation;
    BOOL _enteredMinimumState;
    BOOL _didEnd;
    NSObservation *_progressObservation;
    NSObservation *_targetStateUpdateObservation;
    NSObservation *_gestureBeganObservation;
}


@property (nonatomic, setter=_setClassifierShouldRespectSystemGestureTouchFiltering:) BOOL _classifierShouldRespectSystemGestureTouchFiltering;
@property (nonatomic, setter=_setTargetState:) NSInteger _targetState; // ivar: _targetState
@property (nonatomic) BOOL completesAtTargetState; // ivar: _completesAtTargetState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)didEnd;
-(BOOL)enteredMinimumState;
-(id)_initWithObservable:(id)arg0 targetState:(NSInteger)arg1 minimumRequiredState:(NSInteger)arg2 ;
-(id)_initWithObservable:(id)arg0 targetState:(NSInteger)arg1 minimumRequiredState:(NSInteger)arg2 useLinearClassifier:(BOOL)arg3 ;
-(id)_initWithView:(id)arg0 targetState:(NSInteger)arg1 minimumRequiredState:(NSInteger)arg2 useLinearClassifier:(BOOL)arg3 ;
-(id)initWithGestureRecognizer:(id)arg0 ;
-(id)initWithGestureRecognizer:(id)arg0 minimumRequiredState:(NSInteger)arg1 ;
-(id)initWithView:(id)arg0 targetState:(NSInteger)arg1 ;
-(id)initWithView:(id)arg0 targetState:(NSInteger)arg1 minimumRequiredState:(NSInteger)arg2 ;
-(void)_forceLevelClassifier:(id)arg0 currentForceLevelDidChange:(NSInteger)arg1 ;
-(void)_forceLevelClassifierDidReset:(id)arg0 ;
-(void)_gestureRecognizerBegan:(BOOL)arg0 ;
-(void)_installProgressObserver;
-(void)_setGestureBeginObservable:(id)arg0 ;


@end


#endif