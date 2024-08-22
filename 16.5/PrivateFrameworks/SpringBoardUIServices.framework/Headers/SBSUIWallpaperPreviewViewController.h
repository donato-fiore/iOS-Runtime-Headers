// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUIWALLPAPERPREVIEWVIEWCONTROLLER_H
#define SBSUIWALLPAPERPREVIEWVIEWCONTROLLER_H

@class UIViewController, NSTimer, PBUIWallpaperConfigurationManager, PBUIWallpaperConfiguration, NSDictionary, NSString, AVURLAsset, PBUIWallpaperOptions, SBFLockScreenDateViewController, SBFWallpaperCoreAnalyticsLogger, _UILegibilitySettings, UIImage, SBFWallpaperOptions;
@protocol PBUILegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewDelegate, SBFLegibilitySettingsProvider, SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewControllerDelegate;


#import "SBSUIWallpaperProgressHUD.h"
#import "_SBSUIOrientedImageView.h"

@interface SBSUIWallpaperPreviewViewController : UIViewController <PBUILegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewDelegate, SBFLegibilitySettingsProvider>

 {
    NSTimer *_dateTimer;
    PBUIWallpaperConfigurationManager *_wallpaperConfigurationManager;
    PBUIWallpaperConfiguration *_wallpaperConfiguration;
    PBUIWallpaperConfiguration *_initialConfiguration;
    NSDictionary *_wallpaperImageDict;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    BOOL _allowScrolling;
    NSInteger _variant;
    NSString *_name;
    BOOL _colorSamplingEnabled;
    AVURLAsset *_video;
    NSDictionary *_videoDict;
    CGFloat _stillTimeInVideo;
    PBUIWallpaperOptions *_options;
    NSDictionary *_optionsDict;
    BOOL _enableButtons;
    BOOL _disableContents;
    BOOL _disableParallax;
    SBSUIWallpaperProgressHUD *_hud;
    _SBSUIOrientedImageView *_homeScreenPreviewView;
    SBFLockScreenDateViewController *_dateViewController;
    SBFWallpaperCoreAnalyticsLogger *_wallpaperCoreAnalyticsLogger;
}


@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFLegibilitySettingsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL irisEnabled; // ivar: _irisEnabled
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) BOOL motionEnabled; // ivar: _motionEnabled
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor
@property (weak, nonatomic) NSObject<SBSUIWallpaperPreviewViewControllerDelegate> *previewDelegate; // ivar: _previewDelegate
@property (readonly) Class superclass;
@property (readonly) UIImage *wallpaperImage; // ivar: _wallpaperImage
@property (readonly, copy, nonatomic) SBFWallpaperOptions *wallpaperOptions;
@property (nonatomic) CGFloat zoomScale; // ivar: _zoomScale


-(BOOL)colorSamplingEnabled;
-(BOOL)prefersStatusBarHidden;
-(NSInteger)_wallpaperType;
-(id)_colorWallpaperViewWithFrame:(struct CGRect )arg0 variant:(NSInteger)arg1 configuration:(id)arg2 ;
-(id)_dateView;
-(id)_previewView;
-(id)_previewViewIfLoaded;
-(id)_proceduralWallpaperViewWithFrame:(struct CGRect )arg0 variant:(NSInteger)arg1 configuration:(id)arg2 ;
-(id)_wallpaperConfigurationManager;
-(id)_wallpaperTypeDescription;
-(id)_wallpaperView;
-(id)_wallpaperViewIfLoaded;
-(id)_wallpaperViewWithFrame:(struct CGRect )arg0 ;
-(id)_wallpaperViewWithFrame:(struct CGRect )arg0 image:(id)arg1 video:(id)arg2 videoURL:(id)arg3 stillTimeInVideo:(CGFloat)arg4 supportsCropping:(BOOL)arg5 variant:(NSInteger)arg6 needsWallpaperDimming:(BOOL)arg7 ;
-(id)_wallpaperViewWithFrame:(struct CGRect )arg0 variant:(NSInteger)arg1 options:(id)arg2 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 name:(id)arg1 ;
-(id)initWithImage:(id)arg0 name:(id)arg1 video:(id)arg2 time:(CGFloat)arg3 ;
-(id)initWithImage:(id)arg0 video:(id)arg1 variant:(NSInteger)arg2 options:(id)arg3 disableSegmentedControl:(BOOL)arg4 enableButtons:(BOOL)arg5 disableContents:(BOOL)arg6 ;
-(id)initWithImages:(id)arg0 videos:(id)arg1 variant:(NSInteger)arg2 options:(id)arg3 disableSegmentedControl:(BOOL)arg4 enableButtons:(BOOL)arg5 disableContents:(BOOL)arg6 ;
-(id)initWithImages:(id)arg0 videos:(id)arg1 variant:(NSInteger)arg2 options:(id)arg3 disableSegmentedControl:(BOOL)arg4 enableButtons:(BOOL)arg5 disableContents:(BOOL)arg6 disableParallax:(BOOL)arg7 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithProceduralWallpaper:(id)arg0 options:(id)arg1 ;
-(id)initWithProceduralWallpaper:(id)arg0 options:(id)arg1 variant:(NSInteger)arg2 disableSegmentedControl:(BOOL)arg3 enableButtons:(BOOL)arg4 disableContents:(BOOL)arg5 ;
-(id)initWithScrollableImage:(id)arg0 ;
-(id)initWithScrollableImage:(id)arg0 video:(id)arg1 time:(CGFloat)arg2 ;
-(id)initWithWallpaperVariant:(NSInteger)arg0 ;
-(void)_applyHomeScreenPreview;
-(void)_displaySettingWallpaperHUD;
-(void)_enableIrisOrParallaxIfEligible;
-(void)_logWallpaperChangeForLocations:(NSInteger)arg0 ;
-(void)_setImageWallpaperForLocationsOnMainThread:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_setProceduralWallpaperForLocationsOnMainThread:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_setWallpaperForLocationsOnMainThread:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_startDateTimer;
-(void)_stopDateTimer;
-(void)_updateDateView;
-(void)dealloc;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)providerLegibilitySettingsChanged:(id)arg0 ;
-(void)setColorSamplingEnabled:(BOOL)arg0 ;
-(void)setImageWallpaperForLocations:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setWallpaperForLocations:(NSInteger)arg0 ;
-(void)setWallpaperForLocations:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)userDidTapOnCancelButton:(id)arg0 ;
-(void)userDidTapOnIrisButton:(id)arg0 ;
-(void)userDidTapOnParallaxButton:(id)arg0 ;
-(void)userDidTapOnSetButton:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif