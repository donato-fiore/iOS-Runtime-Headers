// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKDATASCANNERVIEWCONTROLLER_H
#define VKDATASCANNERVIEWCONTROLLER_H

@class UIViewController, UIView, NSMutableDictionary, NSTimer, UIPinchGestureRecognizer, UITapGestureRecognizer, NSMutableArray, NSString;
@protocol VKAVCaptureFrameProviderDelegate, VKZoomable, VKDataScannerViewControllerDelegate;


#import "VKAVCaptureFrameProvider.h"
#import "VKHomographyFrameProcessor.h"
#import "VKTextFrameProcessor.h"
#import "VKBarcodeFrameProcessor.h"
#import "VKKeyboardCameraGuidanceView.h"
#import "VKKeyboardCameraReticleView.h"
#import "VKRecognizedItem.h"
#import "VKDataScannerViewControllerConfiguration.h"

@interface VKDataScannerViewController : UIViewController <VKAVCaptureFrameProviderDelegate, VKZoomable>

 {
    VKAVCaptureFrameProvider *_frameProvider;
    VKHomographyFrameProcessor *_homographyFrameProcessor;
    VKTextFrameProcessor *_textFrameProcessor;
    VKBarcodeFrameProcessor *_barcodeFrameProcessor;
    UIView *_overlayContainerView;
    UIView *_hitTestView;
    VKKeyboardCameraGuidanceView *_guidanceView;
    VKKeyboardCameraReticleView *_reticleView;
    NSMutableDictionary *_highlightViewForItemUUID;
    NSTimer *_cantFindItemsTimer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CGFloat _initialPinchZoom;
    BOOL _respondsToItemUpdates;
    BOOL _respondsToDidTapOnItem;
    BOOL _respondsToBeginPinchToZoom;
    BOOL _respondsToEndPinchToZoom;
    NSMutableArray *_recognizedItems;
    VKRecognizedItem *_singleItem;
    NSMutableArray *_capturePhotoCompletions;
}


@property (readonly, nonatomic) VKDataScannerViewControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKDataScannerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScanning;
@property (readonly, nonatomic) CGFloat maxZoomFactor;
@property (readonly, nonatomic) CGFloat minZoomFactor;
@property (readonly, nonatomic) UIView *overlayContainerView;
@property (nonatomic) CGRect regionOfInterest;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat zoomFactor;


+(BOOL)supportsDataScanning;
+(id)supportedTextRecognitionLanguages;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_onPinch:(id)arg0 ;
-(void)_onTap:(id)arg0 ;
-(void)avCaptureFrameProvider:(id)arg0 didCapturePhoto:(id)arg1 error:(id)arg2 ;
-(void)capturePhotoWithCompletion:(id)arg0 ;
-(void)frameProvider:(id)arg0 didChangeSceneStabilityState:(NSUInteger)arg1 ;
-(void)loadView;
-(void)startScanning;
-(void)stopScanning;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif