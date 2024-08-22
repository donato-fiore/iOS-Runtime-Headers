// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIROTATIONGESTURERECOGNIZER_H
#define UIROTATIONGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"
#import "_UIGestureRecognizerTransformAnalyzer.h"

@interface UIRotationGestureRecognizer : UIGestureRecognizer {
    CGFloat _initialTouchDistance;
    CGFloat _initialTouchAngle;
    CGFloat _currentTouchAngle;
    NSInteger _currentRotationCount;
    CGFloat _lastTouchTime;
    CGFloat _velocity;
    CGFloat _previousVelocity;
    CGPoint _anchorSceneReferencePoint;
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    UITouch" _touches;
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}


@property (nonatomic) CGFloat rotation;
@property (readonly, nonatomic) CGFloat velocity;


+(BOOL)_shouldDefaultToTouches;
+(BOOL)supportsSecureCoding;
-(CGFloat)_postRecognitionWeight;
-(CGFloat)_preRecognitionWeight;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )anchorPoint;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_cancelOrFail;
-(void)_endOrFail;
-(void)_resetGestureRecognizer;
-(void)_setPostRecognitionWeight:(CGFloat)arg0 ;
-(void)_setPreRecognitionWeight:(CGFloat)arg0 ;
-(void)_transformChangedWithEvent:(id)arg0 ;
-(void)_updateTransformAnalyzerWeights;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif