// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREVIEWINTERACTIONCLICKIMPL_H
#define _UIPREVIEWINTERACTIONCLICKIMPL_H

@class NSString;
@protocol _UIClickInteractionDelegate, UIInteraction_Private, UIGestureRecognizerDelegate, _UIPreviewInteractionImpl, UIInteraction, UIPreviewInteractionDelegate, UIInteractionEffect, UIPreviewInteractionDelegatePrivate, _UIPreviewInteractionTouchForceProviding;

#import <Foundation/Foundation.h>

#import "UIDragInteraction.h"
#import "_UIClickInteraction.h"
#import "_UIRelationshipGestureRecognizer.h"
#import "_UIPreviewInteractionHighlighter.h"
#import "_UIPreviewInteractionPresentationAssistant.h"
#import "UIPreviewInteraction.h"
#import "UIView.h"

@interface _UIPreviewInteractionClickImpl : NSObject <_UIClickInteractionDelegate, UIInteraction_Private, UIGestureRecognizerDelegate, _UIPreviewInteractionImpl, UIInteraction>

 {
    NSUInteger _currentState;
    ? _delegateImplements;
}


@property (weak, nonatomic) UIDragInteraction *associatedDragInteraction; // ivar: _associatedDragInteraction
@property (retain, nonatomic) _UIClickInteraction *commitClickInteraction; // ivar: _commitClickInteraction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPreviewInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer; // ivar: _exclusionRelationshipGestureRecognizer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter; // ivar: _highlighter
@property (retain, nonatomic) NSObject<UIInteractionEffect> *interactionEffect; // ivar: _interactionEffect
@property (retain, nonatomic) _UIPreviewInteractionPresentationAssistant *presentationAssistant; // ivar: _presentationAssistant
@property (retain, nonatomic) _UIClickInteraction *previewClickInteraction; // ivar: _previewClickInteraction
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction; // ivar: _previewInteraction
@property (readonly, weak, nonatomic) NSObject<UIPreviewInteractionDelegatePrivate> *privateDelegate; // ivar: _privateDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<_UIPreviewInteractionTouchForceProviding> *touchForceProvider; // ivar: _touchForceProvider
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_canPerformPresentation;
-(BOOL)_performPresentationIfPossible;
-(BOOL)clickInteractionShouldBegin:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_gestureRecognizerForExclusionRelationship;
-(id)highlightEffectForClickInteraction:(id)arg0 ;
-(id)initWithView:(id)arg0 previewInteraction:(id)arg1 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_endInteractionEffectIfNeeded;
-(void)_prepareInteractionEffect;
-(void)_startPreviewAtLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(void)cancelInteraction;
-(void)clickInteractionDidClickDown:(id)arg0 ;
-(void)clickInteractionDidClickUp:(id)arg0 ;
-(void)clickInteractionDidEnd:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif