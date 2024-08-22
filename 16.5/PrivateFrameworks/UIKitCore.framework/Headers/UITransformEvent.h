// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITRANSFORMEVENT_H
#define UITRANSFORMEVENT_H

@class NSMapTable, BKSHIDEventPointerAttributes;


#import "UIEvent.h"

@interface UITransformEvent : UIEvent {
    NSMapTable *_gestureRecognizersByWindow;
    CGPoint _sceneReferenceLocation;
    CGAffineTransform _transform;
    CGFloat _scaleDelta;
    CGFloat _rotationDelta;
    CGFloat _translationMagDelta;
    NSUInteger _scalePhase;
    NSUInteger _rotationPhase;
    NSUInteger _translationPhase;
    BKSHIDEventPointerAttributes *_pointerAttributes;
}


@property (readonly) NSUInteger phase;
@property (readonly, nonatomic) CGFloat rotation; // ivar: _rotation
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGAffineTransform transform;
@property (readonly, nonatomic) CGPoint translation; // ivar: _translation


-(BOOL)_sendEventToGestureRecognizer:(id)arg0 ;
-(NSInteger)subtype;
-(NSInteger)type;
-(NSInteger)weightedDominantComponentForScaleWeight:(CGFloat)arg0 rotationWeight:(CGFloat)arg1 translationWeight:(CGFloat)arg2 ;
-(id)_gestureRecognizersForWindow:(id)arg0 ;
-(id)_init;
-(id)_initWithEvent:(struct __GSEvent *)arg0 touches:(id)arg1 ;
-(id)_windowServerHitTestWindow;
-(id)_windows;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_removeGestureRecognizer:(id)arg0 ;
-(void)_removeGestureRecognizersFromWindows;
-(void)_reset;
-(void)_setHIDEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif