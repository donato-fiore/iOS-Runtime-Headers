// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPAGECONTROLLER_H
#define UIPAGECONTROLLER_H

@class NSMutableArray;
@protocol UIPageControllerDelegate;


#import "UIViewController.h"
#import "UIScrollView.h"
#import "UIPageControl.h"

@interface UIPageController : UIViewController {
    NSMutableArray *_viewControllers;
    UIView" _wrapperViews;
    int _notificationState;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    int _pageSpacing;
    NSInteger _visibleIndex;
    NSInteger _pageCount;
    ? _pageControllerFlags;
}


@property (nonatomic) NSObject<UIPageControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL displaysPageControl;
@property (nonatomic) NSInteger pageCount;
@property (nonatomic) CGFloat pageSpacing;
@property (nonatomic) NSInteger visibleIndex;
@property (readonly, retain, nonatomic) UIViewController *visibleViewController;
@property (nonatomic) BOOL wraps;


-(BOOL)_allowsAutorotation;
-(BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_hasNextViewController;
-(BOOL)_hasPreviousViewController;
-(BOOL)_hasVisibleViewController;
-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_isViewControllerBeingUnloaded:(id)arg0 atIndex:(NSInteger)arg1 ;
-(BOOL)_needToLoadNext;
-(BOOL)_needToLoadPrevious;
-(BOOL)_needToLoadVisible;
-(BOOL)_shouldUseOnePartRotation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)indexOfViewController:(id)arg0 ;
-(id)_loadNextViewController;
-(id)_loadPreviousViewController;
-(id)_loadVisibleViewControllerAndNotify:(BOOL)arg0 ;
-(id)_nextViewController;
-(id)_pageControllerScrollView;
-(id)_previousViewController;
-(id)_scrollView;
-(id)rotatingFooterView;
-(id)rotatingHeaderView;
-(int)_nextViewControllerNotificationState;
-(int)_previousViewControllerNotificationState;
-(struct CGRect )_scrollViewFrame;
-(void)_adjustScrollViewContentInsets;
-(void)_createPageControl;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_notifyNextViewController:(int)arg0 animated:(BOOL)arg1 ;
-(void)_notifyPreviousViewController:(int)arg0 animated:(BOOL)arg1 ;
-(void)_notifyViewController:(id)arg0 ofState:(int)arg1 previousState:(int)arg2 animated:(BOOL)arg3 ;
-(void)_notifyVisibleViewController:(int)arg0 animated:(BOOL)arg1 ;
-(void)_pageChanged:(id)arg0 ;
-(void)_replaceViewControllerAtIndex:(NSInteger)arg0 withViewController:(id)arg1 ;
-(void)_scrollView:(id)arg0 boundsDidChangeToSize:(struct CGSize )arg1 ;
-(void)_scrollViewDidEndPaging;
-(void)_scrollViewDidScroll:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)_scrollViewWillBeginPaging;
-(void)_setNextViewController:(id)arg0 ;
-(void)_setNextViewControllerNotificationState:(int)arg0 ;
-(void)_setPreviousViewController:(id)arg0 ;
-(void)_setPreviousViewControllerNotificationState:(int)arg0 ;
-(void)dealloc;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)reloadViewControllerAtIndex:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif