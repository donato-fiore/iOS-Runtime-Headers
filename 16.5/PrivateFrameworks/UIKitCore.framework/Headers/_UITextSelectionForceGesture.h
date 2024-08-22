// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTSELECTIONFORCEGESTURE_H
#define _UITEXTSELECTIONFORCEGESTURE_H



#import "UILongPressGestureRecognizer.h"
#import "UIKBPanGestureVelocitySample.h"

@interface _UITextSelectionForceGesture : UILongPressGestureRecognizer

@property (readonly, getter=_liftOffSample) UIKBPanGestureVelocitySample *_liftOffSample; // ivar: _liftOffSample
@property (readonly, getter=_previousVelocitySample) UIKBPanGestureVelocitySample *_previousVelocitySample; // ivar: _previousVelocitySample
@property (readonly, getter=_velocitySample) UIKBPanGestureVelocitySample *_velocitySample; // ivar: _velocitySample
@property (nonatomic) BOOL didLongPress; // ivar: _didLongPress
@property (nonatomic) NSInteger increasingForceState; // ivar: _increasingForceState
@property (nonatomic) CGFloat increasingForceTimestamp; // ivar: _increasingForceTimestamp
@property (nonatomic) CGPoint lastSceneReferenceLocation; // ivar: _lastSceneReferenceLocation
@property (nonatomic) CGFloat lastTouchTime; // ivar: _lastTouchTime
@property (nonatomic) CGPoint lastUnadjustedSceneReferenceLocation; // ivar: _lastUnadjustedSceneReferenceLocation
@property (nonatomic) NSInteger liftOffState; // ivar: _liftOffState
@property (nonatomic) BOOL shouldFailWithoutForce; // ivar: _shouldFailWithoutForce
@property (nonatomic) BOOL touchEclipsesVelocity; // ivar: _touchEclipsesVelocity
@property (nonatomic) CGRect velocityRange; // ivar: _velocityRange


-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(BOOL)forceHasIncreasedForTimeInterval:(CGFloat)arg0 ;
-(BOOL)shouldResetRangeForVelocity:(struct CGPoint )arg0 previousVelocity:(struct CGPoint )arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )_adjustSceneReferenceLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )_centroidInView:(id)arg0 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 toSceneReferenceCoordinatesFromView:(id)arg1 ;
-(struct CGPoint )_convertVelocitySample:(id)arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(struct CGPoint )_locationOfTouches:(id)arg0 ;
-(struct CGPoint )_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(struct UIOffset )_offsetInViewFromSceneReferenceLocation:(struct CGPoint )arg0 toSceneReferenceLocation:(struct CGPoint )arg1 ;
-(void)_centroidMovedTo:(struct CGPoint )arg0 atTime:(CGFloat)arg1 physicalTouch:(id)arg2 ;
-(void)_resetVelocitySamples;
-(void)_updateLiftOffState;
-(void)enoughTimeElapsed:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif