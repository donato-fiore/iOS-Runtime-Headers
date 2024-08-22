// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI31PLAYBACKCONTAINERVIEWCONTROLLER_H
#define _TTC8VIDEOSUI31PLAYBACKCONTAINERVIEWCONTROLLER_H

@class UIViewController;
@protocol VUIPlaybackContainerViewController, VUIPlaybackContainerViewControllerDelegate;



@interface _TtC8VideosUI31PlaybackContainerViewController : UIViewController <VUIPlaybackContainerViewController>

 {
    ? pipTargetView;
    ? postPlayViewController;
    ? multiPlayerViewController;
    ? playerViewController;
    ? isPiPed;
    ? isAnimatingPiP;
    ? $__lazy_storage_$_fullscreenButtonLayout;
    ? $__lazy_storage_$_fullscreenButton;
    ? cancellables;
}


@property (nonatomic, weak) NSObject<VUIPlaybackContainerViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)unembedMultiPlayerViewController;
-(void)embedMultiPlayerViewController:(id)arg0 ;
-(void)enterPictureInPicture;
-(void)exitPictureInPictureWithCompletion:(id)arg0 ;
-(void)hidePictureInPictureWithCompletion:(id)arg0 ;
-(void)loadPostPlayForMediaItem:(id)arg0 ;
-(void)presentPlayerViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)removePostPlayViewController;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif