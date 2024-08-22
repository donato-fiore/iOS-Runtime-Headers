// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASBACKGROUNDVIEWCONTROLLER_H
#define VIDEOSEXTRASBACKGROUNDVIEWCONTROLLER_H

@class UIViewController, IKImageElement, NSArray, MPUArtworkView, NSTimer, UIImageView;



@interface VideosExtrasBackgroundViewController : UIViewController {
    IKImageElement *_displayedImageElement;
    NSArray *_imageConstraints;
    MPUArtworkView *_imageView;
    NSTimer *_updateTimer;
    UIImageView *_vignetteView;
}


@property (readonly, nonatomic) NSArray *backgroundElements; // ivar: _backgroundElements
@property (nonatomic) NSUInteger vignetteType; // ivar: _vignetteType


+(id)vignetteImageForType:(NSUInteger)arg0 ;
-(id)initWithBackgroundElement:(id)arg0 ;
-(id)initWithBackgroundElements:(id)arg0 ;
-(void)_didReceiveImage:(id)arg0 ;
-(void)_initVignette;
-(void)_invalidateTimer;
-(void)_scheduleTimerIfNeeded;
-(void)_updateConstraintsForImageSize:(struct CGSize )arg0 position:(NSUInteger)arg1 ;
-(void)_updateImage;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif