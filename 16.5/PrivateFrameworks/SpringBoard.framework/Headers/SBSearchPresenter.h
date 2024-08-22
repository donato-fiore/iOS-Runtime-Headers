// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSEARCHPRESENTER_H
#define SBSEARCHPRESENTER_H

@class NSString, NSArray, NSHashTable, SBHHomePullToSearchSettings, SBFFluidBehaviorSettings, UIScrollView;
@protocol PTSettingsKeyObserver, SBHSearchPresenting, SBSearchPresenterDelegate;

#import <Foundation/Foundation.h>


@interface SBSearchPresenter : NSObject <PTSettingsKeyObserver, SBHSearchPresenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *interactionCompletions; // ivar: _interactionCompletions
@property (nonatomic) SBHSearchInteractivePresentationMetrics interactivePresentationMetrics; // ivar: _interactivePresentationMetrics
@property (readonly, copy, nonatomic) NSHashTable *observers; // ivar: _observers
@property (copy, nonatomic) NSArray *presentables; // ivar: _presentables
@property (nonatomic) CGFloat presentationOffset; // ivar: _presentationOffset
@property (nonatomic) CGFloat presentationProgress; // ivar: _presentationProgress
@property (nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (retain, nonatomic) SBHHomePullToSearchSettings *pullToSearchSettings; // ivar: _pullToSearchSettings
@property (nonatomic) BOOL scrollViewBeganScrollingFromTop; // ivar: _scrollViewBeganScrollingFromTop
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings; // ivar: _searchAnimationSettings
@property (weak, nonatomic) NSObject<SBSearchPresenterDelegate> *searchPresenterDelegate; // ivar: _searchPresenterDelegate
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topOffset; // ivar: _topOffset
@property (retain, nonatomic) UIScrollView *trackingScrollView; // ivar: _trackingScrollView


-(BOOL)_canPresent;
-(CGFloat)_rubberbandingOffsetForContentOffset:(struct CGPoint )arg0 ;
-(CGFloat)_searchPresentationProgressForOffset:(CGFloat)arg0 ;
-(id)_noteWillBeginModifyingPresentationProgressForState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(id)initWithSettings:(id)arg0 identifier:(id)arg1 ;
-(void)_didDismissSearch;
-(void)_didPresentSearch;
-(void)_sendDidDismissSearchToDelegateAndObservers;
-(void)_sendDidDismissSearchToObserver:(id)arg0 ;
-(void)_sendDidPresentSearchToDelegateAndObservers;
-(void)_sendDidPresentSearchToObserver:(id)arg0 ;
-(void)_sendWillDismissSearch:(BOOL)arg0 toObserver:(id)arg1 ;
-(void)_sendWillDismissSearchToDelegateAndObservers:(BOOL)arg0 ;
-(void)_sendWillPresentSearch:(BOOL)arg0 toObserver:(id)arg1 ;
-(void)_sendWillPresentSearchToDelegateAndObservers:(BOOL)arg0 ;
-(void)_setUpInteractivePresentationMetrics;
-(void)_setUpSearchAnimationSettings;
-(void)_updatePresentables:(id)arg0 withMode:(NSInteger)arg1 ;
-(void)_updatePresentables:(id)arg0 withMode:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)_updatePresentablesWithMode:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)_willDismissSearchAnimated:(BOOL)arg0 ;
-(void)_willPresentSearchAnimated:(BOOL)arg0 ;
-(void)addSearchPresenterObserver:(id)arg0 ;
-(void)dismissSearchAnimated:(BOOL)arg0 ;
-(void)layout;
-(void)presentSearchAnimated:(BOOL)arg0 ;
-(void)removeSearchPresenterObserver:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif