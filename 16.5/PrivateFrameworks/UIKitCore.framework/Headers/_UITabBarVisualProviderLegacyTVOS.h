// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABBARVISUALPROVIDERLEGACYTVOS_H
#define _UITABBARVISUALPROVIDERLEGACYTVOS_H

@class UITabBarVisualProvider;


#import "_UIBarBackground.h"
#import "_UIBarBackgroundLayoutLegacy.h"
#import "UIView.h"
#import "UIScrollView.h"
#import "UIMotionEffect.h"

@interface _UITabBarVisualProviderLegacyTVOS : UITabBarVisualProvider {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
}




-(BOOL)_focusedItemHighlightViewIsVisible;
-(BOOL)_shim_shadowHidden;
-(CGFloat)_shim_shadowAlpha;
-(id)_focusedItemHighlightView;
-(id)_parentViewForItems;
-(id)_shim_accessoryView;
-(id)_shim_compatibilityBackgroundView;
-(id)createViewForTabBarItem:(id)arg0 ;
-(id)exchangeItem:(id)arg0 withItem:(id)arg1 ;
-(id)preferredFocusedView;
-(struct CGRect )_layoutRegion;
-(struct CGRect )_shadowFrameForBounds:(struct CGRect )arg0 height:(CGFloat)arg1 ;
-(struct CGSize )intrinsicContentSizeGivenSize:(struct CGSize )arg0 ;
-(void)_applyAppearanceCustomizationsToItem:(id)arg0 ;
-(void)_configureItems:(id)arg0 ;
-(void)_layoutTabBarItems;
-(void)_setFocusedItemHightlightVisible:(BOOL)arg0 ;
-(void)_shim_layoutItemsOnly;
-(void)_shim_setAccessoryView:(id)arg0 ;
-(void)_shim_setCustomBackgroundView:(id)arg0 ;
-(void)_shim_setShadowAlpha:(CGFloat)arg0 ;
-(void)_shim_setShadowHidden:(BOOL)arg0 ;
-(void)_shim_updateFocusHighlightVisibility;
-(void)_shim_updateTabBarItemView:(id)arg0 ;
-(void)_updateAccessoryView;
-(void)_updateBackground;
-(void)_updateFocusedItemHighlightFrame;
-(void)_updateFocusedItemHighlightViewWithInterfaceStyle:(NSInteger)arg0 visible:(BOOL)arg1 ;
-(void)_updateHighlightMotionEffect;
-(void)changeAppearance;
-(void)changeItemsTo:(id)arg0 removingItems:(id)arg1 selectedItem:(id)arg2 oldSelectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(void)changeLayout;
-(void)changeSelectedItem:(id)arg0 fromItem:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepare;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateArchivedSubviews:(id)arg0 ;
-(void)updateBackgroundGroupName;


@end


#endif