// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI24EPICINLINEVIEWCONTROLLER_H
#define _TTC8VIDEOSUI24EPICINLINEVIEWCONTROLLER_H



#import "VUIBaseViewController.h"

@interface _TtC8VideosUI24EpicInlineViewController : VUIBaseViewController {
    ? collectionImpressioner;
    ? shelfViewModel;
    ? horizontalCollectionViewModel;
    ? lastViewWidth;
    ? horizontalStackViewController;
    ? scrollViewMonitor;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)handleAppDidEnterBackground:(id)arg0 ;
-(void)handleAppWillEnterForeground:(id)arg0 ;
-(void)handleIsPlaybackUIBeingShownDidChange:(id)arg0 ;
-(void)handleVPPADismissed:(id)arg0 ;
-(void)handleVPPAPresented:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)vui_loadView;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewWillLayoutSubviews;
-(void)vui_willMoveToParentViewController:(id)arg0 ;


@end


#endif