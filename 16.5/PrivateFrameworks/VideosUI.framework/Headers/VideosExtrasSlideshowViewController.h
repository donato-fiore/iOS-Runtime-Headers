// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASSLIDESHOWVIEWCONTROLLER_H
#define VIDEOSEXTRASSLIDESHOWVIEWCONTROLLER_H

@class UIViewController, NSString, UIImage, NSTimer;
@protocol CAAnimationDelegate, VideosExtrasZoomingImageTransitionParticipant, VideosExtrasSlideshowViewControllerDataSource;


#import "VideosExtrasConstrainedArtworkContainerView.h"

@interface VideosExtrasSlideshowViewController : UIViewController <CAAnimationDelegate, VideosExtrasZoomingImageTransitionParticipant>



@property (nonatomic, getter=isAnimatingTransition) BOOL animatingTransition; // ivar: _animatingTransition
@property (weak, nonatomic) NSObject<VideosExtrasSlideshowViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *disappearingImageContainerView; // ivar: _disappearingImageContainerView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *imageContainerView; // ivar: _imageContainerView
@property (retain, nonatomic) UIImage *nextImage; // ivar: _nextImage
@property (readonly) Class superclass;
@property (nonatomic) CGFloat transitionInterval; // ivar: _transitionInterval
@property (nonatomic) NSUInteger transitionStyle; // ivar: _transitionStyle
@property (retain, nonatomic) NSTimer *transitionTimer; // ivar: _transitionTimer
@property (nonatomic, getter=isViewVisible) BOOL viewVisible; // ivar: _viewVisible
@property (nonatomic) NSUInteger visibleImageIndex; // ivar: _visibleImageIndex


-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)_numberOfImages;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_invalidateTransitionTimer;
-(void)_loadImageContainerViewIfAppropriateWithImage:(id)arg0 ;
-(void)_performDissolveTransition;
-(void)_performInstantaneousTransition;
-(void)_performPushTransition;
-(void)_performWipeTransition;
-(void)_prepareNextImageAndScheduleTransitionTimerIfAppropriate;
-(void)_reload;
-(void)_scheduleTransitionTimer;
-(void)_transitionDidComplete;
-(void)_transitionTimerDidFire:(id)arg0 ;
-(void)_transitionToNextImageIfAppropriate;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif