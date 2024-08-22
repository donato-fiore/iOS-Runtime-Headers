// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUCONTAINERVIEW_H
#define _UICONTEXTMENUCONTAINERVIEW_H

@class NSString, NSArray;
@protocol _UIPassthroughScrollInteractionDelegate;


#import "UIView.h"
#import "_UIPassthroughScrollInteraction.h"

@interface _UIContextMenuContainerView : UIView <_UIPassthroughScrollInteractionDelegate>

 {
    BOOL _lastHitTestWasPassedThroughToInteraction;
    BOOL _inPassthroughViewHitTest;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
}


@property (weak, nonatomic) UIView *contentWrapperView; // ivar: _contentWrapperView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler
@property (nonatomic) BOOL dismissesInstantly; // ivar: _dismissesInstantly
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL passthroughInteractionTouchEatingDisabledForSearchSuggestions; // ivar: _passthroughInteractionTouchEatingDisabledForSearchSuggestions
@property (copy, nonatomic) NSArray *passthroughViews; // ivar: _passthroughViews
@property (copy, nonatomic) id *subtreeTraitPropagationHandler; // ivar: _subtreeTraitPropagationHandler
@property (readonly) Class superclass;


-(BOOL)isTransparentFocusItem;
-(BOOL)passthroughScrollInteraction:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_attemptDismiss:(BOOL)arg0 ;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(struct _UITraitCollectionChangeDescription *)arg0 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif