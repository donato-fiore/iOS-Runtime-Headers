// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHPRESENTATIONASSISTANT_H
#define _UISEARCHPRESENTATIONASSISTANT_H

@class UIPresentationController<_UISearchControllerPresenting>, NSString;
@protocol UIDimmingViewDelegate, UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>

#import "UIPresentationController.h"
#import "UIView.h"
#import "UIDimmingView.h"

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate>

 {
    UIPresentationController *_searchPresentationController;
    UIView *_searchBarContainerView;
    UIDimmingView *_dimmingView;
    BOOL _isFormSheetPresentation;
}


@property (nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController; // ivar: _adaptivePresentationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL presentationWasAnimated; // ivar: _presentationWasAnimated
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitioningToSizeCoordinator; // ivar: _transitioningToSizeCoordinator


-(BOOL)_currentTransitionIsRotating;
-(BOOL)_statusBarPreferredHidden;
-(BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)presentationIsPopoverToOverFullScreenAdaptation;
-(BOOL)searchBarToBecomeTopAttached;
-(BOOL)searchBarWillResizeForScopeBar;
-(BOOL)shouldAccountForStatusBar;
-(CGFloat)_statusBarHeightChangeDueToRotation;
-(CGFloat)resultsControllerContentOffset;
-(CGFloat)statusBarAdjustment;
-(id)_searchBarContainerSuperview;
-(id)_searchControllerPresenting;
-(id)dimmingView;
-(id)initWithSearchPresentationController:(id)arg0 ;
-(id)locateNavigationController;
-(id)searchBarContainerView;
-(struct CGRect )_containerFrame;
-(struct CGRect )optimalFrameForSearchBar:(id)arg0 ;
-(struct CGSize )updateSearchBarContainerFrame;
-(void)dealloc;
-(void)dimmingViewWasTapped:(id)arg0 ;
-(void)ensureAppropriatelySizedSearchBar:(id)arg0 ;
-(void)removeContainerViewFromSuperview;


@end


#endif