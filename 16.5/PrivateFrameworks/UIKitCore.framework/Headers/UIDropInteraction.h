// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDROPINTERACTION_H
#define UIDROPINTERACTION_H

@class NSMutableSet, NSMapTable, NSString;
@protocol UIDragGestureRecognizerDelegate, UIInteraction_Internal, _UIDragSetDownAnimationTarget, UIInteraction, UIDropInteractionDelegate, UIDropInteractionEffect, _UIDropInteractionOwning;

#import <Foundation/Foundation.h>

#import "UIDropInteractionContextImpl.h"
#import "UIPasteConfiguration.h"
#import "UIView.h"

@interface UIDropInteraction : NSObject <UIDragGestureRecognizerDelegate, UIInteraction_Internal, _UIDragSetDownAnimationTarget, UIInteraction>

 {
    NSMutableSet *_activeDragGestureRecognizers;
    NSMapTable *_enteredDropSessionByDraggingSession;
    NSUInteger _potentialDragOperation;
}


@property (nonatomic) BOOL allowsSimultaneousDropSessions; // ivar: _allowsSimultaneousDropSessions
@property (retain, nonatomic) UIDropInteractionContextImpl *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UIDropInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<UIDropInteractionEffect> *interactionEffect; // ivar: _interactionEffect
@property (weak, nonatomic) NSObject<_UIDropInteractionOwning> *owner; // ivar: _owner
@property (readonly, copy, nonatomic, getter=_pasteConfiguration) UIPasteConfiguration *pasteConfiguration; // ivar: _pasteConfiguration
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view;
@property (nonatomic, getter=_wantsDefaultVisualBehavior, setter=_setWantsDefaultVisualBehavior:) BOOL wantsDefaultVisualBehavior; // ivar: _wantsDefaultVisualBehavior


-(BOOL)_allowsSimultaneousDragWithEvent:(id)arg0 ;
-(BOOL)_canHandleDragEvent:(id)arg0 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldReceiveDragEvent:(id)arg1 ;
-(BOOL)_setDownAnimation:(id)arg0 shouldDelaySetDownOfDragItem:(id)arg1 completion:(id)arg2 ;
-(BOOL)isActive;
-(NSUInteger)_setLastDragOperation:(NSUInteger)arg0 forbidden:(BOOL)arg1 precise:(BOOL)arg2 prefersFullSizePreview:(BOOL)arg3 preferredBadgeStyle:(NSInteger)arg4 onSession:(id)arg5 ;
-(NSUInteger)_validateDragOperation:(NSUInteger)arg0 forSelector:(SEL)arg1 delegate:(id)arg2 dropSession:(id)arg3 onSession:(id)arg4 forbidden:(*BOOL)arg5 ;
-(id)_dynamicGestureRecognizersForEvent:(id)arg0 ;
-(id)_initWithPasteConfiguration:(id)arg0 ;
-(id)_setDownAnimation:(id)arg0 customSpringAnimationBehaviorForSetDownOfDragItem:(id)arg1 ;
-(id)_setDownAnimation:(id)arg0 prepareForSetDownOfDragItem:(id)arg1 visibleDroppedItem:(id)arg2 ;
-(id)_windowForSetDownOfDragItem:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_dragDestinationGestureStateChanged:(id)arg0 ;
-(void)_dropSessionEntered:(id)arg0 withSessionDestination:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_prepareItemsInSessionForDrop:(id)arg0 ;
-(void)_sendSessionDidEnd:(id)arg0 ;
-(void)_setDownAnimation:(id)arg0 willAnimateSetDownOfDragItem:(id)arg1 withAnimator:(id)arg2 ;
-(void)didMoveToOwner:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToOwner:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif