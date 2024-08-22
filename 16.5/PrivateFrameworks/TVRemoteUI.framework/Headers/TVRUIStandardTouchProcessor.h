// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRUISTANDARDTOUCHPROCESSOR_H
#define TVRUISTANDARDTOUCHPROCESSOR_H

@class UIView, NSMutableSet;
@protocol _TVRUIEventDelegate;

#import <Foundation/Foundation.h>

#import "TVRButtonHaptic.h"

@interface TVRUIStandardTouchProcessor : NSObject

@property (retain, nonatomic) UIView *debugView; // ivar: _debugView
@property (retain, nonatomic) NSMutableSet *endedTouches; // ivar: _endedTouches
@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *eventDelegate; // ivar: _eventDelegate
@property (retain, nonatomic) TVRButtonHaptic *haptic; // ivar: _haptic
@property (nonatomic) CGFloat previousTimestamp; // ivar: _previousTimestamp
@property (nonatomic) CGFloat previousVelocity; // ivar: _previousVelocity
@property (nonatomic) CGPoint startingPoint; // ivar: _startingPoint
@property (nonatomic) NSInteger startingSwipeDirection; // ivar: _startingSwipeDirection
@property (retain, nonatomic) NSMutableSet *startingTouches; // ivar: _startingTouches
@property (nonatomic) NSInteger touchCnt; // ivar: _touchCnt
@property (retain, nonatomic) UIView *touchpadView; // ivar: _touchpadView
@property (nonatomic) CGRect virtualBoundingBox; // ivar: _virtualBoundingBox


-(NSInteger)_calculateDominantSwipeDirection:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(id)_touchEventForTouch:(id)arg0 ;
-(id)initWithTouchpadView:(id)arg0 ;
-(struct CGPoint )_virtualTouchLocationForTouchPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_calculateVirtualBoundingBox:(struct CGPoint )arg0 sizingRatio:(CGFloat)arg1 swipeDirection:(NSInteger)arg2 ;
-(void)_cleanupOnTouchesEnded;
-(void)_configureGestureRecognizersOnView;
-(void)_endAndRestartTouchesManually:(id)arg0 ;
-(void)_processTouches:(id)arg0 ;
-(void)_sendSelectButtonPressBegan;
-(void)_sendSelectButtonPressEnded;
-(void)handleLongPress:(id)arg0 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)touchesBegan:(id)arg0 touches:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg0 touches:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg0 touches:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg0 touches:(id)arg1 withEvent:(id)arg2 ;


@end


#endif