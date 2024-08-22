// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABBARVISUALPROVIDER_H
#define _UITABBARVISUALPROVIDER_H

@class NSString;
@protocol _UIBarAppearanceChangeObserver;

#import <Foundation/Foundation.h>

#import "UITabBar.h"

@interface _UITabBarVisualProvider : NSObject

@property (readonly, nonatomic) NSObject<_UIBarAppearanceChangeObserver> *appearanceObserver;
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (nonatomic) CGFloat backgroundTransitionProgress;
@property (nonatomic) CGFloat minimumWidthForHorizontalLayout;
@property (readonly, nonatomic) UITabBar *tabBar; // ivar: _tabBar
@property (nonatomic) BOOL useModernAppearance;


+(BOOL)shouldDecodeSubviews;
-(BOOL)_shim_shadowHidden;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)wantsFocus;
-(CGFloat)_shim_heightForCustomizingItems;
-(CGFloat)_shim_shadowAlpha;
-(CGFloat)defaultAnimationDuration;
-(id)_shim_accessoryView;
-(id)_shim_compatibilityBackgroundView;
-(id)_shim_shadowView;
-(id)createViewForTabBarItem:(id)arg0 ;
-(id)defaultTintColor;
-(id)exchangeItem:(id)arg0 withItem:(id)arg1 ;
-(id)initWithTabBar:(id)arg0 ;
-(id)preferredFocusedView;
-(id)traitCollectionForChild:(id)arg0 baseTraitCollection:(id)arg1 ;
-(struct CGSize )intrinsicContentSizeGivenSize:(struct CGSize )arg0 ;
-(void)_shim_layoutItemsOnly;
-(void)_shim_setAccessoryView:(id)arg0 ;
-(void)_shim_setCustomBackgroundView:(id)arg0 ;
-(void)_shim_setShadowAlpha:(CGFloat)arg0 ;
-(void)_shim_setShadowHidden:(BOOL)arg0 ;
-(void)_shim_updateFocusHighlightVisibility;
-(void)_shim_updateTabBarItemView:(id)arg0 ;
-(void)changeAppearance;
-(void)changeItemsTo:(id)arg0 removingItems:(id)arg1 selectedItem:(id)arg2 animate:(BOOL)arg3 ;
-(void)changeItemsTo:(id)arg0 removingItems:(id)arg1 selectedItem:(id)arg2 oldSelectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(void)changeLayout;
-(void)changeSelectedItem:(id)arg0 fromItem:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepare;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)tabBarSizeChanged:(struct CGSize )arg0 ;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateArchivedSubviews:(id)arg0 ;
-(void)updateBackgroundGroupName;
-(void)updateConstraints;


@end


#endif