// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISLIDESHOWITEMVIEWCONTROLLER_H
#define SKUISLIDESHOWITEMVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, UIImage;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, SKUISlideshowItemViewControllerDelegate;


#import "SKUIClientContext.h"
#import "SKUISlideshowImageScrollView.h"

@interface SKUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate>

 {
    UIView *_loadingView;
    BOOL _zoomingGestureThresholdBroken;
    CGPoint _lastContentOffset;
    CGFloat _lastZoomScale;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUISlideshowItemViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUISlideshowImageScrollView *imageScrollView; // ivar: _imageScrollView
@property (nonatomic) NSInteger indexInCollection; // ivar: _indexInCollection
@property (retain, nonatomic) UIImage *itemImage;
@property (readonly) Class superclass;


-(BOOL)_gestureRecognizer:(id)arg0 canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg0 canPreventGestureRecognizer:(id)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_newLoadingView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)_pinchGestureAction:(id)arg0 ;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif