// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGWIDGETLISTITEMVIEWCONTROLLER_H
#define WGWIDGETLISTITEMVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PLContentSizeCategoryAdjusting, WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate;


#import "WGWidgetPlatterView.h"
#import "WGWidgetHostingViewController.h"

@interface WGWidgetListItemViewController : UIViewController <PLContentSizeCategoryAdjusting>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WGWidgetHostingViewControllerDelegate><WGWidgetListItemViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_pendingSize, setter=_setPendingSize:) CGSize pendingSize; // ivar: _pendingSize
@property (readonly, nonatomic) WGWidgetPlatterView *platterView;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WGWidgetHostingViewController *widgetHost; // ivar: _widgetHost
@property (readonly, copy, nonatomic) NSString *widgetIdentifier; // ivar: _widgetIdentifier


-(BOOL)_canShowWhileLocked;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_platterViewLoadingIfNecessary:(BOOL)arg0 ;
-(id)initWithWidgetIdentifier:(id)arg0 ;
-(struct CGSize )contentSizeForPreferredContentSize:(struct CGSize )arg0 ;
-(struct CGSize )preferredContentSizeForContentOfSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_addWidgetHostIfNecessary;
-(void)loadView;
-(void)managingContainerDidDisappear:(id)arg0 ;
-(void)managingContainerWillAppear:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)removeChildViewController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif