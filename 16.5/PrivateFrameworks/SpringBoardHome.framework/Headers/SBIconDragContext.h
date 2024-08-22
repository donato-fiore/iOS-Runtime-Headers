// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONDRAGCONTEXT_H
#define SBICONDRAGCONTEXT_H

@class NSMutableSet, NSMapTable, NSCountedSet, NSMutableDictionary, NSArray, NSSet, NSString, NSDate, NSTimer;
@protocol BSDescriptionProviding, OS_os_activity;

#import <Foundation/Foundation.h>

#import "SBPlaceholderIcon.h"
#import "SBIconView.h"

@interface SBIconDragContext : NSObject <BSDescriptionProviding>

 {
    NSMutableSet *_sourceIconViews;
    NSMapTable *_iconToExpandAfterDropAnimation;
    NSMutableSet *_destinationIconViews;
    NSCountedSet *_messageExpectations;
    NSMutableSet *_enteredIconListViews;
    NSMapTable *_targetsForCancellingIconViews;
    NSMapTable *_dragPreviewForIconViews;
    NSMutableSet *_appLocalContexts;
    NSMutableDictionary *_destinationFolderIconViews;
    NSMutableDictionary *_destinationStackIconViews;
    NSMutableSet *_dropAnimatingDragItems;
    NSMutableDictionary *_initialIconPaths;
    NSMutableDictionary *_initialIconGridPaths;
    NSMapTable *_bouncedIcons;
    NSMutableSet *_allBouncedIcons;
    NSMapTable *_appDragLocalContexts;
    NSMapTable *_iconViewPrepareForDropAssertions;
    NSMapTable *_iconViewDroppingAssertions;
    NSMutableDictionary *_additionalMatchingDroppedIcons;
    os_activity_scope_state_s _activityState;
}


@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, copy, nonatomic) NSArray *allIconsEverBounced;
@property (readonly, copy, nonatomic) NSSet *appLocalContexts;
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) NSSet *createdIcons; // ivar: _createdIcons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragItemWasConsumedExternally; // ivar: _dragItemWasConsumedExternally
@property (readonly, nonatomic) NSUInteger draggedIconGridSizeClass;
@property (copy, nonatomic) NSSet *draggedIcons; // ivar: _draggedIcons
@property (copy, nonatomic) NSSet *droppedIcons; // ivar: _droppedIcons
@property (nonatomic) BOOL duplicatesSourceIcons; // ivar: _duplicatesSourceIcons
@property (readonly, copy, nonatomic) NSSet *expectedMessages;
@property (copy, nonatomic) NSArray *grabbedIconViews; // ivar: _grabbedIconViews
@property (readonly, nonatomic) BOOL hasFolderDraggedIcons;
@property (readonly, nonatomic) BOOL hasFolderSourceIcons;
@property (readonly, nonatomic) BOOL hasNonDefaultSizedDraggedIcons;
@property (readonly, nonatomic) BOOL hasNonDefaultSizedSourceIcons;
@property (readonly, nonatomic) BOOL hasUserDragged;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBPlaceholderIcon *iconPlaceholder; // ivar: _iconPlaceholder
@property (nonatomic) CGPoint initialTouchOffsetFromIconImageCenter; // ivar: _initialTouchOffsetFromIconImageCenter
@property (copy, nonatomic) NSSet *itemIdentifiers; // ivar: _itemIdentifiers
@property (copy, nonatomic) NSDate *lastUserInteractionDate; // ivar: _lastUserInteractionDate
@property (nonatomic) BOOL notifiedDelegateForDropSession; // ivar: _notifiedDelegateForDropSession
@property (nonatomic) BOOL performedIconDrop; // ivar: _performedIconDrop
@property (retain, nonatomic) SBIconView *primaryIconView; // ivar: _primaryIconView
@property (retain, nonatomic) SBIconView *recipientIconView; // ivar: _recipientIconView
@property (copy, nonatomic) NSSet *removedMatchingLeafIcons; // ivar: _removedMatchingLeafIcons
@property (readonly, nonatomic) NSUInteger sourceIconGridSizeClass;
@property (copy, nonatomic) NSSet *sourceIcons; // ivar: _sourceIcons
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUserActive) BOOL userActive;
@property (readonly, nonatomic, getter=isWaitingForMessage) BOOL waitingForMessage;
@property (retain, nonatomic) NSTimer *watchdogTimer; // ivar: _watchdogTimer


-(BOOL)hasBouncedIcon:(id)arg0 ;
-(BOOL)hasDestinationIconView:(id)arg0 ;
-(BOOL)hasDragItem:(id)arg0 ;
-(BOOL)hasEnteredIconListView:(id)arg0 ;
-(BOOL)hasItemIdentifier:(id)arg0 ;
-(BOOL)hasMessageExpectationNamed:(id)arg0 ;
-(BOOL)hasSourceIconView:(id)arg0 ;
-(BOOL)isAnimatingDropForDragItem:(id)arg0 ;
-(id)additionalMatchingIconForDroppedIconIdentifier:(id)arg0 ;
-(id)appDragLocalContextForDragItem:(id)arg0 ;
-(id)appDragLocalContextWithIconIdentifier:(id)arg0 ;
-(id)bouncedIconsForListModel:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)destinationFolderIconViewForIconWithIdentifier:(id)arg0 ;
-(id)destinationStackIconViewForIconWithIdentifier:(id)arg0 ;
-(id)dragPreviewForIconView:(id)arg0 ;
-(id)iconToExpandAfterDropAnimationForDragItem:(id)arg0 ;
-(id)init;
-(id)initialGridPathForIcon:(id)arg0 ;
-(id)initialGridPathForIconWithIdentifier:(id)arg0 ;
-(id)initialIndexPathForIcon:(id)arg0 ;
-(id)initialIndexPathForIconWithIdentifier:(id)arg0 ;
-(id)listModelEnumeratorForBouncedIcons;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)targetIconViewForCancellingIconView:(id)arg0 ;
-(void)_addPrepareForDropAssertionForIconView:(id)arg0 ;
-(void)addAppLocalContext:(id)arg0 ;
-(void)addDestinationIconView:(id)arg0 ;
-(void)addDropAnimatingDragItem:(id)arg0 ;
-(void)addDroppedIcon:(id)arg0 ;
-(void)addDroppedIcons:(id)arg0 ;
-(void)addEnteredIconListView:(id)arg0 ;
-(void)addGrabbedIconView:(id)arg0 ;
-(void)addIconViewDroppingAssertion:(id)arg0 forIconView:(id)arg1 ;
-(void)addItemIdentifier:(id)arg0 ;
-(void)addMessageExpectationNamed:(id)arg0 ;
-(void)addSourceIcon:(id)arg0 ;
-(void)addSourceIconView:(id)arg0 ;
-(void)addSourceIcons:(id)arg0 ;
-(void)clearAllDropAssertions;
-(void)clearDropAssertionsForIconView:(id)arg0 ;
-(void)dealloc;
-(void)enumerateDestinationIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateDragPreviewsUsingBlock:(id)arg0 ;
-(void)enumerateDraggedIconUsingBlock:(id)arg0 ;
-(void)enumerateSourceIconViewsUsingBlock:(id)arg0 ;
-(void)removeAllMessageExpectations;
-(void)removeMessageExpectationNamed:(id)arg0 ;
-(void)setAdditionalMatchingIcon:(id)arg0 forDroppedIconIdentifier:(id)arg1 ;
-(void)setAppDragLocalContext:(id)arg0 forDragItem:(id)arg1 ;
-(void)setBouncedIcons:(id)arg0 forListModel:(id)arg1 ;
-(void)setDestinationFolderIconView:(id)arg0 forIconWithIdentifier:(id)arg1 ;
-(void)setDestinationStackIconView:(id)arg0 forIconWithIdentifier:(id)arg1 ;
-(void)setDragPreview:(id)arg0 forIconView:(id)arg1 ;
-(void)setIcon:(id)arg0 shouldExpandAfterDropAnimationForDragItems:(id)arg1 ;
-(void)setInitialGridPath:(id)arg0 forIcon:(id)arg1 ;
-(void)setInitialIndexPath:(id)arg0 forIcon:(id)arg1 ;
-(void)setTargetIconView:(id)arg0 forCancellingIconView:(id)arg1 ;
-(void)swapSourceIconWithIdentifier:(id)arg0 withIcon:(id)arg1 ;


@end


#endif