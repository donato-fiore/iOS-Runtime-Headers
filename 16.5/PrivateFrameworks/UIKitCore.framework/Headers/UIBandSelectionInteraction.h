// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIBANDSELECTIONINTERACTION_H
#define UIBANDSELECTIONINTERACTION_H

@class NSString;
@protocol UIInteraction_Internal, UIPointerInteractionDelegate, UIGestureRecognizerDelegate, UIInteraction, _UISelectionBandVisualProviding;

#import <Foundation/Foundation.h>

#import "UIHoverGestureRecognizer.h"
#import "UILongPressGestureRecognizer.h"
#import "UIView.h"

@interface UIBandSelectionInteraction : NSObject <UIInteraction_Internal, UIPointerInteractionDelegate, UIGestureRecognizerDelegate, UIInteraction>

 {
    NSUInteger _internalState;
    CGPoint _initialLocation;
    BOOL _hidesVisuals;
}


@property (copy, nonatomic, setter=_setBandVisibilityHandler:) id *_bandVisibilityHandler; // ivar: __bandVisibilityHandler
@property (nonatomic) BOOL _debugUIEnabled; // ivar: __debugUIEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGR; // ivar: _hoverGR
@property (readonly, nonatomic) NSInteger initialModifierFlags; // ivar: _initialModifierFlags
@property (retain, nonatomic) UILongPressGestureRecognizer *pressGR; // ivar: _pressGR
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (readonly, nonatomic) CGRect selectionRect;
@property (copy, nonatomic) id *shouldBeginHandler; // ivar: _shouldBeginHandler
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view
@property (retain, nonatomic) NSObject<_UISelectionBandVisualProviding> *visualProvider; // ivar: _visualProvider


-(BOOL)_gestureRecognizer:(id)arg0 canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_isSelecting;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(NSUInteger)_handleBeginEvent;
-(id)initWithSelectionHandler:(id)arg0 ;
-(struct CGPoint )_locationInView:(id)arg0 ;
-(struct CGRect )_selectionRectWithLocation:(struct CGPoint )arg0 ;
-(void)_callHandlerWithState:(NSInteger)arg0 ;
-(void)_handleDidBegin;
-(void)_handleDidEndFromState:(NSUInteger)arg0 ;
-(void)_handleDidMove;
-(void)_handleHoverGesture:(id)arg0 ;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_updateDebugUIWithGesture:(id)arg0 ;
-(void)_updateInteractionEnabled;
-(void)_viewTraitCollectionDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif