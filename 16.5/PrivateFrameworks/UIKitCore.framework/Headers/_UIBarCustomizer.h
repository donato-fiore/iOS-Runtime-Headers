// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARCUSTOMIZER_H
#define _UIBARCUSTOMIZER_H

@class NSString, NSMutableArray;
@protocol UIDragInteractionDelegate, UIDropInteractionDelegate, _UIBarCustomizerDelegate;

#import <Foundation/Foundation.h>

#import "_UIBarCustomizationSession.h"
#import "_UIBarCustomizationContainerView.h"
#import "UIView.h"
#import "UIDragInteraction.h"
#import "_UIBarCustomizationItemReservoirView.h"
#import "UIScrollView.h"

@interface _UIBarCustomizer : NSObject <UIDragInteractionDelegate, UIDropInteractionDelegate>



@property (retain, nonatomic) _UIBarCustomizationSession *activeSession; // ivar: _activeSession
@property (retain, nonatomic) _UIBarCustomizationContainerView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<_UIBarCustomizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (retain, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (nonatomic) NSUInteger dropIndex; // ivar: _dropIndex
@property (retain, nonatomic) NSMutableArray *ellipsisDotViews; // ivar: _ellipsisDotViews
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect initialSourceFrame; // ivar: _initialSourceFrame
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (retain, nonatomic) id *keyboardSuppressionAssertion; // ivar: _keyboardSuppressionAssertion
@property (nonatomic) CGPoint lastDragLocation; // ivar: _lastDragLocation
@property (nonatomic) NSUInteger overflowItemCount; // ivar: _overflowItemCount
@property (retain, nonatomic) _UIBarCustomizationItemReservoirView *reservoir; // ivar: _reservoir
@property (readonly) Class superclass;
@property (retain, nonatomic) UIScrollView *visibleItemScrollView; // ivar: _visibleItemScrollView
@property (retain, nonatomic) NSMutableArray *visibleItems; // ivar: _visibleItems
@property (nonatomic) BOOL wasReset; // ivar: _wasReset


-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(CGFloat)_dragInteraction:(id)arg0 delayForLiftBeginningAtLocation:(struct CGPoint )arg1 ;
-(id)_dragItemsAtLocation:(struct CGPoint )arg0 ;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(int)_overflowItemBucketSize;
-(void)_animateDropOrCancelForItem:(id)arg0 animator:(id)arg1 isCancel:(BOOL)arg2 ;
-(void)_handleDimmingViewTap:(id)arg0 ;
-(void)_reflow;
-(void)_reflowAnimatedWithAlongsideActions:(id)arg0 ;
-(void)_setActive:(BOOL)arg0 ;
-(void)_updateDebugUI;
-(void)beginWithSession:(id)arg0 ;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)end;
-(void)invalidateLayout;


@end


#endif