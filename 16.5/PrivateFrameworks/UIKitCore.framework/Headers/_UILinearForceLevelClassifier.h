// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILINEARFORCELEVELCLASSIFIER_H
#define _UILINEARFORCELEVELCLASSIFIER_H

@class UIForceLevelClassifier;



@interface _UILinearForceLevelClassifier : UIForceLevelClassifier {
    CGFloat _smoothedForce;
    BOOL _anyForceObservations;
    CGFloat _smoothedImpulse;
    NSInteger _impulseObservationState;
    CGFloat _lastForceForImpulse;
    CGFloat _lastTimestampForImpulse;
}


@property (readonly, nonatomic) CGFloat currentImpulse;
@property (nonatomic) CGFloat impulseSmoothingFactor; // ivar: _impulseSmoothingFactor
@property (nonatomic) CGFloat revealThreshold; // ivar: _revealThreshold
@property (nonatomic) CGFloat smoothingFactor; // ivar: _smoothingFactor
@property (nonatomic) CGFloat standardThreshold; // ivar: _standardThreshold
@property (nonatomic) CGFloat strongThreshold; // ivar: _strongThreshold


-(CGFloat)_calculateProgressOfTouchForceValue:(CGFloat)arg0 toForceLevel:(NSInteger)arg1 minimumRequiredForceLevel:(NSInteger)arg2 ;
-(CGFloat)_instantaneousImpulseForTouchForceValue:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 ;
-(CGFloat)_thresholdForForceLevel:(NSInteger)arg0 ;
-(NSInteger)_forceLevelForTouchForceValue:(CGFloat)arg0 ;
-(id)init;
-(id)transformerFromTouchForceMessageToProgressToForceLevel:(NSInteger)arg0 minimumRequiredForceLevel:(NSInteger)arg1 ;
-(void)_updateForceWithTouchForceValue:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)_updateImpulseWithTouchForceValue:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)debuggingPropertyForKey:(id)arg0 changedToValue:(id)arg1 ;
-(void)observeTouchWithForceValue:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 withCentroidAtLocation:(struct CGPoint )arg2 ;
-(void)reset;
-(void)touchForceMultiplierDidChange;


@end


#endif