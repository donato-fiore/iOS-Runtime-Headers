// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITAPRECOGNIZER_H
#define UITAPRECOGNIZER_H

@class NSMutableSet, NSSet, NSArray;
@protocol NSSecureCoding, UITapRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface UITapRecognizer : NSObject <NSSecureCoding>

 {
    NSMutableSet *_activeTouches;
    CGPoint _location;
    CGPoint _startPoint;
    CGPoint _digitizerLocation;
    CGFloat _allowableMovement;
    CGFloat _allowableSeparation;
    CGFloat _maximumSingleTapDuration;
    CGFloat _startTime;
    CGFloat _maximumIntervalBetweenSuccessiveTaps;
    NSInteger _strongestDirectionalAxis;
    CGFloat _strongestDirectionalForce;
    int _currentNumberOfTouches;
    int _currentNumberOfTaps;
    int _numberOfTouchesForCurrentTap;
    BOOL _timerOn;
    BOOL _multitouchTimerOn;
    BOOL _noNewTouches;
    BOOL _hasPointerTouch;
    BOOL _continuousTapRecognition;
}


@property (readonly, nonatomic) NSSet *activeTouches;
@property (nonatomic) CGFloat allowableMovement;
@property (nonatomic) CGFloat allowableSeparation;
@property (nonatomic) CGFloat allowableTouchTimeSeparation; // ivar: _allowableTouchTimeSeparation
@property (nonatomic) NSInteger buttonMaskRequired; // ivar: _buttonMaskRequired
@property (nonatomic) BOOL continuousTapRecognition;
@property (nonatomic) BOOL countsOnlyActiveTouches; // ivar: _countsOnlyActiveTouches
@property (weak, nonatomic) NSObject<UITapRecognizerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger exclusiveDirectionalAxis; // ivar: _exclusiveDirectionalAxis
@property (nonatomic) CGFloat maximumIntervalBetweenSuccessiveTaps;
@property (nonatomic) CGFloat maximumSingleTapDuration;
@property (nonatomic) CGFloat maximumTapDuration; // ivar: _maximumTapDuration
@property (nonatomic) CGFloat minimumTapDuration; // ivar: _minimumTapDuration
@property (nonatomic) NSUInteger numberOfTapsRequired; // ivar: _numberOfTapsRequired
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired
@property (readonly, nonatomic) NSArray *touches; // ivar: _touches


+(BOOL)supportsSecureCoding;
-(CGFloat)_effectiveAllowableMovement;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPoint )_digitizerLocation;
-(struct CGPoint )_locationInSceneReferenceSpace;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 focusSystem:(id)arg1 ;
-(void)_beginInteraction;
-(void)_interactionEndedTouch:(BOOL)arg0 ;
-(void)_reset;
-(void)_updateDigitizerLocationForEvent:(id)arg0 ;
-(void)clearMultitouchTimer;
-(void)clearTapTimer;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)multitouchExpired:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)startMultitouchTimer:(CGFloat)arg0 ;
-(void)startTapTimer:(CGFloat)arg0 ;
-(void)tooSlow:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif