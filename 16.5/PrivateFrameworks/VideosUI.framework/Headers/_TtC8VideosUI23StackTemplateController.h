// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI23STACKTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI23STACKTEMPLATECONTROLLER_H

@class TtC8VideosUI19StackViewController;



@interface _TtC8VideosUI23StackTemplateController : TtC8VideosUI19StackViewController {
    ? supportsTabBarChildControllerBehaviours;
    ? supportsTabBarChildContentInsets;
    ? anchorIdToHighlight;
    ? showcasePercentageObserver;
    ? lastShowcasePercentage;
    ? notificationCenter;
    ? hasEnabledShowcasing;
    ? statusBarStyle;
    ? navBarGradientView;
    ? statusBarGradientView;
    ? accountMessageViewModel;
    ? _accountMessageViewController;
    ? viewIsVisibleForAccountMessage;
    ? pastFirstViewDidAppear;
    ? accountMessageAdditionTargetOffset;
    ? accountMessageNeedsDeferredAnimationIn;
    ? accountMessageDismissalTargetOffset;
    ? targetParentController;
    ? didEnqueueImpressionMetrics;
    ? waitingForPresentationDismissal;
    ? pagePerformanceProvider;
}


@property (nonatomic, readonly) NSInteger preferredStatusBarStyle;
@property (nonatomic, readonly) NSInteger preferredStatusBarUpdateAnimation;


-(BOOL)shouldRubberbandElementWithCategory:(NSUInteger)arg0 in:(id)arg1 at:(id)arg2 ;
-(BOOL)vuiScrollViewShouldScrollToTop:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)vuiScrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)vuiScrollViewDidScroll:(id)arg0 ;
-(void)vuiScrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)vui_didMoveToParentViewController:(id)arg0 ;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;
-(void)vui_willMoveToParentViewController:(id)arg0 ;
-(void)willEnterForeground:(id)arg0 ;


@end


#endif