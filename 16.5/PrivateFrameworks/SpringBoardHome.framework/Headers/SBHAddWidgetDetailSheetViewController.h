// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHADDWIDGETDETAILSHEETVIEWCONTROLLER_H
#define SBHADDWIDGETDETAILSHEETVIEWCONTROLLER_H

@class NSMutableDictionary, NSLayoutConstraint, UIView, MTMaterialView, UIButton, BSUIScrollView, UIStackView, NSString, UIPageControl, NSMutableArray, SBFFluidBehaviorSettings;
@protocol BSUIScrollViewDelegate, SBHAddWidgetDetailsSheetPageViewControllerDelegate, SBHWidgetSheetViewControlling, SBHWidgetSheetViewControllerPresenter, SBHWidgetDragHandling;


#import "SBHAddWidgetSheetViewControllerBase.h"
#import "SBHAddWidgetButton.h"
#import "SBHApplicationWidgetCollection.h"
#import "SBHAddWidgetDetailsSheetPageViewController.h"
#import "SBHWidgetSearchController.h"
#import "SBHAddWidgetDetailSheetTitleView.h"

@interface SBHAddWidgetDetailSheetViewController : SBHAddWidgetSheetViewControllerBase <BSUIScrollViewDelegate, SBHAddWidgetDetailsSheetPageViewControllerDelegate, SBHWidgetSheetViewControlling>

 {
    NSMutableDictionary *_userInfo;
    NSUInteger _initialSelectionIndex;
    BOOL _performedInitialSelection;
}


@property (retain, nonatomic) SBHAddWidgetButton *addButton; // ivar: _addButton
@property (retain, nonatomic) NSLayoutConstraint *addButtonBottomConstraint; // ivar: _addButtonBottomConstraint
@property (retain, nonatomic) UIView *addButtonContainerView; // ivar: _addButtonContainerView
@property (retain, nonatomic) UIView *addButtonStackSpacerView; // ivar: _addButtonStackSpacerView
@property (retain, nonatomic) NSLayoutConstraint *addButtonTopConstraint; // ivar: _addButtonTopConstraint
@property (retain, nonatomic) SBHApplicationWidgetCollection *applicationWidgetCollection; // ivar: _applicationWidgetCollection
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) BSUIScrollView *contentScrollView; // ivar: _contentScrollView
@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (readonly, nonatomic) SBHAddWidgetDetailsSheetPageViewController *currentPage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBHWidgetSearchController *externalSearchController; // ivar: _externalSearchController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) MTMaterialView *magicPocketBackgroundView; // ivar: _magicPocketBackgroundView
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (retain, nonatomic) NSLayoutConstraint *pageControlTopConstraint; // ivar: _pageControlTopConstraint
@property (retain, nonatomic) NSMutableArray *pages; // ivar: _pages
@property (weak, nonatomic) NSObject<SBHWidgetSheetViewControllerPresenter> *presenter; // ivar: _presenter
@property (nonatomic) BOOL scrollingInitiatedByInfoScrollView; // ivar: _scrollingInitiatedByInfoScrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) SBHAddWidgetDetailSheetTitleView *titleView; // ivar: _titleView
@property (retain, nonatomic) NSLayoutConstraint *topSpacingConstraint; // ivar: _topSpacingConstraint
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, weak, nonatomic) NSObject<SBHWidgetDragHandling> *widgetDragHandler;
@property (retain, nonatomic) NSLayoutConstraint *widgetGalleryHeightConstraint; // ivar: _widgetGalleryHeightConstraint
@property (retain, nonatomic) BSUIScrollView *widgetGalleryScrollView; // ivar: _widgetGalleryScrollView
@property (retain, nonatomic) UIStackView *widgetGalleryStackView; // ivar: _widgetGalleryStackView
@property (retain, nonatomic) BSUIScrollView *widgetInfoScrollView; // ivar: _widgetInfoScrollView
@property (retain, nonatomic) SBFFluidBehaviorSettings *widgetInfoScrollViewAnimationSettings; // ivar: _widgetInfoScrollViewAnimationSettings
@property (retain, nonatomic) UIStackView *widgetInfoStackView; // ivar: _widgetInfoStackView


-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGFloat)_minumumWidgetGalleryScrollViewHeight;
-(NSUInteger)_closestPageWithGalleryItem:(id)arg0 ;
-(NSUInteger)_pageIndexAtContentOffset:(struct CGPoint )arg0 ;
-(id)_currentGalleryItem;
-(id)_materialViewForVisualStyling;
-(id)_newBackgroundView;
-(id)backgroundViewMatchingMaterialBeneathPageViewController:(id)arg0 ;
-(id)widgetInfoViews;
-(void)_addPage:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_createConstraints;
-(void)_createViews;
-(void)_scrollMainScrollViewToMatchInfoScrollViewIfNeeded;
-(void)_scrollToPageIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateBackgroundRecipe;
-(void)_updateConstraintConstants;
-(void)_updateControlsForContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)_updateLayoutMargins;
-(void)_updateMaterialRecipeForBackgroundView:(id)arg0 ;
-(void)_updatePageViewControllerAppearanceForFastScrollToTargetIndex:(NSUInteger)arg0 ;
-(void)_updatePageViewControllerAppearanceForNormalScroll;
-(void)_updatePageViewControllerAppearanceWithAppearedBlock:(id)arg0 ;
-(void)_updateParallaxEffect;
-(void)_updateStackViewForSizeCategory;
-(void)addButtonTapped:(id)arg0 ;
-(void)closeButtonTapped:(id)arg0 ;
-(void)configureBackgroundView:(id)arg0 matchingMaterialBeneathPageViewController:(id)arg1 ;
-(void)configureForGalleryItem:(id)arg0 selectedSizeClass:(NSInteger)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)pageControlChanged:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif