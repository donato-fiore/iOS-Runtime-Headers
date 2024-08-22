// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPINCHGESTURERECOGNIZER_H
#define UIPINCHGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"
#import "_UIGestureRecognizerTransformAnalyzer.h"

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
    CGFloat _initialTouchDistance;
    CGFloat _initialScale;
    CGFloat _lastEventTime;
    CGFloat _velocity;
    CGFloat _previousVelocity;
    CGFloat _lastNonZeroTimestampDelta;
    CGPoint _anchorSceneReferencePoint;
    UITouch" _touches;
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    BOOL _loggedPinchStatistic;
    BOOL _loggedZoomStatistic;
    BOOL _endsOnSingleTouch;
}


@property (nonatomic) BOOL _enableNestedHysteresis; // ivar: __enableNestedHysteresis
@property (readonly, nonatomic) CGPoint anchorPoint;
@property (nonatomic, getter=_hysteresis, setter=_setHysteresis:) CGFloat hysteresis; // ivar: _hysteresis
@property (nonatomic) CGFloat scale;
@property (nonatomic) CGFloat scaleThreshold; // ivar: _scaleThreshold
@property (nonatomic) CGAffineTransform transform; // ivar: _transform
@property (readonly, nonatomic) CGFloat velocity;


+(BOOL)_shouldDefaultToTouches;
+(BOOL)supportsSecureCoding;
-(BOOL)_endsOnSingleTouch;
-(CGFloat)_hysteresisForTouches:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_applyScale:(CGFloat)arg0 atLocation:(struct CGPoint )arg1 touchDistance:(CGFloat)arg2 withEvent:(id)arg3 ;
-(void)_cancelOrFail;
-(void)_endOrFail;
-(void)_logStatisticsForScale:(CGFloat)arg0 ;
-(void)_resetGestureRecognizer;
-(void)_setEndsOnSingleTouch:(BOOL)arg0 ;
-(void)_transformChangedWithEvent:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif