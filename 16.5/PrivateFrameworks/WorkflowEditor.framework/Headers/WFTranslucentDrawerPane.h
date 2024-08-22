// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTRANSLUCENTDRAWERPANE_H
#define WFTRANSLUCENTDRAWERPANE_H

@class UIViewController, UIView<WFDrawerPaneHeaderView>, UIView, NSLayoutConstraint, NSString, UISearchBar;
@protocol WFDrawerPaneHeaderViewDelegate, WFDrawerPane;


#import "WFDrawerPaneContainer.h"
#import "WFDrawerGrabberView.h"

@interface WFTranslucentDrawerPane : UIViewController <WFDrawerPaneHeaderViewDelegate, WFDrawerPane>



@property (weak, nonatomic) UIView<WFDrawerPaneHeaderView> *activeHeaderView; // ivar: _activeHeaderView
@property (weak, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (weak, nonatomic) UIView *borderView; // ivar: _borderView
@property (nonatomic) CGFloat bottomContentInset; // ivar: _bottomContentInset
@property (nonatomic, getter=isCandidateForContentCapture) BOOL candidateForContentCapture; // ivar: _candidateForContentCapture
@property (weak, nonatomic) WFDrawerPaneContainer *container; // ivar: _container
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // ivar: _contentViewTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *drawerGroup; // ivar: _drawerGroup
@property (nonatomic) CGFloat fauxHeaderHeight; // ivar: _fauxHeaderHeight
@property (readonly, nonatomic) CGRect grabberAreaBounds;
@property (weak, nonatomic) WFDrawerGrabberView *grabberView; // ivar: _grabberView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL roundsTopCorners; // ivar: _roundsTopCorners
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (weak, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (readonly, nonatomic) CGFloat topCornerRadius;
@property (nonatomic, getter=isTranslucent) BOOL translucent; // ivar: _translucent
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)accessibilityPerformEscape;
-(id)initWithViewController:(id)arg0 ;
-(id)wf_drawerController;
-(id)wf_drawerItem;
-(void)didDismissHeaderView:(id)arg0 ;
-(void)installChildViewController:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionContentForHeight:(CGFloat)arg0 ;
-(void)updateHeaderView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)wf_setDrawerController:(id)arg0 ;
-(void)wf_setDrawerItem:(id)arg0 ;
-(void)willTransitionToVisibility:(NSUInteger)arg0 ;


@end


#endif