// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPLATTERHOMEGESTURECONTEXT_H
#define SBPLATTERHOMEGESTURECONTEXT_H

@class NSString;
@protocol SBBarSwipeAffordanceControllingDelegate, SBBarSwipeAffordanceDelegate, SBUIPresentableHomeGestureContext, SBPlatterHomeGestureViewProviding, BSInvalidatable, SBPlatterHomeGestureContextDelegate, SBUIPresentableHomeGestureParticipant;

#import <Foundation/Foundation.h>

#import "SBBarSwipeAffordanceController.h"

@interface SBPlatterHomeGestureContext : NSObject <SBBarSwipeAffordanceControllingDelegate, SBBarSwipeAffordanceDelegate, SBUIPresentableHomeGestureContext, SBPlatterHomeGestureViewProviding>

 {
    SBBarSwipeAffordanceController *_barSwipeAffordanceController;
    id<BSInvalidatable> *_gestureRecognizerPriorityAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPlatterHomeGestureContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ownsHomeGesture;
@property (readonly, weak, nonatomic) NSObject<SBUIPresentableHomeGestureParticipant> *participant; // ivar: _participant
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsToBeActiveAffordance; // ivar: _wantsToBeActiveAffordance


-(NSUInteger)barSwipeAffordanceView:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(id)hideAnimationSettingsForBarSwipeAffordanceView:(id)arg0 ;
-(id)initWithParticipant:(id)arg0 participantIdentifier:(NSInteger)arg1 windowScene:(id)arg2 ;
-(id)keyboardHomeAffordanceAssertionForBarSwipeAffordanceControlling:(id)arg0 ;
-(id)platterBarSwipeAffordanceViewForParticipant:(id)arg0 ;
-(id)unhideAnimationSettingsForBarSwipeAffordanceView:(id)arg0 ;
-(void)becomeActiveAffordanceIfPossible:(BOOL)arg0 ;
-(void)dealloc;
-(void)setWantsHomeGesture:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif