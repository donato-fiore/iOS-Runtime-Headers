// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREVIEWINAPPRATINGPRESENTATIONCONTROLLER_H
#define SKUIREVIEWINAPPRATINGPRESENTATIONCONTROLLER_H

@class UIPresentationController, NSString, UIView;
@protocol UIAdaptivePresentationControllerDelegate;



@interface SKUIReviewInAppRatingPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate>



@property (nonatomic) BOOL constraintsPrepared; // ivar: _constraintsPrepared
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRemovePresentersView;
-(NSInteger)adaptivePresentationStyle;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(struct CGRect )_frameForTransitionViewInPresentationSuperview:(id)arg0 ;
-(void)_prepareConstraintsIfNecessary;
-(void)_prepareDimmingViewIfNecessary;
-(void)containerViewDidLayoutSubviews;
-(void)containerViewWillLayoutSubviews;
-(void)presentationTransitionWillBegin;


@end


#endif