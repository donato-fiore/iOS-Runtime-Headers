// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISWIPEGESTURERECOGNIZER_H
#define UISWIPEGESTURERECOGNIZER_H

@class NSMutableArray;


#import "UIGestureRecognizer.h"

@interface UISwipeGestureRecognizer : UIGestureRecognizer {
    CGFloat _minimumPrimaryMovement;
    CGFloat _maximumPrimaryMovement;
    CGFloat _minimumSecondaryMovement;
    CGFloat _maximumSecondaryMovement;
    CGFloat _minimumPrimaryMovementRate;
    CGFloat _rateOfMinimumMovementDecay;
    CGFloat _rateOfMaximumMovementDecay;
    NSMutableArray *_touches;
    CGPoint _startLocation;
    *CGPoint _startLocations;
    CGFloat _startTime;
    *CGPoint _previousLocations;
    CGFloat _previousTime;
    BOOL _failed;
}


@property (nonatomic) NSUInteger direction; // ivar: _direction
@property (nonatomic) CGFloat maximumDuration; // ivar: _maximumDuration
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired


+(BOOL)_shouldDefaultToTouches;
+(BOOL)supportsSecureCoding;
-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(NSUInteger)numberOfTouches;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )locationOfTouch:(NSUInteger)arg0 inView:(id)arg1 ;
-(void)_appendSubclassDescription:(id)arg0 ;
-(void)_resetGestureRecognizer;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif