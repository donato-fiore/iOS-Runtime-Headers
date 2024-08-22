// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI24SEARCHTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI24SEARCHTEMPLATECONTROLLER_H

@class TtC8VideosUI17VUIViewController;



@interface _TtC8VideosUI24SearchTemplateController : TtC8VideosUI17VUIViewController {
    ? internalCustomSearchFieldWidth;
    ? maxSearchFieldWidth;
    ? searchController;
    ? searchTopResultsServiceRequest;
    ? recentlySearchedDataManager;
    ? document;
    ? searchHintsServiceRequest;
    ? currentSearchTextInputSource;
    ? resultsServiceRequest;
    ? resultsViewController;
    ? landingPageViewController;
    ? activeSearchState;
    ? pageMetrics;
    ? pagePerformanceProvider;
    ? collectionImpressioner;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)vui_didMoveToParentViewController:(id)arg0 ;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;


@end


#endif