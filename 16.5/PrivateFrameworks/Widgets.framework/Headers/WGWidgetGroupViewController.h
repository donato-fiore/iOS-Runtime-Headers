// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGWIDGETGROUPVIEWCONTROLLER_H
#define WGWIDGETGROUPVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString, UIControl, NSArray, UIScrollView;
@protocol WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetListViewControllerDelegatePrivate, WGMajorListViewControllerDelegate, WGWidgetExtensionVisibilityProviding, WGWidgetIconAnimationExtraViewsProviding, WGWidgetGroupViewControllerDelegate;


#import "WGWidgetDiscoveryController.h"
#import "WGCarouselListViewController.h"

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetListViewControllerDelegatePrivate, WGMajorListViewControllerDelegate, WGWidgetExtensionVisibilityProviding, WGWidgetIconAnimationExtraViewsProviding>

 {
    WGWidgetDiscoveryController *_discoveryController;
    WGCarouselListViewController *_majorColumnListViewController;
    NSUInteger _lastWidgetCount;
    UILabel *_debugLabel;
}


@property (nonatomic) UIEdgeInsets contentOccludingInset; // ivar: _contentOccludingInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WGWidgetGroupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIControl *editButton; // ivar: _editButton
@property (nonatomic, getter=isEditingIcons) BOOL editingIcons;
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *headerContentViewController;
@property (readonly, nonatomic, getter=isHeaderVisible) BOOL headerVisible;
@property (nonatomic) WGWidgetListSettings listSettings; // ivar: _listSettings
@property (nonatomic) NSUInteger location; // ivar: _location
@property (readonly, nonatomic) UIScrollView *majorScrollView;
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (nonatomic) BOOL shouldBlurContent; // ivar: _shouldBlurContent
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger widgetCount;


-(BOOL)_canShowWhileLocked;
-(BOOL)isWidgetExtensionVisible:(id)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSInteger)_activeLayoutMode;
-(NSInteger)_layoutModeForSize:(struct CGSize )arg0 ;
-(id)_scrollViewForListViewController:(id)arg0 ;
-(id)initWithWidgetDiscoveryController:(id)arg0 listSettings:(struct WGWidgetListSettings )arg1 ;
-(struct CGSize )widgetListViewController:(id)arg0 sizeForInterfaceOrientation:(NSInteger)arg1 ;
-(struct UIEdgeInsets )widgetListViewController:(id)arg0 contentOccludingInsetsForInterfaceOrientation:(NSInteger)arg1 ;
-(void)_loadWidgetListViewController;
-(void)editViewDidAppear:(id)arg0 ;
-(void)editViewDidDisappear:(id)arg0 ;
-(void)editViewWillAppear:(id)arg0 ;
-(void)editViewWillDisappear:(id)arg0 ;
-(void)majorListViewControllerDidChangeHeaderVisibility:(id)arg0 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentEditViewWithCompletion:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif