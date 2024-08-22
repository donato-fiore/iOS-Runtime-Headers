// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEDITMENUINTERACTIONMENUCONTROLLER_H
#define _UIEDITMENUINTERACTIONMENUCONTROLLER_H

@class NSArray, NSString;
@protocol UIEditMenuInteractionDelegate;


#import "UIMenuController.h"
#import "UIEditMenuInteraction.h"
#import "UIView.h"

@interface _UIEditMenuInteractionMenuController : UIMenuController <UIEditMenuInteractionDelegate>

 {
    UIEditMenuInteraction *_currentMenuInteraction;
    NSArray *_extraMenuItems;
    UIView *_targetView;
    CGRect _targetRect;
    BOOL _menuNeedsUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldPassthroughInView;
-(BOOL)isMenuVisible;
-(NSInteger)_resolvedEditMenuArrowDirection;
-(id)_editMenuInteraction:(id)arg0 firstResponderTargetForConfiguration:(id)arg1 ;
-(id)_targetView;
-(id)editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 ;
-(id)init;
-(id)menuItems;
-(struct CGRect )_targetRect;
-(struct CGRect )editMenuInteraction:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(struct CGRect )menuFrame;
-(void)_applicationDidAddDeactivationReason:(id)arg0 ;
-(void)_dismissEditMenu;
-(void)_prepareEditMenuInteractionIfNeeded;
-(void)_presentEditMenu;
-(void)_setTargetRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)editMenuInteraction:(id)arg0 willDismissMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)editMenuInteraction:(id)arg0 willPresentMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)hideMenu;
-(void)hideMenuFromView:(id)arg0 ;
-(void)setMenuItems:(id)arg0 ;
-(void)setMenuVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setTargetRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)showMenuFromView:(id)arg0 rect:(struct CGRect )arg1 ;
-(void)update;


@end


#endif