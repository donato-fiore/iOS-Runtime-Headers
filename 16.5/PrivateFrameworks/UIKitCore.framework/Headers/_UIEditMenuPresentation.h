// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEDITMENUPRESENTATION_H
#define _UIEDITMENUPRESENTATION_H

@protocol _UIEditMenuListViewDelegate, _UIEditMenuPresentationDelegate;

#import <Foundation/Foundation.h>

#import "UIEditMenuConfiguration.h"
#import "_UIEditMenuContainerView.h"
#import "_UIEditMenuListView.h"
#import "_UIEditMenuPresentationLayout.h"
#import "_UIEditMenuPresentationAnimator.h"
#import "UIMenu.h"
#import "UIView.h"

@interface _UIEditMenuPresentation : NSObject <_UIEditMenuListViewDelegate>



@property (readonly, nonatomic) UIEditMenuConfiguration *activeConfiguration; // ivar: _activeConfiguration
@property (readonly, nonatomic) _UIEditMenuContainerView *containerView; // ivar: _containerView
@property (readonly, nonatomic) _UIEditMenuListView *currentListView; // ivar: _currentListView
@property (retain, nonatomic) _UIEditMenuPresentationLayout *currentMenuLayout; // ivar: _currentMenuLayout
@property (nonatomic) NSUInteger currentState; // ivar: _currentState
@property (weak, nonatomic) NSObject<_UIEditMenuPresentationDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _UIEditMenuPresentationAnimator *dismissAnimator; // ivar: _dismissAnimator
@property (retain, nonatomic) UIEditMenuConfiguration *dismissingConfiguration; // ivar: _dismissingConfiguration
@property (readonly, nonatomic) UIMenu *displayedMenu; // ivar: _displayedMenu
@property (retain, nonatomic) _UIEditMenuPresentationAnimator *presentAnimator; // ivar: _presentAnimator
@property (readonly, weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly, nonatomic) _UIEditMenuContainerView *touchPassthroughView; // ivar: _touchPassthroughView


-(BOOL)_enforcesMenuControllerLifecycle;
-(NSInteger)_listViewAxisForTraitCollection:(id)arg0 ;
-(id)_resolvedLayoutForMenuWithConfiguration:(id)arg0 sourceRect:(struct CGRect )arg1 axis:(NSInteger)arg2 ;
-(id)initWithSourceView:(id)arg0 ;
-(struct CGRect )_queryMenuSourceRectForConfiguration:(id)arg0 isValid:(*BOOL)arg1 ;
-(struct CGRect )menuFrameInCoordinateSpace:(id)arg0 ;
-(struct UIEdgeInsets )_preferredContentInsetsForContainerView;
-(void)_cleanupContainerView;
-(void)_displayMenu:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_prepareMenuPresentationWithConfiguration:(id)arg0 ;
-(void)_reloadMenuLayoutWithSourceRect:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)_stateMachineSendEvent:(NSUInteger)arg0 ;
-(void)_updateMenuPositionAnimated:(BOOL)arg0 forced:(BOOL)arg1 ;
-(void)_updateUserInterfaceStyle;
// -(void)animateFadeWithDelay:(CGFloat)arg0 animations:(id)arg1 completion:(unk)arg2  ;
// -(void)animateScaleDismissalWithAnimations:(id)arg0 completion:(unk)arg1  ;
// -(void)animateScalePresentWithDelay:(CGFloat)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(void)contentSizeCategoryDidChangeInEditMenuListView:(id)arg0 ;
-(void)displayMenu:(id)arg0 configuration:(id)arg1 ;
-(void)editMenuListView:(id)arg0 didSelectMenuElement:(id)arg1 ;
-(void)forceEndDismissalIfNeeded;
-(void)forceEndPresentIfNeeded;
-(void)hideMenuWithReason:(NSInteger)arg0 ;
-(void)replaceVisibleMenuWithMenu:(id)arg0 reason:(NSInteger)arg1 ;
-(void)sourceViewDidUpdateFromTraitCollection:(id)arg0 ;
-(void)updateMenuPositionAnimated:(BOOL)arg0 ;


@end


#endif