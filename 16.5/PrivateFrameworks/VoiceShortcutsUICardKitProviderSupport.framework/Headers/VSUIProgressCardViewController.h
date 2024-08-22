// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSUIPROGRESSCARDVIEWCONTROLLER_H
#define VSUIPROGRESSCARDVIEWCONTROLLER_H

@class CRKCardViewController, NSProgress, NSLayoutConstraint, NSString, UIView, UIActivityIndicatorView, SUICProgressIndicatorViewController, SUICProgressStateMachine;
@protocol SUICProgressStateMachineObserving, SUICProgressIndicatorViewControllerDataSource, VSUIActionStatusViewDelegate;


#import "VSUIActionStatusView.h"

@interface VSUIProgressCardViewController : CRKCardViewController <SUICProgressStateMachineObserving, SUICProgressIndicatorViewControllerDataSource, VSUIActionStatusViewDelegate>

 {
    NSProgress *_progress;
    BOOL _animatesStateTransitions;
    BOOL _hasAsynchronousCard;
    NSLayoutConstraint *_statusViewSuccessHeightConstraint;
    NSLayoutConstraint *_statusViewFailureHeightConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_hairlineView, setter=_setHairlineView:) UIView *hairlineView; // ivar: _hairlineView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_loadingIndicatorView, setter=_setLoadingIndicatorView:) UIActivityIndicatorView *loadingIndicatorView; // ivar: _loadingIndicatorView
@property (readonly) NSProgress *progress;
@property (retain, nonatomic, getter=_progressIndicatorViewController, setter=_setProgressIndicatorViewController:) SUICProgressIndicatorViewController *progressIndicatorViewController; // ivar: _progressIndicatorViewController
@property (retain, nonatomic, getter=_progressStateMachine, setter=_setProgressStateMachine:) SUICProgressStateMachine *progressStateMachine; // ivar: _progressStateMachine
@property (retain, nonatomic, getter=_statusView, setter=_setStatusView:) VSUIActionStatusView *statusView; // ivar: _statusView
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAnimateTransitionToState:(NSUInteger)arg0 fromState:(NSUInteger)arg1 forProgressIndicatorViewController:(id)arg2 ;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(id)_initWithCard:(id)arg0 delegate:(id)arg1 loadProvidersImmediately:(BOOL)arg2 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_setUpHelpers;
-(void)_setUpViews;
-(void)_updateDelegateOnBoundsDidChange;
-(void)actionStatusView:(id)arg0 didAddViewFromProgressViewController:(id)arg1 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg0 withAppearanceFeedback:(id)arg1 ;
-(void)handleCardCommand:(id)arg0 reply:(id)arg1 ;
-(void)progressStateMachine:(id)arg0 didTransitionToState:(NSUInteger)arg1 fromState:(NSUInteger)arg2 forEvent:(NSUInteger)arg3 ;
-(void)progressStateMachine:(id)arg0 ignoredEvent:(NSUInteger)arg1 ;


@end


#endif