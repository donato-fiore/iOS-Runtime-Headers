// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUINTERACTIONBASEDTEXTCONTEXTINTERACTION_H
#define _UICONTEXTMENUINTERACTIONBASEDTEXTCONTEXTINTERACTION_H

@class NSString;
@protocol UIContextMenuInteractionDelegate_Private, UIContextMenuInteractionDelegate_ForWebKitOnly, _UIContextMenuInteractionDelegateInternal, _UIEditMenuInteractionDelegateInternal;


#import "UITextContextMenuInteraction.h"
#import "UIEditMenuConfiguration.h"
#import "UIEditMenuInteraction.h"
#import "UIContextMenuConfiguration.h"

@interface _UIContextMenuInteractionBasedTextContextInteraction : UITextContextMenuInteraction <UIContextMenuInteractionDelegate_Private, UIContextMenuInteractionDelegate_ForWebKitOnly, _UIContextMenuInteractionDelegateInternal, _UIEditMenuInteractionDelegateInternal>

 {
    ? _externalDelegateImplements;
    UIEditMenuConfiguration *_currentInputUIConfiguration;
    UIEditMenuConfiguration *_currentSelectionCommandsConfiguration;
    BOOL _isPresentingOrDismissingContextMenu;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIEditMenuInteraction *editMenuInteraction; // ivar: _editMenuInteraction
@property (readonly, nonatomic) UIContextMenuConfiguration *externallyManagedConfiguration; // ivar: _externallyManagedConfiguration
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_contextMenuInteraction:(id)arg0 failedToBeginForSecondaryClickAtLocation:(struct CGPoint )arg1 ;
-(BOOL)_contextMenuInteraction:(id)arg0 shouldAttemptToPresentConfiguration:(id)arg1 ;
-(BOOL)_contextMenuInteraction:(id)arg0 shouldBeDelayedByGestureRecognizer:(id)arg1 ;
-(BOOL)_isExternalConfiguration:(id)arg0 ;
-(BOOL)_shouldBridgeMenuControllerItems;
-(BOOL)dismissedByActionSelection;
-(BOOL)dismissedRecently;
-(BOOL)isDisplayingMenu;
-(BOOL)isDisplayingMenuForInputUI;
-(BOOL)isDisplayingMenuForSelectionCommands;
-(id)_contextMenuInteraction:(id)arg0 accessoriesForMenuWithConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 overrideSuggestedActionsForConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_currentInputUIMenuElements;
-(id)_editMenuForCurrentSelectionWithSuggestedActions:(id)arg0 isEditMenu:(BOOL)arg1 ;
-(id)_editMenuForSuggestedActions:(id)arg0 rvItem:(id)arg1 isEditMenu:(BOOL)arg2 ;
-(id)_editMenuInteraction:(id)arg0 titleViewForMenu:(id)arg1 configuration:(id)arg2 ;
-(id)_suggestedActionsForContextMenuInteraction:(id)arg0 location:(struct CGPoint )arg1 ;
-(id)_targetedPreviewForCurrentSelection;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 dismissalPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 highlightPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 ;
-(id)init;
-(struct CGRect )editMenuInteraction:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(void)_contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)_editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 completionHandler:(id)arg3 ;
-(void)_logDeprecatedMenuControllerUsageIfNeeded;
-(void)_presentEditMenuForInputUI;
-(void)_querySelectionCommandsForConfiguration:(id)arg0 suggestedActions:(id)arg1 completionHandler:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didMoveToView:(id)arg0 ;
-(void)dismissMenuForInputUI;
-(void)dismissSelectionCommandsWithReason:(NSInteger)arg0 ;
-(void)editMenuInteraction:(id)arg0 willDismissMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)editMenuInteraction:(id)arg0 willPresentMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)presentMenuForInputUI:(id)arg0 ;
-(void)presentSelectionCommandsWithConfiguration:(id)arg0 ;
-(void)setExternalContextMenuDelegate:(id)arg0 ;
-(void)updateVisibleMenuPosition;
-(void)willMoveToView:(id)arg0 ;


@end


#endif