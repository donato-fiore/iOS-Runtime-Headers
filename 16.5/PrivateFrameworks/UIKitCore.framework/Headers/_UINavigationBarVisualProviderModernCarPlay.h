// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARVISUALPROVIDERMODERNCARPLAY_H
#define _UINAVIGATIONBARVISUALPROVIDERMODERNCARPLAY_H

@class UINavigationBarVisualProvider, NSArray, NSString, NSLayoutConstraint;
@protocol _UIButtonBarAppearanceDelegate, _UINavigationItemChangeObserver;


#import "_UIBarButtonItemAppearanceStorage.h"
#import "_UIButtonBarButton.h"
#import "UIVisualEffectView.h"
#import "UIView.h"
#import "UIFocusContainerGuide.h"
#import "UIImageSymbolConfiguration.h"
#import "_UIButtonBar.h"
#import "UIColor.h"
#import "_CarTitleView.h"

@interface _UINavigationBarVisualProviderModernCarPlay : UINavigationBarVisualProvider <_UIButtonBarAppearanceDelegate, _UINavigationItemChangeObserver>



@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage; // ivar: _appearanceStorage
@property (retain, nonatomic) _UIButtonBarButton *backBarButton; // ivar: _backBarButton
@property (retain, nonatomic) NSArray *backButtonConstraints; // ivar: _backButtonConstraints
@property (readonly, nonatomic) CGFloat backButtonMargin;
@property (readonly, nonatomic) CGFloat backButtonMaximumWidth;
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) NSInteger barType;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) BOOL centerTextButtons;
@property (readonly, nonatomic) BOOL compactMetrics; // ivar: _compactMetrics
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *debugViews; // ivar: _debugViews
@property (readonly, nonatomic) CGFloat defaultEdgeSpacing;
@property (readonly, nonatomic) CGFloat defaultTextPadding;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFocusContainerGuide *focusContainerGuide; // ivar: _focusContainerGuide
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL havePrepared; // ivar: _havePrepared
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly, nonatomic) BOOL isRTL;
@property (retain, nonatomic) NSLayoutConstraint *largeTitleLeadingConstraint; // ivar: _largeTitleLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *largeTitleTrailingConstraint; // ivar: _largeTitleTrailingConstraint
@property (retain, nonatomic) _UIButtonBar *leadingBar; // ivar: _leadingBar
@property (retain, nonatomic) NSLayoutConstraint *leadingBarConstraint; // ivar: _leadingBarConstraint
@property (retain, nonatomic) NSLayoutConstraint *leadingBarNoItemsConstraint; // ivar: _leadingBarNoItemsConstraint
@property (retain, nonatomic) NSLayoutConstraint *leadingBarWithNoTitleTrailingConstraint; // ivar: _leadingBarWithNoTitleTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *leadingBarWithTitleTrailingConstraint; // ivar: _leadingBarWithTitleTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *regularTitleConstraint; // ivar: _regularTitleConstraint
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) _CarTitleView *titleView; // ivar: _titleView
@property (retain, nonatomic) _UIButtonBar *trailingBar; // ivar: _trailingBar
@property (retain, nonatomic) NSLayoutConstraint *trailingBarConstraint; // ivar: _trailingBarConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingBarNoItemsConstraint; // ivar: _trailingBarNoItemsConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingBarWithNoTitleLeadingConstraint; // ivar: _trailingBarWithNoTitleLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingBarWithTitleLeadingConstraint; // ivar: _trailingBarWithTitleLeadingConstraint


-(BOOL)navigationItemIsBackItem:(id)arg0 ;
-(BOOL)navigationItemIsTopItem:(id)arg0 ;
-(CGFloat)absorptionForItem:(id)arg0 ;
-(NSInteger)barMetrics;
-(NSUInteger)edgesPaddingBarButtonItem:(id)arg0 ;
-(id)backIndicatorImage;
-(id)backIndicatorMaskImage;
-(id)defaultFontDescriptor;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)__backButtonAction;
-(void)_configureBackground;
-(void)_installGradientLayerMaskForClippingView:(id)arg0 ;
// -(void)_updateContentAnimated:(BOOL)arg0 completion:(id)arg1 direction:(unk)arg2  ;
-(void)_updateContentForTopItem:(id)arg0 backItem:(id)arg1 animated:(BOOL)arg2 direction:(NSUInteger)arg3 ;
-(void)animateForSearchPresentation:(BOOL)arg0 ;
-(void)changeAppearance;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg0 ;
-(void)navigationBarInvalidatedResolvedLayoutMargins;
-(void)navigationItem:(id)arg0 appearance:(id)arg1 categoriesChanged:(NSInteger)arg2 ;
-(void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(id)arg0 ;
-(void)navigationItemUpdatedBackButtonContent:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationItemUpdatedBackgroundAppearance:(id)arg0 ;
-(void)navigationItemUpdatedBottomPalette:(id)arg0 oldPalette:(id)arg1 ;
-(void)navigationItemUpdatedCanvasView:(id)arg0 ;
-(void)navigationItemUpdatedContentLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationItemUpdatedLargeTitleContent:(id)arg0 ;
-(void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg0 ;
-(void)navigationItemUpdatedLeftBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationItemUpdatedPromptContent:(id)arg0 ;
-(void)navigationItemUpdatedRightBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationItemUpdatedScrollEdgeProgress:(id)arg0 ;
-(void)navigationItemUpdatedSearchController:(id)arg0 oldSearchController:(id)arg1 ;
-(void)navigationItemUpdatedTitleContent:(id)arg0 animated:(BOOL)arg1 ;
-(void)popAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)prepare;
-(void)prepareForPop;
-(void)prepareForPush;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg0 ;
-(void)provideViewsForContents:(id)arg0 topItem:(id)arg1 backItem:(id)arg2 ;
-(void)pushAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)setupTopNavigationItem;
-(void)stackDidChangeFrom:(id)arg0 ;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTopNavigationItemAnimated:(BOOL)arg0 ;


@end


#endif