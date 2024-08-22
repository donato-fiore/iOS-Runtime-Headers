// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGMAJORLISTVIEWCONTROLLER_H
#define WGMAJORLISTVIEWCONTROLLER_H

@class UIView, NSString, NSArray, UIViewController;
@protocol WGWidgetListFooterViewDelegate, WGWidgetIconAnimationExtraViewsProviding, WGMajorListViewControllerDelegate;


#import "WGWidgetListViewController.h"
#import "WGWidgetListFooterView.h"
#import "WGWidgetListHeaderView.h"

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate, WGWidgetIconAnimationExtraViewsProviding>



@property (nonatomic, getter=_isFooterVisible, setter=_setFooterVisible:) BOOL _footerVisible; // ivar: _footerVisible
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WGMajorListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (readonly, nonatomic) WGWidgetListFooterView *footerView; // ivar: _footerView
@property (readonly, nonatomic) BOOL hasWidget;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *headerContentViewController; // ivar: _headerContentViewController
@property (readonly, nonatomic) WGWidgetListHeaderView *headerView; // ivar: _headerView
@property (nonatomic, getter=isHeaderVisible) BOOL headerVisible; // ivar: _headerVisible
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSUInteger)_insertionIndexofListItem:(id)arg0 intoWidgetViews:(id)arg1 withOrderedIdentifiers:(id)arg2 ;
-(id)_group;
-(id)editingMaterialViewForWidgetListFooterView:(id)arg0 ;
-(void)_configureStackView;
-(void)_insertHeaderView;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg0 ;
-(void)_updateEditButtonVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateFooterViewShouldBlurContent;
-(void)_updateFooterVisibility;
-(void)_updateHeaderVisibility;
-(void)editButtonTapped:(id)arg0 ;
-(void)enumerateWidgetWrapperViewsUsingBlock:(id)arg0 ;
-(void)invalidateVisibleWidgets;
-(void)presentEditView:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setEditingIcons:(BOOL)arg0 ;
-(void)setShouldBlurContent:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg0 widgetWithIdentifier:(id)arg1 shouldBecomeHiddenInGroup:(id)arg2 ;
-(void)widgetDiscoveryController:(id)arg0 widgetWithIdentifier:(id)arg1 shouldBecomeVisibleInGroup:(id)arg2 ;
-(void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg0 ;


@end


#endif