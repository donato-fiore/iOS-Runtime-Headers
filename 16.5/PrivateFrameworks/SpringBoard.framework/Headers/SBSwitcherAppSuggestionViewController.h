// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERAPPSUGGESTIONVIEWCONTROLLER_H
#define SBSWITCHERAPPSUGGESTIONVIEWCONTROLLER_H

@class UIViewController, UITapGestureRecognizer, UILongPressGestureRecognizer, NSMutableSet;
@protocol OS_dispatch_queue, SBSwitcherAppSuggestionViewControllerDelegate;


#import "SBSwitcherAppSuggestionBannerView.h"
#import "SBBestAppSuggestion.h"

@interface SBSwitcherAppSuggestionViewController : UIViewController {
    SBSwitcherAppSuggestionBannerView *_bannerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _presentingOrDismissingBanner;
    NSObject<OS_dispatch_queue> *_setSuggestionQueue;
    NSMutableSet *_pauseSuggestionUpdateReasons;
}


@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // ivar: _bestAppSuggestion
@property (weak, nonatomic) NSObject<SBSwitcherAppSuggestionViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showSuggestions; // ivar: _showSuggestions
@property (nonatomic, getter=_isSuggestionQueueSuspended, setter=_setSuggestionQueueSuspended:) BOOL suggestionQueueSuspended; // ivar: _suggestionQueueSuspended


-(BOOL)_hasSuggestionBannerView;
-(NSUInteger)_bannerStyle;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )_idleOnscreenRectForBottomBanner;
-(struct CGRect )_offscreenRectForBottomBanner;
-(void)_activateBestAppSuggestion;
-(void)_activateCurrentSuggestion;
-(void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(id)arg0 ;
-(void)_evaluateSuggestionQueueSuspension;
-(void)_handleBannerTap:(id)arg0 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg0 completion:(id)arg1 ;
-(void)_updateBottomBannerWithCompletion:(id)arg0 ;
-(void)beginPausingSuggestionUpdatesForReason:(id)arg0 ;
-(void)dealloc;
-(void)endPausingSuggestionUpdatesForReason:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif