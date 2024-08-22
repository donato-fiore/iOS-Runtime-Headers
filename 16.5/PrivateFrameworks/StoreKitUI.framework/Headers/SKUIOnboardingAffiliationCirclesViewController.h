// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIONBOARDINGAFFILIATIONCIRCLESVIEWCONTROLLER_H
#define SKUIONBOARDINGAFFILIATIONCIRCLESVIEWCONTROLLER_H

@class UIViewController, NSMapTable, NSArray, NSString, UIView;
@protocol SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate, OS_dispatch_source, SKUIOnboardingAffiliationCirclesDelegate;


#import "SKUIPhysicalCirclesView.h"
#import "SKUIOnboardingInstructionsView.h"
#import "SKUIClientContext.h"

@interface SKUIOnboardingAffiliationCirclesViewController : UIViewController <SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate>

 {
    SKUIPhysicalCirclesView *_circlesView;
    NSObject<OS_dispatch_source> *_deletionTimer;
    BOOL _didPerformFinishAnimation;
    NSMapTable *_images;
    SKUIOnboardingInstructionsView *_instructionsView;
    BOOL _needsReloadOnDidAppear;
}


@property (copy, nonatomic) NSArray *affiliationItems; // ivar: _affiliationItems
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIOnboardingAffiliationCirclesDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIOnboardingInstructionsView *instructionsView;
@property (readonly, nonatomic) CGFloat maximumCircleDiameter;
@property (readonly) Class superclass;


-(CGFloat)_circleImageAlphaForAffinityCount:(NSInteger)arg0 ;
-(CGFloat)_topLayoutMargin;
-(NSInteger)_titlePositionForAffinityCount:(NSInteger)arg0 ;
-(NSInteger)numberOfCirclesInCircleView:(id)arg0 ;
-(id)circlesView:(id)arg0 circleForIndex:(NSInteger)arg1 ;
-(struct CGSize )_circleSizeForAffinityCount:(NSInteger)arg0 ;
-(void)_cancelDeletionTimer;
-(void)_completeDeletionForCircleAtIndex:(NSInteger)arg0 ;
-(void)_reloadRepellors;
-(void)_sendAffilationItemsDidChange;
-(void)addAffiliationItems:(id)arg0 ;
-(void)circleView:(id)arg0 didBeginLongPressForCircleAtIndex:(NSInteger)arg1 ;
-(void)circleView:(id)arg0 didEndLongPressForCircleAtIndex:(NSInteger)arg1 ;
-(void)circleView:(id)arg0 didTapCircleAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)performFinishAnimationWithCompletionBlock:(id)arg0 ;
-(void)removeAffiliationItemsInIndexSet:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)resetWithAffiliationItems:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)setImage:(id)arg0 forAffiliationItem:(id)arg1 ;
-(void)setUserAffinityCount:(NSInteger)arg0 forAffiliationItemAtIndex:(NSInteger)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif