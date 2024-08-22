// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTGESTURETUNING_H
#define UITEXTGESTURETUNING_H

@protocol UICoordinateSpace;

#import <Foundation/Foundation.h>

#import "UITextMagnifierTimeWeightedPoint.h"

@interface UITextGestureTuning : NSObject {
    CGPoint _caretDistance;
    CGFloat _initialOffsetFromTopOfCaret;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    NSInteger _lastTouchType;
}


@property (weak, nonatomic) NSObject<UICoordinateSpace> *containerCoordinateSpace; // ivar: _containerCoordinateSpace
@property (readonly, nonatomic) BOOL didBreakLineThreshold; // ivar: _didBreakLineThreshold
@property (weak, nonatomic) NSObject<UICoordinateSpace> *gestureCoordinateSpace; // ivar: _gestureCoordinateSpace
@property (nonatomic) BOOL includeTipProjection; // ivar: _includeTipProjection
@property (readonly, nonatomic) CGFloat initialPosition; // ivar: _initialPosition
@property (readonly, nonatomic) CGFloat lineBreakProgress; // ivar: _lineBreakProgress
@property (nonatomic) BOOL shouldIncludeConstantOffset; // ivar: _shouldIncludeConstantOffset
@property (nonatomic) BOOL shouldUseLineThreshold; // ivar: _shouldUseLineThreshold
@property (nonatomic) BOOL strongerBiasAgainstUp; // ivar: _strongerBiasAgainstUp


-(id)init;
-(struct CGPoint )pointForGestureState:(NSInteger)arg0 point:(struct CGPoint )arg1 translation:(struct CGPoint )arg2 ;
-(struct CGPoint )pointIfPlacedCarefully:(struct CGPoint )arg0 ;
-(struct CGPoint )touchAlignedPointForPoint:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(void)_reset;
-(void)assertInitialPositionFromTopOfCaret:(CGFloat)arg0 distanceFromCaret:(struct CGPoint )arg1 ;
-(void)updateVisibilityOffsetForGestureState:(NSInteger)arg0 touchType:(NSInteger)arg1 locationInSceneReferenceSpace:(struct CGPoint )arg2 majorRadius:(CGFloat)arg3 ;
-(void)updateWeightedPointWithGestureState:(NSInteger)arg0 location:(struct CGPoint )arg1 ;
-(void)updateWithTouches:(id)arg0 gestureState:(NSInteger)arg1 ;


@end


#endif