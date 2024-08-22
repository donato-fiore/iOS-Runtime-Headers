// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITOUCHESEVENT_H
#define UITOUCHESEVENT_H

@class NSMutableSet, NSSet, NSMapTable;


#import "UIEvent.h"

@interface UITouchesEvent : UIEvent {
    NSMutableSet *_allTouchesMutable;
    NSSet *_allTouchesImmutableCached;
    *__CFDictionary _keyedTouches;
    *__CFDictionary _keyedTouchesByWindow;
    *__CFDictionary _gestureRecognizersByWindow;
    NSMapTable *_latentSystemGestureWindows;
    *__CFDictionary _coalescedTouches;
    *__CFDictionary _finalTouches;
    BOOL _isCallingEventObservers;
    NSMutableSet *_exclusiveTouchWindows;
    BOOL _containsHIDPointerEvent;
}


@property (readonly, nonatomic) CGFloat _initialTouchTimestamp;
@property (readonly, nonatomic, getter=_containsHIDPointerEvent) BOOL containsHIDPointerEvent;
@property (nonatomic) NSInteger singleAllowableExternalTouchPathIndex; // ivar: _singleAllowableExternalTouchPathIndex


-(BOOL)_anyInterestedGestureRecognizersForTouchInView:(id)arg0 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg0 ;
-(CGFloat)_initialTouchTimestampForWindow:(id)arg0 ;
-(NSInteger)type;
-(NSUInteger)_inputPrecision;
-(id)_allTouches;
-(id)_cloneEvent;
-(id)_exclusiveTouchWindows;
-(id)_firstTouchForView:(id)arg0 ;
-(id)_gestureRecognizersForWindow:(id)arg0 ;
-(id)_init;
-(id)_initWithEvent:(struct __GSEvent *)arg0 touches:(id)arg1 ;
-(id)_lastPendingCoalescedTouchForIndex:(NSInteger)arg0 hidEvent:(struct __IOHIDEvent *)arg1 ;
-(id)_rawCoalescedTouchesForTouch:(id)arg0 ;
-(id)_touchesForGesture:(id)arg0 withPhase:(NSInteger)arg1 ;
-(id)_touchesForGestureRecognizer:(id)arg0 ;
-(id)_touchesForKey:(id)arg0 ;
-(id)_touchesForView:(id)arg0 withPhase:(NSInteger)arg1 ;
-(id)_touchesForWindow:(id)arg0 ;
-(id)_viewsForWindow:(id)arg0 ;
-(id)_windows;
-(id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg0 ;
-(id)allTouches;
-(id)coalescedTouchesForTouch:(id)arg0 ;
-(id)description;
-(id)predictedTouchesForTouch:(id)arg0 ;
-(id)touchesForGestureRecognizer:(id)arg0 ;
-(id)touchesForView:(id)arg0 ;
-(id)touchesForWindow:(id)arg0 ;
-(struct CGPoint )_digitizerLocation;
-(struct __CFDictionary *)_coalescedTouchesForHidEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_addCoalescedTouch:(id)arg0 forIndex:(NSInteger)arg1 hidEvent:(struct __IOHIDEvent *)arg2 ;
-(void)_addGestureRecognizersForGestureOwner:(id)arg0 toTouch:(id)arg1 ;
-(void)_addGestureRecognizersForGestureOwner:(id)arg0 toTouch:(id)arg1 forContinuation:(BOOL)arg2 ;
-(void)_addGestureRecognizersForTouchContinuationInGestureOwner:(id)arg0 toTouch:(id)arg1 ;
-(void)_addTouch:(id)arg0 forDelayedDelivery:(BOOL)arg1 ;
-(void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg0 deliveredToEventWindow:(id)arg1 ;
-(void)_clearTouches;
-(void)_clearViewForTouch:(id)arg0 ;
-(void)_collectGestureRecognizersForGestureOwner:(id)arg0 withBlock:(id)arg1 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg0 ;
-(void)_invalidateGestureRecognizerForWindowCache;
-(void)_moveCoalescedTouchesFromHidEvent:(struct __IOHIDEvent *)arg0 toHidEvent:(struct __IOHIDEvent *)arg1 ;
-(void)_moveTouchesFromView:(id)arg0 toView:(id)arg1 ;
-(void)_removeTouch:(id)arg0 ;
-(void)_removeTouch:(id)arg0 fromGestureRecognizer:(id)arg1 ;
-(void)_removeTouchesForKey:(id)arg0 ;
-(void)_removeTouchesForWindow:(id)arg0 ;
-(void)_setHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_touchesForGesture:(id)arg0 withPhase:(NSInteger)arg1 intoSet:(id)arg2 ;
-(void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif