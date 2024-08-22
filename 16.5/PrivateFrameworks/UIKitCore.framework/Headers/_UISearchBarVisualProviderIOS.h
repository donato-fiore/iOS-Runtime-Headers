// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHBARVISUALPROVIDERIOS_H
#define _UISEARCHBARVISUALPROVIDERIOS_H

@class UISearchBarVisualProviderBase, NSArray, NSString;
@protocol _UINavigationBarTitleViewDataSource;


#import "UIDictationSearchButton.h"
#import "_UISearchBarSearchContainerView.h"
#import "_UISearchBarPromptContainerView.h"
#import "_UISearchBarScopeContainerView.h"
#import "UIImageView.h"
#import "_UISearchBarAppearanceStorage.h"
#import "UIBarButtonItem.h"
#import "UINavigationItem.h"
#import "UISearchBarTextField.h"
#import "UISearchBarBackground.h"
#import "_UIBackdropView.h"
#import "UIVisualEffectView.h"
#import "UIView.h"
#import "UIButton.h"
#import "UINavigationButton.h"
#import "UILabel.h"
#import "UISegmentedControl.h"
#import "_UISearchBarScopeBarBackground.h"
#import "UIColor.h"
#import "_UINavigationBarTitleViewOverlayRects.h"
#import "_UISearchBarLayout.h"
#import "_UISearchBarTransitionerBase.h"

@interface _UISearchBarVisualProviderIOS : UISearchBarVisualProviderBase {
    UIDictationSearchButton *_dictationButton;
    _UISearchBarSearchContainerView *_searchFieldContainerView;
    _UISearchBarPromptContainerView *_promptContainerView;
    _UISearchBarScopeContainerView *_scopeBarContainerView;
    UIImageView *_floatingSearchIconView;
    UIEdgeInsets _effectiveContentInset;
    NSUInteger _overriddenContentInsetEdges;
    _UISearchBarAppearanceStorage *_appearanceStorage;
    UIBarButtonItem *_animatedAppearanceBarButtonItem;
    UINavigationItem *_searchNavigationItem;
    NSArray *_inlineWidthConstraints;
    ? _searchBarVisualProviderFlags;
    UISearchBarTextField *_searchField;
    UISearchBarBackground *_searchBarBackground;
    _UIBackdropView *_backdrop;
    UIVisualEffectView *_backdropVisualEffectView;
    UIView *_searchBarClippingView;
    UIButton *_cancelButton;
    UIBarButtonItem *_cancelBarButtonItem;
    NSString *_cancelButtonText;
    UINavigationButton *_leftButton;
    UILabel *_promptLabel;
    UIImageView *_separator;
    UISegmentedControl *_scopeBar;
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;
    NSArray *_scopeTitles;
    NSInteger _selectedScope;
    NSUInteger _backdropStyle;
    UIColor *_barTintColor;
    NSInteger _barPosition;
    NSUInteger _scopeBarPosition;
    CGFloat _tableViewIndexWidth;
    NSInteger _navBarTitleViewLocation;
    _UINavigationBarTitleViewOverlayRects *_navBarTitleViewOverlayRects;
    id<_UINavigationBarTitleViewDataSource> *_navBarTitleViewDataSource;
    NSInteger _layoutState;
    UIBarButtonItem *_searchIconBarButtonItem;
    CGFloat _leftInsetForInlineSearch;
    CGFloat _rightInsetForInlineSearch;
    UIEdgeInsets _contentInsetPrivateMinOrOverride;
}


@property (nonatomic) CGFloat additionalPaddingForCancelButtonAtLeadingEdge;
@property (nonatomic) CGFloat additionalPaddingForSearchFieldAtLeadingEdge;
@property (nonatomic) CGFloat backgroundExtension; // ivar: _backgroundExtension
@property (retain, nonatomic) _UISearchBarLayout *currentLayout; // ivar: _currentLayout
@property (readonly, nonatomic) NSInteger previousLayoutState; // ivar: _previousLayoutState
@property (retain, nonatomic) _UISearchBarLayout *prospectiveLayout; // ivar: _prospectiveLayout
@property (retain, nonatomic) _UISearchBarTransitionerBase *transitioner; // ivar: _transitioner


-(BOOL)_getNavigationTitleLeadingInset:(*CGFloat)arg0 trailingInset:(*CGFloat)arg1 isRTL:(BOOL)arg2 ;
-(BOOL)allowsInlineScopeBar;
-(BOOL)alwaysUsesLayoutMarginsForHorizontalContentInset;
-(BOOL)autoDisableCancelButton;
-(BOOL)backgroundLayoutNeedsUpdate;
-(BOOL)canShowDictationButton;
-(BOOL)cancelButtonWantsLetterpress;
-(BOOL)centerPlaceholder;
-(BOOL)containsScopeBar;
-(BOOL)drawsBackground;
-(BOOL)drawsBackgroundInPalette;
-(BOOL)hasDarkUIAppearance;
-(BOOL)isActiveSearchDeferringScopeBar;
-(BOOL)isAtTop;
-(BOOL)isEnabled;
-(BOOL)isFrozenForDismissalCrossfade;
-(BOOL)isHostedByNavigationBar;
-(BOOL)isHostedInlineByNavigationBar;
-(BOOL)isInBarButNotHosted;
-(BOOL)isInNavigationPalette;
-(BOOL)isPlacedInNavigationBar;
-(BOOL)isPlacedInToolbar;
-(BOOL)isSearchResultsButtonSelected;
-(BOOL)isTextFieldManagedInNSToolbar;
-(BOOL)isTranslucent;
-(BOOL)providesRestingMeasurementValues;
-(BOOL)reliesOnNavigationBarBackdrop;
-(BOOL)requiresSearchTextField;
-(BOOL)scopeBarIsVisible;
-(BOOL)shouldCombineLandscapeBarsForOrientation:(NSInteger)arg0 ;
-(BOOL)showsBookmarkButton;
-(BOOL)showsCancelButton;
-(BOOL)showsScopeBar;
-(BOOL)showsSearchResultsButton;
-(BOOL)supportsDynamicType;
-(BOOL)usesBackdrop;
-(BOOL)usesEmbeddedAppearance;
-(BOOL)wantsDictationButton;
-(BOOL)wouldCombineLandscapeBarsForSize:(struct CGSize )arg0 ;
-(CGFloat)availableBoundsWidth;
-(CGFloat)availableBoundsWidthForSize:(struct CGSize )arg0 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 barPosition:(NSInteger)arg1 ;
-(CGFloat)barHeightForBarMetrics:(NSInteger)arg0 withEffectiveInsets:(struct UIEdgeInsets )arg1 ;
-(CGFloat)defaultHeightForOrientation:(NSInteger)arg0 ;
-(CGFloat)effectiveBackgroundExtension;
-(CGFloat)idealInlineWidthForLayoutState:(NSInteger)arg0 ;
-(CGFloat)leftInsetForInlineSearch;
-(CGFloat)navigationBarContentHeight;
-(CGFloat)rightInsetForInlineSearch;
-(CGFloat)scopeBarHeight;
-(CGFloat)searchFieldHeight;
-(CGFloat)tableViewIndexWidth;
-(NSInteger)barMetricsForOrientation:(NSInteger)arg0 ;
-(NSInteger)barPosition;
-(NSInteger)barStyle;
-(NSInteger)barTranslucence;
-(NSInteger)layoutState;
-(NSInteger)navBarTitleViewLocation;
-(NSInteger)searchFieldLeftViewMode;
-(NSInteger)selectedScope;
-(NSUInteger)backdropStyle;
-(NSUInteger)scopeBarPosition;
-(NSUInteger)searchBarStyle;
-(id)animatedAppearanceBarButtonItem;
-(id)backdrop;
-(id)backdropVisualEffectView;
-(id)backgroundImageForBarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)barTintColor;
-(id)cancelBarButtonItem;
-(id)cancelBarButtonItemIfExists;
-(id)cancelButton;
-(id)cancelButtonText;
-(id)colorForComponent:(NSUInteger)arg0 disabled:(BOOL)arg1 ;
-(id)currentSeparatorImage;
-(id)description;
-(id)effectiveBarTintColor;
-(id)existingSearchIconBarButtonItem;
-(id)floatingSearchIconView;
-(id)floatingSearchIconViewIfExists;
-(id)floatingSearchIconViewSuitableForMeasuring;
-(id)imageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)internalImageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)internalImageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 customImage:(*BOOL)arg2 ;
-(id)leftButton;
-(id)leftButtonIfExists;
-(id)makeShadowView;
-(id)navBarTitleViewDataSource;
-(id)navBarTitleViewOverlayRects;
-(id)prompt;
-(id)promptLabel;
-(id)runtimeOnlyViews;
-(id)scopeBar;
-(id)scopeBarBackgroundImage;
-(id)scopeBarBackgroundView;
-(id)scopeBarContainerView;
-(id)scopeTitles;
-(id)searchBarBackground;
-(id)searchBarClippingView;
-(id)searchDisplayController;
-(id)searchField;
-(id)searchFieldBackgroundImageForState:(NSUInteger)arg0 ;
-(id)searchFieldIfExists;
-(id)searchIconBarButtonItem;
-(id)searchNavigationItem;
-(id)separator;
-(id)separatorImage;
-(id)shadowView;
-(id)textColor;
-(id)viewStackedInNavigationBar;
-(struct CGRect )boundsForSearchBarAndUpdateIfNecessaryFromSuggestedBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )effectiveContentInset;
-(struct UIEdgeInsets )minimumContentInset;
-(struct UIEdgeInsets )recalculatedEffectiveContentInsetForLayoutState:(NSInteger)arg0 ;
-(struct UIEdgeInsets )recalculatedEffectiveContentInsetForLayoutState:(NSInteger)arg0 forcingInlineCalculation:(BOOL)arg1 ;
-(struct UIEdgeInsets )scopeBarInsets;
-(struct UIOffset )searchFieldBackgroundPositionAdjustment;
-(void)_setAutoDisableCancelButton:(BOOL)arg0 ;
-(void)_setBarStyle:(NSInteger)arg0 ;
-(void)_setBarTintColor:(id)arg0 ;
-(void)_setBarTranslucence:(NSInteger)arg0 ;
-(void)_setHideBackground:(BOOL)arg0 ;
-(void)_setSearchResultsButtonSelected:(BOOL)arg0 ;
-(void)_setShowsBookmarkButton:(BOOL)arg0 ;
-(void)_setShowsCancelButton:(BOOL)arg0 ;
-(void)_setShowsScopeBar:(BOOL)arg0 ;
-(void)_setShowsSearchResultsButton:(BOOL)arg0 ;
-(void)allowCursorToAppear:(BOOL)arg0 ;
-(void)animateTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)applySearchBarStyle;
-(void)cancelTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)cleanUpDictationMicsWithSearchField:(id)arg0 ;
-(void)completeTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)configureLayout:(id)arg0 ;
-(void)configureLayout:(id)arg0 forState:(NSInteger)arg1 ;
-(void)destroyCancelButton;
-(void)destroyPromptLabel;
-(void)dictationAvailabilityDidChange:(id)arg0 ;
-(void)dictationButtonPressed:(id)arg0 withEvent:(id)arg1 ;
-(void)dictationControllerDidFinish:(id)arg0 ;
-(void)displayNavBarCancelButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)driveTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)effectiveBarTintColorDidChange:(BOOL)arg0 ;
-(void)freezeForAnimatedTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)getOverrideContentInsets:(struct UIEdgeInsets *)arg0 overriddenEdges:(*NSUInteger)arg1 ;
-(void)getTopInset:(*CGFloat)arg0 bottomInset:(*CGFloat)arg1 forBarMetrics:(NSInteger)arg2 barPosition:(NSInteger)arg3 ;
-(void)getTopInset:(*CGFloat)arg0 bottomInset:(*CGFloat)arg1 forBarMetrics:(NSInteger)arg2 barPosition:(NSInteger)arg3 layoutState:(NSInteger)arg4 ;
-(void)getTopInset:(*CGFloat)arg0 bottomInset:(*CGFloat)arg1 forBarMetrics:(NSInteger)arg2 barPosition:(NSInteger)arg3 layoutState:(NSInteger)arg4 forcingInlineCalculation:(BOOL)arg5 ;
-(void)growToSearchFieldIfNecessary;
-(void)invalidateLayout;
-(void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)layoutSubviewsInBounds:(struct CGRect )arg0 ;
-(void)navigationBarSlideTransitionDidEnd;
-(void)navigationBarSlideTransitionWillBegin;
-(void)navigationBarTransitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)navigationBarTransitionWillBegin:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)prepare;
-(void)prepareForTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)removeBackdropVisualEffectView;
-(void)removeLegacyBackdropView;
-(void)resetLayoutState;
-(void)revertViewHierarchyIfNecessary;
-(void)setActiveSearchDeferringScopeBar:(BOOL)arg0 ;
-(void)setAllowsInlineScopeBar:(BOOL)arg0 ;
-(void)setAutoDisableCancelButton:(BOOL)arg0 ;
-(void)setBackdrop:(id)arg0 ;
-(void)setBackdropStyle:(NSUInteger)arg0 ;
-(void)setBackdropVisualEffectView:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 forBarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setBackgroundLayoutNeedsUpdate;
-(void)setBarPosition:(NSInteger)arg0 ;
-(void)setBarStyle:(NSInteger)arg0 ;
-(void)setBarTintColor:(id)arg0 ;
-(void)setBarTintColor:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)setBarTranslucence:(NSInteger)arg0 ;
-(void)setCancelButton:(id)arg0 ;
-(void)setCancelButtonText:(id)arg0 ;
-(void)setCancelButtonWantsLetterpress:(BOOL)arg0 ;
-(void)setCenterPlaceholder:(BOOL)arg0 ;
-(void)setClippingViewActive:(BOOL)arg0 ;
-(void)setClippingViewBounds:(struct CGRect )arg0 ;
-(void)setDeferredAutomaticShowsScopeBarInNavigationBar:(id)arg0 ;
-(void)setDelegateSearchFieldFrameManipulationBlock:(id)arg0 ;
-(void)setDisableDictationButton:(BOOL)arg0 ;
-(void)setDrawsBackground:(BOOL)arg0 ;
-(void)setDrawsBackgroundInPalette:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHelperPlaceholder:(id)arg0 ;
-(void)setHelperPlaceholderHidden:(BOOL)arg0 ;
-(void)setHelperPlaceholderOverride:(id)arg0 ;
-(void)setHostedByNavigationBar:(BOOL)arg0 ;
-(void)setHostedInlineByNavigationBar:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forSearchBarIcon:(NSInteger)arg1 state:(NSUInteger)arg2 ;
-(void)setInNavigationPalette:(BOOL)arg0 ;
-(void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(id)arg0 ;
-(void)setLeftInsetForInlineSearch:(CGFloat)arg0 ;
-(void)setMinimumContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setNavBarTitleViewDataSource:(id)arg0 ;
-(void)setNavBarTitleViewLocation:(NSInteger)arg0 ;
-(void)setNavBarTitleViewOverlayRects:(id)arg0 ;
-(void)setOverrideContentInsets:(struct UIEdgeInsets )arg0 forRectEdges:(NSUInteger)arg1 ;
-(void)setPlacedInNavigationBar:(BOOL)arg0 ;
-(void)setPlacedInToolbar:(BOOL)arg0 ;
-(void)setPrompt:(id)arg0 ;
-(void)setPromptLabel:(id)arg0 ;
-(void)setProvidesRestingMeasurementValues:(BOOL)arg0 ;
-(void)setReliesOnNavigationBarBackdrop:(BOOL)arg0 ;
-(void)setRequiresSearchTextField:(BOOL)arg0 ;
-(void)setRightInsetForInlineSearch:(CGFloat)arg0 ;
-(void)setScopeBar:(id)arg0 ;
-(void)setScopeBarBackgroundImage:(id)arg0 ;
-(void)setScopeBarBackgroundView:(id)arg0 ;
-(void)setScopeBarPosition:(NSUInteger)arg0 ;
-(void)setScopeTitles:(id)arg0 ;
-(void)setSearchBarBackground:(id)arg0 ;
-(void)setSearchBarStyle:(NSUInteger)arg0 ;
-(void)setSearchDisplayController:(id)arg0 ;
-(void)setSearchDisplayControllerShowsCancelButton:(BOOL)arg0 ;
-(void)setSearchField:(id)arg0 ;
-(void)setSearchFieldBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset )arg0 ;
-(void)setSearchFieldLeftViewMode:(NSInteger)arg0 ;
-(void)setSearchResultsButtonSelected:(BOOL)arg0 ;
-(void)setSelectedScope:(NSInteger)arg0 ;
-(void)setSeparator:(id)arg0 ;
-(void)setSeparatorImage:(id)arg0 ;
-(void)setShadowVisibleIfNecessary:(BOOL)arg0 ;
-(void)setShowDictationButton:(BOOL)arg0 shouldUpdateView:(BOOL)arg1 ;
-(void)setShowsBookmarkButton:(BOOL)arg0 ;
-(void)setShowsCancelButton:(BOOL)arg0 ;
-(void)setShowsCancelButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setShowsDeleteButton:(BOOL)arg0 ;
-(void)setShowsScopeBar:(BOOL)arg0 ;
-(void)setShowsScopeBar:(BOOL)arg0 animateOpacity:(BOOL)arg1 ;
-(void)setShowsSearchResultsButton:(BOOL)arg0 ;
-(void)setShowsSeparator:(BOOL)arg0 ;
-(void)setTableViewIndexWidth:(CGFloat)arg0 ;
-(void)setTextFieldManagedInNSToolbar:(BOOL)arg0 ;
-(void)setUpCancelButton;
-(void)setUpCancelButtonWithAppearance:(id)arg0 ;
-(void)setUpDictationMicWithSearchField:(id)arg0 ;
-(void)setUpFloatingSearchIconView;
-(void)setUpLeftButton;
-(void)setUpPromptLabel;
-(void)setUpScopeBar;
-(void)setUpSearchBarSearchContainerIfNecessary;
-(void)setUpSearchField;
-(void)setUpSearchNavigationItem;
-(void)setUsesEmbeddedAppearance:(BOOL)arg0 ;
-(void)shrinkToButtonIfNecessary;
-(void)teardown;
-(void)updateBackgroundToBackdropStyle:(NSInteger)arg0 ;
-(void)updateDictationButton;
-(void)updateDictationButtonActiveState;
-(void)updateDictationButtonForDynamicTypeWithSearchField:(id)arg0 ;
-(void)updateEffectiveContentInset;
-(void)updateForAllowedToShowDictationChange;
-(void)updateForDrawsBackgroundInPalette;
-(void)updateForDynamicType;
-(void)updateForSemanticContext;
-(void)updateIfNecessaryForOldSize:(struct CGSize )arg0 ;
-(void)updateMagnifyingGlassView;
-(void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg0 collapsibleScopeBar:(id)arg1 forLayoutState:(NSInteger)arg2 ;
-(void)updateNeedForBackdrop;
-(void)updatePlaceholderColor;
-(void)updateRightView;
-(void)updateScopeBarBackground;
-(void)updateScopeBarForSelectedScope;
-(void)updateSearchBarOpacity;
-(void)updateSearchFieldArt;
-(void)updateSearchFieldControlSize;
-(void)updateSearchFieldForDynamicType;


@end


#endif