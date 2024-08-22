// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCVISUALSEARCHRESULTITEMVIEW_H
#define VKCVISUALSEARCHRESULTITEMVIEW_H

@class NSString, CALayer, UIImage, UITapGestureRecognizer, NSData;
@protocol UIPointerInteractionDelegate, CAAnimationDelegate, VKCVisualSearchResultItemViewDelegate;


#import "VKPlatformView.h"
#import "VKCLookupButton.h"
#import "VKCVisualSearchResultItem.h"

@interface VKCVisualSearchResultItemView : VKPlatformView <UIPointerInteractionDelegate, CAAnimationDelegate>



@property (nonatomic) BOOL automaticallyShowVisualSearchResults; // ivar: _automaticallyShowVisualSearchResults
@property (nonatomic) CGSize cachedDotSize; // ivar: _cachedDotSize
@property (nonatomic) CGRect currentImageRectForLayerContents; // ivar: _currentImageRectForLayerContents
@property (retain, nonatomic) NSString *currentRVItemID; // ivar: _currentRVItemID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKCVisualSearchResultItemViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didProcessResult; // ivar: _didProcessResult
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CALayer *iconInLookupButtonLayer; // ivar: _iconInLookupButtonLayer
@property (readonly, nonatomic) UIImage *imageForButton;
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) BOOL isShowingVisualResultsPane; // ivar: _isShowingVisualResultsPane
@property (retain, nonatomic) VKCLookupButton *lookupButton; // ivar: _lookupButton
@property (nonatomic) BOOL observingInteractionDidFinish; // ivar: _observingInteractionDidFinish
@property (retain, nonatomic) CALayer *pinLayer; // ivar: _pinLayer
@property (nonatomic) BOOL pulsing; // ivar: _pulsing
@property (retain, nonatomic) CALayer *pulsingLayer; // ivar: _pulsingLayer
@property (nonatomic) BOOL shouldShowDots; // ivar: _shouldShowDots
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic) UIImage *tintedImageForButton; // ivar: _tintedImageForButton
@property (retain, nonatomic) NSData *userReportPayload; // ivar: _userReportPayload
@property (retain, nonatomic) VKCVisualSearchResultItem *visualSearchResultItem; // ivar: _visualSearchResultItem


-(BOOL)containsVisualSearchItemAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)_screenZoomScale;
-(CGFloat)contentSizeScaleFactor;
-(NSInteger)_pinArrowDirection;
-(id)_defaultSymbolName;
-(id)_queryForProcessingResult;
-(id)_queryString;
-(id)_symbolNameForItem;
-(id)circlePathForPinBubbleWithDirection:(NSInteger)arg0 withRadius:(CGFloat)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithVisualSearchResultItem:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)trianglePathForPinBubbleWithDirection:(NSInteger)arg0 withRadius:(CGFloat)arg1 ;
-(struct CATransform3D )_initialDotAnimationTransform;
-(struct CATransform3D )_pinEndTransform;
-(struct CATransform3D )_transformForButtonScale;
-(struct CGPoint )_offsetForPinBubbleFrameWithDirection:(NSInteger)arg0 pinBubbleBounds:(struct CGRect )arg1 ;
-(struct CGPoint )pointForVisualSearchIcon;
-(struct CGRect )_pinButtonRect;
-(struct CGRect )_rectForViewSpace:(struct CGRect )arg0 ;
-(struct CGRect )boundsFromVisualSearchResult;
-(struct CGRect )rectForIndicatorDot;
-(struct CGSize )_pinSizeForViewScale;
-(void)_animatePin:(BOOL)arg0 ;
-(void)_didDismissVisualResultsPane:(id)arg0 ;
-(void)_updateLayout;
-(void)animateToVisualResultsPane:(BOOL)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)beginAnimatingDotAfterDelay:(CGFloat)arg0 ;
-(void)dealloc;
-(void)deviceOrientationDidChange:(id)arg0 ;
-(void)didDismissViewController;
-(void)didDismissVisualResultsPane;
-(void)didFinishAnimatingDots;
-(void)didTap:(id)arg0 ;
-(void)hideDots;
-(void)layoutSubviews;
-(void)performLookup;
-(void)removePulsing;
-(void)setImageContentsInLayer:(id)arg0 withMaterialLayer:(id)arg1 withRect:(struct CGRect )arg2 ;
-(void)setImageContentsInLayer:(id)arg0 withRect:(struct CGRect )arg1 ;
-(void)showLookupUIPaneForResultItem;
-(void)showPinForTappedDot;
-(void)showVisualResultsPane;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateIndicatorDotForState;
-(void)updatePinLayerFrame;
-(void)updatePulsingLayer;


@end


#endif