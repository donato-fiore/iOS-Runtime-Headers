// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI26POSTPLAYTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI26POSTPLAYTEMPLATECONTROLLER_H

@class TtC8VideosUI17VUIViewController;



@interface _TtC8VideosUI26PostPlayTemplateController : TtC8VideosUI17VUIViewController {
    ? collectionImpressioner;
    ? contextData;
    ? templateViewModel;
    ? backgroundMediaInfo;
    ? presenter;
    ? headerView;
    ? autoPlayDuration;
    ? playbackState;
    ? featuredContentLogo;
    ? metadataContentHeight;
    ? $__lazy_storage_$_backgroundMediaController;
    ? playbackUpNextDelegate;
    ? interactionManager;
    ? playbackTimer;
    ? cancellables;
    ? volumeObserver;
    ? currentSizeClass;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;


@end


#endif