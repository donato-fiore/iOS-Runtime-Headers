// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMGESTUREMANAGER_H
#define SBSYSTEMGESTUREMANAGER_H

@class FBSDisplayIdentity, NSMutableDictionary, NSMapTable, NSMutableSet, NSSet, UIGestureRecognizer, UIPointerInteraction, NSString, _UISystemGestureManager;
@protocol UIGestureRecognizerDelegate, UIPointerInteractionDelegate, BSDescriptionProviding, BSInvalidatable, SBSystemUIPointerInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SBIndirectTouchLifecycleMonitor.h"

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, UIPointerInteractionDelegate, BSDescriptionProviding, BSInvalidatable>

 {
    FBSDisplayIdentity *_displayIdentity;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_gestureToType;
    NSMutableDictionary *_typeToState;
    NSMapTable *_recognizingTouchGestures;
    NSMutableSet *_touchGestures;
    NSMutableSet *_gesturesDisabledAssertions;
    NSSet *_gestureTypesAllowedWhileDisableAssertionsExist;
    UIGestureRecognizer *_stylusPriorityRecognizer;
    id<BSInvalidatable> *_systemGestureEventDeferringRule;
    id<BSInvalidatable> *_pointerEventRoutingAssertion;
    unsigned int _lastSystemGestureWindowContextId;
    id<BSInvalidatable> *_systemGesturesAllowedToken;
    UIPointerInteraction *_systemPointerInteraction;
    id<BSInvalidatable> *_systemPointerContextIDAssertion;
    BOOL _isInvalidated;
}


@property (readonly, nonatomic, getter=isAnyTouchGestureRunning) BOOL anyTouchGestureRunning;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *gesturesPreventedByStylus; // ivar: _gesturesPreventedByStylus
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIndirectTouchLifecycleMonitor *indirectTouchLifecycleMonitor; // ivar: _indirectTouchLifecycleMonitor
@property (readonly) Class superclass;
@property (weak, nonatomic) _UISystemGestureManager *systemGestureManager; // ivar: _systemGestureManager
@property (nonatomic, getter=areSystemGesturesDisabledForAccessibility) BOOL systemGesturesDisabledForAccessibility; // ivar: _systemGesturesDisabledForAccessibility
@property (weak, nonatomic) NSObject<SBSystemUIPointerInteractionDelegate> *systemPointerInteractionDelegate; // ivar: _systemPointerInteractionDelegate
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)_isDeviceHardwareButtonGestureType:(NSUInteger)arg0 ;
+(id)deviceHardwareButtonGestureTypes;
+(id)mainDisplayManager;
-(BOOL)_isGestureWithTypeAllowed:(NSUInteger)arg0 ;
-(BOOL)_isTouchGestureWithType:(NSUInteger)arg0 ;
-(BOOL)_shouldEnableSystemGestureWithType:(NSUInteger)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isGestureWithTypeAllowed:(NSUInteger)arg0 ;
-(BOOL)isSystemGestureRecognizer:(id)arg0 ;
-(BOOL)shouldEnableSystemGestureWithType:(NSUInteger)arg0 ;
-(BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint )arg0 ;
-(NSInteger)_recognitionEventForTouchGestureType:(NSUInteger)arg0 ;
-(id)_initWithDisplayIdentity:(id)arg0 ;
-(id)acquireSystemGestureDisableAssertionForReason:(id)arg0 exceptSystemGestureTypes:(id)arg1 ;
-(id)acquireSystemGestureDisableAssertionForReason:(id)arg0 forSystemGestureTypes:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)windowForSystemGestures;
-(void)_configureForNewSystemGestureWindowIfNecessary;
-(void)_disableSystemGesture:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)_enableSystemGesture:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)_evaluateEnablement;
-(void)_systemGestureChanged:(id)arg0 ;
-(void)addGestureRecognizer:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)gestureRecognizerOfType:(NSUInteger)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)gestureRecognizerOfType:(NSUInteger)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)arg0 ;
-(void)invalidate;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)removeGestureRecognizer:(id)arg0 ;


@end


#endif