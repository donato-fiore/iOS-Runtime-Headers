// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS24WEATHERMAPVIEWCONTROLLER_H
#define _TTC11WEATHERMAPS24WEATHERMAPVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11WeatherMaps24WeatherMapViewController : UIViewController {
    ? store;
    ? resolver;
    ? snapshotViewController;
    ? interactiveViewController;
    ? locationPickerViewController;
    ? locationPopoverViewController;
    ? previewViewController;
    ? locationActionHandler;
    ? canAddLocationHandler;
    ? canViewLocationHandler;
    ? $__lazy_storage_$_supplementaryOverlayContainerView;
    ? supplementaryOverlayViewController;
    ? activeTraitCollection;
    ? storeObserver;
    ? lastViewModel;
    ? viewModelToUpdate;
    ? lastViewBounds;
    ? resizeTimer;
    ? prefersControlsHidden;
    ? isResizing;
    ? bannerUpdateBlock;
    ? isCrossfadingSnapshot;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif