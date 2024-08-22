// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS25INTERACTIVEVIEWCONTROLLER_H
#define _TTC11WEATHERMAPS25INTERACTIVEVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC11WeatherMaps25InteractiveViewController : UIViewController {
    ? delegate;
    ? controlsVisiblity;
    ? $__lazy_storage_$_mapView;
    ? configuration;
    ? selectedLocationZoomLevel;
    ? isUserInteractionEnabled;
    ? annotationManager;
    ? cameraFocusFactory;
    ? geocodeManager;
    ? interaction;
    ? locationMetadataManager;
    ? mapLocationAccessibilityModelManager;
    ? overlayManager;
    ? overlayProgressReporter;
    ? visibleMapRect;
    ? backgroundEffectView;
    ? overlayProgressBar;
    ? activeOverlay;
    ? annotatedLocations;
    ? presentingOverlayKind;
    ? selectedLocation;
    ? doNotForwardSelectedAnnotationToDelegate;
    ? debugLabel;
    ? previousParent;
    ? lastHoverLocation;
    ? controlsView;
    ? controlsAdded;
    ? scrubberStore;
    ? scrubberObserver;
    ? scrubberOverlayViewController;
    ? progressBarHeight;
    ? verticalSpacingAttributionToScrubber;
    ? $__lazy_storage_$_backgroundEffectManagerBlur;
    ? $__lazy_storage_$_backgroundEffectManagerUltraThin;
    ? $__lazy_storage_$_showDebugConsole;
    ? $__lazy_storage_$_backgroundEffectManagerVibrancyFill;
    ? contentStatusBannerViewController;
    ? pendingBannerReplacementBlock;
    ? backdropLayerBlur;
    ? backdropLayerUltraThin;
    ? wasPlayingBeforeBackgrounded;
    ? wasPlayingBeforeSonification;
    ? refreshTimer;
    ? overlayAccessibilityDataManager;
    ? overlaySonifier;
    ? accessibilityFrameDateFormatter;
    ? animationDelegates;
}


@property (nonatomic, readonly) NSArray *keyCommands;


-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didHoverMap:(id)arg0 ;
-(void)didMoveToBackground;
-(void)didMoveToForeground;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didTapMap:(id)arg0 ;
-(void)handleVoiceOverStatusDidChangeWithNotification:(id)arg0 ;
-(void)mapGestureDidChange;
-(void)selectAirQualityOverlay;
-(void)selectPrecipitationOverlay;
-(void)selectTemperatureOverlay;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)zoomIn;
-(void)zoomOut;


@end


#endif