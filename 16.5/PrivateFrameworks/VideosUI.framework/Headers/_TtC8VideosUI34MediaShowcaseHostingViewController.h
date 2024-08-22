// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI34MEDIASHOWCASEHOSTINGVIEWCONTROLLER_H
#define _TTC8VIDEOSUI34MEDIASHOWCASEHOSTINGVIEWCONTROLLER_H



#import "VUIBaseViewController.h"

@interface _TtC8VideosUI34MediaShowcaseHostingViewController : VUIBaseViewController {
    ? viewModel;
    ? notificationObservers;
    ? metadataViewTopOffsetObserver;
    ? collectionImpressioner;
    ? isTabbarChild;
    ? hasViewDisappeared;
    ? $__lazy_storage_$_paginatedMediaController;
    ? $__lazy_storage_$_toolBar;
    ? toolBarOffsetY;
    ? lastViewWidth;
    ? lastSizeClass;
    ? didSetupView;
    ? isPaused;
    ? isControlButtonsVisible;
    ? shouldShowMuteButton;
    ? hideMuteButtonTimer;
    ? $__lazy_storage_$_mediaShowcaseConfig;
    ? accountSettingViewModel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)vui_loadView;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;


@end


#endif