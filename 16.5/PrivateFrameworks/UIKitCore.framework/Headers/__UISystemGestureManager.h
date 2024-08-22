// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __UISYSTEMGESTUREMANAGER_H
#define __UISYSTEMGESTUREMANAGER_H

@class FBSDisplayIdentity, NSMutableSet, NSString, NSSet, BKSTouchStream;
@protocol UIGestureRecognizerDelegate, _UIExclusiveTouchGestureRecognizerDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_UISystemGestureWindow.h"
#import "UIGestureRecognizer.h"

@interface __UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, _UIExclusiveTouchGestureRecognizerDelegate>

 {
    FBSDisplayIdentity *_displayIdentity;
    _UISystemGestureWindow *_systemGestureWindow;
    NSMutableSet *_recognizingGestures;
    NSMutableSet *_externalEdgeSwipeGestures;
    NSMutableSet *_internalGestures;
    NSMutableSet *_externalGestures;
    id<BSInvalidatable> *_stateCaptureToken;
}


@property (nonatomic) BOOL achievedMaximumMovement; // ivar: _achievedMaximumMovement
@property (retain, nonatomic) UIGestureRecognizer *catchEdgeSwipeFailureGesture; // ivar: _catchEdgeSwipeFailureGesture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didProcessPendingSwipeBegan; // ivar: _didProcessPendingSwipeBegan
@property (nonatomic) BOOL didSeeExclusiveTouchBegan; // ivar: _didSeeExclusiveTouchBegan
@property (retain, nonatomic) UIGestureRecognizer *directTouchGesture; // ivar: _directTouchGesture
@property (retain, nonatomic) UIGestureRecognizer *exclusiveTouchGesture; // ivar: _exclusiveTouchGesture
@property (readonly, copy, nonatomic) NSSet *gestureRecognizers;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIGestureRecognizer *pendingSwipeGesture; // ivar: _pendingSwipeGesture
@property (readonly) Class superclass;
@property (retain, nonatomic) BKSTouchStream *touchStream; // ivar: _touchStream


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)initWithDisplayIdentity:(id)arg0 ;
-(id)windowForSystemGestures;
-(unsigned char)_dispatchModeForExternalGestureCompletion;
-(void)_addInternalGesturesToView:(id)arg0 ;
-(void)_catchSwipeFailureGestureChanged:(id)arg0 ;
-(void)_directTouchDown:(id)arg0 ;
-(void)_exclusiveTouchGestureChanged:(id)arg0 ;
-(void)_exclusiveTouchGestureDidTerminate:(id)arg0 ;
-(void)_externalGestureRecognizerChanged:(id)arg0 ;
-(void)_failedPendingSwipe;
-(void)_handleTooMuchMovementWithLastTouchTimestamp:(CGFloat)arg0 ;
-(void)_pendingSwipeGestureChanged:(id)arg0 ;
-(void)_pendingSwipeGestureDidBegin:(id)arg0 ;
-(void)_pendingSwipeGestureDidTerminate:(id)arg0 ;
-(void)_removeInternalGestures;
-(void)addGestureRecognizer:(id)arg0 ;
-(void)addGestureRecognizer:(id)arg0 recognitionEvent:(NSInteger)arg1 ;
-(void)clearTransform;
-(void)dealloc;
-(void)exclusiveTouchGestureRecognizer:(id)arg0 achievedMaximumAbsoluteAccumulatedMovement:(BOOL)arg1 timestamp:(CGFloat)arg2 ;
-(void)removeGestureRecognizer:(id)arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;


@end


#endif