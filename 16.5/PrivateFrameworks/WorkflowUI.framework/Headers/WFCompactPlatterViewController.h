// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMPACTPLATTERVIEWCONTROLLER_H
#define WFCOMPACTPLATTERVIEWCONTROLLER_H

@class UIViewController, WFWorkflowRunningContext, NSString, UIPanGestureRecognizer, UIScrollView;
@protocol WFCompactPlatterSizingDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WFCompactPlatterPresentation, WFBannerPresentable, WFCompactAppearanceProvider, WFCompactPlatterContentContainer, BNPresentableContext;


#import "WFCompactPlatterView.h"
#import "WFCompactPlatterTransitioningDelegate.h"

@interface WFCompactPlatterViewController : UIViewController <WFCompactPlatterSizingDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WFCompactPlatterPresentation, WFBannerPresentable>



@property (retain, nonatomic) NSObject<WFCompactAppearanceProvider> *appearanceProvider; // ivar: _appearanceProvider
@property (retain, nonatomic) WFWorkflowRunningContext *associatedRunningContext; // ivar: _associatedRunningContext
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (nonatomic) CGRect gestureOriginFrame; // ivar: _gestureOriginFrame
@property (nonatomic) CGPoint gestureTranslation; // ivar: _gestureTranslation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInteractingWithPlatter;
@property (nonatomic) CGSize minimumPlatterSize; // ivar: _minimumPlatterSize
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (weak, nonatomic) NSObject<WFCompactPlatterContentContainer> *platterContentContainer; // ivar: _platterContentContainer
@property (nonatomic) BOOL platterHeightAnimationsDisabled; // ivar: _platterHeightAnimationsDisabled
@property (readonly, weak, nonatomic) WFCompactPlatterView *platterView; // ivar: _platterView
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext; // ivar: _presentableContext
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic) BOOL providesHostedContent;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) WFCompactPlatterTransitioningDelegate *wf_transitioningDelegate; // ivar: _wf_transitioningDelegate


-(BOOL)_canShowWhileLocked;
-(BOOL)allowsInteractiveDismissal;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 withMaximumVisibleHeight:(CGFloat)arg1 ;
-(CGFloat)maximumExpectedVisibleContentHeight;
-(CGFloat)platterHeightForWidth:(CGFloat)arg0 withMaximumHeight:(CGFloat)arg1 ;
-(id)init;
-(struct UIEdgeInsets )bannerContentOutsets;
// -(void)animateInteractive:(BOOL)arg0 animationBlock:(id)arg1 completion:(unk)arg2  ;
-(void)handlePan:(id)arg0 ;
-(void)invalidateContentSize;
-(void)invalidatePlatterSize;
-(void)loadView;
-(void)platterInteractionDidBegin;
-(void)platterInteractionDidFinish;
-(void)platterInteractionRequestedDismissal;
-(void)platterViewDidInvalidateSize:(id)arg0 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setTransitioningDelegate:(id)arg0 ;
-(void)systemDismissedBanner;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)updateContentSizeAndPlatterPosition;
-(void)updatePlatterPosition;
-(void)updateScrollViewSeparators;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif