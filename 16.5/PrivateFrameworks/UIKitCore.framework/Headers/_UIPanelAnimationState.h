// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPANELANIMATIONSTATE_H
#define _UIPANELANIMATIONSTATE_H


#import <Foundation/Foundation.h>

#import "_UIPanelCoordinatingAnimator.h"
#import "UISlidingBarStateRequest.h"

@interface _UIPanelAnimationState : NSObject

@property (nonatomic) NSInteger affectedSides; // ivar: _affectedSides
@property (retain, nonatomic) _UIPanelCoordinatingAnimator *animator; // ivar: _animator
@property (nonatomic) BOOL animatorShouldCoordinate; // ivar: _animatorShouldCoordinate
@property (copy, nonatomic) UISlidingBarStateRequest *fromRequest; // ivar: _fromRequest
@property (nonatomic, setter=setFinishingAnimation:) BOOL isFinishingAnimation; // ivar: _isFinishingAnimation
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) BOOL shouldAssignOffscreenWidthsToStateRequest; // ivar: _shouldAssignOffscreenWidthsToStateRequest
@property (readonly, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (copy, nonatomic) UISlidingBarStateRequest *toRequest; // ivar: _toRequest


+(CGFloat)defaultDuration;
+(id)timingCurveProvider;
+(id)timingCurveProviderWithVelocity:(CGFloat)arg0 ;
-(id)description;


@end


#endif