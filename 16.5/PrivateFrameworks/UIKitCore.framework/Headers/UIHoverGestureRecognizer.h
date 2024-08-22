// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIHOVERGESTURERECOGNIZER_H
#define UIHOVERGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"
#import "UIHoverEvent.h"
#import "UITouch.h"

@interface UIHoverGestureRecognizer : UIGestureRecognizer {
    UIHoverEvent *_currentHoverEvent;
    UITouch *_currentTouch;
}


@property (readonly, nonatomic) CGFloat _altitudeAngle;
@property (readonly, nonatomic) CGFloat _hoverHeight;
@property (readonly, nonatomic) CGFloat _hoverTouchTimestamp;
@property (readonly, nonatomic) CGFloat _maximumHoverHeight;
@property (readonly, nonatomic) CGFloat _zOffset;
@property (readonly, nonatomic) CGFloat altitudeAngle;
@property (nonatomic, getter=_pausesWhilePanning, setter=_setPausesWhilePanning:) BOOL pausesWhilePanning; // ivar: _pausesWhilePanning
@property (readonly, nonatomic, getter=_previousTrackpadFingerDownCount) NSInteger previousTrackpadFingerDownCount; // ivar: _previousTrackpadFingerDownCount
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) NSInteger trackpadFingerDownCount; // ivar: _trackpadFingerDownCount
@property (readonly, nonatomic) CGFloat zOffset;


-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_paused;
-(BOOL)_shouldReceiveEvent:(id)arg0 ;
-(BOOL)_shouldReceivePress:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_wantsHoverEventsWhilePointerIsLocked;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(CGFloat)_azimuthAngleInView:(id)arg0 ;
-(CGFloat)azimuthAngleInView:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CAPoint3D )_location3DInView:(id)arg0 ;
-(struct CGPoint )_preciseLocationInView:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGVector )_azimuthUnitVectorInView:(id)arg0 ;
-(struct CGVector )azimuthUnitVectorInView:(id)arg0 ;
-(void)_hoverCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverEntered:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverExited:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)_resetInternalState;
-(void)reset;
-(void)setAllowedTouchTypes:(id)arg0 ;
-(void)setRequiresExclusiveTouchType:(BOOL)arg0 ;


@end


#endif