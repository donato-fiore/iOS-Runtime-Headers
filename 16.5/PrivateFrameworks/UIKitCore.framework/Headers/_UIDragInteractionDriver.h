// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDRAGINTERACTIONDRIVER_H
#define _UIDRAGINTERACTIONDRIVER_H

@class NSArray, NSString;
@protocol _UIDragInteractionDriving, _UIDragInteractionDriverDelegate, UIDragInteractionEffect;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIDragInteractionDriver : NSObject <_UIDragInteractionDriving>

 {
    _UIDragInteractionDriverStateMachine _stateMachine;
    CGPoint _initialLocationInWindow;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL additionalTouchesCancelLift; // ivar: _additionalTouchesCancelLift
@property (copy, nonatomic) NSArray *allowedTouchTypes; // ivar: _allowedTouchTypes
@property (nonatomic) BOOL allowsSimultaneousRecognitionDuringLift; // ivar: _allowsSimultaneousRecognitionDuringLift
@property (nonatomic) BOOL automaticallyAddsFailureRelationships; // ivar: _automaticallyAddsFailureRelationships
@property (nonatomic) CGFloat cancellationDelay; // ivar: _cancellationDelay
@property (nonatomic) BOOL cancellationTimerEnabled; // ivar: _cancellationTimerEnabled
@property (nonatomic) CGFloat competingLongPressDelay; // ivar: _competingLongPressDelay
@property (nonatomic) BOOL competingLongPressOnLift; // ivar: _competingLongPressOnLift
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDragInteractionDriverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialLocationInWindow;
@property (readonly, nonatomic) NSObject<UIDragInteractionEffect> *interactionEffect;
@property (nonatomic) CGFloat liftDelay; // ivar: _liftDelay
@property (nonatomic) CGFloat liftMoveHysteresis; // ivar: _liftMoveHysteresis
@property (nonatomic) BOOL shouldAnimateLift; // ivar: _shouldAnimateLift
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)isGestureRecognizerForDragInitiation:(id)arg0 ;
-(NSUInteger)_state;
-(id)init;
-(void)_handleEvent:(NSUInteger)arg0 ;
-(void)attachToView:(id)arg0 ;
-(void)cancel;
-(void)detachFromView:(id)arg0 ;
-(void)didTransitionToBeginState;
-(void)didTransitionToCancelState;
-(void)didTransitionToDeferred;
-(void)didTransitionToInactiveState;
-(void)didTransitionToInflightState;
-(void)didTransitionToPreparing;


@end


#endif