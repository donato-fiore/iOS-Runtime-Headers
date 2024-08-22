// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCCARPLAYBANNERPRESENTABLEVIEWCONTROLLER_H
#define NCCARPLAYBANNERPRESENTABLEVIEWCONTROLLER_H

@class UIViewController, NSHashTable, UITapGestureRecognizer, NSString, NCNotificationRequest;
@protocol NCCarPlayBannerContentViewDelegate, BNPresentable, BNPresentableObservable, NCCarPlayBannerPresentableViewControllerDelegate, BNPresentableContext;


#import "NCCarPlayBannerContentView.h"

@interface NCCarPlayBannerPresentableViewController : UIViewController <NCCarPlayBannerContentViewDelegate, BNPresentable, BNPresentableObservable>

 {
    NCCarPlayBannerContentView *_bannerContentView;
    NSHashTable *_observers;
    UITapGestureRecognizer *_contentSelectPressGesture;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCCarPlayBannerPresentableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (nonatomic) BOOL fillsContainer; // ivar: _fillsContainer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)bannerContentViewShouldShowOKButton:(id)arg0 ;
-(BOOL)bn_shouldAnimateViewTransitionToSize:(struct CGSize )arg0 ;
-(id)_platterView;
-(id)initWithNotificationRequest:(id)arg0 ;
-(id)presentableDescription;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )bannerContentOutsets;
-(void)_handleBackGesture:(id)arg0 ;
-(void)_handleSwipeGesture:(id)arg0 ;
-(void)_handleTapOnContent:(id)arg0 ;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_wheelChangedWithEvent:(id)arg0 ;
-(void)addPresentableObserver:(id)arg0 ;
-(void)invalidateDisplayProperties;
-(void)loadView;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)removePresentableObserver:(id)arg0 ;
-(void)updateRequestToInstance:(id)arg0 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif