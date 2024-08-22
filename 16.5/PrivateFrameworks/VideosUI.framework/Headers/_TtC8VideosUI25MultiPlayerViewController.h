// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI25MULTIPLAYERVIEWCONTROLLER_H
#define _TTC8VIDEOSUI25MULTIPLAYERVIEWCONTROLLER_H

@class UIViewController, VUIImageProxy, NSArray;
@protocol VUIMultiPlayerViewController, VUIMultiPlayerViewControllerDelegate;



@interface _TtC8VideosUI25MultiPlayerViewController : UIViewController <VUIMultiPlayerViewController>

 {
    ? $__lazy_storage_$_playerViewLayout;
    ? $__lazy_storage_$_detailsViewLayout;
    ? fullscreenPlayerViewController;
    ? $__lazy_storage_$_imageView;
    ? $__lazy_storage_$_blurView;
    ? $__lazy_storage_$_panGesture;
    ? inactivityTimeout;
    ? inactivityTimer;
    ? ghostPlayerViewController;
    ? dismissalCompletion;
    ? isDetailsViewControllerVisible;
    ? playerView;
    ? $__lazy_storage_$_headerPresenter;
    ? $__lazy_storage_$_headerView;
    ? detailsViewController;
    ? presentationPlayerViewControllers;
    ? topConstraint;
    ? bottomConstraint;
    ? cancellables;
    ? stateMachine;
    ? initiallyShowsDetails;
    ? prospectivePlayerView;
}


@property (nonatomic, retain) VUIImageProxy *backgroundImageProxy;
@property (nonatomic, weak) NSObject<VUIMultiPlayerViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) NSUInteger distribution;
@property (nonatomic, readonly) BOOL isShowingProspectivePlayer;
@property (nonatomic, readonly) NSArray *playerViewControllers;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )presentationRectForPlayerViewController:(id)arg0 ;
-(void)addPlayerViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)captureAndShowPlayerScreenshots;
-(void)enterFullscreenWithPlayerViewController:(id)arg0 completion:(id)arg1 ;
-(void)exitFullscreenWithCompletion:(id)arg0 ;
-(void)onPanWithGesture:(id)arg0 ;
-(void)removePlayerViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setDetailsViewControllerVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setProspectivePlayerVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif